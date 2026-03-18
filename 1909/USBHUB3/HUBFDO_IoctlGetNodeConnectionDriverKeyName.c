/*
 * XREFs of HUBFDO_IoctlGetNodeConnectionDriverKeyName @ 0x1C0071D98
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

__int64 __fastcall HUBFDO_IoctlGetNodeConnectionDriverKeyName(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  int v7; // r15d
  __int64 v8; // rax
  _QWORD *v9; // rdi
  int v10; // ebx
  __int64 i; // r8
  __int64 v12; // rax
  __int64 v13; // rbx
  unsigned int v14; // ecx
  int ActivityIdIrp; // eax
  struct _MCGEN_TRACE_CONTEXT *v16; // rcx
  const GUID *v17; // r8
  char *v19; // [rsp+20h] [rbp-58h]
  int *v20; // [rsp+28h] [rbp-50h]
  void *v21; // [rsp+40h] [rbp-38h] BYREF
  int v22; // [rsp+48h] [rbp-30h] BYREF
  _QWORD v23[2]; // [rsp+50h] [rbp-28h] BYREF

  v7 = 0;
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1256))(WdfDriverGlobals, a1);
  v9 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                   WdfDriverGlobals,
                   v8,
                   off_1C00640E0);
  v21 = 0LL;
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, unsigned __int64, void **, _QWORD))(WdfFunctions_01015 + 2160))(
          WdfDriverGlobals,
          a2,
          a3,
          &v21,
          0LL);
  if ( v10 >= 0 )
  {
    v10 = HUBFDO_IoctlValidateParameters((__int64)v9, 4uLL, a4, v21, 0xAuLL, a3);
    if ( v10 >= 0 )
    {
      v7 = *(unsigned __int16 *)v21;
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1072))(WdfDriverGlobals, v9[2]);
      for ( i = 0LL; ; i = v13 )
      {
        v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64))(WdfFunctions_01015 + 1080))(
                WdfDriverGlobals,
                v9[2],
                i,
                1LL);
        v13 = v12;
        if ( !v12
          || v12 != v9[332]
          && *(unsigned __int16 *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                                     WdfDriverGlobals,
                                     v12,
                                     off_1C0064040)
                                 + 48) == v7 )
        {
          break;
        }
      }
      if ( v13 )
      {
        memset(v21, 0, a3);
        v20 = &v22;
        *(_DWORD *)v21 = v7;
        v19 = (char *)v21 + 8;
        v22 = a3 - 8;
        v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 648))(
                WdfDriverGlobals,
                v13,
                7LL);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1088))(WdfDriverGlobals, v9[2]);
        if ( v10 == -1073741789 )
          v10 = 0;
        if ( v10 >= 0 )
        {
          v14 = v22 + 10;
          *((_DWORD *)v21 + 1) = v22 + 10;
          if ( a3 < v14 )
            *((_WORD *)v21 + 4) = 0;
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2200))(WdfDriverGlobals, a2);
        }
      }
      else
      {
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1088))(WdfDriverGlobals, v9[2]);
        v10 = -1073741811;
      }
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_d(v9[315], 2u, 3u, 0x27u, (__int64)&WPP_266c009e770034b9bb66bd8a0240ebba_Traceguids, v10);
  }
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
  {
    v23[0] = 0LL;
    v23[1] = 0LL;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2280))(WdfDriverGlobals, a2);
    ActivityIdIrp = HUBMISC_GetActivityIdIrp();
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
    {
      v17 = (const GUID *)v23;
      LODWORD(v20) = v10;
      LODWORD(v19) = v7;
      if ( ActivityIdIrp < 0 )
        v17 = 0LL;
      McTemplateK0pqq(
        v16,
        &USBHUB3_ETW_EVENT_HUB_IOCTL_USB_GET_NODE_CONNECTION_DRIVERKEY_NAME_COMPLETE,
        v17,
        v9[31],
        v19,
        v20);
    }
  }
  if ( v10 < 0 && v21 && a3 >= 0xA )
  {
    *((_WORD *)v21 + 4) = 0;
    *((_DWORD *)v21 + 1) = 10;
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
           WdfDriverGlobals,
           a2,
           (unsigned int)v10);
}
