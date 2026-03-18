/*
 * XREFs of WER_CreateReport @ 0x1C003775C
 * Callers:
 *     HUBMISC_CreateWerReport @ 0x1C002D2E0 (HUBMISC_CreateWerReport.c)
 *     HUBREG_QueryHubErrataFlags @ 0x1C007421C (HUBREG_QueryHubErrataFlags.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x1C0001008 (RtlStringCchPrintfA.c)
 *     WPP_RECORDER_SF_d @ 0x1C0001A3C (WPP_RECORDER_SF_d.c)
 *     WER_UpdateThrottlePolicy @ 0x1C00373FC (WER_UpdateThrottlePolicy.c)
 *     WER_StoreDeviceContext @ 0x1C0037474 (WER_StoreDeviceContext.c)
 *     TelemetryData_InsertTriageDataBlock @ 0x1C0039288 (TelemetryData_InsertTriageDataBlock.c)
 *     TelemetryData_CreateReport @ 0x1C0039400 (TelemetryData_CreateReport.c)
 *     __security_check_cookie @ 0x1C003C520 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C003C980 (memset.c)
 *     HUBREG_QueryDeviceWerThrottleMask @ 0x1C00773CC (HUBREG_QueryDeviceWerThrottleMask.c)
 *     TelemetryData_SubmitReport @ 0x1C007B6C0 (TelemetryData_SubmitReport.c)
 */

__int64 __fastcall WER_CreateReport(__int64 a1, __int64 a2, __int64 a3, int a4, unsigned int a5)
{
  __int64 v5; // rdx
  __int64 v7; // rcx
  __int64 v8; // rsi
  int v9; // r13d
  int DeviceWerThrottleMask; // eax
  signed int inserted; // ebx
  unsigned __int16 v12; // r15
  unsigned __int16 v13; // r14
  int v14; // ebx
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned int i; // ebx
  __int64 j; // rcx
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 Report; // rax
  unsigned int v24; // r15d
  __int64 m; // rcx
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // r14
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rdx
  int v33; // r15d
  __int64 k; // r14
  __int64 v35; // r14
  __int64 v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r14
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  unsigned int v47; // [rsp+30h] [rbp-41h] BYREF
  unsigned int v48; // [rsp+34h] [rbp-3Dh] BYREF
  int v49; // [rsp+38h] [rbp-39h]
  __int64 v50; // [rsp+40h] [rbp-31h] BYREF
  __int64 v51; // [rsp+48h] [rbp-29h] BYREF
  char pszDest[40]; // [rsp+50h] [rbp-21h] BYREF
  _BYTE v53[16]; // [rsp+78h] [rbp+7h] BYREF

  v5 = *(_QWORD *)(a1 + 2520);
  v7 = *(_QWORD *)(a1 + 16);
  v8 = 0LL;
  v9 = a4;
  v49 = a4;
  DeviceWerThrottleMask = HUBREG_QueryDeviceWerThrottleMask(v7, v5);
  inserted = ((1 << (v9 & 0x1F)) & DeviceWerThrottleMask) != 0 ? 0xC0000001 : 0;
  if ( ((1 << (v9 & 0x1F)) & DeviceWerThrottleMask) == 0 )
  {
    v12 = *(_WORD *)(a1 + 2468);
    v13 = *(_WORD *)(a1 + 2466);
    v14 = *(unsigned __int16 *)(a1 + 2464);
    memset(pszDest, 0, sizeof(pszDest));
    inserted = RtlStringCchPrintfA(pszDest, 5uLL, "%04X", v14);
    if ( inserted < 0 )
      goto LABEL_76;
    inserted = RtlStringCchPrintfA(&pszDest[5], 5uLL, "%04X", v13);
    if ( inserted < 0 )
      goto LABEL_76;
    inserted = RtlStringCchPrintfA(&pszDest[10], 5uLL, "%04X", v12);
    if ( inserted < 0 )
      goto LABEL_76;
    v15 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)&pszDest[16] = a1;
    *(_OWORD *)&pszDest[24] = 0LL;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1072))(WdfDriverGlobals, v15);
    for ( i = 1; i <= *(unsigned __int16 *)(a1 + 48); ++i )
    {
      for ( j = *(_QWORD *)(a1 + 2360); ; j = *(_QWORD *)(v17 + 248) )
      {
        v17 = j - 248;
        if ( a1 == v17 - 2112 )
          break;
        if ( *(unsigned __int16 *)(v17 + 200) == i )
        {
          if ( v17 )
          {
            v20 = *(_QWORD *)(v17 + 1328);
            if ( v20 )
            {
              v21 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(
                      WdfDriverGlobals,
                      *(_QWORD *)(v17 + 1328));
              (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1640))(
                WdfDriverGlobals,
                v21,
                "WER Tag",
                245LL,
                "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\wer.c");
              _InterlockedOr((volatile signed __int32 *)(v20 + 1636), 0x80000u);
              v16 = *(_QWORD *)(v20 + 16);
              if ( v16 )
              {
                v22 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1632))(WdfDriverGlobals);
                (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1640))(
                  WdfDriverGlobals,
                  v22,
                  "WER Tag",
                  251LL,
                  "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\wer.c");
                _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(v20 + 16) + 32LL), 0x8000u);
              }
            }
          }
          break;
        }
      }
    }
    Report = TelemetryData_CreateReport(v17, v16, v9, (unsigned int)pszDest, a5);
    v8 = Report;
    if ( Report )
    {
      inserted = TelemetryData_InsertTriageDataBlock(Report, pszDest, 40LL);
      if ( inserted >= 0 )
      {
        inserted = TelemetryData_InsertTriageDataBlock(v8, a1, 2624LL);
        if ( inserted >= 0 )
        {
          inserted = TelemetryData_InsertTriageDataBlock(v8, &WPP_GLOBAL_Control, 8LL);
          if ( inserted >= 0 )
          {
            if ( !WPP_GLOBAL_Control
              || (inserted = TelemetryData_InsertTriageDataBlock(v8, WPP_GLOBAL_Control, 80LL), inserted >= 0) )
            {
              inserted = imp_WppRecorderLogDumpLiveData(WPP_GLOBAL_Control, *(_QWORD *)(a1 + 2520), &v50, &v47, v53);
              if ( inserted >= 0 )
              {
                inserted = TelemetryData_InsertTriageDataBlock(v8, v50, v47);
                if ( inserted >= 0 )
                {
                  inserted = imp_WppRecorderDumpLiveDriverData(WPP_GLOBAL_Control, &v51, &v48, v53);
                  if ( inserted >= 0 )
                  {
                    inserted = TelemetryData_InsertTriageDataBlock(v8, v51, v48);
                    if ( inserted >= 0 )
                    {
                      if ( !*(_BYTE *)(a1 + 240)
                        || (v26 = *(_QWORD *)(a1 + 24)) == 0
                        || (inserted = TelemetryData_InsertTriageDataBlock(v8, v26, 336LL), inserted >= 0)
                        && ((v27 = *(_QWORD *)(a1 + 24), (v28 = *(_QWORD *)(v27 + 64)) == 0)
                         || (inserted = TelemetryData_InsertTriageDataBlock(v8, *(_QWORD *)(v27 + 64), 528LL),
                             inserted >= 0)
                         && ((v29 = *(_QWORD *)(v28 + 24)) == 0
                          || (inserted = WER_StoreDeviceContext(v8, v29), inserted >= 0))) )
                      {
                        v30 = *(_QWORD *)(a1 + 816);
                        if ( !v30
                          || (inserted = TelemetryData_InsertTriageDataBlock(v8, v30, *(unsigned __int16 *)(v30 + 2)),
                              inserted >= 0) )
                        {
                          v31 = *(_QWORD *)(a1 + 1256);
                          if ( !v31
                            || (inserted = TelemetryData_InsertTriageDataBlock(v8, v31, *(unsigned __int16 *)(v31 + 2)),
                                inserted >= 0) )
                          {
                            v32 = *(_QWORD *)(a1 + 2552);
                            if ( !v32
                              || (inserted = TelemetryData_InsertTriageDataBlock(
                                               v8,
                                               v32,
                                               *(unsigned __int16 *)(a1 + 2544)),
                                  inserted >= 0) )
                            {
                              v33 = 1;
                              if ( *(_WORD *)(a1 + 48) )
                              {
                                while ( 2 )
                                {
                                  for ( k = *(_QWORD *)(a1 + 2360); ; k = *(_QWORD *)(v35 + 248) )
                                  {
                                    v35 = k - 248;
                                    if ( a1 == v35 - 2112 )
                                      break;
                                    if ( *(unsigned __int16 *)(v35 + 200) == v33 )
                                    {
                                      if ( v35 )
                                      {
                                        inserted = TelemetryData_InsertTriageDataBlock(v8, v35, 1464LL);
                                        if ( inserted < 0 )
                                          goto LABEL_18;
                                        v36 = *(_QWORD *)(v35 + 32);
                                        if ( v36 )
                                        {
                                          inserted = TelemetryData_InsertTriageDataBlock(
                                                       v8,
                                                       v36,
                                                       *(unsigned __int16 *)(v36 + 2));
                                          if ( inserted < 0 )
                                            goto LABEL_18;
                                        }
                                        inserted = imp_WppRecorderLogDumpLiveData(
                                                     WPP_GLOBAL_Control,
                                                     *(_QWORD *)(v35 + 1432),
                                                     &v50,
                                                     &v47,
                                                     v53);
                                        if ( inserted < 0 )
                                          goto LABEL_18;
                                        inserted = TelemetryData_InsertTriageDataBlock(v8, v50, v47);
                                        if ( inserted < 0 )
                                          goto LABEL_18;
                                        v37 = *(_QWORD *)(v35 + 1328);
                                        if ( v37 )
                                        {
                                          inserted = WER_StoreDeviceContext(v8, v37);
                                          if ( inserted < 0 )
                                            goto LABEL_18;
                                        }
                                      }
                                      break;
                                    }
                                  }
                                  if ( ++v33 <= (unsigned int)*(unsigned __int16 *)(a1 + 48) )
                                    continue;
                                  break;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    else
    {
      inserted = -1073741670;
    }
LABEL_18:
    v24 = 1;
    if ( *(_WORD *)(a1 + 48) )
    {
      do
      {
        for ( m = *(_QWORD *)(a1 + 2360); ; m = *(_QWORD *)(v38 + 248) )
        {
          v38 = m - 248;
          if ( a1 == v38 - 2112 )
            break;
          if ( *(unsigned __int16 *)(v38 + 200) == v24 )
          {
            if ( v38 )
            {
              v39 = *(_QWORD *)(v38 + 1328);
              if ( v39 )
              {
                v40 = *(_QWORD *)(v38 + 1328);
                if ( (*(_DWORD *)(v39 + 1636) & 0x80000) != 0 )
                {
                  _InterlockedAnd((volatile signed __int32 *)(v39 + 1636), 0xFFF7FFFF);
                  v41 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(
                          WdfDriverGlobals,
                          v40);
                  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
                    WdfDriverGlobals,
                    v41,
                    "WER Tag",
                    234LL,
                    "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\wer.c");
                  v42 = *(_QWORD *)(v39 + 16);
                  if ( v42 && (*(_DWORD *)(v42 + 32) & 0x8000) != 0 )
                  {
                    _InterlockedAnd((volatile signed __int32 *)(v42 + 32), 0xFFFF7FFF);
                    v43 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(
                            WdfDriverGlobals,
                            *(_QWORD *)(v39 + 16));
                    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
                      WdfDriverGlobals,
                      v43,
                      "WER Tag",
                      240LL,
                      "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\wer.c");
                  }
                }
                else
                {
                  v44 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(
                          WdfDriverGlobals,
                          v40);
                  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1640))(
                    WdfDriverGlobals,
                    v44,
                    "WER Tag",
                    245LL,
                    "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\wer.c");
                  _InterlockedOr((volatile signed __int32 *)(v39 + 1636), 0x80000u);
                  if ( *(_QWORD *)(v39 + 16) )
                  {
                    v45 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1632))(WdfDriverGlobals);
                    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1640))(
                      WdfDriverGlobals,
                      v45,
                      "WER Tag",
                      251LL,
                      "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\wer.c");
                    _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(v39 + 16) + 32LL), 0x8000u);
                  }
                }
              }
            }
            break;
          }
        }
        ++v24;
      }
      while ( v24 <= *(unsigned __int16 *)(a1 + 48) );
      LOBYTE(v9) = v49;
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1088))(
      WdfDriverGlobals,
      *(_QWORD *)(a1 + 16));
  }
  if ( inserted < 0 )
  {
LABEL_76:
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 2520),
      2u,
      5u,
      0xBu,
      (__int64)&WPP_3cc5afefa8383607a56f5ec0a909290b_Traceguids,
      inserted);
    goto LABEL_77;
  }
  inserted = TelemetryData_SubmitReport(v8);
  if ( inserted >= 0 )
    WER_UpdateThrottlePolicy(*(_QWORD *)(a1 + 16), v9, *(_QWORD *)(a1 + 2520));
LABEL_77:
  if ( v8 )
  {
    if ( *(_DWORD *)(v8 + 8) )
    {
      ExFreePoolWithTag(*(PVOID *)v8, 0x74614454u);
      *(_QWORD *)v8 = 0LL;
      *(_DWORD *)(v8 + 8) = 0;
    }
    ExFreePoolWithTag((PVOID)v8, 0x74614454u);
  }
  return (unsigned int)inserted;
}
