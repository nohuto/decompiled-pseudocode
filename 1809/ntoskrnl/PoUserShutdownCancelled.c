/*
 * XREFs of PoUserShutdownCancelled @ 0x1406E2240
 * Callers:
 *     PopPowerInformationInternal @ 0x14058DF30 (PopPowerInformationInternal.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x1400B9C20 (PsIsCurrentThreadInServerSilo.c)
 *     PopQueueWorkItem @ 0x140138CC8 (PopQueueWorkItem.c)
 *     PopUserShutdownCancelled @ 0x1406E2270 (PopUserShutdownCancelled.c)
 */

char PoUserShutdownCancelled()
{
  char result; // al
  __int64 v1; // rcx

  result = PsIsCurrentThreadInServerSilo();
  if ( !result )
  {
    PopQueueWorkItem((__int64)&PopClearUserShutdownMarkerWorkItem, DelayedWorkQueue);
    LOBYTE(v1) = 1;
    return PopUserShutdownCancelled(v1);
  }
  return result;
}
