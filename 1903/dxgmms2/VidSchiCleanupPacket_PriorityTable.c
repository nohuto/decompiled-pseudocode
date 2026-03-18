/*
 * XREFs of VidSchiCleanupPacket_PriorityTable @ 0x1C00CE1F0
 * Callers:
 *     VidSchiCleanupQueuedCommand @ 0x1C0039F6C (VidSchiCleanupQueuedCommand.c)
 * Callees:
 *     VidSchiSelectContext @ 0x1C0008800 (VidSchiSelectContext.c)
 *     VidSchiDrainContextFromWorkerThread @ 0x1C002E430 (VidSchiDrainContextFromWorkerThread.c)
 *     VidSchiProcessPrimariesTerminationList @ 0x1C002F3D8 (VidSchiProcessPrimariesTerminationList.c)
 */

struct _VIDSCH_CONTEXT *__fastcall VidSchiCleanupPacket_PriorityTable(__int64 a1)
{
  __int64 v2; // r8
  int v3; // r9d
  struct _VIDSCH_CONTEXT *result; // rax

  VidSchiProcessPrimariesTerminationList(a1);
  while ( 1 )
  {
    result = VidSchiSelectContext(a1, 0, v2, v3);
    if ( !result )
      break;
    VidSchiDrainContextFromWorkerThread((__int64)result);
  }
  return result;
}
