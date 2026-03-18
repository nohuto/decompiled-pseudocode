/*
 * XREFs of KdpSysReadMsr @ 0x1402A2CDC
 * Callers:
 *     KdSystemDebugControl @ 0x14087D3F0 (KdSystemDebugControl.c)
 *     KdpSendWaitContinue @ 0x140955ADC (KdpSendWaitContinue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KdpSysReadMsr(unsigned int a1, _QWORD *a2)
{
  *a2 = __readmsr(a1);
  return 0LL;
}
