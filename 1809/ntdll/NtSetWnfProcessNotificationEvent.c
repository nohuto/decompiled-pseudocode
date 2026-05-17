/*
 * XREFs of NtSetWnfProcessNotificationEvent @ 0x1800A3850
 * Callers:
 *     RtlpWnfRegisterTpNotification @ 0x180080E64 (RtlpWnfRegisterTpNotification.c)
 * Callees:
 *     <none>
 */

__int64 NtSetWnfProcessNotificationEvent()
{
  __int64 result; // rax

  result = 428LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
