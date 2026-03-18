/*
 * XREFs of PipUpdateSetupInProgressCallback @ 0x14085CA40
 * Callers:
 *     <none>
 * Callees:
 *     PipUpdateSetupInProgressNotify @ 0x14085CA58 (PipUpdateSetupInProgressNotify.c)
 */

__int64 __fastcall PipUpdateSetupInProgressCallback(void *a1)
{
  return PipUpdateSetupInProgressNotify(a1);
}
