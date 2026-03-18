/*
 * XREFs of RIMComputePTPCurtainRegions @ 0x1C01128C0
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C0115410 (RIMCreatePointerDeviceInfo.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0032A20 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     EtwTraceTouchPadCurtainSize @ 0x1C00E81C0 (EtwTraceTouchPadCurtainSize.c)
 *     RtlUnicodeStringCatString @ 0x1C0113B74 (RtlUnicodeStringCatString.c)
 *     RtlUnicodeStringCopyString @ 0x1C0113BE8 (RtlUnicodeStringCopyString.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMComputePTPCurtainRegions(_DWORD *a1, const wchar_t *a2, __int64 a3)
{
  int v4; // esi
  int v5; // edi
  int v6; // r14d
  __int32 v7; // r9d
  int v8; // r8d
  int v9; // r15d
  NTSTATUS v10; // r12d
  const wchar_t *v11; // rdx
  __m128i *p_si128; // rsi
  __int64 i; // rdi
  const WCHAR *v14; // rdx
  NTSTATUS v15; // eax
  int v16; // ecx
  int v17; // r10d
  int v18; // edx
  int v19; // eax
  int v20; // ecx
  unsigned int v21; // r9d
  PULONG ResultLength; // [rsp+30h] [rbp-D8h]
  ULONG v24[2]; // [rsp+38h] [rbp-D0h] BYREF
  void *KeyHandle; // [rsp+40h] [rbp-C8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-C0h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+58h] [rbp-B0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-A0h] BYREF
  __m128i si128; // [rsp+98h] [rbp-70h] BYREF
  int v30; // [rsp+A8h] [rbp-60h]
  int v31; // [rsp+ACh] [rbp-5Ch]
  PCWSTR SourceString[6]; // [rsp+B0h] [rbp-58h]
  _BYTE KeyValueInformation[4]; // [rsp+E0h] [rbp-28h] BYREF
  int v34; // [rsp+E4h] [rbp-24h]
  int v35; // [rsp+E8h] [rbp-20h]
  __int32 v36; // [rsp+ECh] [rbp-1Ch]
  char v37; // [rsp+F8h] [rbp-10h] BYREF

  if ( a1[6] != 7 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  SourceString[0] = L"SpaceBarOffset";
  v4 = 1500;
  v30 = 1500;
  SourceString[1] = L"HorizontalOffset";
  v5 = 1500;
  SourceString[2] = L"HorizontalOffsetIsNeg";
  SourceString[3] = L"AAPDisabled";
  SourceString[4] = L"AAPNonCurtainTop";
  SourceString[5] = L"AAPNonCurtainBaseWidth";
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v31 = 1500;
  if ( a1[76] )
    goto LABEL_37;
  v6 = 2;
  if ( a1[74] )
  {
    v7 = a1[71];
    v8 = a1[70];
    goto LABEL_22;
  }
  if ( (a1[77] & 0x20) != 0 )
    goto LABEL_37;
  v24[0] = 0;
  DestinationString.Buffer = (PWSTR)&v37;
  v9 = 1;
  *(_DWORD *)&DestinationString.Length = 45875200;
  v10 = 0;
  if ( RtlUnicodeStringCopyString(&DestinationString, a2) < 0 )
    goto LABEL_21;
  if ( RtlUnicodeStringCatString(&DestinationString, v11) < 0 )
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
    v14 = SourceString[i];
    v24[0] = 0;
    RtlInitUnicodeString(&ValueName, v14);
    v15 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x14u, v24);
    if ( v15 >= 0 && v34 == 4 && v35 == 4 )
    {
      p_si128->m128i_i32[0] = v36;
    }
    else
    {
      v9 = 0;
      v10 = v15;
    }
    p_si128 = (__m128i *)((char *)p_si128 + 4);
  }
  ZwClose(KeyHandle);
  if ( !v9 )
  {
    LODWORD(ResultLength) = v10;
    WPP_RECORDER_SF_d(
      gRimLog,
      3u,
      0x14u,
      0x11u,
      (__int64)&WPP_29b2d95337ca3c6b60bf6989ded744e8_Traceguids,
      ResultLength);
  }
  if ( si128.m128i_i32[3] )
  {
LABEL_37:
    a1[77] |= 1u;
    v21 = a1[77];
    v20 = a1[69];
    v18 = a1[68];
    v17 = a1[67];
    return EtwTraceTouchPadCurtainSize(v17, v18, v20, -__CFSHR__(v21, 2));
  }
  v5 = v31;
  v4 = v30;
LABEL_21:
  v7 = si128.m128i_i32[0];
  v8 = si128.m128i_i32[1];
LABEL_22:
  v16 = (a1[37] - a1[35]) / 2;
  if ( si128.m128i_i32[2] && v8 )
    v8 = -v8;
  v17 = v4 + a1[36] - v7;
  if ( v17 <= a1[36] )
    v17 = a1[36];
  a1[67] = v17;
  v18 = v16 - v5 - v8 - v7;
  if ( v18 <= a1[35] )
    v18 = a1[35];
  a1[68] = v18;
  v19 = a1[37];
  v20 = v7 + v5 + v16 - v8;
  if ( v20 >= v19 )
    v20 = a1[37];
  a1[69] = v20;
  if ( v17 == a1[36] && v18 == a1[35] && v20 == v19 || v8 > v5 + v7 )
    v6 = 0;
  v21 = v6 | a1[77] & 0xFFFFFFFD;
  a1[77] = v21;
  return EtwTraceTouchPadCurtainSize(v17, v18, v20, -__CFSHR__(v21, 2));
}
