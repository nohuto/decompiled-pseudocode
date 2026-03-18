/*
 * XREFs of EtwpCopyJobGuidSafe @ 0x1408F4AB4
 * Callers:
 *     EtwTraceJobServerSiloMonitorCallback @ 0x140197F0C (EtwTraceJobServerSiloMonitorCallback.c)
 *     EtwTraceJob @ 0x1408F3E40 (EtwTraceJob.c)
 *     EtwTraceJobAssignProcess @ 0x1408F3F20 (EtwTraceJobAssignProcess.c)
 *     EtwTraceJobSendNotification @ 0x1408F4074 (EtwTraceJobSendNotification.c)
 *     EtwTraceJobSetQuery @ 0x1408F41CC (EtwTraceJobSetQuery.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpCopyJobGuidSafe(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( a2 )
  {
    *(_OWORD *)a1 = *(_OWORD *)(a2 + 1224);
  }
  else
  {
    result = 0LL;
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  return result;
}
