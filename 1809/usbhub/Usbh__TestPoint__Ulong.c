/*
 * XREFs of Usbh__TestPoint__Ulong @ 0x1C001C6C8
 * Callers:
 *     UsbhSyncSuspendPdoPort @ 0x1C0001FAC (UsbhSyncSuspendPdoPort.c)
 *     UsbhPdoPnp_StartDevice @ 0x1C0020410 (UsbhPdoPnp_StartDevice.c)
 *     UsbhSetupDevice @ 0x1C0020B00 (UsbhSetupDevice.c)
 *     UsbhAutoOvercurrentResetWorker @ 0x1C00413C0 (UsbhAutoOvercurrentResetWorker.c)
 *     UsbhDriverOvercurrentResetWorker @ 0x1C0041530 (UsbhDriverOvercurrentResetWorker.c)
 *     UsbhFdoResetPdoPort @ 0x1C0042140 (UsbhFdoResetPdoPort.c)
 *     UsbHubhInitTimeoutTimer @ 0x1C004F300 (UsbHubhInitTimeoutTimer.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002B480 (_guard_dispatch_icall_nop.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003FD38 (UsbhTrapFatal_Dbg.c)
 */

__int64 __fastcall Usbh__TestPoint__Ulong(__int64 a1, unsigned int a2, unsigned int a3, int a4)
{
  __int64 v6; // rcx
  __int64 (__fastcall *v7)(_QWORD, _QWORD, _QWORD, int *); // rax
  __int64 result; // rax
  int v9; // [rsp+58h] [rbp+20h] BYREF

  v9 = a4;
  if ( !LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink) )
    return a3;
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v6 = *(_QWORD *)(a1 + 64);
  if ( !v6 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v6 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v6);
  v7 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, int *))(v6 + 4432);
  if ( !v7 )
    return a3;
  result = v7(*(_QWORD *)(v6 + 4232), 0LL, a2, &v9);
  if ( !(_DWORD)result )
    return a3;
  return result;
}
