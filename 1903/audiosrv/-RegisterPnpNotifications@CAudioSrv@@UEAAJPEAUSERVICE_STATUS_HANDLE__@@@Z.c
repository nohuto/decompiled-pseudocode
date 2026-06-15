/*
 * XREFs of ?RegisterPnpNotifications@CAudioSrv@@UEAAJPEAUSERVICE_STATUS_HANDLE__@@@Z @ 0x180061930
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     memset_0 @ 0x180064BFE (memset_0.c)
 *     WPP_SF_d @ 0x1800C2644 (WPP_SF_d.c)
 */

__int64 __fastcall CAudioSrv::RegisterPnpNotifications(HPOWERNOTIFY *this, struct SERVICE_STATUS_HANDLE__ *a2)
{
  DWORD v4; // eax
  DWORD v5; // eax
  DWORD v6; // eax
  DWORD v7; // ebx
  _DWORD v9[4]; // [rsp+20h] [rbp-1B8h] BYREF
  GUID v10; // [rsp+30h] [rbp-1A8h]

  memset_0(v9, 0, 0x1A0uLL);
  v9[2] = 0;
  v9[0] = 416;
  v10 = GUID_6994ad04_93ef_11d0_a3cc_00a0c9223196;
  ((void (__fastcall *)(_DWORD *, _QWORD, __int64 (__fastcall *)(), HPOWERNOTIFY *))CM_Register_Notification)(
    v9,
    0LL,
    ServiceDeviceEventCallback,
    this + 1);
  v4 = PowerSettingRegisterNotification(&GUID_SYSTEM_AWAYMODE, 1u, a2, this + 5);
  if ( v4
    && WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 19LL, &WPP_caac46b4f1e3331f0b6e69ee555f6535_Traceguids, v4);
  }
  v5 = PowerSettingRegisterNotification(&GUID_ACDC_POWER_SOURCE, 1u, a2, this + 4);
  if ( v5
    && WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 20LL, &WPP_caac46b4f1e3331f0b6e69ee555f6535_Traceguids, v5);
  }
  v6 = PowerSettingRegisterNotification(&GUID_LOW_POWER_EPOCH, 1u, a2, this + 6);
  v7 = v6;
  if ( v6
    && WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 21LL, &WPP_caac46b4f1e3331f0b6e69ee555f6535_Traceguids, v6);
  }
  return v7;
}
