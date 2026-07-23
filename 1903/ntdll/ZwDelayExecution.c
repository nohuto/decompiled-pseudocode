/*
 * XREFs of ZwDelayExecution @ 0x18009CD60
 * Callers:
 *     sub_180012D4C @ 0x180012D4C (sub_180012D4C.c)
 *     sub_18001A790 @ 0x18001A790 (sub_18001A790.c)
 *     sub_180022CE8 @ 0x180022CE8 (sub_180022CE8.c)
 *     sub_18006D480 @ 0x18006D480 (sub_18006D480.c)
 *     sub_180071E6C @ 0x180071E6C (sub_180071E6C.c)
 *     sub_1800874F8 @ 0x1800874F8 (sub_1800874F8.c)
 *     sub_1800D0BEC @ 0x1800D0BEC (sub_1800D0BEC.c)
 *     sub_1800DCC38 @ 0x1800DCC38 (sub_1800DCC38.c)
 *     sub_1800EF084 @ 0x1800EF084 (sub_1800EF084.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwDelayExecution(BOOLEAN Alertable, PLARGE_INTEGER DelayInterval)
{
  NTSTATUS result; // eax

  result = 52;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
