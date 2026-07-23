/*
 * XREFs of QueryFeatureOverride @ 0x18009F2C8
 * Callers:
 *     EvaluateCurrentStateFromRegistry @ 0x18009F1CC (EvaluateCurrentStateFromRegistry.c)
 * Callees:
 *     RtlIntegerToUnicodeString @ 0x180022620 (RtlIntegerToUnicodeString.c)
 *     RtlCopyUnicodeString @ 0x1800411E0 (RtlCopyUnicodeString.c)
 *     RtlAppendUnicodeToString @ 0x180041260 (RtlAppendUnicodeToString.c)
 *     RtlQueryRegistryValuesEx @ 0x1800536E0 (RtlQueryRegistryValuesEx.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     memset @ 0x1800A7100 (memset.c)
 */

__int64 __fastcall QueryFeatureOverride(ULONG a1, int a2, _DWORD *a3, unsigned int *a4)
{
  unsigned int v4; // ebx
  __int64 v8; // rax
  __int64 v9; // rcx
  int v11; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v12; // [rsp+34h] [rbp-CCh] BYREF
  _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  _UNICODE_STRING String; // [rsp+48h] [rbp-B8h] BYREF
  _RTL_QUERY_REGISTRY_TABLE QueryTable[3]; // [rsp+60h] [rbp-A0h] BYREF
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
  memset(QueryTable, 0, sizeof(QueryTable));
  v8 = 0LL;
  if ( a2 )
  {
    RtlCopyUnicodeString(&DestinationString, &String);
    RtlAppendUnicodeToString(&DestinationString, L"_variant");
    QueryTable[0].Name = DestinationString.Buffer;
    QueryTable[0].EntryContext = &v12;
    v8 = 1LL;
    QueryTable[0].Flags = 292;
    QueryTable[0].DefaultType = 0x4000000;
    QueryTable[0].DefaultData = 0LL;
    QueryTable[0].DefaultLength = 0;
  }
  v9 = v8;
  QueryTable[v9].Name = String.Buffer;
  QueryTable[v9].EntryContext = &v11;
  QueryTable[v9].Flags = 292;
  QueryTable[v9].DefaultType = 0x4000000;
  QueryTable[v9].DefaultData = 0LL;
  QueryTable[v9].DefaultLength = 0;
  if ( RtlQueryRegistryValuesEx(
         0,
         L"\\Registry\\MACHINE\\System\\CurrentControlSet\\Policies\\Microsoft\\FeatureManagement\\Overrides",
         QueryTable,
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
