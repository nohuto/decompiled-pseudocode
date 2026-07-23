/*
 * XREFs of RtlIsCurrentProcess @ 0x180080A30
 * Callers:
 *     <none>
 * Callees:
 *     NtCompareObjects @ 0x1800A1610 (NtCompareObjects.c)
 */

BOOLEAN __cdecl RtlIsCurrentProcess(HANDLE ProcessHandle)
{
  return ProcessHandle == (HANDLE)-1LL || NtCompareObjects((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessHandle) >= 0;
}
