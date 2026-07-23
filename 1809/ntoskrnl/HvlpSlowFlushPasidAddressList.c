/*
 * XREFs of HvlpSlowFlushPasidAddressList @ 0x1402767D0
 * Callers:
 *     HvlSvmFlushPasid @ 0x140275EB0 (HvlSvmFlushPasid.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x14013E7A0 (HvcallpNoHypervisorPresent.c)
 *     HvlpAcquireHypercallPage @ 0x140271A54 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x140272574 (HvlpReleaseHypercallPage.c)
 *     HvlpFlushPasidAddressSpace @ 0x1402766D0 (HvlpFlushPasidAddressSpace.c)
 *     HvlpCopyFlushVaList @ 0x1402798E8 (HvlpCopyFlushVaList.c)
 */

PSLIST_ENTRY __fastcall HvlpSlowFlushPasidAddressList(int a1, int a2, unsigned int a3, __int64 a4)
{
  _QWORD *v8; // rax
  PHYSICAL_ADDRESS v10[3]; // [rsp+28h] [rbp-30h] BYREF

  v8 = HvlpAcquireHypercallPage(v10, 5, 0LL, 0LL);
  if ( !v8 )
    return (PSLIST_ENTRY)HvlpFlushPasidAddressSpace(a1, a2);
  *v8 = 0LL;
  v8[1] = 0LL;
  *((_DWORD *)v8 + 1) = a1;
  *(_DWORD *)v8 = a2;
  HvlpCopyFlushVaList(a3, a4, 0LL, v8 + 2);
  HvcallCodeVa();
  return HvlpReleaseHypercallPage((unsigned int *)v10);
}
