/*
 * XREFs of sub_18001D978 @ 0x18001D978
 * Callers:
 *     sub_180024AA0 @ 0x180024AA0 (sub_180024AA0.c)
 * Callees:
 *     sub_18001F450 @ 0x18001F450 (sub_18001F450.c)
 *     sub_180025F14 @ 0x180025F14 (sub_180025F14.c)
 *     __std_type_info_hash @ 0x180125A90 (__std_type_info_hash.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _Mtx_lock @ 0x18012740A (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x180127410 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x180127416 (-_Throw_C_error@std@@YAXH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall sub_18001D978(__int64 a1)
{
  struct _Mtx_internal_imp_t *v2; // rbx
  int v3; // eax
  _QWORD *v4; // rdx
  int v5; // eax
  __int64 v6; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v7[7]; // [rsp+40h] [rbp-58h] BYREF
  _QWORD *v8; // [rsp+78h] [rbp-20h]
  __int64 v9; // [rsp+80h] [rbp-18h] BYREF

  v2 = (struct _Mtx_internal_imp_t *)(a1 + 16);
  v3 = Mtx_lock((_Mtx_t)(a1 + 16));
  if ( v3 )
    std::_Throw_C_error(v3);
  v9 = _std_type_info_hash(&qword_180260050);
  sub_18001F450(a1, &v6, &v9);
  v7[0] = &std::_Func_impl_no_alloc<_lambda_075568019f0ba5dd51131882019b8c39_,std::shared_ptr<Spectre::Engine::RendererResource>,>::`vftable';
  v8 = v7;
  sub_180025F14(v7, v6 + 40);
  if ( v8 )
  {
    v4 = v7;
    LOBYTE(v4) = v8 != v7;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v8 + 32LL))(v8, v4);
  }
  v5 = Mtx_unlock(v2);
  if ( v5 )
    std::_Throw_C_error(v5);
}
