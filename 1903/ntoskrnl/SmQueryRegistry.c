/*
 * XREFs of SmQueryRegistry @ 0x140A19DE0
 * Callers:
 *     SmInitSystem @ 0x140A19D78 (SmInitSystem.c)
 * Callees:
 *     RtlQueryRegistryValuesEx @ 0x1406E84F0 (RtlQueryRegistryValuesEx.c)
 */

__int64 __fastcall SmQueryRegistry(__int64 a1)
{
  _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+30h] [rbp-19h] BYREF
  __int64 v3; // [rsp+68h] [rbp+1Fh]
  int v4; // [rsp+70h] [rbp+27h]
  __int64 v5; // [rsp+78h] [rbp+2Fh]
  __int64 v6; // [rsp+80h] [rbp+37h]
  int v7; // [rsp+88h] [rbp+3Fh]
  __int64 v8; // [rsp+90h] [rbp+47h]
  int v9; // [rsp+98h] [rbp+4Fh]

  QueryTable.Flags = 288;
  QueryTable.QueryRoutine = 0LL;
  QueryTable.Name = L"EnableDirtyStores";
  QueryTable.DefaultData = 0LL;
  QueryTable.DefaultLength = 0;
  v3 = 0LL;
  v4 = 0;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0;
  v8 = 0LL;
  v9 = 0;
  QueryTable.EntryContext = (PVOID)(a1 + 1984);
  QueryTable.DefaultType = 0x4000000;
  RtlQueryRegistryValuesEx(
    0,
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Memory Management\\StoreParameters",
    &QueryTable,
    0LL,
    0LL);
  return 0LL;
}
