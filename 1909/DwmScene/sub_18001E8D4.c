/*
 * XREFs of sub_18001E8D4 @ 0x18001E8D4
 * Callers:
 *     sub_180024BB0 @ 0x180024BB0 (sub_180024BB0.c)
 * Callees:
 *     sub_18001F560 @ 0x18001F560 (sub_18001F560.c)
 *     sub_180026024 @ 0x180026024 (sub_180026024.c)
 *     __std_type_info_hash @ 0x180125BA0 (__std_type_info_hash.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _Mtx_lock @ 0x18012751A (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x180127520 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x180127526 (-_Throw_C_error@std@@YAXH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall sub_18001E8D4(__int64 a1)
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
  v9 = _std_type_info_hash(&qword_1802610C0);
  sub_18001F560(a1, &v6, &v9);
  v7[0] = &std::_Func_impl_no_alloc<_lambda_8be67bcf9b5b289d242b19ff70747553_,std::shared_ptr<Spectre::Engine::RendererResource>,>::`vftable';
  v8 = v7;
  sub_180026024(v7, v6 + 40);
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
