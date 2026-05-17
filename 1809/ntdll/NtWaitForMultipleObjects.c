/*
 * XREFs of NtWaitForMultipleObjects @ 0x1800A0E30
 * Callers:
 *     TpTrimPools @ 0x1800586A0 (TpTrimPools.c)
 *     RtlCreateProcessReflection @ 0x1800D7C30 (RtlCreateProcessReflection.c)
 *     WerpWaitForCrashReporting @ 0x1800DEF60 (WerpWaitForCrashReporting.c)
 *     RtlpHeapTrkSyncWithDiagnoser @ 0x1800FA954 (RtlpHeapTrkSyncWithDiagnoser.c)
 * Callees:
 *     <none>
 */

__int64 NtWaitForMultipleObjects()
{
  __int64 result; // rax

  result = 91LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
