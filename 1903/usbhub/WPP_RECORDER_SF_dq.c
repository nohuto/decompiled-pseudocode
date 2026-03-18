/*
 * XREFs of WPP_RECORDER_SF_dq @ 0x1C0041A74
 * Callers:
 *     UsbhSS_PdoWakeWorker @ 0x1C0002B50 (UsbhSS_PdoWakeWorker.c)
 *     UsbhFdoSetPowerDx_Action @ 0x1C00033E0 (UsbhFdoSetPowerDx_Action.c)
 *     UsbhSyncResetDeviceInternal @ 0x1C0008C2C (UsbhSyncResetDeviceInternal.c)
 *     UsbhBusPause_Action @ 0x1C00094A0 (UsbhBusPause_Action.c)
 *     Usbh_PCE_psPAUSED_Action @ 0x1C000A370 (Usbh_PCE_psPAUSED_Action.c)
 *     Usbh_PCE_Disable_Action @ 0x1C000A9A0 (Usbh_PCE_Disable_Action.c)
 *     Usbh_PCE_psSUSPEND_Action @ 0x1C000AF4C (Usbh_PCE_psSUSPEND_Action.c)
 *     Usbh_PCE_QueueDriverReset_Action @ 0x1C000B77C (Usbh_PCE_QueueDriverReset_Action.c)
 *     UsbhPCE_psSUSPEND @ 0x1C000C51C (UsbhPCE_psSUSPEND.c)
 *     UsbhBusConnectPdo @ 0x1C000F090 (UsbhBusConnectPdo.c)
 *     Usbh_PCE_QueueChange_Action @ 0x1C00137C0 (Usbh_PCE_QueueChange_Action.c)
 *     UsbhHubProcessChangeWorker @ 0x1C0013F60 (UsbhHubProcessChangeWorker.c)
 *     UsbhHubRunPortChangeQueue @ 0x1C0014470 (UsbhHubRunPortChangeQueue.c)
 *     Usbh_PCE_wChange_Action @ 0x1C0015460 (Usbh_PCE_wChange_Action.c)
 *     Usbh_PCE_wRun_Action @ 0x1C0015990 (Usbh_PCE_wRun_Action.c)
 *     Usbh_PCE_wDone_Action @ 0x1C0015EB0 (Usbh_PCE_wDone_Action.c)
 *     UsbhHubDispatchPortEvent @ 0x1C00164A0 (UsbhHubDispatchPortEvent.c)
 *     Usbh_PCE_Enable_Action @ 0x1C0018CB0 (Usbh_PCE_Enable_Action.c)
 *     UsbhGetDeviceBusInfo @ 0x1C0040354 (UsbhGetDeviceBusInfo.c)
 *     UsbhHubSyncSuspendPortEvent @ 0x1C0045BB8 (UsbhHubSyncSuspendPortEvent.c)
 *     UsbhPCE_Check @ 0x1C0045E1C (UsbhPCE_Check.c)
 *     UsbhPCE_Close @ 0x1C0045EF0 (UsbhPCE_Close.c)
 *     UsbhPCE_Disable @ 0x1C0045FCC (UsbhPCE_Disable.c)
 *     UsbhPCE_HW_Stop @ 0x1C00461F4 (UsbhPCE_HW_Stop.c)
 *     UsbhPCE_SD_Resume @ 0x1C0046788 (UsbhPCE_SD_Resume.c)
 *     UsbhPCE_wChangeERROR @ 0x1C004695C (UsbhPCE_wChangeERROR.c)
 *     Usbh_PCE_Check_Action @ 0x1C00471B4 (Usbh_PCE_Check_Action.c)
 *     Usbh_PCE_Close_Action @ 0x1C00472DC (Usbh_PCE_Close_Action.c)
 *     Usbh_PCE_HW_Stop_Action @ 0x1C00474FC (Usbh_PCE_HW_Stop_Action.c)
 *     Usbh_PCE_SD_Resume_Action @ 0x1C0047A8C (Usbh_PCE_SD_Resume_Action.c)
 *     Usbh_PCE_SoftDisconnect_Action @ 0x1C0047BF0 (Usbh_PCE_SoftDisconnect_Action.c)
 *     Usbh_PCE_wChangeERROR_Action @ 0x1C0047EB4 (Usbh_PCE_wChangeERROR_Action.c)
 *     UsbhExceptionTrace @ 0x1C0055D60 (UsbhExceptionTrace.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C6B0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_dq(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4, __int64 a5, ...)
{
  int v8; // [rsp+20h] [rbp-38h]
  __int64 v9; // [rsp+88h] [rbp+30h] BYREF
  va_list va; // [rsp+88h] [rbp+30h]
  va_list va1; // [rsp+90h] [rbp+38h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v9 = va_arg(va1, _QWORD);
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 )
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, __int64, _QWORD, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      a5,
      a4,
      (__int64 *)va,
      4LL,
      va1,
      8LL,
      0LL);
  LOWORD(v8) = a4;
  return WppAutoLogTrace(a1, 0LL, 1LL, a5, v8, (__int64 *)va);
}
