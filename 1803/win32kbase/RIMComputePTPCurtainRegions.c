/*
 * XREFs of RIMComputePTPCurtainRegions @ 0x1C00E8C80
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C00EA954 (RIMCreatePointerDeviceInfo.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C003B310 (WPP_RECORDER_SF_D.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     EtwTraceTouchPadCurtainSize @ 0x1C00ACB10 (EtwTraceTouchPadCurtainSize.c)
 *     RtlUnicodeStringCatString @ 0x1C00E9BC4 (RtlUnicodeStringCatString.c)
 *     RtlUnicodeStringCopyString @ 0x1C00E9C38 (RtlUnicodeStringCopyString.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMComputePTPCurtainRegions(_DWORD *a1, const wchar_t *a2)
{
  int v3; // esi
  int v4; // edi
  int v5; // r14d
  __int32 v6; // r9d
  int v7; // r8d
  int v8; // r15d
  NTSTATUS v9; // r12d
  const wchar_t *v10; // rdx
  __m128i *p_si128; // rsi
  __int64 i; // rdi
  const WCHAR *v13; // rdx
  NTSTATUS v14; // eax
  int v15; // ecx
  int v16; // r10d
  int v17; // edx
  int v18; // eax
  int v19; // ecx
  unsigned int v20; // r9d
  PULONG ResultLength; // [rsp+30h] [rbp-D8h]
  ULONG v23[2]; // [rsp+38h] [rbp-D0h] BYREF
  void *KeyHandle; // [rsp+40h] [rbp-C8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-C0h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+58h] [rbp-B0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-A0h] BYREF
  __m128i si128; // [rsp+98h] [rbp-70h] BYREF
  int v29; // [rsp+A8h] [rbp-60h]
  int v30; // [rsp+ACh] [rbp-5Ch]
  PCWSTR SourceString[6]; // [rsp+B0h] [rbp-58h]
  _BYTE KeyValueInformation[4]; // [rsp+E0h] [rbp-28h] BYREF
  int v33; // [rsp+E4h] [rbp-24h]
  int v34; // [rsp+E8h] [rbp-20h]
  __int32 v35; // [rsp+ECh] [rbp-1Ch]
  char v36; // [rsp+F8h] [rbp-10h] BYREF

  if ( a1[6] != 7 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  SourceString[0] = L"SpaceBarOffset";
  v3 = 1500;
  v29 = 1500;
  SourceString[1] = L"HorizontalOffset";
  v4 = 1500;
  SourceString[2] = L"HorizontalOffsetIsNeg";
  SourceString[3] = L"AAPDisabled";
  SourceString[4] = L"AAPNonCurtainTop";
  SourceString[5] = L"AAPNonCurtainBaseWidth";
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v30 = 1500;
  if ( a1[68] )
    goto LABEL_37;
  v5 = 2;
  if ( a1[66] )
  {
    v6 = a1[63];
    v7 = a1[62];
    goto LABEL_22;
  }
  if ( (a1[69] & 0x20) != 0 )
    goto LABEL_37;
  v23[0] = 0;
  DestinationString.Buffer = (PWSTR)&v36;
  v8 = 1;
  *(_DWORD *)&DestinationString.Length = 45875200;
  v9 = 0;
  if ( RtlUnicodeStringCopyString(&DestinationString, a2) < 0 )
    goto LABEL_21;
  if ( RtlUnicodeStringCatString(&DestinationString, v10) < 0 )
    goto LABEL_21;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0 )
    goto LABEL_21;
  p_si128 = &si128;
  for ( i = 0LL; i != 6; ++i )
  {
    v13 = SourceString[i];
    v23[0] = 0;
    RtlInitUnicodeString(&ValueName, v13);
    v14 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x14u, v23);
    if ( v14 >= 0 && v33 == 4 && v34 == 4 )
    {
      p_si128->m128i_i32[0] = v35;
    }
    else
    {
      v8 = 0;
      v9 = v14;
    }
    p_si128 = (__m128i *)((char *)p_si128 + 4);
  }
  ZwClose(KeyHandle);
  if ( !v8 )
  {
    LODWORD(ResultLength) = v9;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x13u,
      0x11u,
      (__int64)&WPP_938c38feb455315d552f88149bc6281f_Traceguids,
      ResultLength);
  }
  if ( si128.m128i_i32[3] )
  {
LABEL_37:
    a1[69] |= 1u;
    v20 = a1[69];
    v19 = a1[61];
    v17 = a1[60];
    v16 = a1[59];
    return EtwTraceTouchPadCurtainSize(v16, v17, v19, -__CFSHR__(v20, 2));
  }
  v4 = v30;
  v3 = v29;
LABEL_21:
  v6 = si128.m128i_i32[0];
  v7 = si128.m128i_i32[1];
LABEL_22:
  v15 = (a1[37] - a1[35]) / 2;
  if ( si128.m128i_i32[2] && v7 )
    v7 = -v7;
  v16 = v3 + a1[36] - v6;
  if ( v16 <= a1[36] )
    v16 = a1[36];
  a1[59] = v16;
  v17 = v15 - v4 - v7 - v6;
  if ( v17 <= a1[35] )
    v17 = a1[35];
  a1[60] = v17;
  v18 = a1[37];
  v19 = v6 + v4 + v15 - v7;
  if ( v19 >= v18 )
    v19 = a1[37];
  a1[61] = v19;
  if ( v16 == a1[36] && v17 == a1[35] && v19 == v18 || v7 > v4 + v6 )
    v5 = 0;
  v20 = v5 | a1[69] & 0xFFFFFFFD;
  a1[69] = v20;
  return EtwTraceTouchPadCurtainSize(v16, v17, v19, -__CFSHR__(v20, 2));
}
