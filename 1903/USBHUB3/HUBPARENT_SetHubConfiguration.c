/*
 * XREFs of HUBPARENT_SetHubConfiguration @ 0x1C0006C58
 * Callers:
 *     HUBHSM_SettingHubConfiguration @ 0x1C00090A0 (HUBHSM_SettingHubConfiguration.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     HUBSM_AddEvent @ 0x1C000A734 (HUBSM_AddEvent.c)
 *     HUBDESC_ParseConfigurationDescriptor @ 0x1C003180C (HUBDESC_ParseConfigurationDescriptor.c)
 *     __security_check_cookie @ 0x1C0041200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0041640 (memset.c)
 */

_UNKNOWN **__fastcall HUBPARENT_SetHubConfiguration(__int64 a1)
{
  int v2; // ecx
  PURB v3; // rsi
  struct _USB_CONFIGURATION_DESCRIPTOR *v4; // rdi
  int v5; // ecx
  int v6; // ecx
  struct _USB_INTERFACE_DESCRIPTOR *v7; // rax
  _UNKNOWN **result; // rax
  __int64 v9; // r14
  int v10; // edi
  unsigned __int16 v11; // r9
  __int64 v12; // [rsp+28h] [rbp-91h]
  __int64 v13; // [rsp+50h] [rbp-69h] BYREF
  _QWORD v14[7]; // [rsp+58h] [rbp-61h] BYREF
  _USBD_INTERFACE_LIST_ENTRY InterfaceList; // [rsp+90h] [rbp-29h] BYREF
  __int64 v16; // [rsp+A0h] [rbp-19h]
  _QWORD v17[9]; // [rsp+B0h] [rbp-9h] BYREF

  memset(v14, 0, sizeof(v14));
  memset(v17, 0, sizeof(v17));
  v2 = *(_DWORD *)(a1 + 256);
  v3 = 0LL;
  v13 = 0LL;
  v4 = *(struct _USB_CONFIGURATION_DESCRIPTOR **)(a1 + 1256);
  v5 = v2 - 1;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      if ( v6 != 1 )
        goto LABEL_9;
    }
    else
    {
      v7 = (struct _USB_INTERFACE_DESCRIPTOR *)HUBDESC_ParseConfigurationDescriptor(
                                                 (_DWORD)v4,
                                                 (_DWORD)v4,
                                                 -1,
                                                 -1,
                                                 9,
                                                 -1,
                                                 2,
                                                 0LL,
                                                 *(_QWORD *)(a1 + 2520));
      if ( v7 )
        goto LABEL_11;
    }
  }
  v7 = (struct _USB_INTERFACE_DESCRIPTOR *)HUBDESC_ParseConfigurationDescriptor(
                                             (_DWORD)v4,
                                             (_DWORD)v4,
                                             -1,
                                             -1,
                                             9,
                                             -1,
                                             1,
                                             0LL,
                                             *(_QWORD *)(a1 + 2520));
  if ( !v7 )
  {
    v7 = (struct _USB_INTERFACE_DESCRIPTOR *)HUBDESC_ParseConfigurationDescriptor(
                                               (_DWORD)v4,
                                               (_DWORD)v4,
                                               -1,
                                               -1,
                                               9,
                                               -1,
                                               0,
                                               0LL,
                                               *(_QWORD *)(a1 + 2520));
    if ( !v7 )
    {
      v7 = (struct _USB_INTERFACE_DESCRIPTOR *)HUBDESC_ParseConfigurationDescriptor(
                                                 (_DWORD)v4,
                                                 (_DWORD)v4,
                                                 -1,
                                                 -1,
                                                 9,
                                                 -1,
                                                 -1,
                                                 0LL,
                                                 *(_QWORD *)(a1 + 2520));
      if ( !v7 )
      {
LABEL_9:
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(
            *(_QWORD *)(a1 + 2520),
            2u,
            3u,
            0xCu,
            (__int64)&WPP_6f1c5846342730c10a7f2a15ffc55722_Traceguids);
        goto LABEL_24;
      }
    }
  }
LABEL_11:
  if ( v7->bInterfaceClass != 9 || !v7->bNumEndpoints )
  {
LABEL_24:
    if ( v13 )
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
    if ( v3 )
      ExFreePoolWithTag(v3, 0);
    return (_UNKNOWN **)HUBSM_AddEvent(a1 + 1264, 2006LL);
  }
  v16 = 0LL;
  InterfaceList.InterfaceDescriptor = v7;
  v3 = USBD_CreateConfigurationRequestEx(v4, &InterfaceList);
  if ( v3 )
  {
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 336))(
           WdfDriverGlobals,
           *(_QWORD *)(a1 + 16));
    memset(v14, 0, sizeof(v14));
    v14[4] = *(_QWORD *)(a1 + 16);
    LODWORD(v14[0]) = 56;
    v14[3] = 0x100000001LL;
    v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, __int64, __int64 *))(WdfFunctions_01015 + 1976))(
            WdfDriverGlobals,
            v14,
            v9,
            &v13);
    if ( v10 >= 0 )
    {
      LOBYTE(v17[0]) = 15;
      LODWORD(v17[3]) = 2228227;
      v17[1] = v3;
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2016))(
        WdfDriverGlobals,
        v13,
        v17);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(__int64, __int64, __int64, __int64), PURB))(WdfFunctions_01015 + 2080))(
        WdfDriverGlobals,
        v13,
        HUBPARENT_SetHubConfigurationComplete,
        v3);
      result = (_UNKNOWN **)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, _QWORD))(WdfFunctions_01015 + 2024))(
                              WdfDriverGlobals,
                              v13,
                              v9,
                              0LL);
      if ( (_BYTE)result
        || (v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2032))(
                    WdfDriverGlobals,
                    v13),
            result = &WPP_RECORDER_INITIALIZED,
            WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED) )
      {
LABEL_23:
        if ( v10 >= 0 )
          return result;
        goto LABEL_24;
      }
      v11 = 15;
    }
    else
    {
      result = &WPP_RECORDER_INITIALIZED;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_23;
      v11 = 14;
    }
    LODWORD(v12) = v10;
    result = (_UNKNOWN **)WPP_RECORDER_SF_d(
                            *(_QWORD *)(a1 + 2520),
                            2u,
                            3u,
                            v11,
                            (__int64)&WPP_6f1c5846342730c10a7f2a15ffc55722_Traceguids,
                            v12);
    goto LABEL_23;
  }
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return (_UNKNOWN **)WPP_RECORDER_SF_(
                          *(_QWORD *)(a1 + 2520),
                          2u,
                          3u,
                          0xDu,
                          (__int64)&WPP_6f1c5846342730c10a7f2a15ffc55722_Traceguids);
  return result;
}
