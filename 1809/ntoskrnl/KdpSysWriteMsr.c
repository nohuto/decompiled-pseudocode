/*
 * XREFs of KdpSysWriteMsr @ 0x14028CEC8
 * Callers:
 *     KdSystemDebugControl @ 0x1408422D0 (KdSystemDebugControl.c)
 *     KdpSendWaitContinue @ 0x140917100 (KdpSendWaitContinue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KdpSysWriteMsr(unsigned int a1, unsigned __int64 *a2)
{
  __writemsr(a1, *a2);
  return 0LL;
}
