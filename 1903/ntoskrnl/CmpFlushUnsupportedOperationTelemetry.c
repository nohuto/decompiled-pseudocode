/*
 * XREFs of CmpFlushUnsupportedOperationTelemetry @ 0x1406E703C
 * Callers:
 *     CmpDoReconcileNextHive @ 0x140661C00 (CmpDoReconcileNextHive.c)
 *     CmShutdownSystem @ 0x1408273C4 (CmShutdownSystem.c)
 * Callees:
 *     CmpSendUnsupportedOperationTelemetryEvent @ 0x14083375C (CmpSendUnsupportedOperationTelemetryEvent.c)
 */

__int64 CmpFlushUnsupportedOperationTelemetry()
{
  int v0; // ebx
  volatile __int32 *v1; // rdi
  __int64 result; // rax

  v0 = 0;
  v1 = (volatile __int32 *)&CmpUnsupportedOperationHits;
  do
  {
    if ( _InterlockedExchange(v1, 0) )
      result = CmpSendUnsupportedOperationTelemetryEvent((unsigned int)v0);
    ++v0;
    ++v1;
  }
  while ( v0 < 28 );
  return result;
}
