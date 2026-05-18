/*
 * XREFs of sub_180105E24 @ 0x180105E24
 * Callers:
 *     sub_180104894 @ 0x180104894 (sub_180104894.c)
 * Callees:
 *     sub_18010456C @ 0x18010456C (sub_18010456C.c)
 */

__int64 __fastcall sub_180105E24(__int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax
  _QWORD v3[10]; // [rsp+28h] [rbp-50h] BYREF

  if ( a2 != *(_QWORD *)(a1 + 136) )
  {
    v3[1] = a1;
    v3[0] = &std::_Func_impl_no_alloc<_lambda_e2d814e9807dd7e00cea0e61bb6c7f7f_,Spectre::Utils::Math::Color,Spectre::Utils::Math::Color>::`vftable';
    v3[7] = v3;
    return sub_18010456C(a1, a2, (__int64)v3);
  }
  return result;
}
