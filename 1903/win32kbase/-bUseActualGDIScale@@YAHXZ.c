/*
 * XREFs of ?bUseActualGDIScale@@YAHXZ @ 0x1C00A89AC
 * Callers:
 *     InitializeGre @ 0x1C0266080 (InitializeGre.c)
 * Callees:
 *     memset @ 0x1C00C1440 (memset.c)
 */

__int64 bUseActualGDIScale(void)
{
  unsigned int v0; // ebx
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+30h] [rbp-19h] BYREF
  __int64 v3; // [rsp+68h] [rbp+1Fh]
  int v4; // [rsp+70h] [rbp+27h]
  _BYTE v5[40]; // [rsp+78h] [rbp+2Fh] BYREF
  int v6; // [rsp+B0h] [rbp+67h] BYREF
  int v7; // [rsp+B8h] [rbp+6Fh] BYREF

  v0 = 0;
  QueryTable.Flags = 32;
  v6 = 0;
  QueryTable.Name = L"UseActualGDIScale";
  QueryTable.QueryRoutine = 0LL;
  QueryTable.EntryContext = &v7;
  QueryTable.DefaultType = 4;
  QueryTable.DefaultLength = 4;
  QueryTable.DefaultData = &v6;
  v3 = 0LL;
  v4 = 0;
  memset(v5, 0, sizeof(v5));
  if ( RtlQueryRegistryValues(
         0,
         L"\\Registry\\Machine\\SOFTWARE\\Policies\\Microsoft\\Windows\\Control Panel\\Desktop",
         &QueryTable,
         0LL,
         0LL) < 0 )
    return 0LL;
  LOBYTE(v0) = v7 != 0;
  return v0;
}
