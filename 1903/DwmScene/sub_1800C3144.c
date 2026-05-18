/*
 * XREFs of sub_1800C3144 @ 0x1800C3144
 * Callers:
 *     sub_1800C2520 @ 0x1800C2520 (sub_1800C2520.c)
 * Callees:
 *     sub_18007797C @ 0x18007797C (sub_18007797C.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800C3144(__int64 a1)
{
  __int64 *v2; // rax
  __int64 v3; // rcx
  _QWORD v5[10]; // [rsp+28h] [rbp-50h] BYREF

  v2 = (__int64 *)sub_18007797C(a1, 1);
  v5[1] = a1;
  v5[0] = &std::_Func_impl_no_alloc<_lambda_c2908865c5455559f27dd83c8b0421b9_,void,std::wstring const &>::`vftable';
  v3 = *v2;
  v5[7] = v5;
  return (*(__int64 (__fastcall **)(__int64 *, _QWORD *))(v3 + 8))(v2, v5);
}
