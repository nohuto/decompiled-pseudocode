/*
 * XREFs of sub_180124E80 @ 0x180124E80
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006E068 @ 0x18006E068 (sub_18006E068.c)
 *     _Mtx_lock @ 0x18012751A (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x180127520 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x180127526 (-_Throw_C_error@std@@YAXH@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_180124E80(__int64 a1)
{
  int v2; // eax
  __int64 v3; // rdi
  int v4; // eax

  v2 = Mtx_lock((_Mtx_t)(a1 + 8));
  if ( v2 )
    std::_Throw_C_error(v2);
  v3 = *(_QWORD *)(a1 + 96);
  sub_18006E068(a1 + 96, *(__int64 **)(v3 + 8));
  *(_QWORD *)(*(_QWORD *)(a1 + 96) + 8LL) = v3;
  **(_QWORD **)(a1 + 96) = v3;
  *(_QWORD *)(*(_QWORD *)(a1 + 96) + 16LL) = v3;
  *(_QWORD *)(a1 + 104) = 0LL;
  v4 = Mtx_unlock((_Mtx_t)(a1 + 8));
  if ( v4 )
    std::_Throw_C_error(v4);
}
