/*
 * XREFs of RtlpGetDeviceFamilyInfoEnum @ 0x180074D60
 * Callers:
 *     RtlConvertDeviceFamilyInfoToString @ 0x180074C70 (RtlConvertDeviceFamilyInfoToString.c)
 *     RtlGetDeviceFamilyInfoEnum @ 0x180074D50 (RtlGetDeviceFamilyInfoEnum.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 *     RtlGetVersion @ 0x18002D230 (RtlGetVersion.c)
 *     sub_180074F88 @ 0x180074F88 (sub_180074F88.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwOpenKey @ 0x18009C920 (ZwOpenKey.c)
 *     ZwQueryLicenseValue @ 0x18009F070 (ZwQueryLicenseValue.c)
 */

void __fastcall RtlpGetDeviceFamilyInfoEnum(_QWORD *a1, unsigned int *a2, unsigned int *a3)
{
  __int64 v6; // rsi
  unsigned int v7; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v8; // [rsp+38h] [rbp-C8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  int v10; // [rsp+50h] [rbp-B0h] BYREF
  int v11; // [rsp+54h] [rbp-ACh]
  __int64 v12; // [rsp+58h] [rbp-A8h]
  UNICODE_STRING *p_DestinationString; // [rsp+60h] [rbp-A0h]
  int v14; // [rsp+68h] [rbp-98h]
  int v15; // [rsp+6Ch] [rbp-94h]
  __int128 v16; // [rsp+70h] [rbp-90h]
  _BYTE v17[16]; // [rsp+80h] [rbp-80h] BYREF
  int v18[72]; // [rsp+90h] [rbp-70h] BYREF

  if ( a1 )
  {
    v11 = 0;
    v15 = 0;
    v6 = 0LL;
    v8 = 0LL;
    v7 = 0;
    *(_QWORD *)&DestinationString.Length = 0LL;
    DestinationString.Buffer = 0LL;
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion");
    v12 = 0LL;
    p_DestinationString = &DestinationString;
    v10 = 48;
    v14 = 64;
    v16 = 0LL;
    if ( (int)ZwOpenKey(&v8, 131353LL, &v10) >= 0 )
    {
      if ( (int)sub_180074F88(v8, L"UBR", &v7) >= 0 )
        v6 = v7;
      ZwClose(v8);
    }
    v18[0] = 284;
    RtlGetVersion(v18);
    *a1 = v6
        + (((unsigned int)v18[3] + (((unsigned int)v18[2] + ((unsigned __int64)(unsigned int)v18[1] << 16)) << 16)) << 16);
  }
  if ( a2 )
  {
    v7 = 3;
    *(_QWORD *)&DestinationString.Length = 0LL;
    DestinationString.Buffer = 0LL;
    RtlInitUnicodeString(&DestinationString, L"Kernel-OneCore-DeviceFamilyID");
    ZwQueryLicenseValue(&DestinationString, &v8, &v7, 4LL, v17);
    *a2 = v7;
  }
  if ( a3 )
  {
    v11 = 0;
    v15 = 0;
    v8 = 0LL;
    v7 = 0;
    *a3 = 0;
    *(_QWORD *)&DestinationString.Length = 0LL;
    DestinationString.Buffer = 0LL;
    RtlInitUnicodeString(
      &DestinationString,
      L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\OEM");
    v12 = 0LL;
    p_DestinationString = &DestinationString;
    v10 = 48;
    v14 = 64;
    v16 = 0LL;
    if ( (int)ZwOpenKey(&v8, 131353LL, &v10) >= 0 )
    {
      if ( (int)sub_180074F88(v8, L"DeviceForm", &v7) >= 0 )
        *a3 = v7;
      ZwClose(v8);
    }
  }
}
