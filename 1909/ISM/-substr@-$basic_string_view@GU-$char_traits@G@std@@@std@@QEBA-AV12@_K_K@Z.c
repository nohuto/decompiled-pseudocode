/*
 * XREFs of ?substr@?$basic_string_view@GU?$char_traits@G@std@@@std@@QEBA?AV12@_K_K@Z @ 0x180122680
 * Callers:
 *     ?StringToHstringVectorParser@@YA?AV?$com_ptr_t@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@PEBG@Z @ 0x180120B40 (-StringToHstringVectorParser@@YA-AV-$com_ptr_t@U-$IVector@PEAUHSTRING__@@@Collections@Foundation.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall std::basic_string_view<unsigned short>::substr(
        _QWORD *a1,
        __int64 *a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  unsigned __int64 v4; // r10
  unsigned __int64 v5; // r10
  __int64 v6; // rcx

  v4 = a1[1];
  if ( v4 < a3 )
  {
    std::_Xout_of_range("invalid string_view position");
    __debugbreak();
  }
  v5 = v4 - a3;
  if ( v5 >= a4 )
    v5 = a4;
  v6 = *a1 + 2 * a3;
  a2[1] = v5;
  *a2 = v6;
  return a2;
}
