/*
 * XREFs of NtQueryPerformanceCounter @ 0x1800A0900
 * Callers:
 *     LdrpGenSecurityCookie @ 0x180028720 (LdrpGenSecurityCookie.c)
 *     RtlQueryPerformanceCounter @ 0x180048890 (RtlQueryPerformanceCounter.c)
 *     RtlHeapTrkInitialize @ 0x1800F9AC0 (RtlHeapTrkInitialize.c)
 *     RtlpHeapTrkGenerateHashRandoms @ 0x1800FA368 (RtlpHeapTrkGenerateHashRandoms.c)
 *     RtlpHeapTrkInterceptor @ 0x1800FA490 (RtlpHeapTrkInterceptor.c)
 * Callees:
 *     <none>
 */

__int64 NtQueryPerformanceCounter()
{
  __int64 result; // rax

  result = 49LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
