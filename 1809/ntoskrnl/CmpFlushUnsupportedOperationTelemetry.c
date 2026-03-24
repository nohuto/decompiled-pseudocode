/*
 * XREFs of CmpFlushUnsupportedOperationTelemetry @ 0x1406C770C
 * Callers:
 *     CmpDoReconcileNextHive @ 0x1405B0F90 (CmpDoReconcileNextHive.c)
 *     CmShutdownSystem @ 0x1407EC8B4 (CmShutdownSystem.c)
 * Callees:
 *     CmpSendUnsupportedOperationTelemetryEvent @ 0x1407FA3E0 (CmpSendUnsupportedOperationTelemetryEvent.c)
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
  while ( v0 < 27 );
  return result;
}
