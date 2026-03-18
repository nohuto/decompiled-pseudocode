/*
 * XREFs of HUBFDO_EvtDeviceAdd @ 0x1C00702C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchPrintfA @ 0x1C00010B0 (RtlStringCchPrintfA.c)
 *     McTemplateK0 @ 0x1C0001318 (McTemplateK0.c)
 *     McTemplateK0pq @ 0x1C0001864 (McTemplateK0pq.c)
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddHsmEvent @ 0x1C0009798 (HUBSM_AddHsmEvent.c)
 *     HUBFDO_GetDeviceCapabilities @ 0x1C000B5A4 (HUBFDO_GetDeviceCapabilities.c)
 *     HSMMUX_InitializeHSMMuxContext @ 0x1C000E04C (HSMMUX_InitializeHSMMuxContext.c)
 *     HUBMISC_WaitForSignal @ 0x1C002EB20 (HUBMISC_WaitForSignal.c)
 *     __security_check_cookie @ 0x1C0041200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0041640 (memset.c)
 *     HUBMISC_InitializeHsm @ 0x1C0079070 (HUBMISC_InitializeHsm.c)
 */

__int64 __fastcall HUBFDO_EvtDeviceAdd(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  struct _MCGEN_TRACE_CONTEXT *v3; // rcx
  __int64 v4; // rdi
  __int64 v5; // r9
  struct _MCGEN_TRACE_CONTEXT *v6; // rcx
  int DeviceCapabilities; // ebx
  __int64 v8; // rax
  unsigned __int16 v9; // r9
  struct _DEVICE_OBJECT *v10; // rax
  NTSTATUS v11; // ebx
  __int64 v12; // rax
  __int64 *v13; // r14
  __int64 v14; // r9
  __int64 v15; // r9
  __int64 v16; // r9
  __int64 v17; // r9
  __int64 v18; // rax
  unsigned __int16 v19; // r9
  unsigned int v20; // r8d
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rax
  int v24; // eax
  const void *v25; // rax
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 v29; // [rsp+28h] [rbp-E0h]
  __int64 v30; // [rsp+30h] [rbp-D8h]
  __int64 v31; // [rsp+38h] [rbp-D0h]
  __int64 v32; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v33; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v34[4]; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v35; // [rsp+78h] [rbp-90h]
  void *v36; // [rsp+88h] [rbp-80h]
  _OWORD v37[4]; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v38[8]; // [rsp+D8h] [rbp-30h] BYREF
  _QWORD v39[12]; // [rsp+118h] [rbp+10h] BYREF
  _QWORD v40[18]; // [rsp+178h] [rbp+70h] BYREF
  GUID v41; // [rsp+208h] [rbp+100h] BYREF
  __int64 v42; // [rsp+218h] [rbp+110h]
  _QWORD v43[6]; // [rsp+220h] [rbp+118h] BYREF
  _DWORD v44[12]; // [rsp+250h] [rbp+148h] BYREF

  v33 = a2;
  v41 = (GUID)0LL;
  v2 = a2;
  HIDWORD(v34[0]) = 0;
  v42 = 0LL;
  v35 = 0LL;
  memset(v39, 0, sizeof(v39));
  memset(v38, 0, 0x38uLL);
  memset(v44, 0, sizeof(v44));
  memset(v37, 0, sizeof(v37));
  memset(v43, 0, sizeof(v43));
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
  {
    McTemplateK0(v3, &USBHUB3_ETW_EVENT_HUB_ADD_DEVICE_START, 0LL);
    v2 = v33;
  }
  v34[0] = 56LL;
  v34[3] = 0x100000001LL;
  v36 = off_1C00640E0;
  v34[1] = HUBFDO_EvtDeviceCleanupCallback;
  v4 = 0LL;
  v34[2] = HUBFDO_EvtDeviceDestroyCallback;
  v35 = 0LL;
  memset(v40, 0, sizeof(v40));
  v40[1] = HUBFDO_EvtDeviceD0Entry;
  LODWORD(v40[0]) = 144;
  v40[3] = HUBFDO_EvtDeviceD0Exit;
  v40[5] = HUBFDO_EvtDevicePrepareHardware;
  v40[6] = HUBFDO_EvtDeviceReleaseHardware;
  v40[12] = HUBFDO_EvtDeviceSurpriseRemoval;
  v40[15] = HUBFDO_EvtDeviceUsageNotification;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 440))(WdfDriverGlobals, v2, v40);
  LOBYTE(v5) = 16;
  DeviceCapabilities = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(__int64, IRP *), __int64, _QWORD, _DWORD))(WdfFunctions_01015 + 584))(
                         WdfDriverGlobals,
                         v33,
                         HUBFDO_EvtDeviceShutdownPreprocess,
                         v5,
                         0LL,
                         0);
  if ( DeviceCapabilities < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_41;
    v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
           WdfDriverGlobals,
           WdfDriverGlobals->Driver,
           off_1C0064130);
    v9 = 12;
    goto LABEL_6;
  }
  *((_QWORD *)&v37[0] + 1) = HUBFDO_EvtDeviceArmWakeFromS0;
  *(_QWORD *)&v37[0] = 64LL;
  *(_QWORD *)&v37[1] = HUBFDO_EvtDeviceDisarmWakeFromS0;
  *(_QWORD *)&v37[2] = HUBFDO_EvtDeviceArmWakeFromSx;
  *((_QWORD *)&v37[2] + 1) = HUBFDO_EvtDeviceDisarmWakeFromSx;
  *((_QWORD *)&v37[1] + 1) = 0LL;
  v37[3] = 0LL;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01015 + 448))(
    WdfDriverGlobals,
    v33,
    v37);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 3440))(
    WdfDriverGlobals,
    v33,
    2LL);
  DeviceCapabilities = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *, _QWORD *, __int64 *))(WdfFunctions_01015 + 600))(
                         WdfDriverGlobals,
                         &v33,
                         v34,
                         &v32);
  if ( DeviceCapabilities >= 0 )
  {
    v10 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 248))(
                                     WdfDriverGlobals,
                                     v32);
    v11 = IoRegisterShutdownNotification(v10);
    if ( v11 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
              WdfDriverGlobals,
              WdfDriverGlobals->Driver,
              off_1C0064130);
      LODWORD(v30) = v11;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v12 + 64),
        2u,
        2u,
        0xEu,
        (__int64)&WPP_266c009e770034b9bb66bd8a0240ebba_Traceguids,
        v30);
    }
    v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
           WdfDriverGlobals,
           v32,
           off_1C00640E0);
    *(_QWORD *)(v4 + 16) = v32;
    *(_QWORD *)(v4 + 24) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 264))(
                             WdfDriverGlobals,
                             v32);
    *(_QWORD *)v4 = &g_Usbhub3_Triage_Info;
    *(_DWORD *)(v4 + 96) = USBD_AllocateHubNumber();
    v43[0] = 48LL;
    HIDWORD(v43[3]) = 16;
    LOBYTE(v43[4]) = 0;
    v43[2] = v4;
    LOBYTE(v43[3]) = 1;
    v43[1] = 0x20000000400LL;
    RtlStringCchPrintfA((NTSTRSAFE_PSTR)&v43[4], 0x10uLL, "hub%d", *(_DWORD *)(v4 + 96));
    v13 = (__int64 *)(v4 + 2520);
    if ( (int)imp_WppRecorderLogCreate(WPP_GLOBAL_Control, v43, v4 + 2520) < 0 )
      *v13 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015
                                                                                               + 1616))(
                           WdfDriverGlobals,
                           WdfDriverGlobals->Driver,
                           off_1C0064130)
                       + 64);
    LOBYTE(v14) = 1;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64))(WdfFunctions_01015 + 392))(
      WdfDriverGlobals,
      v32,
      1LL,
      v14);
    LOBYTE(v15) = 1;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64))(WdfFunctions_01015 + 392))(
      WdfDriverGlobals,
      v32,
      2LL,
      v15);
    LOBYTE(v16) = 1;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64))(WdfFunctions_01015 + 392))(
      WdfDriverGlobals,
      v32,
      3LL,
      v16);
    LOBYTE(v17) = 1;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64))(WdfFunctions_01015 + 392))(
      WdfDriverGlobals,
      v32,
      4LL,
      v17);
    DeviceCapabilities = HUBFDO_GetDeviceCapabilities(v32, (_DWORD *)(v4 + 696), *v13);
    if ( DeviceCapabilities < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_41;
      v18 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
              WdfDriverGlobals,
              WdfDriverGlobals->Driver,
              off_1C0064130);
      v19 = 15;
      LODWORD(v30) = DeviceCapabilities;
      v20 = 2;
      v21 = *(_QWORD *)(v18 + 64);
      goto LABEL_18;
    }
    v44[10] = -1;
    v44[11] = -1;
    v44[0] = 48;
    *(__m128i *)&v44[1] = _mm_load_si128((const __m128i *)&_xmm);
    v44[5] = 2;
    v44[6] = 2;
    v44[8] = 2;
    v44[9] = 2;
    v44[7] = 1;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _DWORD *))(WdfFunctions_01015 + 664))(
      WdfDriverGlobals,
      v32,
      v44);
    *(_QWORD *)(v4 + 336) = v4;
    LOWORD(v30) = 1013;
    LOWORD(v29) = 136;
    v22 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *, __int64, _DWORD, _DWORD, _QWORD))(WdfFunctions_01015 + 1048))(
            WdfDriverGlobals,
            v32,
            &GUID_HUB_PARENT_INTERFACE,
            v4 + 208,
            v29,
            v30,
            0LL);
    DeviceCapabilities = v22;
    if ( v22 >= 0 )
    {
      if ( !*(_BYTE *)(v4 + 240) )
      {
        v23 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 336))(
                WdfDriverGlobals,
                v32);
        *(_QWORD *)(v4 + 2448) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1424))(
                                   WdfDriverGlobals,
                                   v23);
        *(_QWORD *)(v4 + 32) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 336))(
                                 WdfDriverGlobals,
                                 v32);
        *(_DWORD *)(v4 + 92) = 500;
      }
      *(_QWORD *)(v4 + 376) = *(_QWORD *)(v4 + 248);
      *(_QWORD *)(v4 + 384) = v4;
      *(_QWORD *)(v4 + 392) = HUBHTX_ClearTTBuffer;
      *(_QWORD *)(v4 + 536) = HUBPDO_NoPingResponse;
      LOWORD(v30) = 2000;
      LOWORD(v29) = 256;
      if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *, __int64, _DWORD, _DWORD, _QWORD))(WdfFunctions_01015 + 1048))(
             WdfDriverGlobals,
             v32,
             &GUID_HUB_CONTROLLERSTACK_INTERFACE,
             v4 + 344,
             v29,
             v30,
             0LL) >= 0
        || (LOWORD(v30) = 1000,
            LOWORD(v29) = 256,
            v22 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *, __int64, _DWORD, _DWORD, _QWORD))(WdfFunctions_01015 + 1048))(
                    WdfDriverGlobals,
                    v32,
                    &GUID_HUB_CONTROLLERSTACK_INTERFACE,
                    v4 + 344,
                    v29,
                    v30,
                    0LL),
            DeviceCapabilities = v22,
            v22 >= 0) )
      {
        if ( *(_BYTE *)(v4 + 240) )
          v31 = 0LL;
        else
          v31 = *(_QWORD *)(v4 + 248);
        LOWORD(v30) = 3;
        LOWORD(v29) = 96;
        v24 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const GUID *, __int64, _DWORD, _DWORD, __int64))(WdfFunctions_01015 + 1048))(
                WdfDriverGlobals,
                v32,
                &USB_BUS_INTERFACE_USBDI_GUID,
                v4 + 600,
                v29,
                v30,
                v31);
        DeviceCapabilities = v24;
        if ( v24 < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_41;
          v19 = 18;
          LODWORD(v30) = v24;
          goto LABEL_23;
        }
        LODWORD(v38[0]) = 56;
        LODWORD(v39[0]) = 96;
        v38[3] = 0x100000002LL;
        BYTE5(v39[1]) = 1;
        v39[5] = HUBFDO_EvtIoDeviceControl;
        v39[6] = HUBFDO_EvtIoInternalDeviceControlFromPDO;
        *(_QWORD *)((char *)v39 + 4) = 1LL;
        v38[6] = off_1C00641D0;
        v22 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *, _QWORD *, __int64))(WdfFunctions_01015 + 1216))(
                WdfDriverGlobals,
                v32,
                v39,
                v38,
                v4 + 2400);
        DeviceCapabilities = v22;
        if ( v22 >= 0 )
        {
          v41 = GUID_BUS_TYPE_USB;
          v42 = 15LL;
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *))(WdfFunctions_01015 + 680))(
            WdfDriverGlobals,
            v32,
            &v41);
          HSMMUX_InitializeHSMMuxContext(v4);
          DeviceCapabilities = HUBMISC_InitializeHsm(v4);
          if ( DeviceCapabilities >= 0 )
          {
            _InterlockedOr((volatile signed __int32 *)(v4 + 40), 0x20u);
            KeResetEvent((PRKEVENT)(v4 + 1152));
            HUBSM_AddHsmEvent(v4, 2023LL);
            v25 = (const void *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(
                                  WdfDriverGlobals,
                                  v4);
            HUBMISC_WaitForSignal((PVOID)(v4 + 1152), "Hub FDO PnpCallback", v25);
            DeviceCapabilities = *(_DWORD *)(v4 + 1176);
          }
          goto LABEL_41;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_41;
        v19 = 19;
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_41;
        v19 = 17;
      }
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_41;
      v19 = 16;
    }
    LODWORD(v30) = v22;
LABEL_23:
    v21 = *v13;
    v20 = 3;
LABEL_18:
    WPP_RECORDER_SF_d(v21, 2u, v20, v19, (__int64)&WPP_266c009e770034b9bb66bd8a0240ebba_Traceguids, v30);
    goto LABEL_41;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
           WdfDriverGlobals,
           WdfDriverGlobals->Driver,
           off_1C0064130);
    v9 = 13;
LABEL_6:
    LODWORD(v30) = DeviceCapabilities;
    WPP_RECORDER_SF_d(*(_QWORD *)(v8 + 64), 2u, 2u, v9, (__int64)&WPP_266c009e770034b9bb66bd8a0240ebba_Traceguids, v30);
  }
LABEL_41:
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
  {
    if ( v4 )
      v26 = *(_QWORD *)(v4 + 248);
    else
      v26 = 0LL;
    LODWORD(v29) = DeviceCapabilities;
    McTemplateK0pq(v6, &USBHUB3_ETW_EVENT_HUB_ADD_DEVICE_COMPLETE, 0LL, v26, v29);
  }
  if ( DeviceCapabilities < 0 )
  {
    if ( v4 && *(_DWORD *)(v4 + 96) )
    {
      USBD_ReleaseHubNumber();
      *(_DWORD *)(v4 + 96) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v27 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
              WdfDriverGlobals,
              WdfDriverGlobals->Driver,
              off_1C0064130);
      LODWORD(v30) = DeviceCapabilities;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v27 + 64),
        2u,
        3u,
        0x14u,
        (__int64)&WPP_266c009e770034b9bb66bd8a0240ebba_Traceguids,
        v30);
    }
  }
  return (unsigned int)DeviceCapabilities;
}
