/*
 * XREFs of DbgkpLkmdSnapThread @ 0x140281954
 * Callers:
 *     DbgkCaptureLiveDump @ 0x14084B148 (DbgkCaptureLiveDump.c)
 * Callees:
 *     KeEnumerateQueueApc @ 0x1402AB360 (KeEnumerateQueueApc.c)
 *     DbgkpLkmdLaunchSnapApc @ 0x14084B774 (DbgkpLkmdLaunchSnapApc.c)
 */

__int64 __fastcall DbgkpLkmdSnapThread(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  KeEnumerateQueueApc(a3, DbgkpLkmdEnumApcOrDpcDataCallback, a1, 0LL);
  return DbgkpLkmdLaunchSnapApc(a1, a2, a3, a4);
}
