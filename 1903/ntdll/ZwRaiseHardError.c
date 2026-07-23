/*
 * XREFs of ZwRaiseHardError @ 0x18009F2F0
 * Callers:
 *     sub_18002D3B4 @ 0x18002D3B4 (sub_18002D3B4.c)
 *     sub_18006F388 @ 0x18006F388 (sub_18006F388.c)
 *     sub_180085F24 @ 0x180085F24 (sub_180085F24.c)
 *     sub_180089150 @ 0x180089150 (sub_180089150.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwRaiseHardError(
        NTSTATUS ErrorStatus,
        ULONG NumberOfParameters,
        ULONG UnicodeStringParameterMask,
        PULONG_PTR Parameters,
        ULONG ValidResponseOptions,
        PULONG Response)
{
  NTSTATUS result; // eax

  result = 353;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
