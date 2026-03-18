/*
 * XREFs of HvlNotifyAcpiReenabled @ 0x14028ABB8
 * Callers:
 *     PopHiberCheckResume @ 0x14059B610 (PopHiberCheckResume.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x14013EC10 (HvcallpNoHypervisorPresent.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     HvlpAcquireHypercallPage @ 0x14028558C (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1402861B8 (HvlpReleaseHypercallPage.c)
 */

__int64 HvlNotifyAcpiReenabled()
{
  unsigned int v0; // ebx
  PHYSICAL_ADDRESS v2[5]; // [rsp+20h] [rbp-28h] BYREF

  memset(v2, 0, 0x20uLL);
  *(_DWORD *)HvlpAcquireHypercallPage(v2, 1, 0LL, 8LL) = 3;
  v0 = (unsigned __int16)HvcallCodeVa() != 0 ? 0xC0000001 : 0;
  HvlpReleaseHypercallPage((unsigned int *)v2);
  return v0;
}
