/*
 * XREFs of HvlpSetLogicalProcessorProperty @ 0x140272D48
 * Callers:
 *     HvlpUpdateLpcbIndex @ 0x1401B3DC0 (HvlpUpdateLpcbIndex.c)
 *     HvlConfigurePcc @ 0x14027683C (HvlConfigurePcc.c)
 *     HvlConfigurePerfStateCap @ 0x140276890 (HvlConfigurePerfStateCap.c)
 *     HvlConfigurePerfStates @ 0x1402768C8 (HvlConfigurePerfStates.c)
 *     HvlConfigureThrottleStates @ 0x140276900 (HvlConfigureThrottleStates.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x14013E6A0 (HvcallpNoHypervisorPresent.c)
 *     memmove @ 0x1401D1540 (memmove.c)
 *     HvlpAcquireHypercallPage @ 0x140271864 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x140272384 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlpSetLogicalProcessorProperty(int a1, int a2, const void *a3)
{
  _DWORD *v6; // rax
  unsigned int v7; // ebx
  PHYSICAL_ADDRESS v9[3]; // [rsp+20h] [rbp-28h] BYREF

  v6 = HvlpAcquireHypercallPage(v9, 1, 0LL, 3264LL);
  *v6 = a1;
  v6[1] = a2;
  memmove(v6 + 2, a3, 0xCB8uLL);
  v7 = (unsigned __int16)HvcallCodeVa() != 0 ? 0xC0000001 : 0;
  HvlpReleaseHypercallPage((unsigned int *)v9);
  return v7;
}
