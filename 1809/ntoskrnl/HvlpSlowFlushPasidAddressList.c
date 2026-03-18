/*
 * XREFs of HvlpSlowFlushPasidAddressList @ 0x1402764E0
 * Callers:
 *     HvlSvmFlushPasid @ 0x140275BC0 (HvlSvmFlushPasid.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x14013E680 (HvcallpNoHypervisorPresent.c)
 *     HvlpAcquireHypercallPage @ 0x140271764 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x140272284 (HvlpReleaseHypercallPage.c)
 *     HvlpFlushPasidAddressSpace @ 0x1402763E0 (HvlpFlushPasidAddressSpace.c)
 *     HvlpCopyFlushVaList @ 0x1402795F8 (HvlpCopyFlushVaList.c)
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
