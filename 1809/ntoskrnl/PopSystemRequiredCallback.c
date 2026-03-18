/*
 * XREFs of PopSystemRequiredCallback @ 0x140589A00
 * Callers:
 *     <none>
 * Callees:
 *     PopHandleConvergedPowerRequestUpdate @ 0x140589D88 (PopHandleConvergedPowerRequestUpdate.c)
 */

__int64 __fastcall PopSystemRequiredCallback(__int64 a1, unsigned int a2)
{
  PopHandleConvergedPowerRequestUpdate(a2, 1LL);
  return 0LL;
}
