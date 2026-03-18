/*
 * XREFs of UsbhReset1Complete @ 0x1C000F680
 * Callers:
 *     <none>
 * Callees:
 *     UsbhWait @ 0x1C0001F78 (UsbhWait.c)
 *     UsbhAllocateTimeoutObject @ 0x1C000CDAC (UsbhAllocateTimeoutObject.c)
 *     UsbhCreateDevice @ 0x1C000DE24 (UsbhCreateDevice.c)
 *     Usbh_UsbdReadFrameCounter @ 0x1C000FA54 (Usbh_UsbdReadFrameCounter.c)
 *     UsbhCancelResetTimeout @ 0x1C0010D90 (UsbhCancelResetTimeout.c)
 *     UsbhResetPort @ 0x1C0010FF0 (UsbhResetPort.c)
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     UsbhReset2Complete @ 0x1C0012680 (UsbhReset2Complete.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     UsbhRawWait @ 0x1C001A5A0 (UsbhRawWait.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C001B740 (UsbhEtwLogHubIrpEvent.c)
 *     __security_check_cookie @ 0x1C002B380 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040078 (WPP_RECORDER_SF_d.c)
 *     UsbhClearTt @ 0x1C0046ACC (UsbhClearTt.c)
 *     UsbhSetEnumerationFailed @ 0x1C0056594 (UsbhSetEnumerationFailed.c)
 */

__int64 __fastcall UsbhReset1Complete(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // r14d
  KSPIN_LOCK *v7; // rbx
  KIRQL v8; // al
  int FrameCounter; // eax
  int v10; // ecx
  unsigned int v11; // r9d
  int v13; // eax
  PVOID v14; // rbx
  int v15; // ebp
  int v16; // eax
  int v17; // [rsp+30h] [rbp-78h]
  int v18; // [rsp+38h] [rbp-70h]
  PVOID P; // [rsp+50h] [rbp-58h] BYREF
  int v20[2]; // [rsp+58h] [rbp-50h] BYREF
  __int16 v21; // [rsp+60h] [rbp-48h]

  P = 0LL;
  v6 = 1;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      28,
      (__int64)&WPP_471ec6e8280839848e9d0f8c96351f40_Traceguids,
      *(_WORD *)(a2 + 4));
  Log(a1, 1024, 1884434787, a2, 0LL);
  v7 = (KSPIN_LOCK *)(FdoExt(a1) + 3064);
  v8 = KeAcquireSpinLockRaiseToDpc(v7);
  KeReleaseSpinLock(v7, v8);
  UsbhCancelResetTimeout(a1, a2, 0LL);
  UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_RESET1_COMPLETE, *(unsigned __int16 *)(a2 + 4), 0);
  FrameCounter = Usbh_UsbdReadFrameCounter(a1);
  v10 = *(_DWORD *)(a2 + 544);
  *(_DWORD *)(a2 + 852) = FrameCounter;
  v20[0] = FrameCounter - *(_DWORD *)(a2 + 848);
  LOWORD(FrameCounter) = *(_WORD *)(a2 + 4);
  v20[1] = v10;
  v21 = FrameCounter;
  if ( v10 )
  {
    UsbhWait(a1, 100);
  }
  else
  {
    Log(a1, 8, 2002872692, 32, 0LL);
    UsbhRawWait(v11);
  }
  if ( (int)UsbhCreateDevice(a1, a3, *(_WORD *)(a2 + 420), *(_WORD *)(a2 + 4)) < 0 )
    goto LABEL_16;
  UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_ENUM_CREATE_DEVICE_COMPLETE, *(unsigned __int16 *)(a2 + 4), 0);
  if ( (*(_WORD *)(a2 + 420) & 0x400) != 0
    && !*(_DWORD *)(a2 + 544)
    && !dword_1C006E68C
    && (*(_DWORD *)(FdoExt(a1) + 2560) & 0x8000000) == 0 )
  {
    return UsbhReset2Complete(a1);
  }
  v13 = UsbhAllocateTimeoutObject(a1, a2, &P);
  v14 = P;
  v15 = v13;
  if ( v13 >= 0 )
  {
    v6 = 2;
LABEL_13:
    UsbhResetPort(a1);
    return v6;
  }
  if ( !P )
  {
LABEL_16:
    v16 = UsbhAllocateTimeoutObject(a1, a2, &P);
    v14 = P;
    v15 = v16;
  }
  if ( *(_DWORD *)(a2 + 544) >= 3u )
  {
    if ( v14 )
      ExFreePoolWithTag(v14, 0);
  }
  else if ( v14 )
  {
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_RETRY, *(unsigned __int16 *)(a2 + 4), v15);
    UsbhWait(a1, 500);
    ++*(_DWORD *)(a2 + 544);
    UsbhClearTt(a1);
    goto LABEL_13;
  }
  UsbhSetEnumerationFailed(a1, (int)v20, v15, v17, v18, 1509);
  return 0LL;
}
