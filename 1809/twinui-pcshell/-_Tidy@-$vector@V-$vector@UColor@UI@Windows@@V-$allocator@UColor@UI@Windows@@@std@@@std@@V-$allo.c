/*
 * XREFs of ?_Tidy@?$vector@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@V?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x1800835B0
 * Callers:
 *     _dynamic_atexit_destructor_for__error__ @ 0x1800AF950 (_dynamic_atexit_destructor_for__error__.c)
 *     _dynamic_atexit_destructor_for__idle__ @ 0x1800AF960 (_dynamic_atexit_destructor_for__idle__.c)
 *     _dynamic_atexit_destructor_for__listening__ @ 0x1800AF970 (_dynamic_atexit_destructor_for__listening__.c)
 *     _dynamic_atexit_destructor_for__responding__ @ 0x1800AF980 (_dynamic_atexit_destructor_for__responding__.c)
 *     _dynamic_atexit_destructor_for__thinking__ @ 0x1800AF990 (_dynamic_atexit_destructor_for__thinking__.c)
 *     _std::vector_std::vector_Windows::UI::Color_std::allocator_Windows::UI::Color____std::allocator_std::vector_Windows::UI::Color_std::allocator_Windows::UI::Color_______::_Range_construct_or_tidy_std::vector_Windows::UI::Color_std::allocator_Windows::UI::Color____const_____ptr64__::_1_::catch$6 @ 0x18039D62B (_std--vector_std--vector_Windows--UI--Color_std--allocator_Windows--UI--Color____st_ea_18039D62B.c)
 *     ?HandleState@AssistantLightStrip@Lighting@TwinUI@@UEAAXHW4AssistantState@2Cortana@@@Z @ 0x18039DC80 (-HandleState@AssistantLightStrip@Lighting@TwinUI@@UEAAXHW4AssistantState@2Cortana@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18007F638 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ @ 0x180083574 (-_Tidy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ.c)
 */

void __fastcall std::vector<std::vector<Windows::UI::Color>>::_Tidy(char **a1)
{
  char *v1; // rbx
  char *v3; // rsi

  v1 = *a1;
  if ( *a1 )
  {
    v3 = a1[1];
    if ( v1 != v3 )
    {
      do
      {
        std::vector<Windows::UI::Color>::_Tidy((__int64)v1);
        v1 += 24;
      }
      while ( v1 != v3 );
      v1 = *a1;
    }
    std::_Deallocate<16,0>(v1, (const struct std::nothrow_t *)(24 * ((a1[2] - v1) / 24)));
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
}
