/*
 * XREFs of ObGetProcessHandleCount @ 0x1406CD780
 * Callers:
 *     NtQueryInformationProcess @ 0x1405D12E0 (NtQueryInformationProcess.c)
 *     EtwTraceAppStateChange @ 0x140634190 (EtwTraceAppStateChange.c)
 *     EtwpPsProvTraceProcess @ 0x1406906B0 (EtwpPsProvTraceProcess.c)
 *     EtwpProcessPerfCtrsRundown @ 0x1408FC248 (EtwpProcessPerfCtrsRundown.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140043820 (ExReleaseRundownProtection_0.c)
 *     ObReferenceProcessHandleTable @ 0x1405E67C4 (ObReferenceProcessHandleTable.c)
 *     ExHandleTableQuery @ 0x1406CD7D8 (ExHandleTableQuery.c)
 */

__int64 __fastcall ObGetProcessHandleCount(struct _EX_RUNDOWN_REF *a1, _DWORD *a2)
{
  unsigned __int64 v4; // rcx
  __int64 result; // rax
  unsigned int v6; // [rsp+40h] [rbp+18h] BYREF

  v4 = ObReferenceProcessHandleTable(a1);
  result = 0LL;
  if ( v4 )
  {
    ExHandleTableQuery(v4, &v6, a2);
    ExReleaseRundownProtection_0(a1 + 96);
    return v6;
  }
  else if ( a2 )
  {
    *a2 = 0;
  }
  return result;
}
