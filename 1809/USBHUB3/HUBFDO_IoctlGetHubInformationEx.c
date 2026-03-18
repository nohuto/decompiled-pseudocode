/*
 * XREFs of HUBFDO_IoctlGetHubInformationEx @ 0x1C006CE08
 * Callers:
 *     HUBFDO_EvtIoDeviceControl @ 0x1C006DEA0 (HUBFDO_EvtIoDeviceControl.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001A3C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001E44 (WPP_RECORDER_SF_.c)
 *     McTemplateK0pqq @ 0x1C000A8F8 (McTemplateK0pqq.c)
 *     HUBMISC_GetActivityIdIrp @ 0x1C002CCD0 (HUBMISC_GetActivityIdIrp.c)
 *     __security_check_cookie @ 0x1C003C520 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C003C980 (memset.c)
 *     HUBFDO_IoctlValidateParameters @ 0x1C006B6D0 (HUBFDO_IoctlValidateParameters.c)
 */

__int64 __fastcall HUBFDO_IoctlGetHubInformationEx(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 v7; // rax
  __int64 v8; // rbx
  int v9; // eax
  int v10; // edi
  char *v11; // rcx
  char *v12; // rcx
  int ActivityIdIrp; // eax
  struct _MCGEN_TRACE_CONTEXT *v14; // rcx
  const GUID *v15; // r8
  __int64 v17; // [rsp+20h] [rbp-68h]
  int v18; // [rsp+28h] [rbp-60h]
  __int64 v19; // [rsp+28h] [rbp-60h]
  void *v20; // [rsp+30h] [rbp-58h] BYREF
  char v21; // [rsp+38h] [rbp-50h] BYREF

  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1256))(WdfDriverGlobals, a1);
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         v7,
         off_1C005F0E0);
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, unsigned __int64, void **, _QWORD))(WdfFunctions_01015
                                                                                                  + 2160))(
         WdfDriverGlobals,
         a2,
         a3,
         &v20,
         0LL);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v10 = HUBFDO_IoctlValidateParameters(v8, 0LL, a4, 0LL, 0x4DuLL, a3);
    if ( v10 >= 0 )
    {
      memset(v20, 0, a3);
      *((_WORD *)v20 + 2) = *(_WORD *)(v8 + 48);
      switch ( *(_DWORD *)(v8 + 2216) )
      {
        case 1:
          *(_DWORD *)v20 = 2;
          v12 = (char *)v20;
          *(_OWORD *)((char *)v20 + 6) = *(_OWORD *)(v8 + 1180);
          *(_OWORD *)(v12 + 22) = *(_OWORD *)(v8 + 1196);
          *(_OWORD *)(v12 + 38) = *(_OWORD *)(v8 + 1212);
          *(_OWORD *)(v12 + 54) = *(_OWORD *)(v8 + 1228);
          *(_DWORD *)(v12 + 70) = *(_DWORD *)(v8 + 1244);
          *((_WORD *)v12 + 37) = *(_WORD *)(v8 + 1248);
          v12[76] = *(_BYTE *)(v8 + 1250);
          break;
        case 2:
          *(_DWORD *)v20 = 3;
          v11 = (char *)v20;
          *(_QWORD *)((char *)v20 + 6) = *(_QWORD *)(v8 + 1180);
          *(_DWORD *)(v11 + 14) = *(_DWORD *)(v8 + 1188);
          break;
        case 4:
          *(_DWORD *)v20 = 1;
          break;
        default:
          WPP_RECORDER_SF_(
            *(_QWORD *)(v8 + 2520),
            2u,
            4u,
            0x2Du,
            (__int64)&WPP_0e53b71dd48e35ef915a1bb9371a4353_Traceguids);
          break;
      }
    }
  }
  else
  {
    v18 = v9;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v8 + 2520),
      2u,
      3u,
      0x2Cu,
      (__int64)&WPP_0e53b71dd48e35ef915a1bb9371a4353_Traceguids,
      v18);
  }
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2280))(WdfDriverGlobals, a2);
    ActivityIdIrp = HUBMISC_GetActivityIdIrp();
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
    {
      v15 = (const GUID *)&v21;
      LODWORD(v19) = v10;
      LODWORD(v17) = 0;
      if ( ActivityIdIrp < 0 )
        v15 = 0LL;
      McTemplateK0pqq(
        v14,
        &USBHUB3_ETW_EVENT_HUB_IOCTL_USB_GET_HUB_INFORMATION_EX_COMPLETE,
        v15,
        *(_QWORD *)(v8 + 248),
        v17,
        v19);
    }
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64))(WdfFunctions_01015 + 2120))(
           WdfDriverGlobals,
           a2,
           (unsigned int)v10,
           77LL);
}
