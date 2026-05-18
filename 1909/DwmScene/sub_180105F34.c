/*
 * XREFs of sub_180105F34 @ 0x180105F34
 * Callers:
 *     sub_1801049A4 @ 0x1801049A4 (sub_1801049A4.c)
 * Callees:
 *     sub_18010467C @ 0x18010467C (sub_18010467C.c)
 */

__int64 __fastcall sub_180105F34(__int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax
  _QWORD v3[10]; // [rsp+28h] [rbp-50h] BYREF

  if ( a2 != *(_QWORD *)(a1 + 136) )
  {
    v3[1] = a1;
    v3[0] = &std::_Func_impl_no_alloc<_lambda_e2d814e9807dd7e00cea0e61bb6c7f7f_,Spectre::Utils::Math::Color,Spectre::Utils::Math::Color>::`vftable';
    v3[7] = v3;
    return sub_18010467C(a1, a2, (__int64)v3);
  }
  return result;
}
