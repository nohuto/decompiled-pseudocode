/*
 * XREFs of sub_1800B34F8 @ 0x1800B34F8
 * Callers:
 *     sub_1800B2DA8 @ 0x1800B2DA8 (sub_1800B2DA8.c)
 * Callees:
 *     sub_180074264 @ 0x180074264 (sub_180074264.c)
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     memset @ 0x1801271C8 (memset.c)
 *     _Mtx_unlock @ 0x180127410 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x180127416 (-_Throw_C_error@std@@YAXH@Z.c)
 *     _Thrd_start @ 0x1801274FC (_Thrd_start.c)
 *     _Mtx_destroy @ 0x180127514 (_Mtx_destroy.c)
 *     _Cnd_destroy @ 0x180127526 (_Cnd_destroy.c)
 *     _Cnd_wait @ 0x180127538 (_Cnd_wait.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall sub_1800B34F8(_Thrd_imp_t *a1, __int64 *a2)
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
  sub_180074264((__int64)v11);
  v11[0] = &std::_LaunchPad<std::unique_ptr<std::tuple<void (Spectre::Engine::Display::*)(void),Spectre::Engine::Display *>>>::`vftable';
  v4 = *a2;
  *a2 = 0LL;
  v11[4] = v4;
  v5 = Thrd_start(a1, (_Thrd_callback_t)sub_18007DDD0, v11);
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
