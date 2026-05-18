/*
 * XREFs of sub_1801161D4 @ 0x1801161D4
 * Callers:
 *     sub_1801167D4 @ 0x1801167D4 (sub_1801167D4.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 */

_DWORD *__fastcall sub_1801161D4(__int64 *a1, __int64 a2)
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
      *(_QWORD *)result = &std::_Ref_count_resource<Spectre::Utils::Math::Vector3 *,_lambda_834aa7a2fcf0da6d2b304cc7dbbea896_>::`vftable';
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
