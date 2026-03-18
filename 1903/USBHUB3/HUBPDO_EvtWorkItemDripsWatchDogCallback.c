/*
 * XREFs of HUBPDO_EvtWorkItemDripsWatchDogCallback @ 0x1C00779E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     McTemplateK0pqhhh @ 0x1C00122A8 (McTemplateK0pqhhh.c)
 *     WPP_RECORDER_SF_DDDLd @ 0x1C0012748 (WPP_RECORDER_SF_DDDLd.c)
 *     WPP_RECORDER_SF_II @ 0x1C001287C (WPP_RECORDER_SF_II.c)
 *     wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1C00134EC (wil_details_FeaturePropertyCache_ReportUsageToService.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 *     HUBREG_OpenQueryAttemptRecoveryFromUsbPowerDrainValue @ 0x1C007EDEC (HUBREG_OpenQueryAttemptRecoveryFromUsbPowerDrainValue.c)
 */

void __fastcall HUBPDO_EvtWorkItemDripsWatchDogCallback(__int64 a1)
{
  unsigned __int8 v1; // r14
  _QWORD *v2; // rsi
  __int64 v3; // rbx
  __int64 v4; // rdx
  struct _MCGEN_TRACE_CONTEXT *v5; // rcx
  int v6; // edi
  int v7; // eax
  _QWORD *v8; // rdx
  __int64 v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  char v13; // si
  NTSTATUS v14; // edx
  __int64 v15; // rax
  __int64 v16; // rax
  NTSTATUS v17; // edx
  int v18; // edi
  __int64 v19; // rax
  __int64 v20; // r9
  __int64 v21; // r9
  __int64 v22; // r9
  __int64 v23; // rax
  PVOID *Handle; // [rsp+20h] [rbp-68h]
  __int64 v25; // [rsp+28h] [rbp-60h]
  __int64 v26; // [rsp+30h] [rbp-58h]
  __int64 v27; // [rsp+38h] [rbp-50h]
  int v28; // [rsp+98h] [rbp+10h] BYREF
  PVOID v29; // [rsp+A0h] [rbp+18h] BYREF

  v1 = 1;
  v2 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                   WdfDriverGlobals,
                   a1,
                   off_1C0064108);
  v3 = *(_QWORD *)(*v2 + 64LL);
  v4 = *(_QWORD *)(v3 + 24);
  v5 = (struct _MCGEN_TRACE_CONTEXT *)*(unsigned int *)(v4 + 1632);
  if ( ((unsigned __int8)v5 & 2) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(v4 + 8) + 1432LL),
        4u,
        2u,
        0x96u,
        (__int64)&WPP_e683e3a97dd23da98d402d95dd0016a2_Traceguids);
    v6 = 1;
    goto LABEL_36;
  }
  v7 = HUBREG_OpenQueryAttemptRecoveryFromUsbPowerDrainValue(&v28);
  if ( v7 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 24) + 8LL) + 1432LL),
        3u,
        2u,
        0x97u,
        (__int64)&WPP_e683e3a97dd23da98d402d95dd0016a2_Traceguids,
        v7);
    v6 = 2;
    goto LABEL_36;
  }
  if ( !v28 )
  {
    v6 = 3;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 24) + 8LL) + 1432LL),
        3u,
        2u,
        0x98u,
        (__int64)&WPP_e683e3a97dd23da98d402d95dd0016a2_Traceguids);
    goto LABEL_36;
  }
  v8 = *(_QWORD **)(v3 + 24);
  if ( (*((_DWORD *)v8 + 411) & 0x800000) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *(_QWORD *)(v8[1] + 1432LL),
        3u,
        2u,
        0x99u,
        (__int64)&WPP_e683e3a97dd23da98d402d95dd0016a2_Traceguids);
    v6 = 4;
    goto LABEL_36;
  }
  v9 = MEMORY[0xFFFFF78000000014]
     - (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*v8 + 584LL))(*(_QWORD *)(*v8 + 248LL), v8[3]);
  if ( v9 < 300000000 )
  {
    wil_details_FeaturePropertyCache_ReportUsageToService(1LL, 3LL);
    v13 = _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 404), 1, 0);
    if ( !v13 )
    {
      v14 = PoRegisterPowerSettingCallback(
              0LL,
              &GUID_PDC_IDLE_RESILIENCY_ENGAGED,
              (PPOWER_SETTING_CALLBACK)HUBPDO_IdleResiliencyCallback,
              *(PVOID *)(v3 + 24),
              (PVOID *)(v3 + 416));
      if ( v14 >= 0 )
      {
        v15 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(
                WdfDriverGlobals,
                v3);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015
                                                                                                  + 1640))(
          WdfDriverGlobals,
          v15,
          "DRIPS IO Tag",
          11119LL,
          "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubpdo.c");
      }
      else
      {
        _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 404), 0, 1);
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
LABEL_24:
          wil_details_FeaturePropertyCache_ReportUsageToService(1LL, 3LL);
          v6 = v13 != 0 ? 11 : 5;
          goto LABEL_36;
        }
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 24) + 8LL) + 1432LL),
          2u,
          2u,
          0x9Au,
          (__int64)&WPP_e683e3a97dd23da98d402d95dd0016a2_Traceguids,
          v14);
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v25 = v9;
      WPP_RECORDER_SF_II(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 24) + 8LL) + 1432LL), v10, v11, v12, (int)Handle);
    }
    goto LABEL_24;
  }
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 400), 1, 0) )
  {
    wil_details_FeaturePropertyCache_ReportUsageToService(1LL, 3LL);
    DbgkWerCaptureLiveKernelDump(L"UsbDripsBlockerSurpriseRemoval", 421LL, *v2, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
    v16 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v3);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 696))(
      WdfDriverGlobals,
      v16,
      2LL);
    v6 = 12;
  }
  else
  {
    v17 = PoRegisterPowerSettingCallback(
            0LL,
            &GUID_LOW_POWER_EPOCH,
            (PPOWER_SETTING_CALLBACK)HUBPDO_ReEnumerationCallback,
            *(PVOID *)(v3 + 24),
            &v29);
    if ( v17 >= 0 )
    {
      *(_QWORD *)(v3 + 408) = v29;
      v18 = IoRequestDeviceRemovalForReset(*v2, 1LL);
      if ( v18 >= 0 )
      {
        v1 = 0;
        v6 = 0;
      }
      else
      {
        PoUnregisterPowerSettingCallback(*(PVOID *)(v3 + 408));
        *(_QWORD *)(v3 + 408) = 0LL;
        _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 400), 0, 1);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 24) + 8LL) + 1432LL),
            2u,
            2u,
            0x9Eu,
            (__int64)&WPP_e683e3a97dd23da98d402d95dd0016a2_Traceguids,
            v18);
        v6 = 8;
      }
    }
    else
    {
      _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 400), 0, 1);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 24) + 8LL) + 1432LL),
          2u,
          2u,
          0x9Du,
          (__int64)&WPP_e683e3a97dd23da98d402d95dd0016a2_Traceguids,
          v17);
      v6 = 7;
    }
  }
LABEL_36:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v19 = *(_QWORD *)(v3 + 24);
    LODWORD(v27) = *(unsigned __int16 *)(v19 + 2000);
    LODWORD(v26) = *(unsigned __int16 *)(v19 + 1998);
    LODWORD(v25) = *(unsigned __int16 *)(v19 + 1996);
    WPP_RECORDER_SF_DDDLd(
      *(_QWORD *)(*(_QWORD *)(v19 + 8) + 1432LL),
      v1,
      *(unsigned __int16 *)(v19 + 2000),
      *(unsigned __int16 *)(v19 + 1998),
      (int)Handle);
  }
  if ( (BYTE3(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 2) != 0 )
  {
    v20 = *(_QWORD *)(v3 + 24);
    LOWORD(v27) = *(_WORD *)(v20 + 2000);
    LOWORD(v26) = *(_WORD *)(v20 + 1998);
    LOWORD(v25) = *(_WORD *)(v20 + 1996);
    LODWORD(Handle) = v6;
    McTemplateK0pqhhh(
      v5,
      &USBHUB3_ETW_EVENT_DEVICE_DRIPS_WATCHDOG_COMPLETE,
      (const GUID *)(v20 + 1516),
      *(_QWORD *)(v20 + 24),
      Handle,
      v25,
      v26,
      v27);
  }
  if ( v6 != 1 )
  {
    if ( v6 == 12 )
    {
      if ( (BYTE3(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
      {
        v21 = *(_QWORD *)(v3 + 24);
        LOWORD(v27) = *(_WORD *)(v21 + 2000);
        LOWORD(v26) = *(_WORD *)(v21 + 1998);
        LOWORD(v25) = *(_WORD *)(v21 + 1996);
        LODWORD(Handle) = 12;
        McTemplateK0pqhhh(
          v5,
          &USBHUB3_ETW_EVENT_DEVICE_DRIPS_WATCHDOG_COMPLETE_PUBLISH_INFO,
          (const GUID *)(v21 + 1516),
          *(_QWORD *)(v21 + 24),
          Handle,
          v25,
          v26,
          v27);
      }
    }
    else if ( (BYTE3(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 8) != 0 )
    {
      v22 = *(_QWORD *)(v3 + 24);
      LOWORD(v27) = *(_WORD *)(v22 + 2000);
      LOWORD(v26) = *(_WORD *)(v22 + 1998);
      LOWORD(v25) = *(_WORD *)(v22 + 1996);
      LODWORD(Handle) = v6;
      McTemplateK0pqhhh(
        v5,
        &USBHUB3_ETW_EVENT_DEVICE_DRIPS_WATCHDOG_COMPLETE_PUBLISH_WARNING,
        (const GUID *)(v22 + 1516),
        *(_QWORD *)(v22 + 24),
        Handle,
        v25,
        v26,
        v27);
    }
  }
  if ( v1 )
  {
    v23 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v3);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
      WdfDriverGlobals,
      v23,
      "DRIPS SR Tag",
      11272LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubpdo.c");
  }
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v3 + 424), "DRIPS SR Tag", 0x20u);
}
