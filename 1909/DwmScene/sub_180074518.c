/*
 * XREFs of sub_180074518 @ 0x180074518
 * Callers:
 *     sub_18012D8C4 @ 0x18012D8C4 (sub_18012D8C4.c)
 * Callees:
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 *     _Mtx_unlock @ 0x180127520 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x180127526 (-_Throw_C_error@std@@YAXH@Z.c)
 *     _Mtx_destroy @ 0x180127624 (_Mtx_destroy.c)
 *     _Cnd_destroy @ 0x180127636 (_Cnd_destroy.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_180074518(_QWORD *a1)
{
  __int64 v2; // rcx
  struct _Cnd_internal_imp_t *v3; // rdi
  struct _Mtx_internal_imp_t *v4; // rbx
  int v5; // eax

  v2 = a1[4];
  if ( v2 )
    j__o_free(v2);
  v3 = (struct _Cnd_internal_imp_t *)a1[1];
  v4 = (struct _Mtx_internal_imp_t *)a1[2];
  v5 = Mtx_unlock(v4);
  if ( v5 )
    std::_Throw_C_error(v5);
  Mtx_destroy(v4);
  Cnd_destroy(v3);
}
