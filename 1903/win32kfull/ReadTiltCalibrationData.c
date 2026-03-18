/*
 * XREFs of ReadTiltCalibrationData @ 0x1C01D2A2C
 * Callers:
 *     CheckPointerDeviceConfiguration @ 0x1C00D7490 (CheckPointerDeviceConfiguration.c)
 * Callees:
 *     ?RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x1C00B9E6C (-RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z.c)
 *     ?RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x1C00BA040 (-RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     ?GetTiltKeyName@@YAJU_UNICODE_STRING@@PEAPEAGH@Z @ 0x1C01D1BC4 (-GetTiltKeyName@@YAJU_UNICODE_STRING@@PEAPEAGH@Z.c)
 *     ?ReadCalibrationDataImp@@YAJU_UNICODE_STRING@@0PEAKPEAPEAE@Z @ 0x1C01D1CA8 (-ReadCalibrationDataImp@@YAJU_UNICODE_STRING@@0PEAKPEAPEAE@Z.c)
 */

__int64 __fastcall ReadTiltCalibrationData(__int64 a1, struct _UNICODE_STRING *a2, ULONG a3)
{
  __int64 v3; // rbx
  struct _UNICODE_STRING v4; // xmm6
  int v5; // r12d
  int TiltKeyName; // edi
  int v8; // ecx
  __int64 i; // rax
  _DWORD *v10; // r14
  __int64 j; // rsi
  unsigned __int8 **v12; // r15
  unsigned int *v13; // r8
  struct _UNICODE_STRING v14; // [rsp+28h] [rbp-E0h] BYREF
  PCWSTR SourceString; // [rsp+38h] [rbp-D0h] BYREF
  UNICODE_STRING v16; // [rsp+40h] [rbp-C8h] BYREF
  struct _UNICODE_STRING DestinationString_8; // [rsp+58h] [rbp-B0h] BYREF
  struct _UNICODE_STRING v18; // [rsp+68h] [rbp-A0h] BYREF
  struct _UNICODE_STRING v19; // [rsp+78h] [rbp-90h] BYREF
  unsigned __int8 **v20[4]; // [rsp+88h] [rbp-80h]
  unsigned int *v21[4]; // [rsp+A8h] [rbp-60h]
  _DWORD v22[4]; // [rsp+C8h] [rbp-40h] BYREF
  char v23; // [rsp+D8h] [rbp-30h] BYREF
  _BYTE v24[1408]; // [rsp+398h] [rbp+290h] BYREF

  v3 = *(_QWORD *)(a1 + 344);
  v4 = *a2;
  v5 = *(_DWORD *)(a1 + 224);
  *(_QWORD *)&DestinationString_8.Length = 0LL;
  DestinationString_8.Buffer = 0LL;
  SourceString = 0LL;
  *(_DWORD *)(&v16.MaximumLength + 1) = 0;
  if ( !v3 )
    return 3221225628LL;
  *(_DWORD *)&v16.Length = 45875200;
  v16.Buffer = (PWSTR)&v23;
  TiltKeyName = RtlUnicodeStringCopy(&v16, (const struct _UNICODE_STRING *)(grpWinStaList + 168LL), a3);
  if ( TiltKeyName >= 0 )
  {
    v8 = 1;
    v21[0] = (unsigned int *)(v3 + 24);
    v21[1] = (unsigned int *)(v3 + 40);
    v21[2] = (unsigned int *)(v3 + 56);
    v21[3] = (unsigned int *)(v3 + 72);
    v20[0] = (unsigned __int8 **)(v3 + 16);
    v20[1] = (unsigned __int8 **)(v3 + 32);
    v20[2] = (unsigned __int8 **)(v3 + 48);
    v20[3] = (unsigned __int8 **)(v3 + 64);
    for ( i = 0LL; i < 4; ++i )
      v22[i] = v8++;
    v14 = v4;
    TiltKeyName = GetTiltKeyName(&v14, (unsigned __int16 **)&SourceString);
    if ( TiltKeyName >= 0 )
    {
      RtlInitUnicodeString(&DestinationString_8, SourceString);
      v10 = v22;
      for ( j = 0LL; j < 4; ++j )
      {
        *(_QWORD *)&v14.Length = 91750400LL;
        memset(v24, 0, 0x578uLL);
        v14.Buffer = (PWSTR)v24;
        RtlCopyUnicodeString(&v14, &v16);
        TiltKeyName = RtlUnicodeStringCatString(&v14, off_1C02D90B8[j]);
        if ( TiltKeyName >= 0 )
        {
          v12 = v20[j];
          v13 = v21[j];
          v18 = v14;
          v19 = DestinationString_8;
          TiltKeyName = ReadCalibrationDataImp(&v19, &v18, v13, v12);
          if ( TiltKeyName >= 0 && v5 == *v10 )
            *(_QWORD *)(v3 + 80) = *v12;
        }
        ++v10;
      }
      Win32FreePool(SourceString);
    }
  }
  return (unsigned int)TiltKeyName;
}
