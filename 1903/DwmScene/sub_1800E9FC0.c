/*
 * XREFs of sub_1800E9FC0 @ 0x1800E9FC0
 * Callers:
 *     sub_180073040 @ 0x180073040 (sub_180073040.c)
 * Callees:
 *     sub_18000F3F4 @ 0x18000F3F4 (sub_18000F3F4.c)
 *     sub_180025EA8 @ 0x180025EA8 (sub_180025EA8.c)
 *     sub_1800A7570 @ 0x1800A7570 (sub_1800A7570.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800E9FC0(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 *v3; // rdx
  __int64 v5[7]; // [rsp+30h] [rbp-50h] BYREF
  __int64 *v6; // [rsp+68h] [rbp-18h]
  __int64 v7; // [rsp+70h] [rbp-10h]

  v7 = -2LL;
  v5[2] = 0LL;
  v5[3] = 0LL;
  sub_18000F3F4(v5, (__int64)&qword_18025CDF8);
  sub_1800A7570((__int64)a1, v5);
  *a1 = &Spectre::Engine::BackgroundUnlitShaderExtension::`vftable';
  v5[0] = (__int64)&std::_Func_impl_no_alloc<_lambda_9a103570c48dca25c799c6475c6732ec_,void,Spectre::Engine::LightConstants *>::`vftable';
  v6 = v5;
  v2 = o__aligned_malloc(592LL, 16LL);
  a1[21] = 0LL;
  sub_180025EA8((__int64)(a1 + 14), (__int64)v5);
  a1[22] = v2;
  if ( v6 )
  {
    v3 = v5;
    LOBYTE(v3) = v6 != v5;
    (*(void (__fastcall **)(__int64 *, __int64 *))(*v6 + 32))(v6, v3);
  }
  return a1;
}
