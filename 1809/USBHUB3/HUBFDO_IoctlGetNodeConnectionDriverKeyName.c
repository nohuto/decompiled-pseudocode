/*
 * XREFs of HUBFDO_IoctlGetNodeConnectionDriverKeyName @ 0x1C006BB1C
 * Callers:
 *     HUBFDO_EvtIoDeviceControl @ 0x1C006DEA0 (HUBFDO_EvtIoDeviceControl.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001A3C (WPP_RECORDER_SF_d.c)
 *     McTemplateK0pqq @ 0x1C000A8F8 (McTemplateK0pqq.c)
 *     HUBMISC_GetActivityIdIrp @ 0x1C002CCD0 (HUBMISC_GetActivityIdIrp.c)
 *     __security_check_cookie @ 0x1C003C520 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C003C980 (memset.c)
 *     HUBFDO_IoctlValidateParameters @ 0x1C006B6D0 (HUBFDO_IoctlValidateParameters.c)
 */

__int64 __fastcall HUBFDO_IoctlGetNodeConnectionDriverKeyName(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  int v7; // r15d
  __int64 v8; // rax
  _QWORD *v9; // rdi
  int v10; // eax
  int v11; // ebx
  __int64 i; // r8
  __int64 v13; // rax
  __int64 v14; // rbx
  unsigned int v15; // ecx
  int ActivityIdIrp; // eax
  struct _MCGEN_TRACE_CONTEXT *v17; // rcx
  const GUID *v18; // r8
  char *v20; // [rsp+20h] [rbp-58h]
  int *v21; // [rsp+28h] [rbp-50h]
  void *v22; // [rsp+40h] [rbp-38h] BYREF
  int v23; // [rsp+48h] [rbp-30h] BYREF
  char v24; // [rsp+50h] [rbp-28h] BYREF

  v7 = 0;
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1256))(WdfDriverGlobals, a1);
  v9 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                   WdfDriverGlobals,
                   v8,
                   off_1C005F0E0);
  v22 = 0LL;
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, unsigned __int64, void **, _QWORD))(WdfFunctions_01015 + 2160))(
          WdfDriverGlobals,
          a2,
          a3,
          &v22,
          0LL);
  v11 = v10;
  if ( v10 >= 0 )
  {
    v11 = HUBFDO_IoctlValidateParameters((__int64)v9, 4uLL, a4, v22, 0xAuLL, a3);
    if ( v11 >= 0 )
    {
      v7 = *(unsigned __int16 *)v22;
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1072))(WdfDriverGlobals, v9[2]);
      for ( i = 0LL; ; i = v14 )
      {
        v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64))(WdfFunctions_01015 + 1080))(
                WdfDriverGlobals,
                v9[2],
                i,
                1LL);
        v14 = v13;
        if ( !v13
          || v13 != v9[327]
          && *(unsigned __int16 *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                                     WdfDriverGlobals,
                                     v13,
                                     off_1C005F040)
                                 + 48) == v7 )
        {
          break;
        }
      }
      if ( v14 )
      {
        memset(v22, 0, a3);
        v21 = &v23;
        *(_DWORD *)v22 = v7;
        v20 = (char *)v22 + 8;
        v23 = a3 - 8;
        v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 648))(
                WdfDriverGlobals,
                v14,
                7LL);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1088))(WdfDriverGlobals, v9[2]);
        if ( v11 == -1073741789 )
          v11 = 0;
        if ( v11 >= 0 )
        {
          v15 = v23 + 10;
          *((_DWORD *)v22 + 1) = v23 + 10;
          if ( a3 < v15 )
            *((_WORD *)v22 + 4) = 0;
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2200))(WdfDriverGlobals, a2);
        }
      }
      else
      {
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1088))(WdfDriverGlobals, v9[2]);
        v11 = -1073741811;
      }
    }
  }
  else
  {
    WPP_RECORDER_SF_d(v9[315], 2u, 3u, 0x24u, (__int64)&WPP_0e53b71dd48e35ef915a1bb9371a4353_Traceguids, v10);
  }
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2280))(WdfDriverGlobals, a2);
    ActivityIdIrp = HUBMISC_GetActivityIdIrp();
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
    {
      v18 = (const GUID *)&v24;
      LODWORD(v21) = v11;
      LODWORD(v20) = v7;
      if ( ActivityIdIrp < 0 )
        v18 = 0LL;
      McTemplateK0pqq(
        v17,
        &USBHUB3_ETW_EVENT_HUB_IOCTL_USB_GET_NODE_CONNECTION_DRIVERKEY_NAME_COMPLETE,
        v18,
        v9[31],
        v20,
        v21);
    }
  }
  if ( v11 < 0 && v22 && a3 >= 0xA )
  {
    *((_WORD *)v22 + 4) = 0;
    *((_DWORD *)v22 + 1) = 10;
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
           WdfDriverGlobals,
           a2,
           (unsigned int)v11);
}
