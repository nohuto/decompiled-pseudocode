/*
 * XREFs of sub_1801162E8 @ 0x1801162E8
 * Callers:
 *     sub_180116CF8 @ 0x180116CF8 (sub_180116CF8.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 */

_DWORD *__fastcall sub_1801162E8(__int64 *a1, __int64 a2)
{
  _DWORD *result; // rax
  __int64 v6; // [rsp+60h] [rbp+18h] BYREF

  try
  {
    result = operator new(0x18uLL);
    if ( result )
    {
      result[2] = 1;
      result[3] = 1;
      *(_QWORD *)result = &std::_Ref_count_resource<Spectre::Utils::Math::Vector4 *,_lambda_e2715b82d735c95eaaed130375f63709_>::`vftable';
      *((_QWORD *)result + 2) = a2;
    }
    *a1 = a2;
    a1[1] = (__int64)result;
  }
  catch ( ... )
  {
    sub_1800D249C((__int64)&v6, a2);
    throw;
  }
  return result;
}
