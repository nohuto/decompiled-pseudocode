/*
 * XREFs of DbgkpLkmdSnapThread @ 0x1402816B4
 * Callers:
 *     DbgkCaptureLiveDump @ 0x14084A848 (DbgkCaptureLiveDump.c)
 * Callees:
 *     KeEnumerateQueueApc @ 0x1402AB0C0 (KeEnumerateQueueApc.c)
 *     DbgkpLkmdLaunchSnapApc @ 0x14084AE74 (DbgkpLkmdLaunchSnapApc.c)
 */

__int64 __fastcall DbgkpLkmdSnapThread(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  KeEnumerateQueueApc(a3, DbgkpLkmdEnumApcOrDpcDataCallback, a1, 0LL);
  return DbgkpLkmdLaunchSnapApc(a1, a2, a3, a4);
}
