/*
 * XREFs of sub_1801024C0 @ 0x1801024C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180101750 @ 0x180101750 (sub_180101750.c)
 */

__int64 __fastcall sub_1801024C0(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx

  v2 = 28LL;
  if ( *(_DWORD *)(a1 + 16) != -571548178 )
    v2 = 208LL;
  v3 = 104LL;
  if ( *(_DWORD *)(a1 + 16) != -571548178 )
    v3 = 368LL;
  sub_180101750((_RTL_RUN_ONCE *)(a1 + v3), *(_WORD *)(v2 + a1) == 0xFFFF, 1);
  return 0LL;
}
