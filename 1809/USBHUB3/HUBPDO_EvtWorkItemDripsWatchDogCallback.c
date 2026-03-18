/*
 * XREFs of HUBPDO_EvtWorkItemDripsWatchDogCallback @ 0x1C0070D70
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001A3C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001E44 (WPP_RECORDER_SF_.c)
 *     McTemplateK0pqhhh @ 0x1C00110FC (McTemplateK0pqhhh.c)
 *     WPP_RECORDER_SF_DDDLd @ 0x1C001159C (WPP_RECORDER_SF_DDDLd.c)
 *     WPP_RECORDER_SF_II @ 0x1C00116D0 (WPP_RECORDER_SF_II.c)
 *     wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1C0012318 (wil_details_FeaturePropertyCache_ReportUsageToService.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 *     HUBREG_OpenQueryAttemptRecoveryFromUsbPowerDrainValue @ 0x1C0077780 (HUBREG_OpenQueryAttemptRecoveryFromUsbPowerDrainValue.c)
 */

void __fastcall HUBPDO_EvtWorkItemDripsWatchDogCallback(__int64 a1)
{
  unsigned __int8 v1; // r15
  _QWORD *v2; // r14
  __int64 v3; // rbx
  __int64 v4; // rdx
  int v5; // edi
  int v6; // eax
  _QWORD *v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  char v12; // bp
  NTSTATUS v13; // edx
  __int64 v14; // rax
  __int64 v15; // rax
  NTSTATUS v16; // edx
  int v17; // edi
  __int64 v18; // rax
  struct _MCGEN_TRACE_CONTEXT *v19; // rcx
  __int64 v20; // r9
  __int64 v21; // r9
  __int64 v22; // r9
  __int64 v23; // rax
  int Handle; // [rsp+20h] [rbp-68h]
  int Handlea; // [rsp+20h] [rbp-68h]
  PVOID *Handleb; // [rsp+20h] [rbp-68h]
  __int64 v27; // [rsp+28h] [rbp-60h]
  __int64 v28; // [rsp+30h] [rbp-58h]
  __int64 v29; // [rsp+38h] [rbp-50h]
  int v30; // [rsp+98h] [rbp+10h] BYREF
  int v31; // [rsp+A0h] [rbp+18h]
  PVOID v32; // [rsp+A8h] [rbp+20h] BYREF

  v31 = 0;
  v1 = 1;
  v2 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                   WdfDriverGlobals,
                   a1,
                   off_1C005F108);
  v3 = *(_QWORD *)(*v2 + 64LL);
  v4 = *(_QWORD *)(v3 + 24);
  if ( (*(_DWORD *)(v4 + 1632) & 2) != 0 )
  {
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(v4 + 8) + 1432LL),
      4u,
      2u,
      0x96u,
      (__int64)&WPP_7c9a8c1f1a7c3ca72e1c468f1757432b_Traceguids);
    v5 = 1;
  }
  else
  {
    v6 = HUBREG_OpenQueryAttemptRecoveryFromUsbPowerDrainValue(&v30);
    v7 = *(_QWORD **)(v3 + 24);
    if ( v6 >= 0 )
    {
      if ( v30 )
      {
        if ( (*((_DWORD *)v7 + 411) & 0x800000) != 0 )
        {
          WPP_RECORDER_SF_(
            *(_QWORD *)(v7[1] + 1432LL),
            3u,
            2u,
            0x99u,
            (__int64)&WPP_7c9a8c1f1a7c3ca72e1c468f1757432b_Traceguids);
          v5 = 4;
        }
        else
        {
          v8 = MEMORY[0xFFFFF78000000014]
             - (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*v7 + 584LL))(*(_QWORD *)(*v7 + 248LL), v7[3]);
          if ( v8 >= 300000000 )
          {
            if ( _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 400), 1, 0) )
            {
              wil_details_FeaturePropertyCache_ReportUsageToService(1LL, 3LL);
              DbgkWerCaptureLiveKernelDump(L"UsbDripsBlockerSurpriseRemoval", 421LL, *v2, 0LL, 0LL, 0LL, 0LL, 0LL, v31);
              v15 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(
                      WdfDriverGlobals,
                      v3);
              (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 696))(
                WdfDriverGlobals,
                v15,
                2LL);
              v5 = 12;
            }
            else
            {
              v16 = PoRegisterPowerSettingCallback(
                      0LL,
                      &GUID_LOW_POWER_EPOCH,
                      (PPOWER_SETTING_CALLBACK)HUBPDO_ReEnumerationCallback,
                      *(PVOID *)(v3 + 24),
                      &v32);
              if ( v16 >= 0 )
              {
                *(_QWORD *)(v3 + 408) = v32;
                v17 = IoRequestDeviceRemovalForReset(*v2, 1LL);
                if ( v17 >= 0 )
                {
                  v1 = 0;
                  v5 = 0;
                }
                else
                {
                  PoUnregisterPowerSettingCallback(*(PVOID *)(v3 + 408));
                  *(_QWORD *)(v3 + 408) = 0LL;
                  _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 400), 0, 1);
                  WPP_RECORDER_SF_d(
                    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 24) + 8LL) + 1432LL),
                    2u,
                    2u,
                    0x9Eu,
                    (__int64)&WPP_7c9a8c1f1a7c3ca72e1c468f1757432b_Traceguids,
                    v17);
                  v5 = 8;
                }
              }
              else
              {
                _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 400), 0, 1);
                WPP_RECORDER_SF_d(
                  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 24) + 8LL) + 1432LL),
                  2u,
                  2u,
                  0x9Du,
                  (__int64)&WPP_7c9a8c1f1a7c3ca72e1c468f1757432b_Traceguids,
                  v16);
                v5 = 7;
              }
            }
          }
          else
          {
            wil_details_FeaturePropertyCache_ReportUsageToService(1LL, 3LL);
            v12 = _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 404), 1, 0);
            if ( !v12 )
            {
              v13 = PoRegisterPowerSettingCallback(
                      0LL,
                      &GUID_PDC_IDLE_RESILIENCY_ENGAGED,
                      (PPOWER_SETTING_CALLBACK)HUBPDO_IdleResiliencyCallback,
                      *(PVOID *)(v3 + 24),
                      (PVOID *)(v3 + 416));
              if ( v13 >= 0 )
              {
                v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(
                        WdfDriverGlobals,
                        v3);
                (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1640))(
                  WdfDriverGlobals,
                  v14,
                  "DRIPS IO Tag",
                  11089LL,
                  "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubpdo.c");
              }
              else
              {
                _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 404), 0, 1);
                WPP_RECORDER_SF_d(
                  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 24) + 8LL) + 1432LL),
                  2u,
                  2u,
                  0x9Au,
                  (__int64)&WPP_7c9a8c1f1a7c3ca72e1c468f1757432b_Traceguids,
                  v13);
              }
            }
            HIDWORD(v27) = HIDWORD(v8);
            WPP_RECORDER_SF_II(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 24) + 8LL) + 1432LL), v9, v10, v11, Handle);
            wil_details_FeaturePropertyCache_ReportUsageToService(1LL, 3LL);
            v5 = v12 != 0 ? 11 : 5;
          }
        }
      }
      else
      {
        v5 = 3;
        WPP_RECORDER_SF_(
          *(_QWORD *)(v7[1] + 1432LL),
          3u,
          2u,
          0x98u,
          (__int64)&WPP_7c9a8c1f1a7c3ca72e1c468f1757432b_Traceguids);
      }
    }
    else
    {
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v7[1] + 1432LL),
        3u,
        2u,
        0x97u,
        (__int64)&WPP_7c9a8c1f1a7c3ca72e1c468f1757432b_Traceguids,
        v6);
      v5 = 2;
    }
  }
  v18 = *(_QWORD *)(v3 + 24);
  LODWORD(v29) = *(unsigned __int16 *)(v18 + 2000);
  LODWORD(v28) = *(unsigned __int16 *)(v18 + 1998);
  LODWORD(v27) = *(unsigned __int16 *)(v18 + 1996);
  WPP_RECORDER_SF_DDDLd(
    *(_QWORD *)(*(_QWORD *)(v18 + 8) + 1432LL),
    v1,
    *(unsigned __int16 *)(v18 + 2000),
    *(unsigned __int16 *)(v18 + 1998),
    Handlea);
  if ( (BYTE3(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 2) != 0 )
  {
    v20 = *(_QWORD *)(v3 + 24);
    LOWORD(v29) = *(_WORD *)(v20 + 2000);
    LOWORD(v28) = *(_WORD *)(v20 + 1998);
    LOWORD(v27) = *(_WORD *)(v20 + 1996);
    LODWORD(Handleb) = v5;
    McTemplateK0pqhhh(
      v19,
      &USBHUB3_ETW_EVENT_DEVICE_DRIPS_WATCHDOG_COMPLETE,
      (const GUID *)(v20 + 1516),
      *(_QWORD *)(v20 + 24),
      Handleb,
      v27,
      v28,
      v29);
  }
  if ( v5 != 1 )
  {
    if ( v5 == 12 )
    {
      if ( (BYTE3(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
      {
        v21 = *(_QWORD *)(v3 + 24);
        LOWORD(v29) = *(_WORD *)(v21 + 2000);
        LOWORD(v28) = *(_WORD *)(v21 + 1998);
        LOWORD(v27) = *(_WORD *)(v21 + 1996);
        LODWORD(Handleb) = 12;
        McTemplateK0pqhhh(
          v19,
          &USBHUB3_ETW_EVENT_DEVICE_DRIPS_WATCHDOG_COMPLETE_PUBLISH_INFO,
          (const GUID *)(v21 + 1516),
          *(_QWORD *)(v21 + 24),
          Handleb,
          v27,
          v28,
          v29);
      }
    }
    else if ( (BYTE3(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 8) != 0 )
    {
      v22 = *(_QWORD *)(v3 + 24);
      LOWORD(v29) = *(_WORD *)(v22 + 2000);
      LOWORD(v28) = *(_WORD *)(v22 + 1998);
      LOWORD(v27) = *(_WORD *)(v22 + 1996);
      LODWORD(Handleb) = v5;
      McTemplateK0pqhhh(
        v19,
        &USBHUB3_ETW_EVENT_DEVICE_DRIPS_WATCHDOG_COMPLETE_PUBLISH_WARNING,
        (const GUID *)(v22 + 1516),
        *(_QWORD *)(v22 + 24),
        Handleb,
        v27,
        v28,
        v29);
    }
  }
  if ( v1 )
  {
    v23 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v3);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
      WdfDriverGlobals,
      v23,
      "DRIPS SR Tag",
      11242LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubpdo.c");
  }
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v3 + 424), "DRIPS SR Tag", 0x20u);
}
