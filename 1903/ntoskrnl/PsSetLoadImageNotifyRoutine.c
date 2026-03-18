/*
 * XREFs of PsSetLoadImageNotifyRoutine @ 0x14076A530
 * Callers:
 *     <none>
 * Callees:
 *     PsSetLoadImageNotifyRoutineEx @ 0x14076A610 (PsSetLoadImageNotifyRoutineEx.c)
 */

NTSTATUS __stdcall PsSetLoadImageNotifyRoutine(PLOAD_IMAGE_NOTIFY_ROUTINE NotifyRoutine)
{
  return PsSetLoadImageNotifyRoutineEx(NotifyRoutine, 0LL);
}
