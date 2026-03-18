/*
 * XREFs of HvlpSetLogicalProcessorProperty @ 0x1402869AC
 * Callers:
 *     HvlStartBootLogicalProcessors @ 0x140185A30 (HvlStartBootLogicalProcessors.c)
 *     HvlConfigurePcc @ 0x14028A770 (HvlConfigurePcc.c)
 *     HvlConfigurePerfStateCap @ 0x14028A7EC (HvlConfigurePerfStateCap.c)
 *     HvlConfigurePerfStates @ 0x14028A84C (HvlConfigurePerfStates.c)
 *     HvlConfigureThrottleStates @ 0x14028A8AC (HvlConfigureThrottleStates.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x14013EC10 (HvcallpNoHypervisorPresent.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     HvlpAcquireHypercallPage @ 0x14028558C (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1402861B8 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlpSetLogicalProcessorProperty(int a1, int a2, const void *a3)
{
  _DWORD *v6; // rax
  unsigned int v7; // ebx
  PHYSICAL_ADDRESS v9[5]; // [rsp+20h] [rbp-28h] BYREF

  memset(v9, 0, 0x20uLL);
  v6 = HvlpAcquireHypercallPage(v9, 1, 0LL, 3264LL);
  *v6 = a1;
  v6[1] = a2;
  memmove(v6 + 2, a3, 0xCB8uLL);
  v7 = (unsigned __int16)HvcallCodeVa() != 0 ? 0xC0000001 : 0;
  HvlpReleaseHypercallPage((unsigned int *)v9);
  return v7;
}
