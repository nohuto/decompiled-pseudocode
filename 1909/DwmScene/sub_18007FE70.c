/*
 * XREFs of sub_18007FE70 @ 0x18007FE70
 * Callers:
 *     sub_18007B940 @ 0x18007B940 (sub_18007B940.c)
 * Callees:
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x180127526 (-_Throw_C_error@std@@YAXH@Z.c)
 *     _Mtx_current_owns @ 0x18012762A (_Mtx_current_owns.c)
 *     _Cnd_timedwait @ 0x18012764E (_Cnd_timedwait.c)
 *     ?_Throw_Cpp_error@std@@YAXH@Z @ 0x180127660 (-_Throw_Cpp_error@std@@YAXH@Z.c)
 */

__int64 __fastcall sub_18007FE70(_Cnd_t a1, _Mtx_t *a2, const xtime *a3)
{
  unsigned int v6; // edi
  int v7; // eax
  int v8; // ebx

  v6 = 0;
  if ( !Mtx_current_owns(*a2) )
    std::_Throw_Cpp_error(4);
  v7 = Cnd_timedwait(a1, *a2, a3);
  v8 = v7;
  if ( (v7 & 0xFFFFFFFD) != 0 )
    std::_Throw_C_error(v7);
  LOBYTE(v6) = v8 == 2;
  return v6;
}
