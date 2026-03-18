/*
 * XREFs of HUBREG_OpenCreateUsbflagsDeviceKey @ 0x1C0079C4C
 * Callers:
 *     HUBREG_AssignUsbflagsValueForDevice @ 0x1C007A630 (HUBREG_AssignUsbflagsValueForDevice.c)
 *     HUBREG_QueryUsbflagsValuesForDevice @ 0x1C007A778 (HUBREG_QueryUsbflagsValuesForDevice.c)
 *     HUBREG_QueryHubErrataFlags @ 0x1C007B314 (HUBREG_QueryHubErrataFlags.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     RtlUnicodeStringPrintf @ 0x1C000B2B8 (RtlUnicodeStringPrintf.c)
 *     RtlUnicodeStringInit @ 0x1C0030480 (RtlUnicodeStringInit.c)
 *     __security_check_cookie @ 0x1C0041200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBREG_OpenCreateUsbflagsDeviceKey(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        _QWORD *a5,
        _QWORD *a6,
        char a7,
        __int64 a8)
{
  wchar_t *v9; // rdi
  NTSTATUS PersistedStateLocation; // ebx
  wchar_t *PoolWithTag; // rax
  unsigned __int16 v12; // r9
  const wchar_t *v13; // rdx
  __int64 v15; // [rsp+28h] [rbp-B1h]
  __int64 v16; // [rsp+28h] [rbp-B1h]
  __int64 v17; // [rsp+50h] [rbp-89h] BYREF
  SIZE_T NumberOfBytes; // [rsp+58h] [rbp-81h] BYREF
  struct _UNICODE_STRING v19; // [rsp+60h] [rbp-79h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-69h] BYREF
  __int64 v21; // [rsp+80h] [rbp-59h]
  __int64 v22; // [rsp+88h] [rbp-51h]
  __int64 v23; // [rsp+90h] [rbp-49h]
  char v24; // [rsp+98h] [rbp-41h] BYREF

  v19.Buffer = (wchar_t *)&v24;
  v23 = a1;
  v21 = a3;
  v22 = a2;
  *(_QWORD *)&v19.Length = 3407872LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v17 = 0LL;
  if ( a5 )
    *a5 = 0LL;
  v9 = 0LL;
  *a6 = 0LL;
  if ( a7 != 1 )
  {
    v13 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\usbflags";
    goto LABEL_13;
  }
  PersistedStateLocation = RtlGetPersistedStateLocation(
                             L"UsbFlags",
                             0LL,
                             L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\usbflags",
                             0LL,
                             0LL,
                             0,
                             &NumberOfBytes);
  if ( PersistedStateLocation == -2147483643 )
  {
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, (unsigned int)NumberOfBytes, 0x64334855u);
    v9 = PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_14;
    PersistedStateLocation = RtlGetPersistedStateLocation(
                               L"UsbFlags",
                               0LL,
                               L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\usbflags",
                               0LL,
                               PoolWithTag,
                               NumberOfBytes,
                               0LL);
    if ( PersistedStateLocation < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_30;
      v12 = 10;
      goto LABEL_29;
    }
    v13 = v9;
LABEL_13:
    RtlUnicodeStringInit(&DestinationString, v13);
LABEL_14:
    PersistedStateLocation = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, struct _UNICODE_STRING *, _QWORD, _QWORD, __int64 *))(WdfFunctions_01015 + 1832))(
                               WdfDriverGlobals,
                               0LL,
                               &DestinationString,
                               a4,
                               0LL,
                               &v17);
    if ( PersistedStateLocation == -1073741772 )
    {
      if ( a7 != 1 )
      {
LABEL_18:
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_30;
        v12 = 12;
        goto LABEL_29;
      }
      PersistedStateLocation = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, struct _UNICODE_STRING *, _QWORD, _DWORD, _QWORD, _QWORD, __int64 *))(WdfFunctions_01015 + 1840))(
                                 WdfDriverGlobals,
                                 0LL,
                                 &DestinationString,
                                 a4,
                                 0,
                                 0LL,
                                 0LL,
                                 &v17);
    }
    if ( PersistedStateLocation < 0 )
      goto LABEL_18;
    PersistedStateLocation = RtlUnicodeStringPrintf(&v19, L"%S%S%S", v23, v22, v21);
    if ( PersistedStateLocation < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_30;
      v12 = 13;
      goto LABEL_29;
    }
    PersistedStateLocation = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *, __int64, _QWORD, _QWORD *))(WdfFunctions_01015 + 1832))(
                               WdfDriverGlobals,
                               v17,
                               &v19,
                               131097LL,
                               0LL,
                               a6);
    if ( PersistedStateLocation == -1073741772 )
    {
      if ( a7 != 1 )
      {
LABEL_27:
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_30;
        v12 = 14;
LABEL_29:
        LODWORD(v16) = PersistedStateLocation;
        WPP_RECORDER_SF_d(a8, 2u, 5u, v12, (__int64)&WPP_c20ed9a0a0fe3a4cd923be00534b700c_Traceguids, v16);
LABEL_30:
        if ( v9 )
          ExFreePoolWithTag(v9, 0x64334855u);
        goto LABEL_32;
      }
      PersistedStateLocation = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *, __int64, _DWORD, _QWORD, _QWORD, _QWORD *))(WdfFunctions_01015 + 1840))(
                                 WdfDriverGlobals,
                                 v17,
                                 &v19,
                                 983103LL,
                                 0,
                                 0LL,
                                 0LL,
                                 a6);
    }
    if ( PersistedStateLocation >= 0 )
      goto LABEL_30;
    goto LABEL_27;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v15) = PersistedStateLocation;
    WPP_RECORDER_SF_d(a8, 2u, 5u, 0xBu, (__int64)&WPP_c20ed9a0a0fe3a4cd923be00534b700c_Traceguids, v15);
  }
LABEL_32:
  if ( PersistedStateLocation >= 0 )
  {
    if ( !a5 )
    {
LABEL_39:
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
      return (unsigned int)PersistedStateLocation;
    }
    *a5 = v17;
  }
  else
  {
    if ( *a6 )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
      *a6 = 0LL;
    }
    if ( v17 )
      goto LABEL_39;
  }
  return (unsigned int)PersistedStateLocation;
}
