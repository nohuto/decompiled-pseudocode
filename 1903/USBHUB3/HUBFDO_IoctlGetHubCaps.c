/*
 * XREFs of HUBFDO_IoctlGetHubCaps @ 0x1C0072350
 * Callers:
 *     HUBFDO_EvtIoDeviceControl @ 0x1C0074290 (HUBFDO_EvtIoDeviceControl.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     McTemplateK0pqq @ 0x1C000B370 (McTemplateK0pqq.c)
 *     HUBMISC_GetActivityIdIrp @ 0x1C002F49C (HUBMISC_GetActivityIdIrp.c)
 *     __security_check_cookie @ 0x1C0041200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0041640 (memset.c)
 *     HUBFDO_IoctlValidateParameters @ 0x1C00718F0 (HUBFDO_IoctlValidateParameters.c)
 */

__int64 __fastcall HUBFDO_IoctlGetHubCaps(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 v7; // rax
  __int64 v8; // rdi
  int v9; // ebx
  int ActivityIdIrp; // eax
  struct _MCGEN_TRACE_CONTEXT *v11; // rcx
  const GUID *v12; // r8
  __int64 v14; // [rsp+20h] [rbp-68h]
  __int64 v15; // [rsp+28h] [rbp-60h]
  int v16; // [rsp+28h] [rbp-60h]
  void *v17; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v18[2]; // [rsp+38h] [rbp-50h] BYREF

  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1256))(WdfDriverGlobals, a1);
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         v7,
         off_1C00640E0);
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, unsigned __int64, void **, _QWORD))(WdfFunctions_01015
                                                                                                  + 2160))(
         WdfDriverGlobals,
         a2,
         a3,
         &v17,
         0LL);
  if ( v9 >= 0 )
  {
    v9 = HUBFDO_IoctlValidateParameters(v8, 0LL, a4, 0LL, 4uLL, a3);
    if ( v9 >= 0 )
    {
      memset(v17, 0, a3);
      if ( (*(_DWORD *)(v8 + 2496) & 2) != 0 )
        *(_DWORD *)v17 |= 1u;
      else
        *(_DWORD *)v17 &= ~1u;
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v16 = v9;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v8 + 2520),
      2u,
      3u,
      0x2Au,
      (__int64)&WPP_266c009e770034b9bb66bd8a0240ebba_Traceguids,
      v16);
  }
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
  {
    v18[0] = 0LL;
    v18[1] = 0LL;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2280))(WdfDriverGlobals, a2);
    ActivityIdIrp = HUBMISC_GetActivityIdIrp();
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
    {
      v12 = (const GUID *)v18;
      LODWORD(v15) = v9;
      LODWORD(v14) = 0;
      if ( ActivityIdIrp < 0 )
        v12 = 0LL;
      McTemplateK0pqq(
        v11,
        &USBHUB3_ETW_EVENT_HUB_IOCTL_USB_GET_HUB_CAPABILITIES_COMPLETE,
        v12,
        *(_QWORD *)(v8 + 248),
        v14,
        v15);
    }
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64))(WdfFunctions_01015 + 2120))(
           WdfDriverGlobals,
           a2,
           (unsigned int)v9,
           4LL);
}
