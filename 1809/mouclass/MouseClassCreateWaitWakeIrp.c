/*
 * XREFs of MouseClassCreateWaitWakeIrp @ 0x1C000CFF4
 * Callers:
 *     MouseClassPower @ 0x1C0002E00 (MouseClassPower.c)
 *     MouseStart @ 0x1C0004264 (MouseStart.c)
 *     MouseToggleWaitWakeWorker @ 0x1C00046D0 (MouseToggleWaitWakeWorker.c)
 *     MouseClassCreateWaitWakeIrpWorker @ 0x1C000D050 (MouseClassCreateWaitWakeIrpWorker.c)
 * Callees:
 *     <none>
 */

bool __fastcall MouseClassCreateWaitWakeIrp(char *Context)
{
  return PoRequestPowerIrp(
           *((PDEVICE_OBJECT *)Context + 3),
           0,
           *(POWER_STATE *)(Context + 272),
           (PREQUEST_POWER_COMPLETE)MouseClassWaitWakeComplete,
           Context,
           0LL) == 259;
}
