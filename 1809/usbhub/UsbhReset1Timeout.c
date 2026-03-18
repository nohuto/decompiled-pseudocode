/*
 * XREFs of UsbhReset1Timeout @ 0x1C0055D50
 * Callers:
 *     UsbhReset1TimeoutBadEnable @ 0x1C0055F50 (UsbhReset1TimeoutBadEnable.c)
 * Callees:
 *     UsbhAllocateTimeoutObject @ 0x1C000CDAC (UsbhAllocateTimeoutObject.c)
 *     Usbh_UsbdReadFrameCounter @ 0x1C000FA54 (Usbh_UsbdReadFrameCounter.c)
 *     PdoExt @ 0x1C0010C40 (PdoExt.c)
 *     UsbhResetPort @ 0x1C0010FF0 (UsbhResetPort.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C001B740 (UsbhEtwLogHubIrpEvent.c)
 *     __security_check_cookie @ 0x1C002B380 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040078 (WPP_RECORDER_SF_d.c)
 *     UsbhAssertBusLock @ 0x1C0046954 (UsbhAssertBusLock.c)
 *     UsbhException @ 0x1C0053928 (UsbhException.c)
 *     UsbhSetEnumerationFailed @ 0x1C0056594 (UsbhSetEnumerationFailed.c)
 */

__int64 __fastcall UsbhReset1Timeout(__int64 a1, __int64 a2, __int64 a3)
{
  int FrameCounter; // eax
  int v7; // esi
  unsigned int v8; // eax
  int v10; // [rsp+28h] [rbp-70h]
  int v11; // [rsp+30h] [rbp-68h]
  int v12; // [rsp+38h] [rbp-60h]
  PVOID P; // [rsp+50h] [rbp-48h] BYREF
  int v14[2]; // [rsp+58h] [rbp-40h] BYREF
  __int16 v15; // [rsp+60h] [rbp-38h]

  P = 0LL;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v10 = *(unsigned __int16 *)(a2 + 4);
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x10u,
      (__int64)&WPP_471ec6e8280839848e9d0f8c96351f40_Traceguids,
      v10);
  }
  Log(a1, 1024, 1884443476, a2, *(unsigned int *)(a2 + 544));
  UsbhAssertBusLock(a1);
  FrameCounter = Usbh_UsbdReadFrameCounter(a1);
  *(_DWORD *)(a2 + 852) = FrameCounter;
  v14[0] = FrameCounter - *(_DWORD *)(a2 + 848);
  v14[1] = *(_DWORD *)(a2 + 544);
  v15 = *(_WORD *)(a2 + 4);
  v7 = UsbhAllocateTimeoutObject(a1, a2, &P);
  v8 = *(_DWORD *)(a2 + 544);
  if ( v8 >= 3 || v7 < 0 )
  {
    if ( P )
      ExFreePoolWithTag(P, 0);
    PdoExt(a3)[705] = 1073807362;
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_RESET_TIMEOUT);
    UsbhSetEnumerationFailed(a1, (int)v14, v7, v11, v12, 743);
    return 0LL;
  }
  else
  {
    *(_DWORD *)(a2 + 544) = v8 + 1;
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_RETRY);
    UsbhException(a1, *(_WORD *)(a2 + 4), 0x51u, v14, 0xCu, v7, -1, usbfile_busfunc_c, 726, 0);
    UsbhResetPort(a1, a2, (__int64)P);
    return 1LL;
  }
}
