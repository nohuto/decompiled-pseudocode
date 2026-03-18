/*
 * XREFs of KiReleaseKobjectLock @ 0x140138DE0
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x140059B50 (NtWaitForWorkViaWorkerFactory.c)
 * Callees:
 *     <none>
 */

void __fastcall KiReleaseKobjectLock(volatile signed __int32 *a1)
{
  _InterlockedAnd(a1, 0xFFFFFF7F);
}
