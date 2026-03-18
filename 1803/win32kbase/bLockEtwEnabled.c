/*
 * XREFs of bLockEtwEnabled @ 0x1C00D90F8
 * Callers:
 *     InitializeGre @ 0x1C01F40E8 (InitializeGre.c)
 * Callees:
 *     memset @ 0x1C0079EC0 (memset.c)
 */

__int64 bLockEtwEnabled()
{
  unsigned int v0; // ebx
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+30h] [rbp-19h] BYREF
  __int64 v3; // [rsp+68h] [rbp+1Fh]
  int v4; // [rsp+70h] [rbp+27h]
  _BYTE v5[40]; // [rsp+78h] [rbp+2Fh] BYREF
  int v6; // [rsp+B0h] [rbp+67h] BYREF
  int v7; // [rsp+B8h] [rbp+6Fh] BYREF

  v0 = 0;
  QueryTable.Flags = 288;
  v6 = 0;
  QueryTable.Name = L"LockEtw";
  QueryTable.QueryRoutine = 0LL;
  QueryTable.EntryContext = &v7;
  QueryTable.DefaultType = 67108868;
  QueryTable.DefaultData = &v6;
  QueryTable.DefaultLength = 4;
  v3 = 0LL;
  v4 = 0;
  memset(v5, 0, sizeof(v5));
  if ( RtlQueryRegistryValues(3u, L"GRE_Initialize", &QueryTable, 0LL, 0LL) < 0 )
    return 0LL;
  LOBYTE(v0) = v7 == 1;
  return v0;
}
