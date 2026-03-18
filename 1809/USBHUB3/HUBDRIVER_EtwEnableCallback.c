/*
 * XREFs of HUBDRIVER_EtwEnableCallback @ 0x1C0069F14
 * Callers:
 *     McGenControlCallbackV2 @ 0x1C0001090 (McGenControlCallbackV2.c)
 * Callees:
 *     McTemplateK0 @ 0x1C0001278 (McTemplateK0.c)
 *     McTemplateK0ppuq @ 0x1C00016CC (McTemplateK0ppuq.c)
 *     __security_check_cookie @ 0x1C003C520 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 *     HUBDRIVER_EtwRundownHub @ 0x1C0069510 (HUBDRIVER_EtwRundownHub.c)
 *     HUBDRIVER_EtwRundownUsbDevice @ 0x1C0069940 (HUBDRIVER_EtwRundownUsbDevice.c)
 */

__int64 __fastcall HUBDRIVER_EtwEnableCallback(__int64 a1, int a2)
{
  __int64 v3; // rdi
  struct _MCGEN_TRACE_CONTEXT *v4; // rcx
  __int64 i; // rax
  __int64 j; // r8
  __int64 v7; // rax
  struct _MCGEN_TRACE_CONTEXT *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rbx
  __int64 v13; // [rsp+28h] [rbp-40h]
  __int64 v14; // [rsp+30h] [rbp-38h]
  _BYTE ActivityId[40]; // [rsp+40h] [rbp-28h] BYREF

  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_1C005F130);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(v3 + 32),
    0LL);
  if ( a2 == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(v3 + 4), 0x1000u);
    *(_QWORD *)ActivityId = 0LL;
    *(_QWORD *)&ActivityId[8] = 0LL;
    EtwActivityIdControl(3u, (LPGUID)ActivityId);
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 1) != 0 )
      McTemplateK0(v4, &USBHUB3_ETW_EVENT_RUNDOWN_START, (const GUID *)ActivityId);
    for ( i = *(_QWORD *)(v3 + 16); ; i = *(_QWORD *)(v11 + 2432) )
    {
      v11 = i - 2432;
      if ( v3 + 16 == i )
        break;
      HUBDRIVER_EtwRundownHub((struct _MCGEN_TRACE_CONTEXT *)ActivityId, i - 2432);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1072))(
        WdfDriverGlobals,
        *(_QWORD *)(v11 + 16));
      for ( j = 0LL; ; j = v10 )
      {
        v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64))(WdfFunctions_01015 + 1080))(
               WdfDriverGlobals,
               *(_QWORD *)(v11 + 16),
               j,
               1LL);
        v10 = v9;
        if ( !v9 )
          break;
        if ( v9 == *(_QWORD *)(v11 + 2616) )
        {
          v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                 WdfDriverGlobals,
                 v9,
                 off_1C005F0B8);
          if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 1) != 0 )
          {
            LODWORD(v14) = *(_DWORD *)(v7 + 28);
            LOBYTE(v13) = *(_BYTE *)(v11 + 160);
            McTemplateK0ppuq(
              v8,
              &USBHUB3_ETW_EVENT_RUNDOWN_FIRMWARE_UPDATE_DEVICE_INFORMATION,
              (const GUID *)ActivityId,
              *(_QWORD *)(v11 + 248),
              *(_QWORD *)(v11 + 2616),
              v13,
              v14);
          }
        }
        else
        {
          HUBDRIVER_EtwRundownUsbDevice((const GUID *)ActivityId, v9);
        }
      }
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1088))(
        WdfDriverGlobals,
        *(_QWORD *)(v11 + 16));
    }
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 1) != 0 )
      McTemplateK0(v4, &USBHUB3_ETW_EVENT_RUNDOWN_COMPLETE, (const GUID *)ActivityId);
  }
  else if ( !a2 )
  {
    _InterlockedAnd((volatile signed __int32 *)(v3 + 4), 0xFFFFEFFF);
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
           WdfDriverGlobals,
           *(_QWORD *)(v3 + 32));
}
