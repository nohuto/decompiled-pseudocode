/*
 * XREFs of sub_1800C3080 @ 0x1800C3080
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800C460C @ 0x1800C460C (sub_1800C460C.c)
 *     sub_1800C62FC @ 0x1800C62FC (sub_1800C62FC.c)
 *     sub_1800C7110 @ 0x1800C7110 (sub_1800C7110.c)
 *     sub_1800C7C20 @ 0x1800C7C20 (sub_1800C7C20.c)
 *     sub_1800CA73C @ 0x1800CA73C (sub_1800CA73C.c)
 *     _Mtx_lock @ 0x18012740A (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x180127410 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x180127416 (-_Throw_C_error@std@@YAXH@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800C3080(__int64 a1, __int64 a2)
{
  int v4; // eax
  int v5; // eax

  sub_1800C62FC(a1);
  if ( *(_BYTE *)(a1 + 1464) )
  {
    sub_1800C7110(a1, a2);
    sub_1800CA73C(a1, a2);
  }
  v4 = Mtx_lock((_Mtx_t)(a1 + 1552));
  if ( v4 )
    std::_Throw_C_error(v4);
  sub_1800C460C(a1, a2, a1 + 1488);
  v5 = Mtx_unlock((_Mtx_t)(a1 + 1552));
  if ( v5 )
    std::_Throw_C_error(v5);
  if ( *(_BYTE *)(a1 + 1465) )
    sub_1800C7C20(a1, a2, 0LL);
  return sub_1800C6D70(a1, a2, a1 + 200);
}
