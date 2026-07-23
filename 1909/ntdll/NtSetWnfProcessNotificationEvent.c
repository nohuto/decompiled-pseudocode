/*
 * XREFs of NtSetWnfProcessNotificationEvent @ 0x1800A0420
 * Callers:
 *     RtlpWnfRegisterTpNotification @ 0x18007C554 (RtlpWnfRegisterTpNotification.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtSetWnfProcessNotificationEvent(HANDLE NotificationEvent)
{
  NTSTATUS result; // eax

  result = 429;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
