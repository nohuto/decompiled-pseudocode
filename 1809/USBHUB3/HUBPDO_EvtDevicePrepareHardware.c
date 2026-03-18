/*
 * XREFs of HUBPDO_EvtDevicePrepareHardware @ 0x1C006E360
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0ppqzznhUR6zuqQ6qqqqqqqqqsssuux @ 0x1C0001334 (McTemplateK0ppqzznhUR6zuqQ6qqqqqqqqqsssuux.c)
 *     McTemplateK0pq @ 0x1C000175C (McTemplateK0pq.c)
 *     WPP_RECORDER_SF_d @ 0x1C0001A3C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001E44 (WPP_RECORDER_SF_.c)
 *     McTemplateK0p @ 0x1C0006450 (McTemplateK0p.c)
 *     HUBMISC_GetDeviceInterfacePath @ 0x1C002CBAC (HUBMISC_GetDeviceInterfacePath.c)
 *     DereferenceDeviceResetInterface @ 0x1C003B3A0 (DereferenceDeviceResetInterface.c)
 *     __security_check_cookie @ 0x1C003C520 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C003C640 (memmove.c)
 *     memset @ 0x1C003C980 (memset.c)
 *     HUBREG_AssignUsbflagsValueForDevice @ 0x1C0073654 (HUBREG_AssignUsbflagsValueForDevice.c)
 *     HUBREG_QueryValuesInDeviceHardwareKey @ 0x1C00751F0 (HUBREG_QueryValuesInDeviceHardwareKey.c)
 *     HUBREG_WriteValueToDeviceHardwareKey @ 0x1C0075708 (HUBREG_WriteValueToDeviceHardwareKey.c)
 *     HUBREG_WriteStringToDeviceHardwareKey @ 0x1C0075844 (HUBREG_WriteStringToDeviceHardwareKey.c)
 *     HUBREG_UpdateSqmFlags @ 0x1C0076E6C (HUBREG_UpdateSqmFlags.c)
 *     WMI_RegisterDevice @ 0x1C0079E10 (WMI_RegisterDevice.c)
 *     WMI_FireNotification @ 0x1C007A08C (WMI_FireNotification.c)
 *     QueryDeviceResetInterface @ 0x1C007B840 (QueryDeviceResetInterface.c)
 *     InitializeResetActionWorkItem @ 0x1C007BB94 (InitializeResetActionWorkItem.c)
 */

__int64 __fastcall HUBPDO_EvtDevicePrepareHardware(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  __int64 v3; // r14
  struct _MCGEN_TRACE_CONTEXT *v4; // rcx
  __int64 v5; // rdx
  struct _MCGEN_TRACE_CONTEXT *v6; // rcx
  int v7; // r12d
  int v8; // eax
  __int64 v9; // rcx
  unsigned __int16 v10; // r9
  __int64 v11; // rcx
  _QWORD *v12; // rsi
  int DeviceInterfacePath; // eax
  __int64 v14; // rax
  int DeviceResetInterface; // eax
  int v16; // eax
  PVOID PoolWithTag; // rax
  void *v18; // rsi
  int (__fastcall *v19)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD *, __int64 *); // rax
  PVOID v20; // rax
  void *v21; // rsi
  __int64 v22; // r8
  char *v23; // rcx
  __int64 v24; // r9
  unsigned __int16 *v25; // rdx
  int v26; // eax
  unsigned __int8 v27; // al
  __int64 v28; // rsi
  int v29; // ecx
  int v30; // r10d
  __int64 v31; // rax
  const char *v32; // r9
  const char *v33; // rdx
  const char *v34; // rcx
  __int64 v35; // rbx
  __int64 v36; // rax
  __int64 v37; // rax
  int v38; // eax
  __int64 v40; // [rsp+20h] [rbp-160h]
  __int64 v41; // [rsp+28h] [rbp-158h]
  __int64 v42; // [rsp+40h] [rbp-140h]
  char v43; // [rsp+100h] [rbp-80h]
  char v44; // [rsp+104h] [rbp-7Ch]
  __int16 v45; // [rsp+108h] [rbp-78h]
  int v46; // [rsp+10Ch] [rbp-74h]
  int v47; // [rsp+110h] [rbp-70h]
  int v48; // [rsp+114h] [rbp-6Ch]
  int v49; // [rsp+118h] [rbp-68h]
  int v50; // [rsp+11Ch] [rbp-64h]
  unsigned __int16 v51; // [rsp+120h] [rbp-60h]
  __int64 v52; // [rsp+128h] [rbp-58h] BYREF
  int v53; // [rsp+130h] [rbp-50h]
  PVOID v54; // [rsp+138h] [rbp-48h]
  __int64 v55; // [rsp+140h] [rbp-40h] BYREF
  const wchar_t *v56; // [rsp+148h] [rbp-38h]
  __int64 v57; // [rsp+150h] [rbp-30h]
  PVOID P; // [rsp+158h] [rbp-28h]
  struct _UNICODE_STRING DestinationString; // [rsp+160h] [rbp-20h] BYREF
  unsigned __int16 v60; // [rsp+170h] [rbp-10h] BYREF
  void *Src; // [rsp+178h] [rbp-8h]
  __int64 v62; // [rsp+180h] [rbp+0h]
  __int64 v63; // [rsp+188h] [rbp+8h]
  __int64 v64; // [rsp+190h] [rbp+10h]
  __int64 v65; // [rsp+198h] [rbp+18h]
  _QWORD v66[7]; // [rsp+1A0h] [rbp+20h] BYREF
  int v67; // [rsp+1D8h] [rbp+58h] BYREF
  char v68; // [rsp+1DCh] [rbp+5Ch] BYREF

  v1 = a1;
  v64 = a1;
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C005F040);
  v3 = *(_QWORD *)(v2 + 24);
  v57 = v2;
  v65 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
          WdfDriverGlobals,
          WdfDriverGlobals->Driver,
          off_1C005F130);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
    McTemplateK0p(v4, &USBHUB3_ETW_EVENT_DEVICE_PREPARE_HARDWARE_START, 0LL, *(_QWORD *)(v3 + 24));
  _InterlockedOr((volatile signed __int32 *)(v3 + 1636), 0x4000u);
  HUBREG_QueryValuesInDeviceHardwareKey(v3);
  if ( (*(_DWORD *)(v3 + 2464) & 4) != 0 && (*(_DWORD *)(v3 + 2468) & 4) == 0 )
  {
    HUBREG_AssignUsbflagsValueForDevice(v3, L".0", v3 + 2480, 8LL);
    *(_DWORD *)(v3 + 2468) |= 4u;
  }
  HUBREG_UpdateSqmFlags(v3);
  if ( (*(_DWORD *)(v3 + 2464) & 1) != 0 )
    HUBREG_WriteValueToDeviceHardwareKey(v3, (unsigned int)&g_MsOs20Flags, 4, 4, v3 + 2464);
  HUBREG_WriteValueToDeviceHardwareKey(v3, (unsigned int)L"*,", 4, 4, v3 + 32);
  if ( (*(_DWORD *)(v3 + 1632) & 2) != 0 )
  {
    v5 = *(_QWORD *)(v3 + 8);
    if ( *(_BYTE *)(*(_QWORD *)v3 + 240LL) >= *(_BYTE *)(v5 + 202) )
    {
      *(_DWORD *)(v5 + 1424) = 7;
      WMI_FireNotification(*(_QWORD *)v3, *(unsigned __int16 *)(v2 + 48), 10LL);
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 1432LL),
        2u,
        3u,
        0x4Au,
        (__int64)&WPP_7c9a8c1f1a7c3ca72e1c468f1757432b_Traceguids);
      v7 = -1073741823;
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x10) != 0 )
        McTemplateK0p(v6, &USBHUB3_ETW_EVENT_DEVICE_PREPARE_HARDWARE_NESTED_TOO_DEEP, 0LL, *(_QWORD *)(v3 + 24));
      goto LABEL_78;
    }
    v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *, _QWORD))(WdfFunctions_01015 + 616))(
           WdfDriverGlobals,
           v1,
           &GUID_DEVINTERFACE_USB_HUB,
           0LL);
    v9 = *(_QWORD *)(v3 + 8);
    v7 = v8;
    if ( v8 < 0 )
    {
      v10 = 75;
      v11 = *(_QWORD *)(v9 + 1432);
LABEL_14:
      LODWORD(v41) = v7;
LABEL_15:
      WPP_RECORDER_SF_d(v11, 2u, 5u, v10, (__int64)&WPP_7c9a8c1f1a7c3ca72e1c468f1757432b_Traceguids, v41);
      goto LABEL_78;
    }
    v12 = (_QWORD *)(v3 + 2136);
    DeviceInterfacePath = HUBMISC_GetDeviceInterfacePath(
                            (__int64)&GUID_DEVINTERFACE_USB_HUB,
                            v1,
                            (_QWORD *)(v3 + 2136),
                            0LL,
                            *(_QWORD *)(v9 + 1432));
    v7 = DeviceInterfacePath;
    if ( DeviceInterfacePath < 0 )
    {
      v10 = 76;
LABEL_18:
      LODWORD(v41) = DeviceInterfacePath;
      v11 = *(_QWORD *)(*(_QWORD *)(v3 + 8) + 1432LL);
      goto LABEL_15;
    }
  }
  else
  {
    v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *, _QWORD))(WdfFunctions_01015 + 616))(
           WdfDriverGlobals,
           v1,
           &GUID_DEVINTERFACE_USB_DEVICE,
           0LL);
    v14 = *(_QWORD *)(v3 + 8);
    v11 = *(_QWORD *)(v14 + 1432);
    if ( v7 < 0 )
    {
      v10 = 77;
      goto LABEL_14;
    }
    v12 = (_QWORD *)(v3 + 2136);
    DeviceInterfacePath = HUBMISC_GetDeviceInterfacePath(
                            (__int64)&GUID_DEVINTERFACE_USB_DEVICE,
                            v1,
                            (_QWORD *)(v3 + 2136),
                            0LL,
                            *(_QWORD *)(v14 + 1432));
    v7 = DeviceInterfacePath;
    if ( DeviceInterfacePath < 0 )
    {
      v10 = 78;
      goto LABEL_18;
    }
    if ( (*(_DWORD *)(v3 + 1644) & 0x4000000) != 0 )
    {
      DeviceResetInterface = QueryDeviceResetInterface(v1, v2 + 456);
      if ( DeviceResetInterface >= 0 )
      {
        v16 = InitializeResetActionWorkItem(v2 + 520, HUBUCX_EvtResetActionCompletion, v1);
        v7 = v16;
        if ( v16 < 0 )
        {
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 1432LL),
            4u,
            5u,
            0x50u,
            (__int64)&WPP_7c9a8c1f1a7c3ca72e1c468f1757432b_Traceguids,
            v16);
          DereferenceDeviceResetInterface((_QWORD *)(v2 + 456));
        }
      }
      else
      {
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 1432LL),
          4u,
          5u,
          0x4Fu,
          (__int64)&WPP_7c9a8c1f1a7c3ca72e1c468f1757432b_Traceguids,
          DeviceResetInterface);
        v7 = 0;
      }
    }
  }
  if ( *v12 )
  {
    DeviceInterfacePath = HUBREG_WriteStringToDeviceHardwareKey(v3);
    v7 = DeviceInterfacePath;
    if ( DeviceInterfacePath < 0 )
    {
      v10 = 81;
      goto LABEL_18;
    }
  }
  if ( (*(_DWORD *)(v2 + 32) & 0x200) == 0 && (*(_DWORD *)(v3 + 1636) & 2) != 0 )
    *(_BYTE *)v2 = 0;
  if ( (*(_DWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
                      WdfDriverGlobals,
                      WdfDriverGlobals->Driver,
                      off_1C005F130)
                  + 4) & 0x1000) != 0 )
  {
    RtlInitUnicodeString(&DestinationString, 0LL);
    if ( *v12 )
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, struct _UNICODE_STRING *))(WdfFunctions_01015 + 2472))(
        WdfDriverGlobals,
        *v12,
        &DestinationString);
    PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, DestinationString.Length + 2LL, 0x64334855u);
    P = PoolWithTag;
    v18 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, DestinationString.Length + 2LL);
      memmove(v18, DestinationString.Buffer, DestinationString.Length);
    }
    memset(v66, 0, sizeof(v66));
    LODWORD(v66[0]) = 56;
    v66[3] = 0x100000001LL;
    v66[4] = v1;
    v52 = 0LL;
    v19 = *(int (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD *, __int64 *))(WdfFunctions_01015 + 2464);
    v54 = 0LL;
    if ( v19(WdfDriverGlobals, 0LL, v66, &v52) >= 0
      && (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 320))(
           WdfDriverGlobals,
           v1,
           v52) >= 0 )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, unsigned __int16 *))(WdfFunctions_01015 + 2472))(
        WdfDriverGlobals,
        v52,
        &v60);
      v20 = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v60 + 2LL, 0x64334855u);
      v54 = v20;
      v21 = v20;
      if ( v20 )
      {
        memset(v20, 0, v60 + 2LL);
        memmove(v21, Src, v60);
      }
    }
    memset(v66, 0, sizeof(v66));
    LODWORD(v66[0]) = 56;
    v66[3] = 0x100000001LL;
    v66[4] = v1;
    v55 = 0LL;
    if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, _QWORD, _QWORD *, __int64 *))(WdfFunctions_01015
                                                                                                  + 656))(
           WdfDriverGlobals,
           v1,
           0LL,
           (unsigned int)ExDefaultNonPagedPoolType,
           v66,
           &v55) < 0 )
      v56 = 0LL;
    else
      v56 = (const wchar_t *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 1552))(
                               WdfDriverGlobals,
                               v55,
                               0LL);
    v22 = *(_QWORD *)(v2 + 16);
    v23 = &v68;
    v24 = 5LL;
    v25 = (unsigned __int16 *)(v22 + 322);
    v67 = *(unsigned __int16 *)(v22 + 320);
    do
    {
      v26 = *v25++;
      *(_DWORD *)v23 = v26;
      v23 += 4;
      --v24;
    }
    while ( v24 );
    v27 = *(_BYTE *)(v22 + 240);
    if ( v27 < 6u )
      *(&v67 + v27) = *(unsigned __int16 *)(v2 + 48);
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 8) != 0 )
    {
      v28 = *(_QWORD *)(v3 + 8);
      v62 = v28;
      v29 = *(_DWORD *)(v28 + 204);
      if ( (v29 & 2) != 0 )
        v43 = *(_BYTE *)(v28 + 1341);
      else
        v43 = 0;
      v30 = *(_DWORD *)(v22 + 168);
      v53 = v30;
      if ( v30 == 1 )
      {
        v45 = *(_WORD *)(v22 + 184);
        v47 = *(_DWORD *)(v22 + 176);
        v48 = *(_DWORD *)(v22 + 196);
        v49 = *(_DWORD *)(v22 + 192);
        v50 = *(_DWORD *)(v22 + 188);
        v46 = *(_DWORD *)(v22 + 180);
      }
      else
      {
        LOBYTE(v45) = 0;
        LOBYTE(v46) = -1;
        LOBYTE(v47) = -1;
        LOBYTE(v48) = 0;
        LOBYTE(v49) = 0;
        LOBYTE(v50) = 0;
      }
      v31 = *(_QWORD *)(v3 + 2016);
      v63 = v31;
      if ( v31 )
        v51 = *(_WORD *)(v31 + 2);
      else
        v51 = 0;
      v32 = 0LL;
      v44 = (v29 & 2) != 0;
      v33 = 0LL;
      if ( v30 == 2 )
      {
        v32 = (const char *)(v22 + 186);
        v33 = (const char *)(v22 + 181);
      }
      v34 = 0LL;
      if ( v30 == 2 )
        v34 = (const char *)(v22 + 176);
      McTemplateK0ppqzznhUR6zuqQ6qqqqqqqqqsssuux(
        (__int64)v34,
        &USBHUB3_ETW_EVENT_DEVICE_PREPARE_HARDWARE_DEVICE_INFORMATION_V1,
        (const GUID *)(v22 + 764),
        *(_QWORD *)(*(_QWORD *)v3 + 248LL),
        *(_QWORD *)(v3 + 24),
        *(_WORD *)(v28 + 200),
        v56,
        (const wchar_t *)P,
        v42,
        v3 + 1988,
        v51,
        v63,
        (const wchar_t *)v54,
        (*(_BYTE *)(v2 + 32) & 1) == 0,
        *(_BYTE *)(v22 + 240) + 1,
        (__int64)&v67,
        v50,
        v49,
        v48,
        v47,
        v46,
        v45,
        *(_DWORD *)(v57 + 384),
        *(_DWORD *)(v3 + 2224),
        v53,
        v34,
        v33,
        v32,
        v44,
        v43,
        *(_QWORD *)(v62 + 1416));
      v1 = v64;
      v2 = v57;
    }
    if ( P )
      ExFreePoolWithTag(P, 0x64334855u);
    if ( v54 )
      ExFreePoolWithTag(v54, 0x64334855u);
    if ( v52 )
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
    if ( v55 )
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  }
  if ( (*(_DWORD *)(v3 + 1632) & 6) == 0 )
    WMI_RegisterDevice(v1);
  if ( *(_BYTE *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
                    WdfDriverGlobals,
                    WdfDriverGlobals->Driver,
                    off_1C005F130)
                + 92) )
  {
    v35 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 264))(WdfDriverGlobals, v1);
    v36 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(
            WdfDriverGlobals,
            *(_QWORD *)(v2 + 16));
    v37 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 264))(WdfDriverGlobals, v36);
    v38 = SleepstudyHelper_RegisterPdoWithParentPdo(*(_QWORD *)(v65 + 96), v37, v35, v2 + 392);
    if ( v38 < 0 )
    {
      LODWORD(v41) = v38;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 1432LL),
        2u,
        2u,
        0x52u,
        (__int64)&WPP_7c9a8c1f1a7c3ca72e1c468f1757432b_Traceguids,
        v41);
      *(_QWORD *)(v2 + 392) = 0LL;
    }
  }
LABEL_78:
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
  {
    LODWORD(v40) = v7;
    McTemplateK0pq(v6, &USBHUB3_ETW_EVENT_DEVICE_PREPARE_HARDWARE_COMPLETE, 0LL, *(_QWORD *)(v3 + 24), v40);
  }
  LODWORD(v41) = *(_DWORD *)(v3 + 1644);
  WPP_RECORDER_SF_d(
    *(_QWORD *)(*(_QWORD *)(v3 + 8) + 1432LL),
    2u,
    5u,
    0x53u,
    (__int64)&WPP_7c9a8c1f1a7c3ca72e1c468f1757432b_Traceguids,
    v41);
  return (unsigned int)v7;
}
