/*
 * XREFs of HvlpSetupSchedulerAssist @ 0x1402730EC
 * Callers:
 *     HvlEnlightenProcessor @ 0x140178780 (HvlEnlightenProcessor.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1401211A0 (MmGetPhysicalAddress.c)
 *     HvcallpNoHypervisorPresent @ 0x14013E7A0 (HvcallpNoHypervisorPresent.c)
 *     HvlpAcquireHypercallPage @ 0x140271A54 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x140272574 (HvlpReleaseHypercallPage.c)
 */

void __fastcall HvlpSetupSchedulerAssist(__int64 a1)
{
  _DWORD *v1; // rdi
  PHYSICAL_ADDRESS *v2; // rbx
  PHYSICAL_ADDRESS v3[3]; // [rsp+20h] [rbp-28h] BYREF

  v1 = *(_DWORD **)(a1 + 25016);
  if ( v1 )
  {
    *v1 = 2056;
    v1[1] = 0;
    v2 = (PHYSICAL_ADDRESS *)HvlpAcquireHypercallPage(v3, 1, 0LL, 16LL);
    v2->LowPart = 3;
    v2->HighPart = 1;
    v2[1] = MmGetPhysicalAddress(v1);
    HvcallCodeVa();
    HvlpReleaseHypercallPage((unsigned int *)v3);
  }
}
