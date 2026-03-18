/*
 * XREFs of UsbhEtwGetActivityId @ 0x1C005CB08
 * Callers:
 *     UsbhEtwLogDevicePowerEvent @ 0x1C0003024 (UsbhEtwLogDevicePowerEvent.c)
 *     UsbhFdoSystemPowerState @ 0x1C0005B50 (UsbhFdoSystemPowerState.c)
 *     UsbhEtwLogHubPowerEvent @ 0x1C0006394 (UsbhEtwLogHubPowerEvent.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002B480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall UsbhEtwGetActivityId(__int64 a1, __int64 a2)
{
  if ( a1 && g_IoGetActivityIdIrp )
    return g_IoGetActivityIdIrp(a1, a2);
  else
    return 3221225473LL;
}
