/*
 * XREFs of HUBPDO_IdleResiliencyCallback @ 0x1C001A4B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF__guid_dd @ 0x1C0012954 (WPP_RECORDER_SF__guid_dd.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBPDO_IdleResiliencyCallback(
        __int64 SettingGuid,
        unsigned __int8 *Value,
        __int64 ValueLength,
        _QWORD *Context)
{
  unsigned __int8 v4; // bp
  unsigned int v5; // ebx
  __int64 v8; // rdi
  __int64 v9; // rax
  int v11; // [rsp+20h] [rbp-28h]

  v4 = *Value;
  v5 = 0;
  if ( !*Value )
  {
    v8 = Context[2];
    if ( *(_DWORD *)(v8 + 404) )
    {
      PoUnregisterPowerSettingCallback(*(PVOID *)(v8 + 416));
      *(_QWORD *)(v8 + 416) = 0LL;
      _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 404), 0, 1);
      v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v8);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015
                                                                                                + 1648))(
        WdfDriverGlobals,
        v9,
        "DRIPS IO Tag",
        11355LL,
        "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubpdo.c");
    }
    else
    {
      v5 = -1073741811;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF__guid_dd(*(_QWORD *)(Context[1] + 1432LL), v4, ValueLength, 0xA0u, v11, SettingGuid);
  return v5;
}
