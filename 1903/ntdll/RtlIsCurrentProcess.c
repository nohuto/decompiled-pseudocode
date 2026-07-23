/*
 * XREFs of RtlIsCurrentProcess @ 0x180072320
 * Callers:
 *     RtlWow64SuspendProcess @ 0x1800DB550 (RtlWow64SuspendProcess.c)
 * Callees:
 *     ZwCompareObjects @ 0x18009D9F0 (ZwCompareObjects.c)
 */

BOOLEAN __cdecl RtlIsCurrentProcess(HANDLE ProcessHandle)
{
  return ProcessHandle == (HANDLE)-1LL || ZwCompareObjects((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessHandle) >= 0;
}
