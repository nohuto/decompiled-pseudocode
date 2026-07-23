/*
 * XREFs of EtwpCopyJobGuidSafe @ 0x1408B9270
 * Callers:
 *     EtwTraceJobServerSiloMonitorCallback @ 0x14018DB40 (EtwTraceJobServerSiloMonitorCallback.c)
 *     EtwTraceJob @ 0x1408B875C (EtwTraceJob.c)
 *     EtwTraceJobAssignProcess @ 0x1408B8828 (EtwTraceJobAssignProcess.c)
 *     EtwTraceJobSendNotification @ 0x1408B896C (EtwTraceJobSendNotification.c)
 *     EtwTraceJobSetQuery @ 0x1408B8AB8 (EtwTraceJobSetQuery.c)
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
