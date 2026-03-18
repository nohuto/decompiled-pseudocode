/*
 * XREFs of HUBFDO_PowerSettingCallback @ 0x1C000CFD0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0041200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0041640 (memset.c)
 */

__int64 __fastcall HUBFDO_PowerSettingCallback(LPCGUID SettingGuid, _DWORD *Value, ULONG ValueLength, PVOID Context)
{
  int v8; // ebx
  int v9; // eax
  int v10; // eax
  __int64 v11; // rax
  int v12; // eax
  __int64 v14; // [rsp+28h] [rbp-70h]
  __int64 v15; // [rsp+28h] [rbp-70h]
  _DWORD v16[10]; // [rsp+40h] [rbp-58h] BYREF

  memset(v16, 0, 0x24uLL);
  v8 = 0;
  if ( (*((_DWORD *)Context + 10) & 0x4000000) == 0 )
    return (unsigned int)-1073741811;
  if ( RtlCompareMemory(SettingGuid, &GUID_USB_SETTING_SELECTIVE_SUSPEND, 0x10uLL) == 16 )
  {
    if ( ValueLength >= 4 && *Value <= 1u )
    {
      v9 = *((_DWORD *)Context + 10) & 0x8000000;
      if ( *Value == 1 )
      {
        if ( v9 )
        {
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, __int64, const char *))(WdfFunctions_01015 + 3512))(
            WdfDriverGlobals,
            *((_QWORD *)Context + 2),
            0LL,
            5176LL,
            "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubfdo.c");
          _InterlockedAnd((volatile signed __int32 *)Context + 10, 0xF7FFFFFF);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_(
              *((_QWORD *)Context + 315),
              4u,
              3u,
              0x36u,
              (__int64)&WPP_266c009e770034b9bb66bd8a0240ebba_Traceguids);
          if ( *((_QWORD *)Context + 329) )
            SleepstudyHelper_ComponentInactive();
        }
      }
      else if ( !v9 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(
            *((_QWORD *)Context + 315),
            4u,
            3u,
            0x37u,
            (__int64)&WPP_266c009e770034b9bb66bd8a0240ebba_Traceguids);
        v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, _QWORD, int, const char *))(WdfFunctions_01015 + 3504))(
               WdfDriverGlobals,
               *((_QWORD *)Context + 2),
               0LL,
               0LL,
               5193,
               "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubfdo.c");
        if ( v8 < 0 )
        {
          v8 = 0;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v15) = 0;
            WPP_RECORDER_SF_d(
              *((_QWORD *)Context + 315),
              3u,
              3u,
              0x38u,
              (__int64)&WPP_266c009e770034b9bb66bd8a0240ebba_Traceguids,
              v15);
          }
        }
        else
        {
          _InterlockedOr((volatile signed __int32 *)Context + 10, 0x8000000u);
          if ( *((_QWORD *)Context + 329) )
            SleepstudyHelper_ComponentActive();
        }
      }
      return (unsigned int)v8;
    }
    return (unsigned int)-1073741811;
  }
  if ( RtlCompareMemory(SettingGuid, &GUID_POWER_HUB_SELECTIVE_SUSPEND_TIMEOUT, 0x10uLL) != 16 )
    return (unsigned int)-1073741811;
  v10 = *Value;
  if ( *Value != *((_DWORD *)Context + 644) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_d(
        *((_QWORD *)Context + 315),
        4u,
        3u,
        0x39u,
        (__int64)&WPP_266c009e770034b9bb66bd8a0240ebba_Traceguids,
        *Value);
      v10 = *Value;
    }
    v16[7] = 0;
    *((_DWORD *)Context + 644) = v10;
    v16[3] = *Value;
    v16[6] = 2;
    v16[8] = 2;
    v16[1] = 2;
    v16[4] = 2;
    v16[5] = 2;
    v16[0] = 36;
    v16[2] = 3;
    v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, PVOID))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, Context);
    v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _DWORD *))(WdfFunctions_01015 + 368))(
            WdfDriverGlobals,
            v11,
            v16);
    v8 = v12;
    if ( v12 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v14) = v12;
        WPP_RECORDER_SF_d(
          *((_QWORD *)Context + 315),
          3u,
          3u,
          0x3Au,
          (__int64)&WPP_266c009e770034b9bb66bd8a0240ebba_Traceguids,
          v14);
      }
      return 0;
    }
  }
  return (unsigned int)v8;
}
