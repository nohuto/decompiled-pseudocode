/*
 * XREFs of HvlpSetupSchedulerAssist @ 0x140286E10
 * Callers:
 *     HvlEnlightenProcessor @ 0x140181EF4 (HvlEnlightenProcessor.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x140123FF0 (MmGetPhysicalAddress.c)
 *     HvcallpNoHypervisorPresent @ 0x14013E580 (HvcallpNoHypervisorPresent.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     HvlpAcquireHypercallPage @ 0x14028582C (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x140286458 (HvlpReleaseHypercallPage.c)
 */

PSLIST_ENTRY __fastcall HvlpSetupSchedulerAssist(__int64 a1)
{
  _DWORD *v1; // rdi
  PSLIST_ENTRY result; // rax
  PHYSICAL_ADDRESS *v3; // rbx
  PHYSICAL_ADDRESS v4[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = *(_DWORD **)(a1 + 25016);
  result = (PSLIST_ENTRY)memset(v4, 0, 0x20uLL);
  if ( v1 )
  {
    *v1 = 2056;
    v1[1] = 0;
    v3 = (PHYSICAL_ADDRESS *)HvlpAcquireHypercallPage(v4, 1, 0LL, 16LL);
    v3->LowPart = 3;
    v3->HighPart = 1;
    v3[1] = MmGetPhysicalAddress(v1);
    HvcallCodeVa();
    return HvlpReleaseHypercallPage((unsigned int *)v4);
  }
  return result;
}
