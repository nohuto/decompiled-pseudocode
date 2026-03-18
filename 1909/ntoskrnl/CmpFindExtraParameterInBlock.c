/*
 * XREFs of CmpFindExtraParameterInBlock @ 0x1408267B0
 * Callers:
 *     CmRetrieveExtraParameter @ 0x140826774 (CmRetrieveExtraParameter.c)
 *     VrpPostOpenOrCreate @ 0x140843E6C (VrpPostOpenOrCreate.c)
 *     VrpPreOpenOrCreate @ 0x1408452F8 (VrpPreOpenOrCreate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpFindExtraParameterInBlock(_QWORD *a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *i; // r9
  __int64 v4; // r10

  for ( i = (_QWORD *)*a1; ; i = (_QWORD *)*i )
  {
    if ( i == a1 )
      return 3221225524LL;
    v4 = i[2] - *a2;
    if ( !v4 )
      v4 = i[3] - a2[1];
    if ( !v4 )
      break;
  }
  *a3 = i;
  return 0LL;
}
