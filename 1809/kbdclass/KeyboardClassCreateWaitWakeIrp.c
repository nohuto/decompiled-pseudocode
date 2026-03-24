/*
 * XREFs of KeyboardClassCreateWaitWakeIrp @ 0x1C000E1C0
 * Callers:
 *     KeyboardClassPower @ 0x1C0001960 (KeyboardClassPower.c)
 *     KeyboardStart @ 0x1C00029E0 (KeyboardStart.c)
 *     KeyboardToggleWaitWakeWorker @ 0x1C0005990 (KeyboardToggleWaitWakeWorker.c)
 *     KeyboardClassCreateWaitWakeIrpWorker @ 0x1C000E220 (KeyboardClassCreateWaitWakeIrpWorker.c)
 * Callees:
 *     <none>
 */

bool __fastcall KeyboardClassCreateWaitWakeIrp(char *Context)
{
  return PoRequestPowerIrp(
           *((PDEVICE_OBJECT *)Context + 3),
           0,
           *(POWER_STATE *)(Context + 288),
           (PREQUEST_POWER_COMPLETE)KeyboardClassWaitWakeComplete,
           Context,
           0LL) == 259;
}
