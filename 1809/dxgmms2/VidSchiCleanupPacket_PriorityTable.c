/*
 * XREFs of VidSchiCleanupPacket_PriorityTable @ 0x1C00CB3F0
 * Callers:
 *     VidSchiCleanupQueuedCommand @ 0x1C003951C (VidSchiCleanupQueuedCommand.c)
 * Callees:
 *     VidSchiDrainContextFromWorkerThread @ 0x1C002DBC0 (VidSchiDrainContextFromWorkerThread.c)
 *     VidSchiProcessPrimariesTerminationList @ 0x1C002EC2C (VidSchiProcessPrimariesTerminationList.c)
 *     VidSchiSelectContext @ 0x1C002FDD8 (VidSchiSelectContext.c)
 */

struct _VIDSCH_CONTEXT *__fastcall VidSchiCleanupPacket_PriorityTable(KSPIN_LOCK *a1)
{
  struct _VIDSCH_CONTEXT *result; // rax

  VidSchiProcessPrimariesTerminationList((__int64)a1);
  while ( 1 )
  {
    result = VidSchiSelectContext(a1, 0);
    if ( !result )
      break;
    VidSchiDrainContextFromWorkerThread((__int64)result);
  }
  return result;
}
