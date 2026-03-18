/*
 * XREFs of PsSetLoadImageNotifyRoutine @ 0x140758D60
 * Callers:
 *     <none>
 * Callees:
 *     PsSetLoadImageNotifyRoutineEx @ 0x140758E40 (PsSetLoadImageNotifyRoutineEx.c)
 */

NTSTATUS __stdcall PsSetLoadImageNotifyRoutine(PLOAD_IMAGE_NOTIFY_ROUTINE NotifyRoutine)
{
  return PsSetLoadImageNotifyRoutineEx(NotifyRoutine, 0LL);
}
