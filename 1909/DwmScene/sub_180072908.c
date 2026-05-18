/*
 * XREFs of sub_180072908 @ 0x180072908
 * Callers:
 *     sub_18006E674 @ 0x18006E674 (sub_18006E674.c)
 * Callees:
 *     sub_180074374 @ 0x180074374 (sub_180074374.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     memset @ 0x1801272D8 (memset.c)
 *     _Mtx_unlock @ 0x180127520 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x180127526 (-_Throw_C_error@std@@YAXH@Z.c)
 *     _Thrd_start @ 0x18012760C (_Thrd_start.c)
 *     _Mtx_destroy @ 0x180127624 (_Mtx_destroy.c)
 *     _Cnd_destroy @ 0x180127636 (_Cnd_destroy.c)
 *     _Cnd_wait @ 0x180127648 (_Cnd_wait.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall sub_180072908(_Thrd_imp_t *a1, __int64 *a2)
{
  __int64 v4; // rax
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  struct _Cnd_internal_imp_t *v8; // rdi
  struct _Mtx_internal_imp_t *v9; // rbx
  int v10; // eax
  _QWORD v11[5]; // [rsp+28h] [rbp-38h] BYREF

  memset(v11, 0, sizeof(v11));
  sub_180074374(v11);
  v11[0] = &std::_LaunchPad<std::unique_ptr<std::tuple<void (Spectre::Engine::Engine::*)(void),Spectre::Engine::Engine *>>>::`vftable';
  v4 = *a2;
  *a2 = 0LL;
  v11[4] = v4;
  v5 = Thrd_start(a1, sub_18007DEE0, v11);
  v6 = 1;
  if ( v5 != 4 )
    v6 = v5;
  if ( v6 )
    goto LABEL_7;
  while ( !LOBYTE(v11[3]) )
  {
    v7 = Cnd_wait((_Cnd_t)v11[1], (_Mtx_t)v11[2]);
    if ( v7 )
    {
      v6 = v7;
LABEL_7:
      std::_Throw_C_error(v6);
      continue;
    }
  }
  if ( v11[4] )
    j__o_free(v11[4]);
  v8 = (struct _Cnd_internal_imp_t *)v11[1];
  v9 = (struct _Mtx_internal_imp_t *)v11[2];
  v10 = Mtx_unlock((_Mtx_t)v11[2]);
  if ( v10 )
    std::_Throw_C_error(v10);
  Mtx_destroy(v9);
  Cnd_destroy(v8);
}
