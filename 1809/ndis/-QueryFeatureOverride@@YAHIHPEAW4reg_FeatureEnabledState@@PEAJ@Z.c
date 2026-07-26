/*
 * XREFs of ?QueryFeatureOverride@@YAHIHPEAW4reg_FeatureEnabledState@@PEAJ@Z @ 0x1C00261C8
 * Callers:
 *     ?EvaluateCurrentStateFromRegistry@@YAHIHW4reg_FeatureStage@@EPEAE@Z @ 0x1C00260D0 (-EvaluateCurrentStateFromRegistry@@YAHIHW4reg_FeatureStage@@EPEAE@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     memset @ 0x1C0027180 (memset.c)
 */

__int64 __fastcall QueryFeatureOverride(ULONG Value, int a2, enum reg_FeatureEnabledState *a3, unsigned int *a4)
{
  unsigned int v4; // edi
  __int64 v9; // rax
  __int64 v10; // rcx
  int v12; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v13; // [rsp+34h] [rbp-CCh] BYREF
  _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  _UNICODE_STRING String; // [rsp+48h] [rbp-B8h] BYREF
  _RTL_QUERY_REGISTRY_TABLE QueryTable[3]; // [rsp+60h] [rbp-A0h] BYREF
  char v17; // [rsp+110h] [rbp+10h] BYREF
  char v18; // [rsp+130h] [rbp+30h] BYREF

  v4 = 0;
  *(_DWORD *)a3 = 0;
  *a4 = 0x80000000;
  v12 = 0;
  v13 = 0;
  memset(QueryTable, 0, sizeof(QueryTable));
  *(_DWORD *)&String.Length = 0x200000;
  String.Buffer = (wchar_t *)&v17;
  *(_DWORD *)&DestinationString.Length = 2883584;
  DestinationString.Buffer = (wchar_t *)&v18;
  RtlIntegerToUnicodeString(Value, 0xAu, &String);
  memset(QueryTable, 0, sizeof(QueryTable));
  v9 = 0LL;
  if ( a2 )
  {
    RtlCopyUnicodeString(&DestinationString, &String);
    RtlAppendUnicodeToString(&DestinationString, L"_variant");
    QueryTable[0].Name = DestinationString.Buffer;
    QueryTable[0].EntryContext = &v13;
    v9 = 1LL;
    QueryTable[0].Flags = 292;
    QueryTable[0].DefaultType = 0x4000000;
    QueryTable[0].DefaultData = 0LL;
    QueryTable[0].DefaultLength = 0;
  }
  v10 = v9;
  QueryTable[v10].Name = String.Buffer;
  QueryTable[v10].EntryContext = &v12;
  QueryTable[v10].Flags = 292;
  QueryTable[v10].DefaultType = 0x4000000;
  QueryTable[v10].DefaultData = 0LL;
  QueryTable[v10].DefaultLength = 0;
  if ( RtlQueryRegistryValuesEx(
         0,
         L"\\Registry\\MACHINE\\System\\CurrentControlSet\\Policies\\Microsoft\\FeatureManagement\\Overrides",
         QueryTable,
         0LL,
         0LL) >= 0 )
  {
    *(_DWORD *)a3 = (v12 != 0) + 1;
    if ( a2 && v13 <= 0xFF )
      *a4 = v13;
    return 1;
  }
  if ( !a2 )
    return 1;
  return v4;
}
