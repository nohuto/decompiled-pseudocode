/*
 * XREFs of sub_1800CA6B0 @ 0x1800CA6B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18007D5C0 @ 0x18007D5C0 (sub_18007D5C0.c)
 *     sub_1800CB148 @ 0x1800CB148 (sub_1800CB148.c)
 *     _Mtx_lock @ 0x18012740A (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x180127410 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x180127416 (-_Throw_C_error@std@@YAXH@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_1800CA6B0(__int64 a1)
{
  int v2; // eax
  int v3; // eax

  sub_18007D5C0((_QWORD *)a1);
  *(_BYTE *)(a1 + 1464) = 0;
  *(_BYTE *)(a1 + 1465) = 0;
  *(_BYTE *)(a1 + 1467) = 0;
  *(_BYTE *)(a1 + 1468) = 0;
  *(_BYTE *)(a1 + 1466) = 0;
  v2 = Mtx_lock((_Mtx_t)(a1 + 1552));
  if ( v2 )
    std::_Throw_C_error(v2);
  sub_1800CB148(a1 + 1488);
  v3 = Mtx_unlock((_Mtx_t)(a1 + 1552));
  if ( v3 )
    std::_Throw_C_error(v3);
}
