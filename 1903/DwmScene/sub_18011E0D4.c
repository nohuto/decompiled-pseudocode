/*
 * XREFs of sub_18011E0D4 @ 0x18011E0D4
 * Callers:
 *     sub_18011E0CC @ 0x18011E0CC (sub_18011E0CC.c)
 * Callees:
 *     _Mtx_lock @ 0x18012740A (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x180127410 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x180127416 (-_Throw_C_error@std@@YAXH@Z.c)
 *     _Cnd_wait @ 0x180127538 (_Cnd_wait.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall sub_18011E0D4(char *a1)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax

  v2 = Mtx_lock((_Mtx_t)a1);
  if ( v2 )
    std::_Throw_C_error(v2);
  while ( a1[228] )
  {
    v3 = Cnd_wait((_Cnd_t)(a1 + 152), (_Mtx_t)a1);
    if ( v3 )
      std::_Throw_C_error(v3);
  }
  a1[228] = 1;
  while ( *((_DWORD *)a1 + 56) )
  {
    v4 = Cnd_wait((_Cnd_t)(a1 + 80), (_Mtx_t)a1);
    if ( v4 )
      std::_Throw_C_error(v4);
  }
  v5 = Mtx_unlock((_Mtx_t)a1);
  if ( v5 )
    std::_Throw_C_error(v5);
}
