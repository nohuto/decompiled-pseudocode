/*
 * XREFs of HvlpSlowFlushPasidAddressList @ 0x14028A790
 * Callers:
 *     HvlSvmFlushPasid @ 0x140289E20 (HvlSvmFlushPasid.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x14013E580 (HvcallpNoHypervisorPresent.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     HvlpAcquireHypercallPage @ 0x14028582C (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x140286458 (HvlpReleaseHypercallPage.c)
 *     HvlpFlushPasidAddressSpace @ 0x14028A688 (HvlpFlushPasidAddressSpace.c)
 *     HvlpCopyFlushVaList @ 0x14028DA48 (HvlpCopyFlushVaList.c)
 */

PSLIST_ENTRY __fastcall HvlpSlowFlushPasidAddressList(int a1, int a2, unsigned int a3, __int64 a4)
{
  _QWORD *v8; // rax
  PHYSICAL_ADDRESS v10[6]; // [rsp+28h] [rbp-30h] BYREF

  memset(v10, 0, 0x20uLL);
  v8 = HvlpAcquireHypercallPage(v10, 5, 0LL, 0LL);
  if ( !v8 )
    return (PSLIST_ENTRY)HvlpFlushPasidAddressSpace(a1, a2);
  v8[1] = 0LL;
  *((_DWORD *)v8 + 1) = a1;
  *(_DWORD *)v8 = a2;
  HvlpCopyFlushVaList(a3, a4, 0LL, v8 + 2);
  HvcallCodeVa();
  return HvlpReleaseHypercallPage((unsigned int *)v10);
}
