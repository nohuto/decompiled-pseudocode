/*
 * XREFs of CmpPerformTrustClassAccessCheck @ 0x1401B334C
 * Callers:
 *     CmpJoinClassOfTrust @ 0x1401B32D0 (CmpJoinClassOfTrust.c)
 *     CmpResolveHiveLoadConflict @ 0x1407F1528 (CmpResolveHiveLoadConflict.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpPerformTrustClassAccessCheck(__int64 a1, char a2)
{
  if ( !a2 || (*(_DWORD *)(a1 + 4152) & 1) != 0 )
    return 0LL;
  else
    return 3221225485LL;
}
