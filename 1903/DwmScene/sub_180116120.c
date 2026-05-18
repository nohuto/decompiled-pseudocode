/*
 * XREFs of sub_180116120 @ 0x180116120
 * Callers:
 *     sub_18011735C @ 0x18011735C (sub_18011735C.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 */

_DWORD *__fastcall sub_180116120(__int64 *a1, __int64 a2)
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
      *(_QWORD *)result = &std::_Ref_count_resource<Spectre::Utils::Math::Vector3 *,_lambda_c58b56f3b5d6ce0ca97bc4d5524d8f21_>::`vftable';
      *((_QWORD *)result + 2) = a2;
    }
    *a1 = a2;
    a1[1] = (__int64)result;
  }
  catch ( ... )
  {
    sub_1800D238C((__int64)&v6, a2);
    throw;
  }
  return result;
}
