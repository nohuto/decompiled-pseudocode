/*
 * XREFs of sub_1800C32A0 @ 0x1800C32A0
 * Callers:
 *     sub_1800C2630 @ 0x1800C2630 (sub_1800C2630.c)
 * Callees:
 *     sub_180077A8C @ 0x180077A8C (sub_180077A8C.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800C32A0(__int64 a1)
{
  __int64 *v2; // rax
  __int64 v3; // rcx
  _QWORD v5[10]; // [rsp+28h] [rbp-50h] BYREF

  v2 = (__int64 *)sub_180077A8C(a1, 1);
  v5[1] = a1;
  v5[0] = &std::_Func_impl_no_alloc<_lambda_8dec92c1f943dc7483cf2108a4c3fcc1_,void,std::wstring const &>::`vftable';
  v3 = *v2;
  v5[7] = v5;
  return (*(__int64 (__fastcall **)(__int64 *, _QWORD *))(v3 + 8))(v2, v5);
}
