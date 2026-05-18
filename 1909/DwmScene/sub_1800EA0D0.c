/*
 * XREFs of sub_1800EA0D0 @ 0x1800EA0D0
 * Callers:
 *     sub_180073150 @ 0x180073150 (sub_180073150.c)
 * Callees:
 *     sub_18000F444 @ 0x18000F444 (sub_18000F444.c)
 *     sub_180025FB8 @ 0x180025FB8 (sub_180025FB8.c)
 *     sub_1800A7680 @ 0x1800A7680 (sub_1800A7680.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800EA0D0(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 *v3; // rdx
  __int64 v5[7]; // [rsp+30h] [rbp-50h] BYREF
  __int64 *v6; // [rsp+68h] [rbp-18h]
  __int64 v7; // [rsp+70h] [rbp-10h]

  v7 = -2LL;
  v5[2] = 0LL;
  v5[3] = 0LL;
  sub_18000F444(v5, (__int64)&qword_18025DDF8);
  sub_1800A7680((__int64)a1, v5);
  *a1 = &Spectre::Engine::BackgroundUnlitShaderExtension::`vftable';
  v5[0] = (__int64)&std::_Func_impl_no_alloc<_lambda_9a103570c48dca25c799c6475c6732ec_,void,Spectre::Engine::LightConstants *>::`vftable';
  v6 = v5;
  v2 = o__aligned_malloc(592LL, 16LL);
  a1[21] = 0LL;
  sub_180025FB8((__int64)(a1 + 14), (__int64)v5);
  a1[22] = v2;
  if ( v6 )
  {
    v3 = v5;
    LOBYTE(v3) = v6 != v5;
    (*(void (__fastcall **)(__int64 *, __int64 *))(*v6 + 32))(v6, v3);
  }
  return a1;
}
