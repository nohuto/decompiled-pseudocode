/*
 * XREFs of HvlpSetLogicalProcessorProperty @ 0x140286C4C
 * Callers:
 *     HvlStartBootLogicalProcessors @ 0x140185480 (HvlStartBootLogicalProcessors.c)
 *     HvlConfigurePcc @ 0x14028AA10 (HvlConfigurePcc.c)
 *     HvlConfigurePerfStateCap @ 0x14028AA8C (HvlConfigurePerfStateCap.c)
 *     HvlConfigurePerfStates @ 0x14028AAEC (HvlConfigurePerfStates.c)
 *     HvlConfigureThrottleStates @ 0x14028AB4C (HvlConfigureThrottleStates.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x14013E580 (HvcallpNoHypervisorPresent.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     HvlpAcquireHypercallPage @ 0x14028582C (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x140286458 (HvlpReleaseHypercallPage.c)
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
