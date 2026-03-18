/*
 * XREFs of WPP_RECORDER_SF_q @ 0x1C004051C
 * Callers:
 *     UsbhSyncSuspendPdoPort @ 0x1C0001FAC (UsbhSyncSuspendPdoPort.c)
 *     UsbhFdoS0IoComplete_Action @ 0x1C0003E90 (UsbhFdoS0IoComplete_Action.c)
 *     UsbhSyncResetDeviceInternal @ 0x1C000873C (UsbhSyncResetDeviceInternal.c)
 *     UsbhFdoColdStartPdo @ 0x1C0008D5C (UsbhFdoColdStartPdo.c)
 *     UsbhPdoInternalDeviceControl @ 0x1C0016790 (UsbhPdoInternalDeviceControl.c)
 *     UsbhQueryPortState @ 0x1C0017430 (UsbhQueryPortState.c)
 *     UsbhPdoPnp_QueryDeviceText @ 0x1C001CD90 (UsbhPdoPnp_QueryDeviceText.c)
 *     UsbhPdoPnp_StartDevice @ 0x1C0020410 (UsbhPdoPnp_StartDevice.c)
 *     UsbhCreatePdo @ 0x1C0022330 (UsbhCreatePdo.c)
 *     UsbhSetPdoRegistryParameter @ 0x1C0028CE0 (UsbhSetPdoRegistryParameter.c)
 *     UsbhFdoSelectConfigurationPdo @ 0x1C0029650 (UsbhFdoSelectConfigurationPdo.c)
 *     UsbhQueryGlobalLegacyDeviceValue @ 0x1C0029FB0 (UsbhQueryGlobalLegacyDeviceValue.c)
 *     UsbhFdoReturnDeviceBusInfo @ 0x1C0042584 (UsbhFdoReturnDeviceBusInfo.c)
 *     UsbhWaitForBootDevice @ 0x1C0048918 (UsbhWaitForBootDevice.c)
 *     Usbh_BusPause_PdoEvent @ 0x1C0048B04 (Usbh_BusPause_PdoEvent.c)
 *     UsbhResetNotifyCompletion @ 0x1C004B31C (UsbhResetNotifyCompletion.c)
 *     UsbhIoctlGetNodeConnectionName @ 0x1C004DE94 (UsbhIoctlGetNodeConnectionName.c)
 *     UsbhResetNotificationIrpCompletion @ 0x1C00501A0 (UsbhResetNotificationIrpCompletion.c)
 *     UsbhResetNotifyDownstreamHub @ 0x1C005034C (UsbhResetNotifyDownstreamHub.c)
 *     UsbhQueryGlobalHubValue @ 0x1C0050900 (UsbhQueryGlobalHubValue.c)
 *     UsbhBuildWmiConnectionNotification @ 0x1C0052394 (UsbhBuildWmiConnectionNotification.c)
 *     UsbhDeletePdo @ 0x1C005898C (UsbhDeletePdo.c)
 *     UsbhQueryUxdDevice @ 0x1C005C610 (UsbhQueryUxdDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002B480 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_q(__int64 a1, __int64 a2, unsigned int a3, unsigned __int16 a4, __int64 a5, ...)
{
  unsigned __int64 v8; // rbx
  int v9; // eax
  int v11; // [rsp+20h] [rbp-28h]
  va_list va; // [rsp+78h] [rbp+30h] BYREF

  va_start(va, a5);
  v8 = (unsigned __int64)a3 >> 16;
  v9 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v8 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v9, (a3 - 1) & 0x1F) )
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, char *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v8),
      43LL,
      a5,
      a4,
      va,
      8LL,
      0LL);
  LOWORD(v11) = a4;
  return WppAutoLogTrace(a1, 0LL, a3, a5, v11, va);
}
