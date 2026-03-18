/*
 * XREFs of UsbhReleaseFdoPwrLock @ 0x1C000562C
 * Callers:
 *     UsbhPdoSetDx @ 0x1C000138C (UsbhPdoSetDx.c)
 *     UsbhPdoSetD0_Finish @ 0x1C00025EC (UsbhPdoSetD0_Finish.c)
 *     UsbhSS_PdoWakeWorker @ 0x1C0002B50 (UsbhSS_PdoWakeWorker.c)
 *     UsbhPdoDevicePowerState @ 0x1C0002E38 (UsbhPdoDevicePowerState.c)
 *     UsbhPdoSetD0 @ 0x1C0003C40 (UsbhPdoSetD0.c)
 *     UsbhFdoS0IoComplete_Action @ 0x1C0004020 (UsbhFdoS0IoComplete_Action.c)
 *     UsbhFdoD0Worker_Action @ 0x1C00047C0 (UsbhFdoD0Worker_Action.c)
 *     UsbhFdoWakePoComplete_Action @ 0x1C0005480 (UsbhFdoWakePoComplete_Action.c)
 *     UsbhFdoSystemPowerState @ 0x1C0006010 (UsbhFdoSystemPowerState.c)
 *     UsbhFdoDevicePowerState @ 0x1C0006560 (UsbhFdoDevicePowerState.c)
 *     UsbhFdoReturnPortStatus @ 0x1C00174B0 (UsbhFdoReturnPortStatus.c)
 *     UsbhFdoResetPdoPort @ 0x1C0043790 (UsbhFdoResetPdoPort.c)
 *     Usbh_PdoSurpriseRemove_PdoEvent @ 0x1C004B0E4 (Usbh_PdoSurpriseRemove_PdoEvent.c)
 *     UsbhFdoPower_PowerFailureEntry @ 0x1C004BB60 (UsbhFdoPower_PowerFailureEntry.c)
 *     UsbhIoctlGetDescriptorFromNodeConnection @ 0x1C004E194 (UsbhIoctlGetDescriptorFromNodeConnection.c)
 *     UsbhPdoPnp_RemoveDevice @ 0x1C005B9C0 (UsbhPdoPnp_RemoveDevice.c)
 * Callees:
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     UsbhTrapFatal_Dbg @ 0x1C00413A8 (UsbhTrapFatal_Dbg.c)
 */

void __fastcall UsbhReleaseFdoPwrLock(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx

  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v3 = *(_QWORD *)(a1 + 64);
  if ( !v3 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v3 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  FdoExt(*(_QWORD *)(a2 + 8));
  *(_DWORD *)(a2 + 32) = 1734964085;
  *(_QWORD *)(v3 + 1344) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 5056), *(_BYTE *)(v3 + 5064));
}
