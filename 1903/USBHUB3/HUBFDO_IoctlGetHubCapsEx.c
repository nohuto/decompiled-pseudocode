/*
 * XREFs of HUBFDO_IoctlGetHubCapsEx @ 0x1C0072528
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

__int64 __fastcall HUBFDO_IoctlGetHubCapsEx(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 v7; // rax
  __int64 v8; // rbx
  int v9; // edi
  char v10; // al
  int ActivityIdIrp; // eax
  struct _MCGEN_TRACE_CONTEXT *v12; // rcx
  const GUID *v13; // r8
  __int64 v15; // [rsp+20h] [rbp-30h]
  __int64 v16; // [rsp+28h] [rbp-28h]
  int v17; // [rsp+28h] [rbp-28h]
  void *v18; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v19[2]; // [rsp+38h] [rbp-18h] BYREF

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
         &v18,
         0LL);
  if ( v9 >= 0 )
  {
    v9 = HUBFDO_IoctlValidateParameters(v8, 0LL, a4, 0LL, 4uLL, a3);
    if ( v9 >= 0 )
    {
      memset(v18, 0, a3);
      if ( (*(_DWORD *)(v8 + 2496) & 2) != 0 )
        *(_DWORD *)v18 |= 1u;
      else
        *(_DWORD *)v18 &= ~1u;
      if ( (*(_DWORD *)(v8 + 40) & 2) != 0 )
      {
        *(_DWORD *)v18 |= 8u;
        *(_DWORD *)v18 |= 4u;
      }
      v10 = *(_BYTE *)(v8 + 240);
      if ( !v10 || *(_DWORD *)(v8 + 256) == 2 )
      {
        *(_DWORD *)v18 |= 2u;
        v10 = *(_BYTE *)(v8 + 240);
      }
      if ( !v10 )
        *(_DWORD *)v18 |= 0x10u;
      if ( (*(_DWORD *)(v8 + 40) & 0x100) != 0 )
        *(_DWORD *)v18 |= 0x20u;
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v17 = v9;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v8 + 2520),
      2u,
      3u,
      0x2Bu,
      (__int64)&WPP_266c009e770034b9bb66bd8a0240ebba_Traceguids,
      v17);
  }
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
  {
    v19[0] = 0LL;
    v19[1] = 0LL;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2280))(WdfDriverGlobals, a2);
    ActivityIdIrp = HUBMISC_GetActivityIdIrp();
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
    {
      v13 = (const GUID *)v19;
      LODWORD(v16) = v9;
      LODWORD(v15) = 0;
      if ( ActivityIdIrp < 0 )
        v13 = 0LL;
      McTemplateK0pqq(
        v12,
        &USBHUB3_ETW_EVENT_HUB_IOCTL_USB_GET_HUB_CAPABILITIES_EX_COMPLETE,
        v13,
        *(_QWORD *)(v8 + 248),
        v15,
        v16);
    }
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64))(WdfFunctions_01015 + 2120))(
           WdfDriverGlobals,
           a2,
           (unsigned int)v9,
           4LL);
}
