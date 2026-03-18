/*
 * XREFs of Controller_CreateWdfDevice @ 0x1C005F94C
 * Callers:
 *     Controller_WdfEvtDeviceAdd @ 0x1C0063470 (Controller_WdfEvtDeviceAdd.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 *     Device_QueryCapabilities @ 0x1C000273C (Device_QueryCapabilities.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008D80 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 *     Device_IsSecureDevice @ 0x1C0013F4C (Device_IsSecureDevice.c)
 *     RtlUnicodeStringPrintf @ 0x1C0014624 (RtlUnicodeStringPrintf.c)
 *     WPP_RECORDER_SF_S @ 0x1C0014914 (WPP_RECORDER_SF_S.c)
 */

__int64 __fastcall Controller_CreateWdfDevice(__int64 a1, __int64 a2, _QWORD *a3, unsigned int *a4)
{
  unsigned int v7; // r13d
  __int64 v8; // r9
  int v9; // eax
  __int64 v10; // r9
  unsigned int v11; // ebx
  unsigned __int16 v12; // r9
  NTSTATUS i; // eax
  int v14; // eax
  __int64 v16; // rbx
  __int64 v17; // r9
  __int64 v18; // r9
  __int64 v19; // r9
  __int64 v20; // r9
  NTSTATUS v21; // eax
  unsigned __int16 v22; // r9
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rdx
  char *v26; // [rsp+20h] [rbp-E0h]
  __int64 v27; // [rsp+28h] [rbp-D8h]
  int v28; // [rsp+28h] [rbp-D8h]
  char v29; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v30; // [rsp+48h] [rbp-B8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  struct _UNICODE_STRING v32; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v33[56]; // [rsp+70h] [rbp-90h] BYREF
  unsigned int *v34; // [rsp+A8h] [rbp-58h]
  _QWORD v35[4]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v36[6]; // [rsp+D0h] [rbp-30h] BYREF
  _OWORD v37[4]; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v38[8]; // [rsp+140h] [rbp+40h] BYREF
  _QWORD v39[18]; // [rsp+180h] [rbp+80h] BYREF
  GUID v40; // [rsp+210h] [rbp+110h] BYREF
  __int64 v41; // [rsp+220h] [rbp+120h]
  _DWORD v42[14]; // [rsp+228h] [rbp+128h] BYREF
  char v43; // [rsp+260h] [rbp+160h] BYREF
  char v44; // [rsp+2B0h] [rbp+1B0h] BYREF

  v30 = a1;
  v34 = a4;
  memset(v33, 0, sizeof(v33));
  memset(v38, 0, 0x38uLL);
  v40 = (GUID)0LL;
  v41 = 0LL;
  memset(v35, 0, sizeof(v35));
  memset(v37, 0, sizeof(v37));
  memset(v42, 0, 0x30uLL);
  memset(v36, 0, 0x28uLL);
  *(_QWORD *)&DestinationString.Length = 5242880LL;
  DestinationString.Buffer = (wchar_t *)&v43;
  *(_QWORD *)&v32.Length = 5242880LL;
  v32.Buffer = (wchar_t *)&v44;
  v7 = 0;
  memset(v39, 0, sizeof(v39));
  v39[5] = Controller_WdfEvtDevicePrepareHardware;
  LODWORD(v39[0]) = 144;
  v39[6] = Controller_WdfEvtDeviceReleaseHardware;
  v39[15] = Controller_WdfEvtDeviceUsageNotification;
  v39[1] = Controller_WdfEvtDeviceD0Entry;
  v39[2] = Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled;
  v39[4] = Controller_WdfEvtDeviceD0ExitPreInterruptsDisabled;
  v39[3] = Controller_WdfEvtDeviceD0Exit;
  v39[9] = Controller_WdfEvtDeviceSelfManagedIoInit;
  v39[7] = Controller_WdfEvtDeviceSelfManagedIoCleanup;
  (*(void (__fastcall **)(unsigned __int64, __int64, _QWORD *))(WdfFunctions_01023 + 440))(
    WPP_MAIN_CB.Dpc.ProcessorHistory,
    a1,
    v39);
  *(_QWORD *)&v37[0] = 64LL;
  *((_QWORD *)&v37[0] + 1) = Controller_WdfEvtDeviceArmWakeFromS0;
  v37[3] = 0LL;
  *(_QWORD *)&v37[1] = Controller_WdfEvtDeviceDisarmWakeFromS0;
  *((_QWORD *)&v37[1] + 1) = Controller_WdfEvtDeviceWakeFromS0Triggered;
  *(_QWORD *)&v37[2] = Controller_WdfEvtDeviceArmWakeFromSx;
  *((_QWORD *)&v37[2] + 1) = Controller_WdfEvtDeviceDisarmWakeFromSx;
  (*(void (__fastcall **)(unsigned __int64, __int64, _OWORD *))(WdfFunctions_01023 + 448))(
    WPP_MAIN_CB.Dpc.ProcessorHistory,
    v30,
    v37);
  v35[2] = Controller_WdfEvtDeviceFilterRemoveResourceRequirements;
  *(_QWORD *)((char *)v35 + 4) = 0LL;
  HIDWORD(v35[1]) = 0;
  v35[3] = 0LL;
  LODWORD(v35[0]) = 32;
  (*(void (__fastcall **)(unsigned __int64, __int64, _QWORD *))(WdfFunctions_01023 + 1024))(
    WPP_MAIN_CB.Dpc.ProcessorHistory,
    v30,
    v35);
  (*(void (__fastcall **)(unsigned __int64, __int64, __int64))(WdfFunctions_01023 + 3440))(
    WPP_MAIN_CB.Dpc.ProcessorHistory,
    v30,
    2LL);
  v29 = 2;
  LOBYTE(v8) = 22;
  v26 = &v29;
  v9 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, __int64 (__fastcall *)(__int64, __int64), __int64))(WdfFunctions_01023 + 584))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         v30,
         Controller_WdfEvtPreprocessSetPowerIrp,
         v8);
  v11 = v9;
  if ( v9 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v12 = 34;
LABEL_4:
      v28 = v9;
LABEL_19:
      WPP_RECORDER_SF_d(a2, 2u, 4u, v12, (__int64)&Context.Logger + 4, v28);
      goto LABEL_20;
    }
    goto LABEL_20;
  }
  if ( *(_BYTE *)(*(_QWORD *)&WPP_MAIN_CB.DeviceQueue.Type + 28LL) )
  {
    LOBYTE(v10) = 15;
    LODWORD(v26) = 0;
    v9 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, __int64 (__fastcall *)(__int64, IRP *), __int64))(WdfFunctions_01023 + 584))(
           WPP_MAIN_CB.Dpc.ProcessorHistory,
           v30,
           Controller_EvtIoInternalDeviceControl,
           v10);
    v11 = v9;
    if ( v9 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v12 = 35;
        goto LABEL_4;
      }
LABEL_20:
      imp_WppRecorderLogDelete(WPP_GLOBAL_Control, a2);
      goto LABEL_21;
    }
  }
  v36[1] = Controller_EvtDeviceFileCreate;
  LODWORD(v36[0]) = 40;
  v36[3] = Controller_EvtDeviceFileClose;
  *(_QWORD *)&v33[48] = off_1C00563B0;
  v36[2] = 0LL;
  v36[4] = 0x8000000400000000uLL;
  *(_DWORD *)v33 = 56;
  *(_DWORD *)&v33[24] = 1;
  *(_DWORD *)&v33[28] = 1;
  (*(void (__fastcall **)(unsigned __int64, __int64, _QWORD *, _BYTE *))(WdfFunctions_01023 + 568))(
    WPP_MAIN_CB.Dpc.ProcessorHistory,
    v30,
    v36,
    v33);
  *(_QWORD *)&v33[48] = off_1C00563D8;
  *(_QWORD *)v33 = 56LL;
  *(_QWORD *)&v33[8] = Device_WdfEvtCleanupCallback;
  *(_QWORD *)&v33[16] = 0LL;
  *(_DWORD *)&v33[24] = 1;
  *(_OWORD *)&v33[32] = 0LL;
  *(_DWORD *)&v33[28] = 1;
  for ( i = RtlUnicodeStringPrintf(&DestinationString, L"%ws%d", L"\\Device\\USBFDO-", 0LL);
        ;
        i = RtlUnicodeStringPrintf(&DestinationString, L"%ws%d", L"\\Device\\USBFDO-", v7) )
  {
    v11 = i;
    if ( i < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_20;
      v12 = 36;
      v28 = i;
      goto LABEL_19;
    }
    v14 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, struct _UNICODE_STRING *))(WdfFunctions_01023 + 536))(
            WPP_MAIN_CB.Dpc.ProcessorHistory,
            v30,
            &DestinationString);
    v11 = v14;
    if ( v14 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_20;
      v12 = 37;
      goto LABEL_25;
    }
    v14 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, const UNICODE_STRING *))(WdfFunctions_01023 + 544))(
            WPP_MAIN_CB.Dpc.ProcessorHistory,
            v30,
            &SDDL_DEVOBJ_SYS_ALL_ADM_RWX_WORLD_RW_RES_R);
    v11 = v14;
    if ( v14 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_20;
      v12 = 38;
LABEL_25:
      v28 = v14;
      goto LABEL_19;
    }
    memset(v38, 0, 0x38uLL);
    v38[3] = 0x100000001LL;
    v38[6] = off_1C0056090;
    LODWORD(v38[0]) = 56;
    (*(void (__fastcall **)(unsigned __int64, __int64, _QWORD *))(WdfFunctions_01023 + 576))(
      WPP_MAIN_CB.Dpc.ProcessorHistory,
      v30,
      v38);
    v14 = (*(__int64 (__fastcall **)(unsigned __int64, __int64 *, _BYTE *, _QWORD *))(WdfFunctions_01023 + 600))(
            WPP_MAIN_CB.Dpc.ProcessorHistory,
            &v30,
            v33,
            a3);
    v11 = v14;
    if ( v14 != -1073741771 )
      break;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(a2, 3u, 4u, 0x27u, (__int64)&Context.Logger + 4);
    ++v7;
  }
  if ( v14 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_20;
    v12 = 40;
    goto LABEL_25;
  }
  v16 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, void *))(WdfFunctions_01023 + 1616))(
          WPP_MAIN_CB.Dpc.ProcessorHistory,
          *a3,
          off_1C00563D8);
  *(_QWORD *)(v16 + 16) = a2;
  *(_QWORD *)(v16 + 88) = *a3;
  Device_QueryCapabilities(v16);
  if ( !Device_IsSecureDevice(v16) )
  {
    LOBYTE(v17) = 1;
    (*(void (__fastcall **)(unsigned __int64, _QWORD, __int64, __int64))(WdfFunctions_01023 + 392))(
      WPP_MAIN_CB.Dpc.ProcessorHistory,
      *a3,
      1LL,
      v17);
    LOBYTE(v18) = 1;
    (*(void (__fastcall **)(unsigned __int64, _QWORD, __int64, __int64))(WdfFunctions_01023 + 392))(
      WPP_MAIN_CB.Dpc.ProcessorHistory,
      *a3,
      2LL,
      v18);
    LOBYTE(v19) = 1;
    (*(void (__fastcall **)(unsigned __int64, _QWORD, __int64, __int64))(WdfFunctions_01023 + 392))(
      WPP_MAIN_CB.Dpc.ProcessorHistory,
      *a3,
      3LL,
      v19);
    LOBYTE(v20) = 1;
    (*(void (__fastcall **)(unsigned __int64, _QWORD, __int64, __int64))(WdfFunctions_01023 + 392))(
      WPP_MAIN_CB.Dpc.ProcessorHistory,
      *a3,
      4LL,
      v20);
  }
  v21 = RtlUnicodeStringPrintf(&v32, L"%ws%d", L"\\DosDevices\\HCD", v7);
  v11 = v21;
  if ( v21 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v22 = 41;
      goto LABEL_31;
    }
    goto LABEL_21;
  }
  v21 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, struct _UNICODE_STRING *))(WdfFunctions_01023 + 640))(
          WPP_MAIN_CB.Dpc.ProcessorHistory,
          *a3,
          &v32);
  v11 = v21;
  if ( v21 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_21;
    v22 = 42;
    goto LABEL_31;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_S(a2, 4u, v23, 0x2Bu, (int)v26, v32.Buffer);
  v24 = *a3;
  v40 = GUID_BUS_TYPE_USB;
  v41 = 15LL;
  (*(void (__fastcall **)(unsigned __int64, __int64, GUID *))(WdfFunctions_01023 + 680))(
    WPP_MAIN_CB.Dpc.ProcessorHistory,
    v24,
    &v40);
  v21 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, GUID *, _QWORD))(WdfFunctions_01023 + 616))(
          WPP_MAIN_CB.Dpc.ProcessorHistory,
          *a3,
          &GUID_DEVINTERFACE_USB_HOST_CONTROLLER,
          0LL);
  v11 = v21;
  if ( v21 >= 0 )
  {
    v25 = *a3;
    v42[5] = 2;
    v42[6] = 2;
    v42[8] = 2;
    v42[9] = 2;
    v42[10] = -1;
    v42[11] = -1;
    v42[0] = 48;
    *(__m128i *)&v42[1] = _mm_load_si128((const __m128i *)&_xmm);
    v42[7] = 1;
    (*(void (__fastcall **)(unsigned __int64, __int64, _DWORD *))(WdfFunctions_01023 + 664))(
      WPP_MAIN_CB.Dpc.ProcessorHistory,
      v25,
      v42);
    goto LABEL_21;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v22 = 44;
LABEL_31:
    LODWORD(v27) = v21;
    WPP_RECORDER_SF_d(a2, 2u, 4u, v22, (__int64)&Context.Logger + 4, v27);
  }
LABEL_21:
  *v34 = v7;
  return v11;
}
