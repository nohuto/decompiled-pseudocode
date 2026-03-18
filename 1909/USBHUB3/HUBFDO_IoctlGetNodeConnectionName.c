/*
 * XREFs of HUBFDO_IoctlGetNodeConnectionName @ 0x1C007275C
 * Callers:
 *     HUBFDO_EvtIoDeviceControl @ 0x1C0074290 (HUBFDO_EvtIoDeviceControl.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     McTemplateK0pqq @ 0x1C000B370 (McTemplateK0pqq.c)
 *     HUBMISC_GetDeviceInterfacePath @ 0x1C002F368 (HUBMISC_GetDeviceInterfacePath.c)
 *     HUBMISC_GetActivityIdIrp @ 0x1C002F49C (HUBMISC_GetActivityIdIrp.c)
 *     HUBMISC_StripSymbolicNamePrefix @ 0x1C002F4C4 (HUBMISC_StripSymbolicNamePrefix.c)
 *     __security_check_cookie @ 0x1C0041200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0041300 (memmove.c)
 *     memset @ 0x1C0041640 (memset.c)
 *     HUBFDO_IoctlValidateParameters @ 0x1C00718F0 (HUBFDO_IoctlValidateParameters.c)
 */

__int64 __fastcall HUBFDO_IoctlGetNodeConnectionName(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  int v7; // r14d
  __int64 v8; // rax
  _QWORD *v9; // rdi
  int DeviceInterfacePath; // ebx
  __int64 v11; // rbx
  _WORD *v12; // rax
  size_t v13; // r8
  __int64 v14; // r8
  int ActivityIdIrp; // eax
  struct _MCGEN_TRACE_CONTEXT *v16; // rcx
  size_t *v17; // r8
  __int64 v19; // [rsp+20h] [rbp-58h]
  __int64 v20; // [rsp+28h] [rbp-50h]
  int v21; // [rsp+28h] [rbp-50h]
  void *v22; // [rsp+30h] [rbp-48h] BYREF
  __int64 v23; // [rsp+38h] [rbp-40h] BYREF
  _QWORD v24[2]; // [rsp+40h] [rbp-38h] BYREF
  size_t Size[2]; // [rsp+50h] [rbp-28h] BYREF

  v24[0] = 0LL;
  v24[1] = 0LL;
  v23 = 0LL;
  v7 = 0;
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1256))(WdfDriverGlobals, a1);
  v9 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                   WdfDriverGlobals,
                   v8,
                   off_1C00640E0);
  DeviceInterfacePath = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, unsigned __int64, void **, _QWORD))(WdfFunctions_01015 + 2160))(
                          WdfDriverGlobals,
                          a2,
                          a3,
                          &v22,
                          0LL);
  if ( DeviceInterfacePath >= 0 )
  {
    DeviceInterfacePath = HUBFDO_IoctlValidateParameters((__int64)v9, 4uLL, a4, v22, 0xAuLL, a3);
    if ( DeviceInterfacePath < 0 )
      goto LABEL_17;
    v7 = *(unsigned __int16 *)v22;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1072))(WdfDriverGlobals, v9[2]);
    v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, __int64))(WdfFunctions_01015 + 1080))(
            WdfDriverGlobals,
            v9[2],
            0LL,
            1LL);
    if ( !v11 )
      goto LABEL_14;
    do
    {
      if ( v11 != v9[332]
        && *(unsigned __int16 *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015
                                                                                                 + 1616))(
                                   WdfDriverGlobals,
                                   v11,
                                   off_1C0064040)
                               + 48) == v7 )
      {
        break;
      }
      v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64))(WdfFunctions_01015 + 1080))(
              WdfDriverGlobals,
              v9[2],
              v11,
              1LL);
    }
    while ( v11 );
    if ( v11
      && (*(_DWORD *)(*(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015
                                                                                                  + 1616))(
                                    WdfDriverGlobals,
                                    v11,
                                    off_1C0064040)
                                + 24)
                    + 1632LL) & 2) != 0 )
    {
      memset(v22, 0, a3);
      *(_DWORD *)v22 = v7;
      v23 = 0LL;
      DeviceInterfacePath = HUBMISC_GetDeviceInterfacePath((__int64)&GUID_DEVINTERFACE_USB_HUB, v11, &v23, 0LL, v9[315]);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1088))(WdfDriverGlobals, v9[2]);
      if ( DeviceInterfacePath < 0 )
        goto LABEL_17;
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2472))(
        WdfDriverGlobals,
        v23,
        v24);
      v12 = HUBMISC_StripSymbolicNamePrefix((unsigned __int16 *)v24, Size);
      v13 = Size[0];
      *((_DWORD *)v22 + 1) = LODWORD(Size[0]) + 10;
      if ( v13 <= a3 - 8 )
      {
        memmove((char *)v22 + 8, v12, v13);
        v14 = *((unsigned int *)v22 + 1);
LABEL_16:
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 2200))(
          WdfDriverGlobals,
          a2,
          v14);
        DeviceInterfacePath = 0;
        goto LABEL_17;
      }
    }
    else
    {
LABEL_14:
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1088))(WdfDriverGlobals, v9[2]);
      *((_DWORD *)v22 + 1) = 10;
    }
    v14 = 10LL;
    *((_WORD *)v22 + 4) = 0;
    goto LABEL_16;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v21 = DeviceInterfacePath;
    WPP_RECORDER_SF_d(v9[315], 2u, 3u, 0x2Cu, (__int64)&WPP_266c009e770034b9bb66bd8a0240ebba_Traceguids, v21);
  }
LABEL_17:
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
  {
    Size[0] = 0LL;
    Size[1] = 0LL;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2280))(WdfDriverGlobals, a2);
    ActivityIdIrp = HUBMISC_GetActivityIdIrp();
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
    {
      v17 = Size;
      LODWORD(v20) = DeviceInterfacePath;
      LODWORD(v19) = v7;
      if ( ActivityIdIrp < 0 )
        v17 = 0LL;
      McTemplateK0pqq(
        v16,
        &USBHUB3_ETW_EVENT_HUB_IOCTL_USB_GET_NODE_CONNECTION_NAME_COMPLETE,
        (const GUID *)v17,
        v9[31],
        v19,
        v20);
    }
  }
  if ( v23 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
           WdfDriverGlobals,
           a2,
           (unsigned int)DeviceInterfacePath);
}
