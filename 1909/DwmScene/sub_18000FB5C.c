/*
 * XREFs of sub_18000FB5C @ 0x18000FB5C
 * Callers:
 *     sub_180010550 @ 0x180010550 (sub_180010550.c)
 *     sub_1800EB7F0 @ 0x1800EB7F0 (sub_1800EB7F0.c)
 *     sub_1800EF730 @ 0x1800EF730 (sub_1800EF730.c)
 * Callees:
 *     sub_180011324 @ 0x180011324 (sub_180011324.c)
 *     sub_18008ABC0 @ 0x18008ABC0 (sub_18008ABC0.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_18000FB5C(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rdx
  _QWORD v6[7]; // [rsp+40h] [rbp-58h] BYREF
  _QWORD *v7; // [rsp+78h] [rbp-20h]

  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  sub_180011324(a2, 32LL);
  v6[0] = &std::_Func_impl_no_alloc<_lambda_38672d4837fba783512361a26dc8aa1f_,void,std::shared_ptr<Spectre::Engine::SceneNode const> const &>::`vftable';
  v6[1] = a2;
  v7 = v6;
  sub_18008ABC0(a1, v6);
  if ( v7 )
  {
    v4 = v6;
    LOBYTE(v4) = v7 != v6;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v7 + 32LL))(v7, v4);
  }
  return a2;
}
