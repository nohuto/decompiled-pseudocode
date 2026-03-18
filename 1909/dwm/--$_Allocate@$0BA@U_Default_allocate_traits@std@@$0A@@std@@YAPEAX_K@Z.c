/*
 * XREFs of ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1400068C8
 * Callers:
 *     std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_for__lambda_05cef1f6fdf474c9f3ed207deba0f73b__unsigned_short_const___ @ 0x140006964 (std--basic_string_unsigned_short_std--char_traits_unsigned_short__std--allocator_unsigned_short_.c)
 *     ??0?$vector@EV?$allocator@E@std@@@std@@QEAA@_KAEBV?$allocator@E@1@@Z @ 0x140006ADC (--0-$vector@EV-$allocator@E@std@@@std@@QEAA@_KAEBV-$allocator@E@1@@Z.c)
 *     ??0?$vector@UDISPLAYCONFIG_MODE_INFO@@V?$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@QEAA@_KAEBV?$allocator@UDISPLAYCONFIG_MODE_INFO@@@1@@Z @ 0x140006B58 (--0-$vector@UDISPLAYCONFIG_MODE_INFO@@V-$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@QEAA@_K.c)
 *     ??0?$vector@UDISPLAYCONFIG_PATH_INFO@@V?$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@QEAA@_KAEBV?$allocator@UDISPLAYCONFIG_PATH_INFO@@@1@@Z @ 0x140006BE4 (--0-$vector@UDISPLAYCONFIG_PATH_INFO@@V-$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@QEAA@_K.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x140003E38 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_Allocate<16,std::_Default_allocate_traits,0>(size_t a1)
{
  _QWORD *result; // rax
  size_t v2; // rcx
  void *v3; // rax
  void *v4; // rcx

  result = (_QWORD *)a1;
  if ( a1 < 0x1000 )
  {
    if ( a1 )
      return operator new(a1);
  }
  else
  {
    v2 = a1 + 39;
    if ( v2 <= (unsigned __int64)result )
      v2 = -1LL;
    v3 = operator new(v2);
    v4 = v3;
    if ( !v3 )
    {
      _o__invalid_parameter_noinfo_noreturn();
      __debugbreak();
    }
    result = (_QWORD *)(((unsigned __int64)v3 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
    *(result - 1) = v4;
  }
  return result;
}
