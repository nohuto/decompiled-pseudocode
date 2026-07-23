/*
 * XREFs of RtlIsCurrentThread @ 0x180002710
 * Callers:
 *     <none>
 * Callees:
 *     ZwCompareObjects @ 0x18009D9F0 (ZwCompareObjects.c)
 */

BOOLEAN __cdecl RtlIsCurrentThread(HANDLE ThreadHandle)
{
  return ThreadHandle == (HANDLE)-2LL || ZwCompareObjects((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadHandle) >= 0;
}
