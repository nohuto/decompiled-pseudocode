/*
 * XREFs of GetWin8StyleDpiSettingFromRegistry @ 0x1C000AF90
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0168440 (memset.c)
 */

NTSTATUS __fastcall GetWin8StyleDpiSettingFromRegistry(BOOL *a1)
{
  BOOL v1; // ebx
  NTSTATUS result; // eax
  _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+30h] [rbp-19h] BYREF
  __int64 v5; // [rsp+68h] [rbp+1Fh]
  int v6; // [rsp+70h] [rbp+27h]
  _BYTE v7[40]; // [rsp+78h] [rbp+2Fh] BYREF
  int v8; // [rsp+B0h] [rbp+67h] BYREF
  int v9; // [rsp+B8h] [rbp+6Fh] BYREF

  v1 = 0;
  QueryTable.Flags = 288;
  v9 = 0;
  QueryTable.Name = L"Win8DpiScaling";
  v8 = 0;
  QueryTable.EntryContext = &v8;
  QueryTable.QueryRoutine = 0LL;
  QueryTable.DefaultData = &v9;
  QueryTable.DefaultType = 0x4000000;
  QueryTable.DefaultLength = 4;
  v5 = 0LL;
  v6 = 0;
  memset(v7, 0, sizeof(v7));
  result = RtlQueryRegistryValues(5u, L"Control Panel\\Desktop", &QueryTable, 0LL, 0LL);
  if ( result >= 0 )
    v1 = v8 != 0;
  *a1 = v1;
  return result;
}
