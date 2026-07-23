/*
 * XREFs of ZwCreateEvent @ 0x18009CFE0
 * Callers:
 *     sub_18000471C @ 0x18000471C (sub_18000471C.c)
 *     RtlWaitForWnfMetaNotification @ 0x180006140 (RtlWaitForWnfMetaNotification.c)
 *     sub_180007850 @ 0x180007850 (sub_180007850.c)
 *     sub_180071E6C @ 0x180071E6C (sub_180071E6C.c)
 *     sub_18007BEB4 @ 0x18007BEB4 (sub_18007BEB4.c)
 *     sub_18007CD00 @ 0x18007CD00 (sub_18007CD00.c)
 *     sub_18007D01C @ 0x18007D01C (sub_18007D01C.c)
 *     sub_1800CF490 @ 0x1800CF490 (sub_1800CF490.c)
 *     RtlCreateProcessReflection @ 0x1800D5E70 (RtlCreateProcessReflection.c)
 *     sub_1800D6400 @ 0x1800D6400 (sub_1800D6400.c)
 *     sub_1800DC88C @ 0x1800DC88C (sub_1800DC88C.c)
 *     RtlCreateUmsCompletionList @ 0x1800F3340 (RtlCreateUmsCompletionList.c)
 *     sub_1800FBBCC @ 0x1800FBBCC (sub_1800FBBCC.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateEvent(
        PHANDLE EventHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        EVENT_TYPE EventType,
        BOOLEAN InitialState)
{
  NTSTATUS result; // eax

  result = 72;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
