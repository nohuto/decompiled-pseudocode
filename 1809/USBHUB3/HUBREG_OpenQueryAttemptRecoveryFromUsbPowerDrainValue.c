/*
 * XREFs of HUBREG_OpenQueryAttemptRecoveryFromUsbPowerDrainValue @ 0x1C0077780
 * Callers:
 *     HUBPDO_EvtWorkItemDripsWatchDogCallback @ 0x1C0070D70 (HUBPDO_EvtWorkItemDripsWatchDogCallback.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001A3C (WPP_RECORDER_SF_d.c)
 *     RtlUnicodeStringInit @ 0x1C002D990 (RtlUnicodeStringInit.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBREG_OpenQueryAttemptRecoveryFromUsbPowerDrainValue(_DWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // r14
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  unsigned int PersistedStateLocation; // eax
  unsigned __int16 v8; // r9
  wchar_t *PoolWithTag; // r15
  NTSTATUS v10; // eax
  unsigned __int16 v11; // r9
  __int64 v13; // [rsp+28h] [rbp-28h]
  __int64 v14; // [rsp+28h] [rbp-28h]
  __int64 v15; // [rsp+28h] [rbp-28h]
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  SIZE_T NumberOfBytes; // [rsp+98h] [rbp+48h] BYREF
  __int64 v18; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v19; // [rsp+A8h] [rbp+58h] BYREF

  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_1C005F130);
  v18 = 0LL;
  v3 = v2;
  v19 = 0LL;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *, __int64, _QWORD, __int64 *))(WdfFunctions_01015
                                                                                                  + 1832))(
         WdfDriverGlobals,
         0LL,
         &g_UsbAutomaticSurpriseRemovalKeyName,
         131097LL,
         0LL,
         &v18);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, _DWORD *))(WdfFunctions_01015 + 1920))(
           WdfDriverGlobals,
           v18,
           L"@B",
           a1);
    v5 = v6;
    if ( v6 < 0 )
    {
      *a1 = 0;
      LODWORD(v13) = v6;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v3 + 64),
        2u,
        2u,
        0x8Au,
        (__int64)&WPP_a5d7102001b13a39eb4d855100c5c7b8_Traceguids,
        v13);
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1848))(WdfDriverGlobals, v18);
    v18 = 0LL;
  }
  else
  {
    LODWORD(v13) = v4;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v3 + 64),
      2u,
      2u,
      0x89u,
      (__int64)&WPP_a5d7102001b13a39eb4d855100c5c7b8_Traceguids,
      v13);
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
      v8 = 139;
      LODWORD(v14) = PersistedStateLocation;
LABEL_9:
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v3 + 64),
        2u,
        2u,
        v8,
        (__int64)&WPP_a5d7102001b13a39eb4d855100c5c7b8_Traceguids,
        v14);
      goto LABEL_24;
    }
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x64334855u);
    if ( !PoolWithTag )
    {
      v5 = -1073741670;
      v8 = 140;
      LODWORD(v14) = -1073741670;
      goto LABEL_9;
    }
    v10 = RtlGetPersistedStateLocation(
            L"USB",
            0LL,
            L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\usb",
            0LL,
            PoolWithTag,
            NumberOfBytes,
            0LL);
    v5 = v10;
    if ( v10 >= 0 )
    {
      v10 = RtlUnicodeStringInit(&DestinationString, PoolWithTag);
      v5 = v10;
      if ( v10 >= 0 )
      {
        v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, struct _UNICODE_STRING *, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 1832))(
                WdfDriverGlobals,
                0LL,
                &DestinationString,
                131097LL,
                0LL,
                &v19);
        v5 = v10;
        if ( v10 >= 0 )
        {
          v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 1832))(
                  WdfDriverGlobals,
                  v19,
                  L"02",
                  131097LL,
                  0LL,
                  &v18);
          v5 = v10;
          if ( v10 >= 0 )
          {
            v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, _DWORD *))(WdfFunctions_01015 + 1920))(
                    WdfDriverGlobals,
                    v18,
                    L"@B",
                    a1);
            v5 = v10;
            if ( v10 >= 0 )
            {
LABEL_23:
              ExFreePoolWithTag(PoolWithTag, 0x64334855u);
              goto LABEL_24;
            }
            v11 = 145;
          }
          else
          {
            v11 = 144;
          }
        }
        else
        {
          v11 = 143;
        }
      }
      else
      {
        v11 = 142;
      }
    }
    else
    {
      v11 = 141;
    }
    LODWORD(v15) = v10;
    WPP_RECORDER_SF_d(*(_QWORD *)(v3 + 64), 2u, 2u, v11, (__int64)&WPP_a5d7102001b13a39eb4d855100c5c7b8_Traceguids, v15);
    goto LABEL_23;
  }
LABEL_24:
  if ( v19 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  if ( v18 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  return v5;
}
