/*
 * XREFs of sub_18011E270 @ 0x18011E270
 * Callers:
 *     sub_18011E268 @ 0x18011E268 (sub_18011E268.c)
 * Callees:
 *     _Mtx_lock @ 0x18012740A (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x180127410 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x180127416 (-_Throw_C_error@std@@YAXH@Z.c)
 *     _Cnd_signal @ 0x180127544 (_Cnd_signal.c)
 *     _Cnd_broadcast @ 0x1801275EC (_Cnd_broadcast.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_18011E270(char *a1)
{
  int v2; // eax
  int v3; // edi
  char v4; // si
  int v5; // eax
  int v6; // eax
  int v7; // eax

  v2 = Mtx_lock((_Mtx_t)a1);
  if ( v2 )
    std::_Throw_C_error(v2);
  v3 = --*((_DWORD *)a1 + 56);
  v4 = a1[228];
  v5 = Mtx_unlock((_Mtx_t)a1);
  if ( v5 )
    std::_Throw_C_error(v5);
  if ( v4 )
  {
    if ( !v3 )
    {
      v6 = Cnd_signal((_Cnd_t)(a1 + 80));
      if ( v6 )
        std::_Throw_C_error(v6);
    }
  }
  else if ( v3 == -2 )
  {
    v7 = Cnd_broadcast((_Cnd_t)(a1 + 152));
    if ( v7 )
      std::_Throw_C_error(v7);
  }
}
