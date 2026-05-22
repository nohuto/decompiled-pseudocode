/*
 * XREFs of ?_Reallocate_exactly@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAX_K@Z @ 0x1800AFA28
 * Callers:
 *     ?reserve@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@QEAAX_K@Z @ 0x1800AFBA0 (-reserve@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@QEAAX_K@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18000ADC4 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Umove_if_noexcept1@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXPEAUColor@UI@Windows@@00U?$integral_constant@_N$00@2@@Z @ 0x1800664D8 (-_Umove_if_noexcept1@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEA.c)
 */

__int64 __fastcall std::vector<Windows::UI::Color>::_Reallocate_exactly(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rdi
  size_t v5; // rcx
  _QWORD *v6; // rsi
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  char v12; // [rsp+20h] [rbp-38h]

  v4 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 2;
  v5 = 4 * a2;
  if ( a2 > 0x3FFFFFFFFFFFFFFFLL )
    v5 = -1LL;
  v6 = std::_Allocate<16,std::_Default_allocate_traits,0>(v5);
  v12 = 0;
  try
  {
    std::vector<Windows::UI::Color>::_Umove_if_noexcept1(a1, *(const void **)a1, *(_QWORD *)(a1 + 8), v6, v12);
    v7 = a2;
    v8 = v4;
    v9 = (__int64)v6;
    v10 = a1;
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v6, (const struct std::nothrow_t *)(4 * a2));
    throw;
  }
  return std::vector<Windows::UI::Color>::_Change_array(v10, v9, v8, v7);
}
