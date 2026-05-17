/*
 * XREFs of QueryFeatureOverride @ 0x18009F2B4
 * Callers:
 *     EvaluateCurrentStateFromRegistry @ 0x18009F1BC (EvaluateCurrentStateFromRegistry.c)
 * Callees:
 *     RtlIntegerToUnicodeString @ 0x180022620 (RtlIntegerToUnicodeString.c)
 *     RtlCopyUnicodeString @ 0x1800411E0 (RtlCopyUnicodeString.c)
 *     RtlAppendUnicodeToString @ 0x180041260 (RtlAppendUnicodeToString.c)
 *     RtlQueryRegistryValuesEx @ 0x1800536E0 (RtlQueryRegistryValuesEx.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     memset @ 0x1800A7100 (memset.c)
 */

__int64 __fastcall QueryFeatureOverride(unsigned int a1, int a2, _DWORD *a3, unsigned int *a4)
{
  unsigned int v4; // ebx
  __int64 v8; // rax
  __int64 v9; // rcx
  int v11; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v12; // [rsp+34h] [rbp-CCh] BYREF
  int v13; // [rsp+38h] [rbp-C8h] BYREF
  char *v14; // [rsp+40h] [rbp-C0h]
  UNICODE_STRING v15; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v16[22]; // [rsp+60h] [rbp-A0h] BYREF
  char v17; // [rsp+110h] [rbp+10h] BYREF
  char v18; // [rsp+130h] [rbp+30h] BYREF

  v4 = 0;
  *(_DWORD *)&v15.Length = 0x200000;
  *a3 = 0;
  v15.Buffer = (wchar_t *)&v17;
  *a4 = 0x80000000;
  v11 = 0;
  v12 = 0;
  v13 = 2883584;
  v14 = &v18;
  RtlIntegerToUnicodeString(a1, 0xAu, &v15);
  memset(v16, 0, 0xA8uLL);
  v8 = 0LL;
  if ( a2 )
  {
    RtlCopyUnicodeString((unsigned __int16 *)&v13, &v15.Length);
    RtlAppendUnicodeToString((unsigned __int16 *)&v13, L"_variant");
    v16[2] = v14;
    v16[3] = &v12;
    v8 = 1LL;
    LODWORD(v16[1]) = 292;
    LODWORD(v16[4]) = 0x4000000;
    v16[5] = 0LL;
    LODWORD(v16[6]) = 0;
  }
  v9 = 7 * v8;
  v16[v9 + 2] = v15.Buffer;
  v16[v9 + 3] = &v11;
  LODWORD(v16[v9 + 1]) = 292;
  LODWORD(v16[v9 + 4]) = 0x4000000;
  v16[v9 + 5] = 0LL;
  LODWORD(v16[v9 + 6]) = 0;
  if ( (int)RtlQueryRegistryValuesEx(
              0,
              (int)L"\\Registry\\MACHINE\\System\\CurrentControlSet\\Policies\\Microsoft\\FeatureManagement\\Overrides",
              (int)v16,
              0,
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
