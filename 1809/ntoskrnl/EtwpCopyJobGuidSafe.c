/*
 * XREFs of EtwpCopyJobGuidSafe @ 0x1408B7FB0
 * Callers:
 *     EtwTraceJobServerSiloMonitorCallback @ 0x14018DA00 (EtwTraceJobServerSiloMonitorCallback.c)
 *     EtwTraceJob @ 0x1408B749C (EtwTraceJob.c)
 *     EtwTraceJobAssignProcess @ 0x1408B7568 (EtwTraceJobAssignProcess.c)
 *     EtwTraceJobSendNotification @ 0x1408B76AC (EtwTraceJobSendNotification.c)
 *     EtwTraceJobSetQuery @ 0x1408B77F8 (EtwTraceJobSetQuery.c)
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
