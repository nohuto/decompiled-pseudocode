/*
 * XREFs of QueryFeatureOverride @ 0x1401B37B4
 * Callers:
 *     EvaluateCurrentStateFromRegistry @ 0x1401B36BC (EvaluateCurrentStateFromRegistry.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140015E00 (RtlAppendUnicodeToString.c)
 *     RtlCopyUnicodeString @ 0x1400B9890 (RtlCopyUnicodeString.c)
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
 *     memset @ 0x1401D1880 (memset.c)
 *     RtlIntegerToUnicodeString @ 0x1405A8E00 (RtlIntegerToUnicodeString.c)
 *     RtlQueryRegistryValuesEx @ 0x1406C7640 (RtlQueryRegistryValuesEx.c)
 */

__int64 __fastcall QueryFeatureOverride(ULONG a1, int a2, _DWORD *a3, unsigned int *a4)
{
  unsigned int v4; // ebx
  __int64 v8; // rax
  __int64 v9; // rcx
  int v11; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v12; // [rsp+34h] [rbp-CCh] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  UNICODE_STRING String; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v15[22]; // [rsp+60h] [rbp-A0h] BYREF
  char v16; // [rsp+110h] [rbp+10h] BYREF
  char v17; // [rsp+130h] [rbp+30h] BYREF

  v4 = 0;
  *(_DWORD *)&String.Length = 0x200000;
  *a3 = 0;
  String.Buffer = (wchar_t *)&v16;
  *a4 = 0x80000000;
  v11 = 0;
  v12 = 0;
  *(_DWORD *)&DestinationString.Length = 2883584;
  DestinationString.Buffer = (wchar_t *)&v17;
  RtlIntegerToUnicodeString(a1, 0xAu, &String);
  memset(v15, 0, 0xA8uLL);
  v8 = 0LL;
  if ( a2 )
  {
    RtlCopyUnicodeString(&DestinationString, &String);
    RtlAppendUnicodeToString(&DestinationString, L"_variant");
    v15[2] = DestinationString.Buffer;
    v15[3] = &v12;
    v8 = 1LL;
    LODWORD(v15[1]) = 292;
    LODWORD(v15[4]) = 0x4000000;
    v15[5] = 0LL;
    LODWORD(v15[6]) = 0;
  }
  v9 = 7 * v8;
  v15[v9 + 2] = String.Buffer;
  v15[v9 + 3] = &v11;
  LODWORD(v15[v9 + 1]) = 292;
  LODWORD(v15[v9 + 4]) = 0x4000000;
  v15[v9 + 5] = 0LL;
  LODWORD(v15[v9 + 6]) = 0;
  if ( (int)RtlQueryRegistryValuesEx(
              0LL,
              L"\\Registry\\MACHINE\\System\\CurrentControlSet\\Policies\\Microsoft\\FeatureManagement\\Overrides",
              v15,
              0LL,
              0LL) >= 0 )
  {
    *a3 = (v11 != 0) + 1;
    if ( a2 && v12 <= 0xFF )
      *a4 = v12;
    return 1;
  }
  if ( !a2 )
    return 1;
  return v4;
}
