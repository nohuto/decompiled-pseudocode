/*
 * XREFs of HUBFDO_IoctlGetHubInformationEx @ 0x1C007314C
 * Callers:
 *     HUBFDO_EvtIoDeviceControl @ 0x1C0074290 (HUBFDO_EvtIoDeviceControl.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     McTemplateK0pqq @ 0x1C000B370 (McTemplateK0pqq.c)
 *     HUBMISC_GetActivityIdIrp @ 0x1C002F49C (HUBMISC_GetActivityIdIrp.c)
 *     __security_check_cookie @ 0x1C0041200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0041640 (memset.c)
 *     HUBFDO_IoctlValidateParameters @ 0x1C00718F0 (HUBFDO_IoctlValidateParameters.c)
 */

__int64 __fastcall HUBFDO_IoctlGetHubInformationEx(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 v7; // rax
  __int64 v8; // rbx
  int v9; // edi
  char *v10; // rcx
  char *v11; // rcx
  int ActivityIdIrp; // eax
  struct _MCGEN_TRACE_CONTEXT *v13; // rcx
  const GUID *v14; // r8
  __int64 v16; // [rsp+20h] [rbp-30h]
  __int64 v17; // [rsp+28h] [rbp-28h]
  int v18; // [rsp+28h] [rbp-28h]
  void *v19; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v20[2]; // [rsp+38h] [rbp-18h] BYREF

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
         &v19,
         0LL);
  if ( v9 >= 0 )
  {
    v9 = HUBFDO_IoctlValidateParameters(v8, 0LL, a4, 0LL, 0x4DuLL, a3);
    if ( v9 >= 0 )
    {
      memset(v19, 0, a3);
      *((_WORD *)v19 + 2) = *(_WORD *)(v8 + 48);
      switch ( *(_DWORD *)(v8 + 2216) )
      {
        case 1:
          *(_DWORD *)v19 = 2;
          v11 = (char *)v19;
          *(_OWORD *)((char *)v19 + 6) = *(_OWORD *)(v8 + 1180);
          *(_OWORD *)(v11 + 22) = *(_OWORD *)(v8 + 1196);
          *(_OWORD *)(v11 + 38) = *(_OWORD *)(v8 + 1212);
          *(_OWORD *)(v11 + 54) = *(_OWORD *)(v8 + 1228);
          *(_DWORD *)(v11 + 70) = *(_DWORD *)(v8 + 1244);
          *((_WORD *)v11 + 37) = *(_WORD *)(v8 + 1248);
          v11[76] = *(_BYTE *)(v8 + 1250);
          break;
        case 2:
          *(_DWORD *)v19 = 3;
          v10 = (char *)v19;
          *(_QWORD *)((char *)v19 + 6) = *(_QWORD *)(v8 + 1180);
          *(_DWORD *)(v10 + 14) = *(_DWORD *)(v8 + 1188);
          break;
        case 4:
          *(_DWORD *)v19 = 1;
          break;
        default:
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_(
              *(_QWORD *)(v8 + 2520),
              2u,
              4u,
              0x30u,
              (__int64)&WPP_266c009e770034b9bb66bd8a0240ebba_Traceguids);
          break;
      }
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v18 = v9;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v8 + 2520),
      2u,
      3u,
      0x2Fu,
      (__int64)&WPP_266c009e770034b9bb66bd8a0240ebba_Traceguids,
      v18);
  }
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
  {
    v20[0] = 0LL;
    v20[1] = 0LL;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2280))(WdfDriverGlobals, a2);
    ActivityIdIrp = HUBMISC_GetActivityIdIrp();
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
    {
      v14 = (const GUID *)v20;
      LODWORD(v17) = v9;
      LODWORD(v16) = 0;
      if ( ActivityIdIrp < 0 )
        v14 = 0LL;
      McTemplateK0pqq(
        v13,
        &USBHUB3_ETW_EVENT_HUB_IOCTL_USB_GET_HUB_INFORMATION_EX_COMPLETE,
        v14,
        *(_QWORD *)(v8 + 248),
        v16,
        v17);
    }
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64))(WdfFunctions_01015 + 2120))(
           WdfDriverGlobals,
           a2,
           (unsigned int)v9,
           77LL);
}
