/*
 * XREFs of sub_180015FC4 @ 0x180015FC4
 * Callers:
 *     sub_180018FC0 @ 0x180018FC0 (sub_180018FC0.c)
 * Callees:
 *     sub_18008ABA8 @ 0x18008ABA8 (sub_18008ABA8.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_180015FC4(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // rdx
  _QWORD v5[7]; // [rsp+40h] [rbp-58h] BYREF
  _QWORD *v6; // [rsp+78h] [rbp-20h]

  *a2 = 0LL;
  a2[1] = 0LL;
  *a2 = 0LL;
  a2[1] = 0LL;
  v5[0] = &std::_Func_impl_no_alloc<_lambda_b93e327d744b413b281ea035aaf55789_,bool,std::shared_ptr<Spectre::Engine::SceneNode> const &>::`vftable';
  v5[1] = a2;
  v6 = v5;
  sub_18008ABA8(a1, v5);
  if ( v6 )
  {
    v3 = v5;
    LOBYTE(v3) = v6 != v5;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v6 + 32LL))(v6, v3);
  }
  return a2;
}
