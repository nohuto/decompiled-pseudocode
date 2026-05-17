/*
 * XREFs of EtwEventUnregister @ 0x18004E970
 * Callers:
 *     LdrShutdownProcess @ 0x1800290F0 (LdrShutdownProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwEventUnregister(__int64 a1)
{
  return EtwNotificationUnregister(a1, 0LL);
}
