/*
 * XREFs of HUBREG_OpenCreateUsbflagsDeviceKey @ 0x1C0072CE8
 * Callers:
 *     HUBREG_AssignUsbflagsValueForDevice @ 0x1C0073654 (HUBREG_AssignUsbflagsValueForDevice.c)
 *     HUBREG_QueryUsbflagsValuesForDevice @ 0x1C007378C (HUBREG_QueryUsbflagsValuesForDevice.c)
 *     HUBREG_QueryHubErrataFlags @ 0x1C007421C (HUBREG_QueryHubErrataFlags.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001A3C (WPP_RECORDER_SF_d.c)
 *     RtlUnicodeStringPrintf @ 0x1C0010EB4 (RtlUnicodeStringPrintf.c)
 *     RtlUnicodeStringInit @ 0x1C002D990 (RtlUnicodeStringInit.c)
 *     __security_check_cookie @ 0x1C003C520 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
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
  wchar_t *v10; // rdi
  int PersistedStateLocation; // eax
  int v12; // ebx
  wchar_t *PoolWithTag; // rax
  int v14; // eax
  const wchar_t *v15; // rdx
  NTSTATUS v16; // eax
  __int64 v18; // [rsp+28h] [rbp-A9h]
  __int64 v19; // [rsp+28h] [rbp-A9h]
  __int64 v20; // [rsp+28h] [rbp-A9h]
  __int64 v21; // [rsp+28h] [rbp-A9h]
  __int64 v22; // [rsp+50h] [rbp-81h] BYREF
  SIZE_T NumberOfBytes; // [rsp+58h] [rbp-79h] BYREF
  struct _UNICODE_STRING v24; // [rsp+60h] [rbp-71h] BYREF
  __int64 v25; // [rsp+70h] [rbp-61h]
  __int64 v26; // [rsp+78h] [rbp-59h]
  struct _UNICODE_STRING DestinationString; // [rsp+80h] [rbp-51h] BYREF
  char v28; // [rsp+90h] [rbp-41h] BYREF

  v25 = a3;
  v26 = a2;
  *(_DWORD *)&v24.Length = 3407872;
  v24.Buffer = (wchar_t *)&v28;
  v22 = 0LL;
  if ( a5 )
    *a5 = 0LL;
  v10 = 0LL;
  *a6 = 0LL;
  if ( a7 != 1 )
  {
    v15 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\usbflags";
LABEL_11:
    RtlUnicodeStringInit(&DestinationString, v15);
    goto LABEL_12;
  }
  PersistedStateLocation = RtlGetPersistedStateLocation(
                             L"UsbFlags",
                             0LL,
                             L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\usbflags",
                             0LL,
                             0LL,
                             0,
                             &NumberOfBytes);
  v12 = PersistedStateLocation;
  if ( PersistedStateLocation != -2147483643 )
  {
    LODWORD(v18) = PersistedStateLocation;
    WPP_RECORDER_SF_d(a8, 2u, 5u, 0xBu, (__int64)&WPP_a5d7102001b13a39eb4d855100c5c7b8_Traceguids, v18);
    goto LABEL_25;
  }
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, (unsigned int)NumberOfBytes, 0x64334855u);
  v10 = PoolWithTag;
  if ( PoolWithTag )
  {
    v14 = RtlGetPersistedStateLocation(
            L"UsbFlags",
            0LL,
            L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\usbflags",
            0LL,
            PoolWithTag,
            NumberOfBytes,
            0LL);
    v12 = v14;
    if ( v14 < 0 )
    {
      LODWORD(v19) = v14;
      WPP_RECORDER_SF_d(a8, 2u, 5u, 0xAu, (__int64)&WPP_a5d7102001b13a39eb4d855100c5c7b8_Traceguids, v19);
      goto LABEL_23;
    }
    v15 = v10;
    goto LABEL_11;
  }
LABEL_12:
  v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, struct _UNICODE_STRING *, _QWORD, _QWORD, __int64 *))(WdfFunctions_01015 + 1832))(
          WdfDriverGlobals,
          0LL,
          &DestinationString,
          a4,
          0LL,
          &v22);
  if ( v12 != -1073741772 )
    goto LABEL_15;
  if ( a7 == 1 )
  {
    v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, struct _UNICODE_STRING *, _QWORD, _DWORD, _QWORD, _QWORD, __int64 *))(WdfFunctions_01015 + 1840))(
            WdfDriverGlobals,
            0LL,
            &DestinationString,
            a4,
            0,
            0LL,
            0LL,
            &v22);
LABEL_15:
    if ( v12 >= 0 )
    {
      v16 = RtlUnicodeStringPrintf(&v24, L"%S%S%S", a1, v26, v25);
      v12 = v16;
      if ( v16 >= 0 )
      {
        v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *, __int64, _QWORD, _QWORD *))(WdfFunctions_01015 + 1832))(
                WdfDriverGlobals,
                v22,
                &v24,
                131097LL,
                0LL,
                a6);
        if ( v12 == -1073741772 )
          v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *, __int64, _DWORD, _QWORD, _QWORD, _QWORD *))(WdfFunctions_01015 + 1840))(
                  WdfDriverGlobals,
                  v22,
                  &v24,
                  983103LL,
                  0,
                  0LL,
                  0LL,
                  a6);
        if ( v12 < 0 )
        {
          LODWORD(v21) = v12;
          WPP_RECORDER_SF_d(a8, 2u, 5u, 0xEu, (__int64)&WPP_a5d7102001b13a39eb4d855100c5c7b8_Traceguids, v21);
        }
      }
      else
      {
        LODWORD(v20) = v16;
        WPP_RECORDER_SF_d(a8, 2u, 5u, 0xDu, (__int64)&WPP_a5d7102001b13a39eb4d855100c5c7b8_Traceguids, v20);
      }
      goto LABEL_23;
    }
  }
  LODWORD(v20) = v12;
  WPP_RECORDER_SF_d(a8, 2u, 5u, 0xCu, (__int64)&WPP_a5d7102001b13a39eb4d855100c5c7b8_Traceguids, v20);
LABEL_23:
  if ( v10 )
    ExFreePoolWithTag(v10, 0x64334855u);
LABEL_25:
  if ( v12 >= 0 )
  {
    if ( !a5 )
    {
LABEL_32:
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
      return (unsigned int)v12;
    }
    *a5 = v22;
  }
  else
  {
    if ( *a6 )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
      *a6 = 0LL;
    }
    if ( v22 )
      goto LABEL_32;
  }
  return (unsigned int)v12;
}
