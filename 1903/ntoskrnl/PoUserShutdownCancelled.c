/*
 * XREFs of PoUserShutdownCancelled @ 0x140729920
 * Callers:
 *     PopPowerInformationInternal @ 0x14067E674 (PopPowerInformationInternal.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140002880 (PsIsCurrentThreadInServerSilo.c)
 *     PopQueueWorkItem @ 0x140177880 (PopQueueWorkItem.c)
 *     PopUserShutdownCancelled @ 0x140729950 (PopUserShutdownCancelled.c)
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
