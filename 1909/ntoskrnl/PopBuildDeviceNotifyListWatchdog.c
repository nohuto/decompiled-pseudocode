/*
 * XREFs of PopBuildDeviceNotifyListWatchdog @ 0x1405AD930
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     PnpBugcheckPowerTimeout @ 0x14029E7E0 (PnpBugcheckPowerTimeout.c)
 */

void __fastcall __noreturn PopBuildDeviceNotifyListWatchdog(
        struct _KDPC *Dpc,
        struct _KEVENT *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  KeSetEvent(DeferredContext, 0, 0);
  PnpBugcheckPowerTimeout();
}
