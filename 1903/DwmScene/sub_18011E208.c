/*
 * XREFs of sub_18011E208 @ 0x18011E208
 * Callers:
 *     sub_180062D70 @ 0x180062D70 (sub_180062D70.c)
 * Callees:
 *     _Mtx_lock @ 0x18012740A (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x180127410 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x180127416 (-_Throw_C_error@std@@YAXH@Z.c)
 *     _Cnd_broadcast @ 0x1801275EC (_Cnd_broadcast.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_18011E208(_Mtx_t *a1)
{
  _Mtx_t v1; // rbx
  int v2; // eax
  int v3; // eax
  int v4; // eax

  v1 = *a1;
  v2 = Mtx_lock(*a1);
  if ( v2 )
    std::_Throw_C_error(v2);
  *((_BYTE *)v1 + 228) = 0;
  v3 = Mtx_unlock(v1);
  if ( v3 )
    std::_Throw_C_error(v3);
  v4 = Cnd_broadcast((_Mtx_t)((char *)v1 + 152));
  if ( v4 )
    std::_Throw_C_error(v4);
}
