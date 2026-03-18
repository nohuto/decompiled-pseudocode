/*
 * XREFs of UsbhQueueWorkItemEx @ 0x1C00111F0
 * Callers:
 *     UsbhFdoScheduleDeferredPowerRequest @ 0x1C00028D4 (UsbhFdoScheduleDeferredPowerRequest.c)
 *     UsbhPdoDevicePowerState @ 0x1C0002C7C (UsbhPdoDevicePowerState.c)
 *     UsbhFdoD0PoComplete_Action @ 0x1C0004200 (UsbhFdoD0PoComplete_Action.c)
 *     UsbhFdoUnblockAllPendedPdoD0Irps @ 0x1C0004B5C (UsbhFdoUnblockAllPendedPdoD0Irps.c)
 *     UsbhFdoWakePoComplete_Action @ 0x1C0005110 (UsbhFdoWakePoComplete_Action.c)
 *     UsbhSyncResetDeviceInternal @ 0x1C000873C (UsbhSyncResetDeviceInternal.c)
 *     UsbhHubProcessIsr @ 0x1C0011670 (UsbhHubProcessIsr.c)
 *     UsbhQueueWorkItemWithRetry @ 0x1C001C7E4 (UsbhQueueWorkItemWithRetry.c)
 *     UsbhPindicatorTimer @ 0x1C0040CD0 (UsbhPindicatorTimer.c)
 *     UsbhQueueDriverOvercurrent @ 0x1C0041820 (UsbhQueueDriverOvercurrent.c)
 *     UsbhQueueOvercurrentReset @ 0x1C0041990 (UsbhQueueOvercurrentReset.c)
 *     Usbh_HRS_Queued @ 0x1C004B5B4 (Usbh_HRS_Queued.c)
 *     UsbhDriverNotFoundTimer @ 0x1C004F660 (UsbhDriverNotFoundTimer.c)
 *     UsbhException @ 0x1C0053928 (UsbhException.c)
 * Callees:
 *     UsbhAllocWorkItem @ 0x1C0011370 (UsbhAllocWorkItem.c)
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     _guard_dispatch_icall_nop @ 0x1C002B480 (_guard_dispatch_icall_nop.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003FD38 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040078 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhQueueWorkItemEx(__int64 a1, unsigned int a2, int a3, __int64 a4, int a5, int a6, __int64 a7)
{
  __int64 v11; // rax
  char v12; // r14
  void *v13; // r10
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rsi
  void (__fastcall *v17)(__int64, __int64, void *, _QWORD, __int64, int); // rax
  int v19; // [rsp+28h] [rbp-40h]

  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v11 = *(_QWORD *)(a1 + 64);
  if ( !v11 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v11 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  v12 = *(_BYTE *)(v11 + 5268);
  v13 = &WPP_10fd33d0d4c73f43ffd0851bf01e9310_Traceguids;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      46,
      (__int64)&WPP_10fd33d0d4c73f43ffd0851bf01e9310_Traceguids,
      a5);
    v13 = &WPP_10fd33d0d4c73f43ffd0851bf01e9310_Traceguids;
  }
  if ( a6 != 2001228627 )
    Log(a1, 8, 1632720717, a6, a4);
  v14 = a7;
  if ( !a7 )
  {
    v15 = UsbhAllocWorkItem(a1, a3, a4, a5, a6, v12);
    v13 = &WPP_10fd33d0d4c73f43ffd0851bf01e9310_Traceguids;
    v14 = v15;
    if ( !v15 )
      return 3221225626LL;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v14 + 8));
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, 0, 1, 47, (__int64)v13, a5);
  if ( a6 != 2001228627 )
    Log(a1, 8, 1364479275, a6, v14);
  v16 = *(_QWORD *)(v14 + 40);
  v17 = *(void (__fastcall **)(__int64, __int64, void *, _QWORD, __int64, int))(FdoExt(a1) + 4784);
  if ( !v17 )
    return 3221225474LL;
  LOBYTE(v19) = v12;
  v17(a1, v16, &UsbhHubWorker, a2, v14, v19);
  return 0LL;
}
