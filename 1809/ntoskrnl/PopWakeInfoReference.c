/*
 * XREFs of PopWakeInfoReference @ 0x14013BC00
 * Callers:
 *     PopHandleWakeSources @ 0x140566540 (PopHandleWakeSources.c)
 * Callees:
 *     <none>
 */

void __fastcall PopWakeInfoReference(__int64 a1)
{
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 16));
}
