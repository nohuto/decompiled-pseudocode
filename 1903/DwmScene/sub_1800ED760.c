/*
 * XREFs of sub_1800ED760 @ 0x1800ED760
 * Callers:
 *     sub_180073428 @ 0x180073428 (sub_180073428.c)
 * Callees:
 *     sub_18000F3F4 @ 0x18000F3F4 (sub_18000F3F4.c)
 *     sub_180025EA8 @ 0x180025EA8 (sub_180025EA8.c)
 *     sub_18010DA88 @ 0x18010DA88 (sub_18010DA88.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800ED760(_QWORD *a1)
{
  __int64 v2; // rdi
  _QWORD *v3; // rdx
  _QWORD v5[7]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD *v6; // [rsp+68h] [rbp-18h]
  __int64 v7; // [rsp+70h] [rbp-10h]

  v7 = -2LL;
  v5[2] = 0LL;
  v5[3] = 0LL;
  sub_18000F3F4(v5, (__int64)&qword_18025D5D0);
  sub_18010DA88(a1, v5);
  *a1 = &Spectre::Engine::StandardShaderExtension::`vftable';
  v5[0] = &std::_Func_impl_no_alloc<_lambda_12d9fe6758b899e25aeda5cedcfa22de_,void,Spectre::Engine::LightConstants *>::`vftable';
  v6 = v5;
  v2 = o__aligned_malloc(592LL, 16LL);
  a1[26] = 0LL;
  sub_180025EA8((__int64)(a1 + 19), (__int64)v5);
  a1[27] = v2;
  if ( v6 )
  {
    v3 = v5;
    LOBYTE(v3) = v6 != v5;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v6 + 32LL))(v6, v3);
  }
  return a1;
}
