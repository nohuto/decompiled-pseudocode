/*
 * XREFs of HUBFDO_IoctlResetHub @ 0x1C006DD10
 * Callers:
 *     HUBFDO_EvtIoDeviceControl @ 0x1C006DEA0 (HUBFDO_EvtIoDeviceControl.c)
 * Callees:
 *     McTemplateK0pqq @ 0x1C000A8F8 (McTemplateK0pqq.c)
 *     HUBMUX_CheckAndQueueIfResetHubIsEnabled @ 0x1C000E068 (HUBMUX_CheckAndQueueIfResetHubIsEnabled.c)
 *     HUBMISC_GetActivityIdIrp @ 0x1C002CCD0 (HUBMISC_GetActivityIdIrp.c)
 *     __security_check_cookie @ 0x1C003C520 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 *     HUBMISC_VerifyCallerIsAdmin @ 0x1C0072858 (HUBMISC_VerifyCallerIsAdmin.c)
 */

__int64 __fastcall HUBFDO_IoctlResetHub(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rsi
  int IsAdmin; // ebx
  __int64 v7; // rax
  __int64 v8; // rax
  int ActivityIdIrp; // eax
  struct _MCGEN_TRACE_CONTEXT *v10; // rcx
  const GUID *v11; // r8
  int v13; // [rsp+20h] [rbp-48h]
  int v14; // [rsp+28h] [rbp-40h]
  char v15; // [rsp+30h] [rbp-38h] BYREF

  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1256))(WdfDriverGlobals, a1);
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         v4,
         off_1C005F0E0);
  IsAdmin = HUBMISC_VerifyCallerIsAdmin(*(_QWORD *)(v5 + 2520));
  if ( IsAdmin >= 0 )
  {
    v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1256))(WdfDriverGlobals, a1);
    v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
           WdfDriverGlobals,
           v7,
           off_1C005F0E0);
    if ( !HUBMUX_CheckAndQueueIfResetHubIsEnabled(v8) )
      IsAdmin = -1073741823;
  }
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2280))(WdfDriverGlobals, a2);
    ActivityIdIrp = HUBMISC_GetActivityIdIrp();
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
    {
      v11 = (const GUID *)&v15;
      v14 = IsAdmin;
      v13 = 0;
      if ( ActivityIdIrp < 0 )
        v11 = 0LL;
      McTemplateK0pqq(v10, &USBHUB3_ETW_EVENT_HUB_IOCTL_USB_RESET_HUB_COMPLETE, v11, *(_QWORD *)(v5 + 248), v13, v14);
    }
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
           WdfDriverGlobals,
           a2,
           0LL);
}
