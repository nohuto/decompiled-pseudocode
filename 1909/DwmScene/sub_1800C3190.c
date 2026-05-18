/*
 * XREFs of sub_1800C3190 @ 0x1800C3190
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800C471C @ 0x1800C471C (sub_1800C471C.c)
 *     sub_1800C640C @ 0x1800C640C (sub_1800C640C.c)
 *     sub_1800C7220 @ 0x1800C7220 (sub_1800C7220.c)
 *     sub_1800C7D30 @ 0x1800C7D30 (sub_1800C7D30.c)
 *     sub_1800CA84C @ 0x1800CA84C (sub_1800CA84C.c)
 *     _Mtx_lock @ 0x18012751A (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x180127520 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x180127526 (-_Throw_C_error@std@@YAXH@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800C3190(__int64 a1, __int64 a2)
{
  int v4; // eax
  int v5; // eax

  sub_1800C640C(a1);
  if ( *(_BYTE *)(a1 + 1464) )
  {
    sub_1800C7220(a1, a2);
    sub_1800CA84C(a1, a2);
  }
  v4 = Mtx_lock((_Mtx_t)(a1 + 1552));
  if ( v4 )
    std::_Throw_C_error(v4);
  sub_1800C471C(a1, a2, a1 + 1488);
  v5 = Mtx_unlock((_Mtx_t)(a1 + 1552));
  if ( v5 )
    std::_Throw_C_error(v5);
  if ( *(_BYTE *)(a1 + 1465) )
    sub_1800C7D30(a1, a2, 0LL);
  return sub_1800C6E80(a1, a2, a1 + 200);
}
