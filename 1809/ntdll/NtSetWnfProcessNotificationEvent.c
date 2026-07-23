/*
 * XREFs of NtSetWnfProcessNotificationEvent @ 0x1800A3870
 * Callers:
 *     RtlpWnfRegisterTpNotification @ 0x180080E74 (RtlpWnfRegisterTpNotification.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtSetWnfProcessNotificationEvent(HANDLE NotificationEvent)
{
  NTSTATUS result; // eax

  result = 428;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
