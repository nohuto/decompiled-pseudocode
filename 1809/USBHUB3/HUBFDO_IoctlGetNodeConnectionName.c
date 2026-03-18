/*
 * XREFs of HUBFDO_IoctlGetNodeConnectionName @ 0x1C006C468
 * Callers:
 *     HUBFDO_EvtIoDeviceControl @ 0x1C006DEA0 (HUBFDO_EvtIoDeviceControl.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001A3C (WPP_RECORDER_SF_d.c)
 *     McTemplateK0pqq @ 0x1C000A8F8 (McTemplateK0pqq.c)
 *     HUBMISC_GetDeviceInterfacePath @ 0x1C002CBAC (HUBMISC_GetDeviceInterfacePath.c)
 *     HUBMISC_GetActivityIdIrp @ 0x1C002CCD0 (HUBMISC_GetActivityIdIrp.c)
 *     HUBMISC_StripSymbolicNamePrefix @ 0x1C002CCF8 (HUBMISC_StripSymbolicNamePrefix.c)
 *     __security_check_cookie @ 0x1C003C520 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C003C640 (memmove.c)
 *     memset @ 0x1C003C980 (memset.c)
 *     HUBFDO_IoctlValidateParameters @ 0x1C006B6D0 (HUBFDO_IoctlValidateParameters.c)
 */

__int64 __fastcall HUBFDO_IoctlGetNodeConnectionName(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  int v7; // r14d
  __int64 v8; // rax
  _QWORD *v9; // rdi
  int v10; // eax
  int DeviceInterfacePath; // ebx
  __int64 v12; // rbx
  _WORD *v13; // rax
  size_t v14; // r8
  __int64 v15; // r8
  int ActivityIdIrp; // eax
  struct _MCGEN_TRACE_CONTEXT *v17; // rcx
  size_t *v18; // r8
  __int64 v20; // [rsp+20h] [rbp-58h]
  int v21; // [rsp+28h] [rbp-50h]
  __int64 v22; // [rsp+28h] [rbp-50h]
  void *v23; // [rsp+30h] [rbp-48h] BYREF
  __int64 v24; // [rsp+38h] [rbp-40h] BYREF
  unsigned __int16 v25[8]; // [rsp+40h] [rbp-38h] BYREF
  size_t Size[2]; // [rsp+50h] [rbp-28h] BYREF

  v24 = 0LL;
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
          &v23,
          0LL);
  DeviceInterfacePath = v10;
  if ( v10 >= 0 )
  {
    DeviceInterfacePath = HUBFDO_IoctlValidateParameters((__int64)v9, 4uLL, a4, v23, 0xAuLL, a3);
    if ( DeviceInterfacePath < 0 )
      goto LABEL_16;
    v7 = *(unsigned __int16 *)v23;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1072))(WdfDriverGlobals, v9[2]);
    v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, __int64))(WdfFunctions_01015 + 1080))(
            WdfDriverGlobals,
            v9[2],
            0LL,
            1LL);
    if ( !v12 )
      goto LABEL_13;
    do
    {
      if ( v12 != v9[327]
        && *(unsigned __int16 *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015
                                                                                                 + 1616))(
                                   WdfDriverGlobals,
                                   v12,
                                   off_1C005F040)
                               + 48) == v7 )
      {
        break;
      }
      v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64))(WdfFunctions_01015 + 1080))(
              WdfDriverGlobals,
              v9[2],
              v12,
              1LL);
    }
    while ( v12 );
    if ( v12
      && (*(_DWORD *)(*(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015
                                                                                                  + 1616))(
                                    WdfDriverGlobals,
                                    v12,
                                    off_1C005F040)
                                + 24)
                    + 1632LL) & 2) != 0 )
    {
      memset(v23, 0, a3);
      *(_DWORD *)v23 = v7;
      v24 = 0LL;
      DeviceInterfacePath = HUBMISC_GetDeviceInterfacePath((__int64)&GUID_DEVINTERFACE_USB_HUB, v12, &v24, 0LL, v9[315]);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1088))(WdfDriverGlobals, v9[2]);
      if ( DeviceInterfacePath < 0 )
        goto LABEL_16;
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, unsigned __int16 *))(WdfFunctions_01015 + 2472))(
        WdfDriverGlobals,
        v24,
        v25);
      v13 = HUBMISC_StripSymbolicNamePrefix(v25, Size);
      v14 = Size[0];
      *((_DWORD *)v23 + 1) = LODWORD(Size[0]) + 10;
      if ( v14 <= a3 - 8 )
      {
        memmove((char *)v23 + 8, v13, v14);
        v15 = *((unsigned int *)v23 + 1);
LABEL_15:
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 2200))(
          WdfDriverGlobals,
          a2,
          v15);
        DeviceInterfacePath = 0;
        goto LABEL_16;
      }
    }
    else
    {
LABEL_13:
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1088))(WdfDriverGlobals, v9[2]);
      *((_DWORD *)v23 + 1) = 10;
    }
    v15 = 10LL;
    *((_WORD *)v23 + 4) = 0;
    goto LABEL_15;
  }
  v21 = v10;
  WPP_RECORDER_SF_d(v9[315], 2u, 3u, 0x29u, (__int64)&WPP_0e53b71dd48e35ef915a1bb9371a4353_Traceguids, v21);
LABEL_16:
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2280))(WdfDriverGlobals, a2);
    ActivityIdIrp = HUBMISC_GetActivityIdIrp();
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
    {
      v18 = Size;
      LODWORD(v22) = DeviceInterfacePath;
      LODWORD(v20) = v7;
      if ( ActivityIdIrp < 0 )
        v18 = 0LL;
      McTemplateK0pqq(
        v17,
        &USBHUB3_ETW_EVENT_HUB_IOCTL_USB_GET_NODE_CONNECTION_NAME_COMPLETE,
        (const GUID *)v18,
        v9[31],
        v20,
        v22);
    }
  }
  if ( v24 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
           WdfDriverGlobals,
           a2,
           (unsigned int)DeviceInterfacePath);
}
