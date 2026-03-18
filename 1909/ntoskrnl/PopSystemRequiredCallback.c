/*
 * XREFs of PopSystemRequiredCallback @ 0x140671EF0
 * Callers:
 *     <none>
 * Callees:
 *     PopHandleConvergedPowerRequestUpdate @ 0x140671960 (PopHandleConvergedPowerRequestUpdate.c)
 */

__int64 __fastcall PopSystemRequiredCallback(__int64 a1, unsigned int a2)
{
  PopHandleConvergedPowerRequestUpdate(a2, 1u);
  return 0LL;
}
