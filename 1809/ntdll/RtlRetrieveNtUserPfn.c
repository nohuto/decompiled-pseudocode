/*
 * XREFs of RtlRetrieveNtUserPfn @ 0x18008FDC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlRetrieveNtUserPfn(_QWORD *a1, _QWORD *a2, _QWORD *a3)
{
  if ( !byte_1801781D8 )
    return 3221225485LL;
  *a1 = &NtDllUserStubs;
  *a2 = &off_1801189E0;
  *a3 = &off_180118AA0;
  return 0LL;
}
