/*
 * XREFs of KdpSysReadMsr @ 0x14028D0CC
 * Callers:
 *     KdSystemDebugControl @ 0x140843510 (KdSystemDebugControl.c)
 *     KdpSendWaitContinue @ 0x140918100 (KdpSendWaitContinue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KdpSysReadMsr(unsigned int a1, _QWORD *a2)
{
  *a2 = __readmsr(a1);
  return 0LL;
}
