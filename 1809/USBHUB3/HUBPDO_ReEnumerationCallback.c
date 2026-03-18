/*
 * XREFs of HUBPDO_ReEnumerationCallback @ 0x1C0018AB0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001A3C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001E44 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF__guid_dd @ 0x1C00117A8 (WPP_RECORDER_SF__guid_dd.c)
 *     EventWriteUSBHUB3_ETW_EVENT_CLIENT_INITIATED_RECOVERY_ACTION_Wrapper @ 0x1C0018550 (EventWriteUSBHUB3_ETW_EVENT_CLIENT_INITIATED_RECOVERY_ACTION_Wrapper.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBPDO_ReEnumerationCallback(
        __int64 SettingGuid,
        volatile signed __int32 *Value,
        __int64 ValueLength,
        _QWORD *Context)
{
  int v4; // edi
  int v7; // eax
  int v9; // [rsp+20h] [rbp-38h]
  __int64 v10; // [rsp+28h] [rbp-30h]

  v4 = 0;
  if ( !*(_BYTE *)Value )
  {
    Value = (volatile signed __int32 *)Context[2];
    if ( *((_DWORD *)Value + 100) == 1 )
    {
      if ( _InterlockedCompareExchange(Value + 1, 1, 0) )
      {
        WPP_RECORDER_SF_(
          *(_QWORD *)(Context[1] + 1432LL),
          3u,
          5u,
          0x94u,
          (__int64)&WPP_7c9a8c1f1a7c3ca72e1c468f1757432b_Traceguids);
      }
      else
      {
        LOBYTE(ValueLength) = 1;
        v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, _QWORD, int, const char *))(WdfFunctions_01015 + 3504))(
               WdfDriverGlobals,
               *(_QWORD *)(*Context + 16LL),
               ValueLength,
               0LL,
               10909,
               "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubpdo.c");
        v4 = v7;
        if ( v7 < 0 )
        {
          LODWORD(v10) = v7;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*Context + 2520LL),
            2u,
            3u,
            0x92u,
            (__int64)&WPP_7c9a8c1f1a7c3ca72e1c468f1757432b_Traceguids,
            v10);
        }
        WPP_RECORDER_SF_(
          *(_QWORD *)(Context[1] + 1432LL),
          4u,
          2u,
          0x93u,
          (__int64)&WPP_7c9a8c1f1a7c3ca72e1c468f1757432b_Traceguids);
        EventWriteUSBHUB3_ETW_EVENT_CLIENT_INITIATED_RECOVERY_ACTION_Wrapper((__int64)Context, 2228255LL, 0);
        (*(void (__fastcall **)(_QWORD, __int64))(Context[1] + 1240LL))(Context[1], 3011LL);
        if ( v4 >= 0 )
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, __int64, const char *))(WdfFunctions_01015 + 3512))(
            WdfDriverGlobals,
            *(_QWORD *)(*Context + 16LL),
            0LL,
            10934LL,
            "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubpdo.c");
      }
    }
    else
    {
      v4 = -1073741811;
    }
  }
  WPP_RECORDER_SF__guid_dd(*(_QWORD *)(Context[1] + 1432LL), (__int64)Value, ValueLength, 0x95u, v9, SettingGuid);
  return (unsigned int)v4;
}
