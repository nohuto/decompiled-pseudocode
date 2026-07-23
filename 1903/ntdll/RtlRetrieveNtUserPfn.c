/*
 * XREFs of RtlRetrieveNtUserPfn @ 0x18008C6A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlRetrieveNtUserPfn(_QWORD *a1, _QWORD *a2, _QWORD *a3)
{
  if ( !byte_18017A1D8 )
    return 3221225485LL;
  *a1 = &off_180118900;
  *a2 = &off_1801189C0;
  *a3 = &off_180118A80;
  return 0LL;
}
