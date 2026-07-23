/*
 * XREFs of ZwTraceControl @ 0x18009FE70
 * Callers:
 *     sub_180001CE0 @ 0x180001CE0 (sub_180001CE0.c)
 *     EtwReplyNotification @ 0x180002310 (EtwReplyNotification.c)
 *     sub_180007E90 @ 0x180007E90 (sub_180007E90.c)
 *     sub_18000A434 @ 0x18000A434 (sub_18000A434.c)
 *     sub_18000A68C @ 0x18000A68C (sub_18000A68C.c)
 *     EtwEventWriteEndScenario @ 0x1800519D0 (EtwEventWriteEndScenario.c)
 *     EtwSendNotification @ 0x180053950 (EtwSendNotification.c)
 *     EtwEventActivityIdControl @ 0x180066190 (EtwEventActivityIdControl.c)
 *     sub_18007CD00 @ 0x18007CD00 (sub_18007CD00.c)
 *     sub_1800801D0 @ 0x1800801D0 (sub_1800801D0.c)
 *     sub_180080290 @ 0x180080290 (sub_180080290.c)
 *     EtwEventWriteStartScenario @ 0x18008B6A0 (EtwEventWriteStartScenario.c)
 *     EtwRegisterSecurityProvider @ 0x18008BA20 (EtwRegisterSecurityProvider.c)
 *     sub_18010CD40 @ 0x18010CD40 (sub_18010CD40.c)
 *     sub_18010D214 @ 0x18010D214 (sub_18010D214.c)
 *     sub_18010D834 @ 0x18010D834 (sub_18010D834.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwTraceControl(
        ETWTRACECONTROLCODE TraceControlCode,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax

  result = 445;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
