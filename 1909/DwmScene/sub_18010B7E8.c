/*
 * XREFs of sub_18010B7E8 @ 0x18010B7E8
 * Callers:
 *     sub_1800E209C @ 0x1800E209C (sub_1800E209C.c)
 *     sub_1800E21D0 @ 0x1800E21D0 (sub_1800E21D0.c)
 *     sub_1800E2478 @ 0x1800E2478 (sub_1800E2478.c)
 *     sub_1800E286C @ 0x1800E286C (sub_1800E286C.c)
 * Callees:
 *     sub_1800BC6B0 @ 0x1800BC6B0 (sub_1800BC6B0.c)
 *     _Mtx_lock @ 0x18012751A (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x180127520 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x180127526 (-_Throw_C_error@std@@YAXH@Z.c)
 *     _Mtx_init_in_situ @ 0x180127532 (_Mtx_init_in_situ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_18010B7E8(__int64 a1, __int64 a2)
{
  char *v4; // r8
  char *v5; // rdx
  __int64 v6; // rax
  int v7; // eax
  int v8; // eax

  v4 = *(char **)(a2 + 8);
  v5 = *(char **)a2;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  sub_1800BC6B0((_QWORD *)a1, v5, v4);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  v6 = *(_QWORD *)(a2 + 40);
  if ( v6 )
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 40);
  Mtx_init_in_situ((_Mtx_t)(a1 + 48), 2);
  v7 = Mtx_lock((_Mtx_t)(a1 + 48));
  if ( v7 )
    std::_Throw_C_error(v7);
  v8 = Mtx_unlock((_Mtx_t)(a1 + 48));
  if ( v8 )
    std::_Throw_C_error(v8);
  return a1;
}
