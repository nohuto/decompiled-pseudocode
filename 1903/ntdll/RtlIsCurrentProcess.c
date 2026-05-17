/*
 * XREFs of RtlIsCurrentProcess @ 0x180072320
 * Callers:
 *     RtlWow64SuspendProcess @ 0x1800DB550 (RtlWow64SuspendProcess.c)
 * Callees:
 *     ZwCompareObjects @ 0x18009D9F0 (ZwCompareObjects.c)
 */

bool __fastcall RtlIsCurrentProcess(__int64 a1)
{
  return a1 == -1 || (int)ZwCompareObjects(-1LL, a1) >= 0;
}
