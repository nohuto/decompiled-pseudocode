/*
 * XREFs of RtlIsCurrentThread @ 0x1800FB3B0
 * Callers:
 *     <none>
 * Callees:
 *     NtCompareObjects @ 0x1800A1610 (NtCompareObjects.c)
 */

BOOLEAN __cdecl RtlIsCurrentThread(HANDLE ThreadHandle)
{
  return ThreadHandle == (HANDLE)-2LL || NtCompareObjects((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadHandle) >= 0;
}
