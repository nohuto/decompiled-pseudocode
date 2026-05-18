/*
 * XREFs of sub_18007FD60 @ 0x18007FD60
 * Callers:
 *     sub_18007B830 @ 0x18007B830 (sub_18007B830.c)
 * Callees:
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x180127416 (-_Throw_C_error@std@@YAXH@Z.c)
 *     _Mtx_current_owns @ 0x18012751A (_Mtx_current_owns.c)
 *     _Cnd_timedwait @ 0x18012753E (_Cnd_timedwait.c)
 *     ?_Throw_Cpp_error@std@@YAXH@Z @ 0x180127550 (-_Throw_Cpp_error@std@@YAXH@Z.c)
 */

__int64 __fastcall sub_18007FD60(_Cnd_t a1, _Mtx_t *a2, const xtime *a3)
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
