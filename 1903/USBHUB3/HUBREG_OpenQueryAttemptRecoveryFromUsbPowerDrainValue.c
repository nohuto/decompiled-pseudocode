/*
 * XREFs of HUBREG_OpenQueryAttemptRecoveryFromUsbPowerDrainValue @ 0x1C007EDEC
 * Callers:
 *     HUBPDO_EvtWorkItemDripsWatchDogCallback @ 0x1C00779E0 (HUBPDO_EvtWorkItemDripsWatchDogCallback.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     RtlUnicodeStringInit @ 0x1C0030480 (RtlUnicodeStringInit.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBREG_OpenQueryAttemptRecoveryFromUsbPowerDrainValue(_DWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rsi
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  unsigned int PersistedStateLocation; // eax
  wchar_t *PoolWithTag; // r14
  NTSTATUS v9; // eax
  unsigned __int16 v10; // r9
  __int64 v12; // [rsp+28h] [rbp-28h]
  __int64 v13; // [rsp+28h] [rbp-28h]
  __int64 v14; // [rsp+28h] [rbp-28h]
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  SIZE_T NumberOfBytes; // [rsp+98h] [rbp+48h] BYREF
  __int64 v17; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v18; // [rsp+A8h] [rbp+58h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_1C0064130);
  v17 = 0LL;
  v3 = v2;
  v18 = 0LL;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *, __int64, _QWORD, __int64 *))(WdfFunctions_01015
                                                                                                  + 1832))(
         WdfDriverGlobals,
         0LL,
         &g_UsbAutomaticSurpriseRemovalKeyName,
         131097LL,
         0LL,
         &v17);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, _DWORD *))(WdfFunctions_01015 + 1920))(
           WdfDriverGlobals,
           v17,
           L"@B",
           a1);
    v5 = v6;
    if ( v6 < 0 )
    {
      *a1 = 0;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v12) = v6;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v3 + 64),
          2u,
          2u,
          0x8Au,
          (__int64)&WPP_c20ed9a0a0fe3a4cd923be00534b700c_Traceguids,
          v12);
      }
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1848))(WdfDriverGlobals, v17);
    v17 = 0LL;
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v12) = v4;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v3 + 64),
      2u,
      2u,
      0x89u,
      (__int64)&WPP_c20ed9a0a0fe3a4cd923be00534b700c_Traceguids,
      v12);
  }
  if ( (unsigned __int8)RtlIsStateSeparationEnabled() == 1 )
  {
    PersistedStateLocation = RtlGetPersistedStateLocation(
                               L"USB",
                               0LL,
                               L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\usb",
                               0LL,
                               0LL,
                               0,
                               &NumberOfBytes);
    v5 = PersistedStateLocation;
    if ( PersistedStateLocation != -2147483643 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v13) = PersistedStateLocation;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v3 + 64),
          2u,
          2u,
          0x8Bu,
          (__int64)&WPP_c20ed9a0a0fe3a4cd923be00534b700c_Traceguids,
          v13);
      }
      goto LABEL_33;
    }
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x64334855u);
    if ( !PoolWithTag )
    {
      v5 = -1073741670;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v13) = -1073741670;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v3 + 64),
          2u,
          2u,
          0x8Cu,
          (__int64)&WPP_c20ed9a0a0fe3a4cd923be00534b700c_Traceguids,
          v13);
      }
      goto LABEL_33;
    }
    v9 = RtlGetPersistedStateLocation(
           L"USB",
           0LL,
           L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\usb",
           0LL,
           PoolWithTag,
           NumberOfBytes,
           0LL);
    v5 = v9;
    if ( v9 >= 0 )
    {
      v9 = RtlUnicodeStringInit(&DestinationString, PoolWithTag);
      v5 = v9;
      if ( v9 >= 0 )
      {
        v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, struct _UNICODE_STRING *, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 1832))(
               WdfDriverGlobals,
               0LL,
               &DestinationString,
               131097LL,
               0LL,
               &v18);
        v5 = v9;
        if ( v9 >= 0 )
        {
          v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 1832))(
                 WdfDriverGlobals,
                 v18,
                 L"02",
                 131097LL,
                 0LL,
                 &v17);
          v5 = v9;
          if ( v9 >= 0 )
          {
            v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, _DWORD *))(WdfFunctions_01015 + 1920))(
                   WdfDriverGlobals,
                   v17,
                   L"@B",
                   a1);
            v5 = v9;
            if ( v9 >= 0 || WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_32;
            v10 = 145;
            goto LABEL_31;
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v10 = 144;
            goto LABEL_31;
          }
        }
        else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v10 = 143;
          goto LABEL_31;
        }
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v10 = 142;
        goto LABEL_31;
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = 141;
LABEL_31:
      LODWORD(v14) = v9;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v3 + 64),
        2u,
        2u,
        v10,
        (__int64)&WPP_c20ed9a0a0fe3a4cd923be00534b700c_Traceguids,
        v14);
    }
LABEL_32:
    ExFreePoolWithTag(PoolWithTag, 0x64334855u);
  }
LABEL_33:
  if ( v18 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  if ( v17 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  return v5;
}
