/*
 * XREFs of sub_1800E9DA4 @ 0x1800E9DA4
 * Callers:
 *     sub_1800EB6E0 @ 0x1800EB6E0 (sub_1800EB6E0.c)
 *     sub_1800EF620 @ 0x1800EF620 (sub_1800EF620.c)
 * Callees:
 *     sub_1800112D4 @ 0x1800112D4 (sub_1800112D4.c)
 *     sub_18008AAB0 @ 0x18008AAB0 (sub_18008AAB0.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall sub_1800E9DA4(__int64 a1, __int64 *a2)
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
  sub_1800112D4(a2, 0x20uLL);
  v6[0] = &std::_Func_impl_no_alloc<_lambda_7184ac0b1d10aa8b036768733263c113_,void,std::shared_ptr<Spectre::Engine::SceneNode const> const &>::`vftable';
  v6[1] = a2;
  v7 = v6;
  sub_18008AAB0(a1, (__int64)v6);
  if ( v7 )
  {
    v4 = v6;
    LOBYTE(v4) = v7 != v6;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v7 + 32LL))(v7, v4);
  }
  return a2;
}
