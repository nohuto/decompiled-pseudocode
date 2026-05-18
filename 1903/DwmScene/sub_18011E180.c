/*
 * XREFs of sub_18011E180 @ 0x18011E180
 * Callers:
 *     sub_18011E178 @ 0x18011E178 (sub_18011E178.c)
 * Callees:
 *     _Mtx_lock @ 0x18012740A (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x180127410 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x180127416 (-_Throw_C_error@std@@YAXH@Z.c)
 *     _Cnd_wait @ 0x180127538 (_Cnd_wait.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall sub_18011E180(char *a1)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax

  v2 = Mtx_lock((_Mtx_t)a1);
  if ( v2 )
LABEL_2:
    std::_Throw_C_error(v2);
  while ( 1 )
  {
    if ( !a1[228] )
    {
      v3 = *((_DWORD *)a1 + 56);
      if ( v3 != -1 )
        break;
    }
    v2 = Cnd_wait((_Cnd_t)(a1 + 152), (_Mtx_t)a1);
    if ( v2 )
      goto LABEL_2;
  }
  *((_DWORD *)a1 + 56) = v3 + 1;
  v4 = Mtx_unlock((_Mtx_t)a1);
  if ( v4 )
    std::_Throw_C_error(v4);
}
