/*
 * XREFs of HvlNotifyAcpiReenabled @ 0x140276C0C
 * Callers:
 *     PopHiberCheckResume @ 0x14056B320 (PopHiberCheckResume.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x14013E6A0 (HvcallpNoHypervisorPresent.c)
 *     HvlpAcquireHypercallPage @ 0x140271864 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x140272384 (HvlpReleaseHypercallPage.c)
 */

__int64 HvlNotifyAcpiReenabled()
{
  unsigned int v0; // ebx
  PHYSICAL_ADDRESS v2[3]; // [rsp+20h] [rbp-28h] BYREF

  *(_DWORD *)HvlpAcquireHypercallPage(v2, 1, 0LL, 8LL) = 3;
  v0 = (unsigned __int16)HvcallCodeVa() != 0 ? 0xC0000001 : 0;
  HvlpReleaseHypercallPage((unsigned int *)v2);
  return v0;
}
