/*
 * XREFs of KdpSysReadMsr @ 0x14028CEDC
 * Callers:
 *     KdSystemDebugControl @ 0x1408422B0 (KdSystemDebugControl.c)
 *     KdpSendWaitContinue @ 0x140917100 (KdpSendWaitContinue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KdpSysReadMsr(unsigned int a1, _QWORD *a2)
{
  *a2 = __readmsr(a1);
  return 0LL;
}
