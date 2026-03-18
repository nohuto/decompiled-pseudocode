/*
 * XREFs of PipUpdateSetupInProgressCallback @ 0x14085D340
 * Callers:
 *     <none>
 * Callees:
 *     PipUpdateSetupInProgressNotify @ 0x14085D358 (PipUpdateSetupInProgressNotify.c)
 */

__int64 __fastcall PipUpdateSetupInProgressCallback(void *a1)
{
  return PipUpdateSetupInProgressNotify(a1);
}
