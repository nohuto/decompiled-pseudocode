/*
 * XREFs of std::vector_Windows::UI::Color_std::allocator_Windows::UI::Color___::_Resize__lambda_c948d9edf99f5fb7aad0043553e8ab01___ @ 0x1800ADF44
 * Callers:
 *     ?Initialize@LampArrayDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1800AE600 (-Initialize@LampArrayDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18000ADC4 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memset_0 @ 0x18002C06E (memset_0.c)
 *     ?_Change_array@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXQEAUColor@UI@Windows@@_K1@Z @ 0x180059AE4 (-_Change_array@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXQEAU.c)
 *     ?_Umove_if_noexcept1@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXPEAUColor@UI@Windows@@00U?$integral_constant@_N$00@2@@Z @ 0x1800664D8 (-_Umove_if_noexcept1@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEA.c)
 *     ?_Calculate_growth@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEBA_K_K@Z @ 0x1800AF988 (-_Calculate_growth@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEBA_.c)
 */

unsigned __int64 __fastcall std::vector_Windows::UI::Color_std::allocator_Windows::UI::Color___::_Resize__lambda_c948d9edf99f5fb7aad0043553e8ab01___(
        __int64 a1,
        unsigned __int64 a2)
{
  _BYTE *v4; // r14
  _BYTE *v5; // rcx
  unsigned __int64 v6; // rsi
  unsigned __int64 result; // rax
  unsigned __int64 v8; // r15
  size_t v9; // rcx
  unsigned __int64 v10; // r9
  _QWORD *v11; // r14
  unsigned __int64 v12; // rbx
  char v13; // [rsp+20h] [rbp-38h]

  v4 = *(_BYTE **)(a1 + 8);
  v5 = *(_BYTE **)a1;
  v6 = (v4 - v5) >> 2;
  result = (__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v5) >> 2;
  if ( a2 <= result )
  {
    if ( a2 <= v6 )
    {
      if ( a2 != v6 )
      {
        result = (unsigned __int64)&v5[4 * a2];
        *(_QWORD *)(a1 + 8) = result;
      }
    }
    else
    {
      v12 = a2 - v6;
      if ( a2 != v6 )
      {
        result = (unsigned __int64)memset_0(v4, 0, 4 * v12);
        v4 += 4 * v12;
      }
      *(_QWORD *)(a1 + 8) = v4;
    }
  }
  else
  {
    if ( a2 > 0x3FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector<T> too long");
    v8 = std::vector<Windows::UI::Color>::_Calculate_growth(a1, a2);
    v9 = 4 * v8;
    if ( v8 > v10 )
      v9 = -1LL;
    v11 = std::_Allocate<16,std::_Default_allocate_traits,0>(v9);
    try
    {
      if ( a2 != v6 )
        memset_0((char *)v11 + 4 * v6, 0, 4 * (a2 - v6));
      v13 = 0;
      std::vector<Windows::UI::Color>::_Umove_if_noexcept1(a1, *(const void **)a1, *(_QWORD *)(a1 + 8), v11, v13);
    }
    catch ( ... )
    {
      std::_Deallocate<16,0>(v11, (const struct std::nothrow_t *)(4 * v8));
      throw;
    }
    return std::vector<Windows::UI::Color>::_Change_array(a1, (__int64)v11, a2, v8);
  }
  return result;
}
