/*
 * XREFs of sub_180122A60 @ 0x180122A60
 * Callers:
 *     <none>
 * Callees:
 *     sub_180123518 @ 0x180123518 (sub_180123518.c)
 *     _Mtx_lock @ 0x18012740A (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x180127410 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x180127416 (-_Throw_C_error@std@@YAXH@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall sub_180122A60(__int64 a1, int a2)
{
  struct _Mtx_internal_imp_t *v3; // rbx
  int v4; // eax
  int v5; // eax
  int v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = a2;
  v3 = (struct _Mtx_internal_imp_t *)(a1 + 160);
  v4 = Mtx_lock((_Mtx_t)(a1 + 160));
  if ( v4 )
    std::_Throw_C_error(v4);
  sub_180123518(a1 + 240, &v6);
  v5 = Mtx_unlock(v3);
  if ( v5 )
    std::_Throw_C_error(v5);
}
