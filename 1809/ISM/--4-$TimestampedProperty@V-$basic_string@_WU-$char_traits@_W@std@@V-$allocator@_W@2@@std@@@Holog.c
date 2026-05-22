/*
 * XREFs of ??4?$TimestampedProperty@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Holographic@Internal@Windows@@QEAAAEAU0123@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z @ 0x1800A3478
 * Callers:
 *     _lambda_a56f457f58ac66e3e3dc9abfa35bf876_::operator() @ 0x18011B3AC (_lambda_a56f457f58ac66e3e3dc9abfa35bf876_--operator().c)
 *     Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::SpatialGraphSnapshot__lambda_2be7d4712709608587fff75dfc19c285___ @ 0x18011BBC4 (Windows--Internal--Holographic--HolographicDeviceSnapshot--Write_Windows--Internal-_ea_18011BBC4.c)
 * Callees:
 *     std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t___::_Reallocate_for__lambda_3fa8b2c8193a0f3144fc4b1b8f243931__wchar_t_const_____ptr64_ @ 0x1800A3318 (std--basic_string_wchar_t_std--char_traits_wchar_t__std--allocator_wchar_t___--_Reallocate_for__.c)
 *     memmove_0 @ 0x18012DB6B (memmove_0.c)
 */

char **__fastcall Windows::Internal::Holographic::TimestampedProperty<std::wstring>::operator=(
        char **a1,
        char **Src,
        __int64 a3)
{
  _QWORD *v4; // r9
  unsigned __int64 v5; // rdx
  char *v6; // rsi
  __int64 v7; // rbx
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 != Src )
  {
    v4 = Src;
    if ( (unsigned __int64)Src[3] >= 8 )
      v4 = *Src;
    v5 = (unsigned __int64)Src[2];
    if ( v5 > (unsigned __int64)a1[3] )
    {
      std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t___::_Reallocate_for__lambda_3fa8b2c8193a0f3144fc4b1b8f243931__wchar_t_const_____ptr64_(
        a1,
        v5,
        a3,
        v4);
    }
    else
    {
      v6 = (char *)a1;
      if ( (unsigned __int64)a1[3] >= 8 )
        v6 = *a1;
      v7 = 2 * v5;
      a1[2] = (char *)v5;
      memmove_0(v6, v4, 2 * v5);
      *(_WORD *)&v6[v7] = 0;
    }
  }
  QueryPerformanceCounter(&PerformanceCount);
  a1[4] = (char *)PerformanceCount.QuadPart;
  return a1;
}
