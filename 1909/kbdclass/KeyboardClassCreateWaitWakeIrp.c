/*
 * XREFs of KeyboardClassCreateWaitWakeIrp @ 0x1C000F410
 * Callers:
 *     KeyboardClassPower @ 0x1C0001880 (KeyboardClassPower.c)
 *     KeyboardStart @ 0x1C00027F0 (KeyboardStart.c)
 *     KeyboardToggleWaitWakeWorker @ 0x1C0005F50 (KeyboardToggleWaitWakeWorker.c)
 *     KeyboardClassCreateWaitWakeIrpWorker @ 0x1C000F470 (KeyboardClassCreateWaitWakeIrpWorker.c)
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
