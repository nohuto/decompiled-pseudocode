/*
 * XREFs of NtRaiseHardError @ 0x18009FAA0
 * Callers:
 *     LdrpMapDllNtFileName @ 0x18002D3B4 (LdrpMapDllNtFileName.c)
 *     LdrpReportError @ 0x18006F5D8 (LdrpReportError.c)
 *     LdrpProcessMachineMismatch @ 0x1800865C4 (LdrpProcessMachineMismatch.c)
 *     LdrpInitializationFailure @ 0x1800897F0 (LdrpInitializationFailure.c)
 * Callees:
 *     <none>
 */

__int64 NtRaiseHardError()
{
  __int64 result; // rax

  result = 353LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
