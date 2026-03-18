/*
 * XREFs of HUBFDO_IoctlGetNodeConnectionAttributes @ 0x1C0072110
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

__int64 __fastcall HUBFDO_IoctlGetNodeConnectionAttributes(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  int v7; // esi
  __int64 v8; // rax
  _QWORD *v9; // rdi
  int v10; // ebx
  _QWORD *i; // rax
  _QWORD *v12; // rcx
  int ActivityIdIrp; // eax
  struct _MCGEN_TRACE_CONTEXT *v14; // rcx
  const GUID *v15; // r8
  __int64 v17; // [rsp+20h] [rbp-68h]
  __int64 v18; // [rsp+28h] [rbp-60h]
  int v19; // [rsp+28h] [rbp-60h]
  void *v20; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v21[2]; // [rsp+38h] [rbp-50h] BYREF

  v7 = 0;
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1256))(WdfDriverGlobals, a1);
  v9 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                   WdfDriverGlobals,
                   v8,
                   off_1C00640E0);
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, unsigned __int64, void **, _QWORD))(WdfFunctions_01015 + 2160))(
          WdfDriverGlobals,
          a2,
          a3,
          &v20,
          0LL);
  if ( v10 >= 0 )
  {
    v10 = HUBFDO_IoctlValidateParameters((__int64)v9, 4uLL, a4, v20, 0xCuLL, a3);
    if ( v10 >= 0 )
    {
      v7 = *(unsigned __int16 *)v20;
      memset(v20, 0, a3);
      *(_DWORD *)v20 = v7;
      *((_DWORD *)v20 + 2) = 0;
      for ( i = (_QWORD *)v9[295]; ; i = (_QWORD *)*i )
      {
        v12 = i - 31;
        if ( v9 + 295 == i )
          goto LABEL_9;
        if ( *((unsigned __int16 *)v12 + 100) == v7 )
          break;
      }
      if ( i == (_QWORD *)248 )
      {
LABEL_9:
        *((_DWORD *)v20 + 1) = 3;
        goto LABEL_10;
      }
      *((_DWORD *)v20 + 1) = *((_DWORD *)v12 + 356);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v19 = v10;
    WPP_RECORDER_SF_d(v9[315], 2u, 3u, 0x29u, (__int64)&WPP_266c009e770034b9bb66bd8a0240ebba_Traceguids, v19);
  }
LABEL_10:
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
  {
    v21[0] = 0LL;
    v21[1] = 0LL;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2280))(WdfDriverGlobals, a2);
    ActivityIdIrp = HUBMISC_GetActivityIdIrp();
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
    {
      v15 = (const GUID *)v21;
      LODWORD(v18) = v10;
      LODWORD(v17) = v7;
      if ( ActivityIdIrp < 0 )
        v15 = 0LL;
      McTemplateK0pqq(
        v14,
        &USBHUB3_ETW_EVENT_HUB_IOCTL_USB_GET_NODE_CONNECTION_ATTRIBUTES_COMPLETE,
        v15,
        v9[31],
        v17,
        v18);
    }
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64))(WdfFunctions_01015 + 2120))(
           WdfDriverGlobals,
           a2,
           (unsigned int)v10,
           12LL);
}
