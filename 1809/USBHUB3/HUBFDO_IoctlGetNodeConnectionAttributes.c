/*
 * XREFs of HUBFDO_IoctlGetNodeConnectionAttributes @ 0x1C006BE74
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

__int64 __fastcall HUBFDO_IoctlGetNodeConnectionAttributes(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  int v7; // esi
  __int64 v8; // rax
  _QWORD *v9; // rdi
  int v10; // eax
  int v11; // ebx
  _QWORD *i; // rax
  _QWORD *v13; // rcx
  int ActivityIdIrp; // eax
  struct _MCGEN_TRACE_CONTEXT *v15; // rcx
  const GUID *v16; // r8
  __int64 v18; // [rsp+20h] [rbp-68h]
  int v19; // [rsp+28h] [rbp-60h]
  __int64 v20; // [rsp+28h] [rbp-60h]
  void *v21; // [rsp+30h] [rbp-58h] BYREF
  char v22; // [rsp+38h] [rbp-50h] BYREF

  v7 = 0;
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1256))(WdfDriverGlobals, a1);
  v9 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                   WdfDriverGlobals,
                   v8,
                   off_1C005F0E0);
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, unsigned __int64, void **, _QWORD))(WdfFunctions_01015 + 2160))(
          WdfDriverGlobals,
          a2,
          a3,
          &v21,
          0LL);
  v11 = v10;
  if ( v10 >= 0 )
  {
    v11 = HUBFDO_IoctlValidateParameters((__int64)v9, 4uLL, a4, v21, 0xCuLL, a3);
    if ( v11 >= 0 )
    {
      v7 = *(unsigned __int16 *)v21;
      memset(v21, 0, a3);
      *(_DWORD *)v21 = v7;
      *((_DWORD *)v21 + 2) = 0;
      for ( i = (_QWORD *)v9[295]; ; i = (_QWORD *)*i )
      {
        v13 = i - 31;
        if ( v9 + 295 == i )
          goto LABEL_8;
        if ( *((unsigned __int16 *)v13 + 100) == v7 )
          break;
      }
      if ( i == (_QWORD *)248 )
      {
LABEL_8:
        *((_DWORD *)v21 + 1) = 3;
        goto LABEL_9;
      }
      *((_DWORD *)v21 + 1) = *((_DWORD *)v13 + 356);
    }
  }
  else
  {
    v19 = v10;
    WPP_RECORDER_SF_d(v9[315], 2u, 3u, 0x26u, (__int64)&WPP_0e53b71dd48e35ef915a1bb9371a4353_Traceguids, v19);
  }
LABEL_9:
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2280))(WdfDriverGlobals, a2);
    ActivityIdIrp = HUBMISC_GetActivityIdIrp();
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
    {
      v16 = (const GUID *)&v22;
      LODWORD(v20) = v11;
      LODWORD(v18) = v7;
      if ( ActivityIdIrp < 0 )
        v16 = 0LL;
      McTemplateK0pqq(
        v15,
        &USBHUB3_ETW_EVENT_HUB_IOCTL_USB_GET_NODE_CONNECTION_ATTRIBUTES_COMPLETE,
        v16,
        v9[31],
        v18,
        v20);
    }
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64))(WdfFunctions_01015 + 2120))(
           WdfDriverGlobals,
           a2,
           (unsigned int)v11,
           12LL);
}
