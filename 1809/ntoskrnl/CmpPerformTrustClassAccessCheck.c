/*
 * XREFs of CmpPerformTrustClassAccessCheck @ 0x1401B31EC
 * Callers:
 *     CmpJoinClassOfTrust @ 0x1401B3170 (CmpJoinClassOfTrust.c)
 *     CmpResolveHiveLoadConflict @ 0x1407F0348 (CmpResolveHiveLoadConflict.c)
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
