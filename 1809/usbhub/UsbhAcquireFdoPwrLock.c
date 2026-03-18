/*
 * XREFs of UsbhAcquireFdoPwrLock @ 0x1C00063F0
 * Callers:
 *     UsbhPdoSetD0_Finish @ 0x1C00024DC (UsbhPdoSetD0_Finish.c)
 *     UsbhSS_PdoWakeWorker @ 0x1C0002A50 (UsbhSS_PdoWakeWorker.c)
 *     UsbhPdoDevicePowerState @ 0x1C0002C7C (UsbhPdoDevicePowerState.c)
 *     UsbhPdoSetD0 @ 0x1C0003620 (UsbhPdoSetD0.c)
 *     UsbhFdoD0PoComplete_Action @ 0x1C0004200 (UsbhFdoD0PoComplete_Action.c)
 *     UsbhFdoD0Worker_Action @ 0x1C0004490 (UsbhFdoD0Worker_Action.c)
 *     UsbhFdoSxIoComplete_Action @ 0x1C0004CD0 (UsbhFdoSxIoComplete_Action.c)
 *     UsbhFdoWakePoComplete_Action @ 0x1C0005110 (UsbhFdoWakePoComplete_Action.c)
 *     UsbhFdoDxPoComplete_Action @ 0x1C0005280 (UsbhFdoDxPoComplete_Action.c)
 *     UsbhFdoSystemPowerState @ 0x1C0005B50 (UsbhFdoSystemPowerState.c)
 *     UsbhFdoResetPdoPort @ 0x1C0042140 (UsbhFdoResetPdoPort.c)
 *     Usbh_PdoSurpriseRemove_PdoEvent @ 0x1C004972C (Usbh_PdoSurpriseRemove_PdoEvent.c)
 *     UsbhIoctlGetDescriptorFromNodeConnection @ 0x1C004C714 (UsbhIoctlGetDescriptorFromNodeConnection.c)
 *     UsbhPdoPnp_RemoveDevice @ 0x1C00595F0 (UsbhPdoPnp_RemoveDevice.c)
 * Callees:
 *     UsbhTrapFatal_Dbg @ 0x1C003FD38 (UsbhTrapFatal_Dbg.c)
 */

__int64 __fastcall UsbhAcquireFdoPwrLock(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v7; // rbx
  int v8; // eax
  __int64 result; // rax

  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v7 = *(_QWORD *)(a1 + 64);
  if ( !v7 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v7 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  *(_BYTE *)(v7 + 5064) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + 5056));
  v8 = *(_DWORD *)(v7 + 4172);
  *(_DWORD *)(a2 + 44) = a3;
  *(_DWORD *)(a2 + 36) = a4;
  *(_DWORD *)(a2 + 40) = v8;
  *(_DWORD *)(a2 + 32) = 844055622;
  *(_QWORD *)(a2 + 24) = KeGetCurrentThread();
  result = *(unsigned int *)(v7 + 4172);
  *(_QWORD *)(v7 + 1344) = a2;
  return result;
}
