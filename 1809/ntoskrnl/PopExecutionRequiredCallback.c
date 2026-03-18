/*
 * XREFs of PopExecutionRequiredCallback @ 0x140588DE0
 * Callers:
 *     <none>
 * Callees:
 *     PopHandleConvergedPowerRequestUpdate @ 0x140589D88 (PopHandleConvergedPowerRequestUpdate.c)
 */

__int64 __fastcall PopExecutionRequiredCallback(__int64 a1, unsigned int a2)
{
  PopHandleConvergedPowerRequestUpdate(a2, 3LL);
  return 0LL;
}
