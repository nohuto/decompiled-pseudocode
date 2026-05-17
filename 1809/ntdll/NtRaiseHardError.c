/*
 * XREFs of NtRaiseHardError @ 0x1800A2ED0
 * Callers:
 *     LdrpMapDllNtFileName @ 0x18002ABA0 (LdrpMapDllNtFileName.c)
 *     LdrpReportError @ 0x180077170 (LdrpReportError.c)
 *     LdrpProcessMachineMismatch @ 0x18008A46C (LdrpProcessMachineMismatch.c)
 *     LdrpInitializationFailure @ 0x1800D2AE4 (LdrpInitializationFailure.c)
 * Callees:
 *     <none>
 */

__int64 NtRaiseHardError()
{
  __int64 result; // rax

  result = 352LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
