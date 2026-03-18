/*
 * XREFs of ReadTiltCalibrationData @ 0x1C019DAE4
 * Callers:
 *     CheckPointerDeviceConfiguration @ 0x1C0107A6C (CheckPointerDeviceConfiguration.c)
 * Callees:
 *     RtlUnicodeStringCatString @ 0x1C006980C (RtlUnicodeStringCatString.c)
 *     RtlUnicodeStringCopy @ 0x1C0069934 (RtlUnicodeStringCopy.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     ?GetTiltKeyName@@YAJU_UNICODE_STRING@@PEAPEAGH@Z @ 0x1C019CD78 (-GetTiltKeyName@@YAJU_UNICODE_STRING@@PEAPEAGH@Z.c)
 *     ?ReadCalibrationDataImp@@YAJU_UNICODE_STRING@@0PEAKPEAPEAE@Z @ 0x1C019CE50 (-ReadCalibrationDataImp@@YAJU_UNICODE_STRING@@0PEAKPEAPEAE@Z.c)
 */

__int64 __fastcall ReadTiltCalibrationData(__int64 a1, struct _UNICODE_STRING *a2)
{
  __int64 v2; // rbx
  struct _UNICODE_STRING v3; // xmm6
  int v4; // r12d
  int TiltKeyName; // edi
  int v7; // ecx
  __int64 i; // rax
  _DWORD *v9; // r14
  __int64 j; // rsi
  unsigned __int8 **v11; // r15
  unsigned int *v12; // r8
  PCWSTR SourceString; // [rsp+28h] [rbp-E0h] BYREF
  struct _UNICODE_STRING v14; // [rsp+38h] [rbp-D0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-C0h] BYREF
  struct _UNICODE_STRING v16; // [rsp+58h] [rbp-B0h] BYREF
  struct _UNICODE_STRING v17; // [rsp+68h] [rbp-A0h] BYREF
  struct _UNICODE_STRING v18; // [rsp+78h] [rbp-90h] BYREF
  unsigned __int8 **v19[4]; // [rsp+88h] [rbp-80h]
  unsigned int *v20[4]; // [rsp+A8h] [rbp-60h]
  _DWORD v21[4]; // [rsp+C8h] [rbp-40h] BYREF
  char v22; // [rsp+D8h] [rbp-30h] BYREF
  _BYTE v23[1408]; // [rsp+398h] [rbp+290h] BYREF

  v2 = *(_QWORD *)(a1 + 304);
  v3 = *a2;
  v4 = *(_DWORD *)(a1 + 224);
  SourceString = 0LL;
  if ( !v2 )
    return 3221225628LL;
  *(_DWORD *)&DestinationString.Length = 45875200;
  DestinationString.Buffer = (PWSTR)&v22;
  TiltKeyName = RtlUnicodeStringCopy(&DestinationString, (PCUNICODE_STRING)(grpWinStaList + 168LL));
  if ( TiltKeyName >= 0 )
  {
    v7 = 1;
    v20[0] = (unsigned int *)(v2 + 24);
    v20[1] = (unsigned int *)(v2 + 40);
    v20[2] = (unsigned int *)(v2 + 56);
    v20[3] = (unsigned int *)(v2 + 72);
    v19[0] = (unsigned __int8 **)(v2 + 16);
    v19[1] = (unsigned __int8 **)(v2 + 32);
    v19[2] = (unsigned __int8 **)(v2 + 48);
    v19[3] = (unsigned __int8 **)(v2 + 64);
    for ( i = 0LL; i < 4; ++i )
      v21[i] = v7++;
    v14 = v3;
    TiltKeyName = GetTiltKeyName(&v14, (unsigned __int16 **)&SourceString);
    if ( TiltKeyName >= 0 )
    {
      RtlInitUnicodeString(&v16, SourceString);
      v9 = v21;
      for ( j = 0LL; j < 4; ++j )
      {
        memset(v23, 0, 0x578uLL);
        *(_DWORD *)&v14.Length = 91750400;
        v14.Buffer = (PWSTR)v23;
        RtlCopyUnicodeString(&v14, &DestinationString);
        TiltKeyName = RtlUnicodeStringCatString(&v14, off_1C02D57E0[j]);
        if ( TiltKeyName >= 0 )
        {
          v11 = v19[j];
          v12 = v20[j];
          v17 = v14;
          v18 = v16;
          TiltKeyName = ReadCalibrationDataImp(&v18, &v17, v12, v11);
          if ( TiltKeyName >= 0 && v4 == *v9 )
            *(_QWORD *)(v2 + 80) = *v11;
        }
        ++v9;
      }
      Win32FreePool(SourceString);
    }
  }
  return (unsigned int)TiltKeyName;
}
