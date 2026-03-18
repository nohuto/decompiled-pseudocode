/*
 * XREFs of KdpSysWriteMsr @ 0x1402A3068
 * Callers:
 *     KdSystemDebugControl @ 0x14087DCF0 (KdSystemDebugControl.c)
 *     KdpSendWaitContinue @ 0x140955ADC (KdpSendWaitContinue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KdpSysWriteMsr(unsigned int a1, unsigned __int64 *a2)
{
  __writemsr(a1, *a2);
  return 0LL;
}
