/*
 * XREFs of HUBFDO_EvtDeviceAdd @ 0x1C006A220
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchPrintfA @ 0x1C0001008 (RtlStringCchPrintfA.c)
 *     McTemplateK0 @ 0x1C0001278 (McTemplateK0.c)
 *     McTemplateK0pq @ 0x1C000175C (McTemplateK0pq.c)
 *     WPP_RECORDER_SF_d @ 0x1C0001A3C (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddHsmEvent @ 0x1C0008F30 (HUBSM_AddHsmEvent.c)
 *     HUBFDO_GetDeviceCapabilities @ 0x1C000AB2C (HUBFDO_GetDeviceCapabilities.c)
 *     HSMMUX_InitializeHSMMuxContext @ 0x1C000D000 (HSMMUX_InitializeHSMMuxContext.c)
 *     HUBMISC_WaitForSignal @ 0x1C002C420 (HUBMISC_WaitForSignal.c)
 *     __security_check_cookie @ 0x1C003C520 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C003C980 (memset.c)
 *     HUBMISC_InitializeHsm @ 0x1C007220C (HUBMISC_InitializeHsm.c)
 */

__int64 __fastcall HUBFDO_EvtDeviceAdd(struct _MCGEN_TRACE_CONTEXT *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  __int64 v4; // r9
  int DeviceCapabilities; // ebx
  __int64 v6; // rax
  unsigned __int16 v7; // r9
  __int64 v8; // rcx
  unsigned int v9; // r8d
  struct _MCGEN_TRACE_CONTEXT *v10; // rcx
  struct _DEVICE_OBJECT *v11; // rax
  NTSTATUS v12; // ebx
  __int64 v13; // rax
  __int64 *v14; // r14
  __int64 v15; // r9
  __int64 v16; // r9
  __int64 v17; // r9
  __int64 v18; // r9
  int v19; // eax
  __int64 v20; // rax
  int v21; // eax
  int v22; // eax
  const void *v23; // rax
  __int64 v24; // r9
  __int64 v25; // rax
  int v27; // [rsp+28h] [rbp-E0h]
  __int64 v28; // [rsp+28h] [rbp-E0h]
  int v29; // [rsp+28h] [rbp-E0h]
  int v30; // [rsp+28h] [rbp-E0h]
  __int64 v31; // [rsp+30h] [rbp-D8h]
  __int64 v32; // [rsp+38h] [rbp-D0h]
  __int64 v33; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v34; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v35[8]; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v36[8]; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v37[8]; // [rsp+D8h] [rbp-30h] BYREF
  _QWORD v38[12]; // [rsp+118h] [rbp+10h] BYREF
  _QWORD v39[18]; // [rsp+178h] [rbp+70h] BYREF
  int v40; // [rsp+208h] [rbp+100h] BYREF
  __m128i si128; // [rsp+20Ch] [rbp+104h]
  int v42; // [rsp+21Ch] [rbp+114h]
  int v43; // [rsp+220h] [rbp+118h]
  int v44; // [rsp+224h] [rbp+11Ch]
  int v45; // [rsp+228h] [rbp+120h]
  int v46; // [rsp+22Ch] [rbp+124h]
  int v47; // [rsp+230h] [rbp+128h]
  int v48; // [rsp+234h] [rbp+12Ch]
  __int64 v49; // [rsp+238h] [rbp+130h] BYREF
  int v50; // [rsp+240h] [rbp+138h]
  int v51; // [rsp+244h] [rbp+13Ch]
  __int64 v52; // [rsp+248h] [rbp+140h]
  char v53; // [rsp+250h] [rbp+148h]
  int v54; // [rsp+254h] [rbp+14Ch]
  char pszDest[16]; // [rsp+258h] [rbp+150h] BYREF
  GUID v56; // [rsp+268h] [rbp+160h] BYREF
  __int64 v57; // [rsp+278h] [rbp+170h]

  v34 = a2;
  v2 = a2;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
  {
    McTemplateK0(a1, &USBHUB3_ETW_EVENT_HUB_ADD_DEVICE_START, 0LL);
    v2 = v34;
  }
  v3 = 0LL;
  memset(v35, 0, 0x38uLL);
  LODWORD(v35[0]) = 56;
  v35[3] = 0x100000001LL;
  v35[6] = off_1C005F0E0;
  v35[1] = HUBFDO_EvtDeviceCleanupCallback;
  v35[2] = HUBFDO_EvtDeviceDestroyCallback;
  memset(v39, 0, sizeof(v39));
  v39[1] = HUBFDO_EvtDeviceD0Entry;
  LODWORD(v39[0]) = 144;
  v39[3] = HUBFDO_EvtDeviceD0Exit;
  v39[5] = HUBFDO_EvtDevicePrepareHardware;
  v39[6] = HUBFDO_EvtDeviceReleaseHardware;
  v39[12] = HUBFDO_EvtDeviceSurpriseRemoval;
  v39[15] = HUBFDO_EvtDeviceUsageNotification;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 440))(WdfDriverGlobals, v2, v39);
  LOBYTE(v4) = 16;
  DeviceCapabilities = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(__int64, IRP *), __int64, _QWORD, _DWORD))(WdfFunctions_01015 + 584))(
                         WdfDriverGlobals,
                         v34,
                         HUBFDO_EvtDeviceShutdownPreprocess,
                         v4,
                         0LL,
                         0);
  if ( DeviceCapabilities < 0 )
  {
    v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
           WdfDriverGlobals,
           WdfDriverGlobals->Driver,
           off_1C005F130);
    v7 = 12;
LABEL_5:
    v8 = *(_QWORD *)(v6 + 64);
    v9 = 2;
    LODWORD(v31) = DeviceCapabilities;
LABEL_6:
    WPP_RECORDER_SF_d(v8, 2u, v9, v7, (__int64)&WPP_0e53b71dd48e35ef915a1bb9371a4353_Traceguids, v31);
    goto LABEL_33;
  }
  memset(v36, 0, sizeof(v36));
  v36[1] = HUBFDO_EvtDeviceArmWakeFromS0;
  v36[2] = HUBFDO_EvtDeviceDisarmWakeFromS0;
  v36[4] = HUBFDO_EvtDeviceArmWakeFromSx;
  v36[5] = HUBFDO_EvtDeviceDisarmWakeFromSx;
  LODWORD(v36[0]) = 64;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 448))(
    WdfDriverGlobals,
    v34,
    v36);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 3440))(
    WdfDriverGlobals,
    v34,
    2LL);
  DeviceCapabilities = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *, _QWORD *, __int64 *))(WdfFunctions_01015 + 600))(
                         WdfDriverGlobals,
                         &v34,
                         v35,
                         &v33);
  if ( DeviceCapabilities < 0 )
  {
    v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
           WdfDriverGlobals,
           WdfDriverGlobals->Driver,
           off_1C005F130);
    v7 = 13;
    goto LABEL_5;
  }
  v11 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 248))(
                                   WdfDriverGlobals,
                                   v33);
  v12 = IoRegisterShutdownNotification(v11);
  if ( v12 < 0 )
  {
    v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
            WdfDriverGlobals,
            WdfDriverGlobals->Driver,
            off_1C005F130);
    LODWORD(v31) = v12;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v13 + 64),
      2u,
      2u,
      0xEu,
      (__int64)&WPP_0e53b71dd48e35ef915a1bb9371a4353_Traceguids,
      v31);
  }
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         v33,
         off_1C005F0E0);
  *(_QWORD *)(v3 + 16) = v33;
  *(_QWORD *)(v3 + 24) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 264))(
                           WdfDriverGlobals,
                           v33);
  *(_QWORD *)v3 = &g_Usbhub3_Triage_Info;
  *(_DWORD *)(v3 + 96) = USBD_AllocateHubNumber();
  v49 = 48LL;
  pszDest[0] = 0;
  v54 = 16;
  v52 = v3;
  v53 = 1;
  v50 = 1024;
  v51 = 512;
  RtlStringCchPrintfA(pszDest, 0x10uLL, "hub%d", *(_DWORD *)(v3 + 96));
  v14 = (__int64 *)(v3 + 2520);
  if ( (int)imp_WppRecorderLogCreate(WPP_GLOBAL_Control, &v49, v3 + 2520) < 0 )
    *v14 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
                         WdfDriverGlobals,
                         WdfDriverGlobals->Driver,
                         off_1C005F130)
                     + 64);
  LOBYTE(v15) = 1;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64))(WdfFunctions_01015 + 392))(
    WdfDriverGlobals,
    v33,
    1LL,
    v15);
  LOBYTE(v16) = 1;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64))(WdfFunctions_01015 + 392))(
    WdfDriverGlobals,
    v33,
    2LL,
    v16);
  LOBYTE(v17) = 1;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64))(WdfFunctions_01015 + 392))(
    WdfDriverGlobals,
    v33,
    3LL,
    v17);
  LOBYTE(v18) = 1;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64))(WdfFunctions_01015 + 392))(
    WdfDriverGlobals,
    v33,
    4LL,
    v18);
  DeviceCapabilities = HUBFDO_GetDeviceCapabilities(v33, (_DWORD *)(v3 + 696), *v14);
  if ( DeviceCapabilities < 0 )
  {
    v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
           WdfDriverGlobals,
           WdfDriverGlobals->Driver,
           off_1C005F130);
    v7 = 15;
    goto LABEL_5;
  }
  v47 = -1;
  v48 = -1;
  v40 = 48;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v42 = 2;
  v43 = 2;
  v45 = 2;
  v46 = 2;
  v44 = 1;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, int *))(WdfFunctions_01015 + 664))(WdfDriverGlobals, v33, &v40);
  *(_QWORD *)(v3 + 336) = v3;
  LOWORD(v31) = 1013;
  LOWORD(v27) = 136;
  v19 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *, __int64, int, _DWORD, _QWORD))(WdfFunctions_01015 + 1048))(
          WdfDriverGlobals,
          v33,
          &GUID_HUB_PARENT_INTERFACE,
          v3 + 208,
          v27,
          v31,
          0LL);
  DeviceCapabilities = v19;
  if ( v19 < 0 )
  {
    v7 = 16;
LABEL_17:
    LODWORD(v31) = v19;
LABEL_18:
    v8 = *v14;
    v9 = 3;
    goto LABEL_6;
  }
  if ( !*(_BYTE *)(v3 + 240) )
  {
    v20 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 336))(WdfDriverGlobals, v33);
    *(_QWORD *)(v3 + 2448) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1424))(
                               WdfDriverGlobals,
                               v20);
    *(_QWORD *)(v3 + 32) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 336))(
                             WdfDriverGlobals,
                             v33);
    *(_DWORD *)(v3 + 92) = 500;
  }
  *(_QWORD *)(v3 + 376) = *(_QWORD *)(v3 + 248);
  *(_QWORD *)(v3 + 384) = v3;
  *(_QWORD *)(v3 + 392) = HUBHTX_ClearTTBuffer;
  *(_QWORD *)(v3 + 536) = HUBPDO_NoPingResponse;
  LOWORD(v31) = 2000;
  LOWORD(v29) = 256;
  if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *, __int64, int, _DWORD, _QWORD))(WdfFunctions_01015
                                                                                                 + 1048))(
         WdfDriverGlobals,
         v33,
         &GUID_HUB_CONTROLLERSTACK_INTERFACE,
         v3 + 344,
         v29,
         v31,
         0LL) < 0 )
  {
    LOWORD(v31) = 1000;
    LOWORD(v30) = 256;
    v19 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *, __int64, int, _DWORD, _QWORD))(WdfFunctions_01015 + 1048))(
            WdfDriverGlobals,
            v33,
            &GUID_HUB_CONTROLLERSTACK_INTERFACE,
            v3 + 344,
            v30,
            v31,
            0LL);
    DeviceCapabilities = v19;
    if ( v19 < 0 )
    {
      v7 = 17;
      goto LABEL_17;
    }
  }
  if ( *(_BYTE *)(v3 + 240) )
    v32 = 0LL;
  else
    v32 = *(_QWORD *)(v3 + 248);
  LOWORD(v31) = 3;
  LOWORD(v30) = 96;
  v21 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const GUID *, __int64, int, _DWORD, __int64))(WdfFunctions_01015 + 1048))(
          WdfDriverGlobals,
          v33,
          &USB_BUS_INTERFACE_USBDI_GUID,
          v3 + 600,
          v30,
          v31,
          v32);
  DeviceCapabilities = v21;
  if ( v21 < 0 )
  {
    v7 = 18;
    LODWORD(v31) = v21;
    goto LABEL_18;
  }
  memset(v38, 0, sizeof(v38));
  LODWORD(v38[0]) = 96;
  BYTE5(v38[1]) = 1;
  v38[5] = HUBFDO_EvtIoDeviceControl;
  *(_QWORD *)((char *)v38 + 4) = 1LL;
  v38[6] = HUBFDO_EvtIoInternalDeviceControlFromPDO;
  memset(v37, 0, 0x38uLL);
  v37[6] = off_1C005F1D0;
  LODWORD(v37[0]) = 56;
  v37[3] = 0x100000002LL;
  v22 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *, _QWORD *, __int64))(WdfFunctions_01015 + 1216))(
          WdfDriverGlobals,
          v33,
          v38,
          v37,
          v3 + 2400);
  DeviceCapabilities = v22;
  if ( v22 < 0 )
  {
    v7 = 19;
    LODWORD(v31) = v22;
    goto LABEL_18;
  }
  v56 = GUID_BUS_TYPE_USB;
  v57 = 15LL;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *))(WdfFunctions_01015 + 680))(WdfDriverGlobals, v33, &v56);
  HSMMUX_InitializeHSMMuxContext(v3);
  DeviceCapabilities = HUBMISC_InitializeHsm(v3);
  if ( DeviceCapabilities >= 0 )
  {
    _InterlockedOr((volatile signed __int32 *)(v3 + 40), 0x20u);
    KeResetEvent((PRKEVENT)(v3 + 1152));
    HUBSM_AddHsmEvent(v3, 2023LL);
    v23 = (const void *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(
                          WdfDriverGlobals,
                          v3);
    HUBMISC_WaitForSignal((PVOID)(v3 + 1152), "Hub FDO PnpCallback", v23);
    DeviceCapabilities = *(_DWORD *)(v3 + 1176);
  }
LABEL_33:
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
  {
    if ( v3 )
      v24 = *(_QWORD *)(v3 + 248);
    else
      v24 = 0LL;
    LODWORD(v28) = DeviceCapabilities;
    McTemplateK0pq(v10, &USBHUB3_ETW_EVENT_HUB_ADD_DEVICE_COMPLETE, 0LL, v24, v28);
  }
  if ( DeviceCapabilities < 0 )
  {
    if ( v3 && *(_DWORD *)(v3 + 96) )
    {
      USBD_ReleaseHubNumber();
      *(_DWORD *)(v3 + 96) = 0;
    }
    v25 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
            WdfDriverGlobals,
            WdfDriverGlobals->Driver,
            off_1C005F130);
    LODWORD(v31) = DeviceCapabilities;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v25 + 64),
      2u,
      3u,
      0x14u,
      (__int64)&WPP_0e53b71dd48e35ef915a1bb9371a4353_Traceguids,
      v31);
  }
  return (unsigned int)DeviceCapabilities;
}
