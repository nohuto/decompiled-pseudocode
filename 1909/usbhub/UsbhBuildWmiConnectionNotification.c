/*
 * XREFs of UsbhBuildWmiConnectionNotification @ 0x1C0054438
 * Callers:
 *     UsbhDeviceOvercurrentPopup @ 0x1C0042A90 (UsbhDeviceOvercurrentPopup.c)
 *     UsbhEnumFailurePopup @ 0x1C00558E0 (UsbhEnumFailurePopup.c)
 *     UsbhLegacyDevicePopup @ 0x1C0056260 (UsbhLegacyDevicePopup.c)
 *     UsbhNestedHubsPopup @ 0x1C00563D0 (UsbhNestedHubsPopup.c)
 *     UsbhNotEnoughBandwidth_Popup @ 0x1C0056470 (UsbhNotEnoughBandwidth_Popup.c)
 *     UsbhNotEnoughPowerPopup @ 0x1C0056500 (UsbhNotEnoughPowerPopup.c)
 * Callees:
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     __security_check_cookie @ 0x1C002C5B0 (__security_check_cookie.c)
 *     UsbhSyncSendDeviceIoctl @ 0x1C0041108 (UsbhSyncSendDeviceIoctl.c)
 *     WPP_RECORDER_SF_d @ 0x1C00416A0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_q @ 0x1C0041B44 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall UsbhBuildWmiConnectionNotification(__int64 a1, unsigned __int16 a2)
{
  _QWORD *PoolWithTag; // rax
  __int64 v5; // rdx
  __int64 v6; // rbx
  int v7; // eax
  __int64 v8; // r9
  int v9; // r11d
  int v10; // r10d
  __int64 v11; // rax
  int v13; // [rsp+28h] [rbp-30h]
  int v14; // [rsp+30h] [rbp-28h] BYREF
  __int16 v15; // [rsp+34h] [rbp-24h]

  v14 = 0;
  v15 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v13 = a2;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x14u,
      (__int64)&WPP_a6355f778b1132e8a13bd07b7543ef0f_Traceguids,
      v13);
  }
  FdoExt(a1);
  PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x18uLL, 0x42554855u);
  v6 = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    *PoolWithTag = 0LL;
    PoolWithTag[1] = 0LL;
    PoolWithTag[2] = 0LL;
    *((_DWORD *)PoolWithTag + 1) = a2;
    v7 = UsbhSyncSendDeviceIoctl(a1, v5, &v14, 6u);
    Log(a1, 64, 1752067121, v6, v7);
    if ( v10 < 0 )
    {
      *(_DWORD *)(v6 + 20) = 0;
      v11 = 0LL;
    }
    else
    {
      LODWORD(v11) = v14;
      *(_DWORD *)(v6 + 20) = v14;
      v11 = (unsigned int)v11;
    }
    Log(a1, v9, 1752067122, v8, v11);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_q(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v5,
      1u,
      0x15u,
      (__int64)&WPP_a6355f778b1132e8a13bd07b7543ef0f_Traceguids,
      v6);
  return v6;
}
