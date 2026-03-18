/*
 * XREFs of ReleaseWakeReference @ 0x1C011BE00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ReleaseWakeReference(__int64 a1)
{
  return PsReleaseProcessWakeCounter(a1, 0LL);
}
