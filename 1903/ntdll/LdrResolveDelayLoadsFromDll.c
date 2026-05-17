/*
 * XREFs of LdrResolveDelayLoadsFromDll @ 0x1800CF050
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800CF1D4 @ 0x1800CF1D4 (sub_1800CF1D4.c)
 */

__int64 __fastcall LdrResolveDelayLoadsFromDll(__int64 a1, __int64 a2, int a3)
{
  __int64 v5; // rax

  if ( a3 )
    return 3221225485LL;
  v5 = sub_1800CF1D4(a1);
  if ( v5 )
    return sub_180017368(a1, v5);
  else
    return 3221225781LL;
}
