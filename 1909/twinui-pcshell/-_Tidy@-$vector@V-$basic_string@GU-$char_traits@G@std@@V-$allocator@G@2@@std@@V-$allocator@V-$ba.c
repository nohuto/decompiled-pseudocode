/*
 * XREFs of ?_Tidy@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAXXZ @ 0x180085294
 * Callers:
 *     ??1?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAA@XZ @ 0x180085288 (--1-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocator@V-$basic_.c)
 *     _lambda_3edc654c66854fb27c6b7c00085e6f36_::operator() @ 0x1800B0048 (_lambda_3edc654c66854fb27c6b7c00085e6f36_--operator().c)
 *     ?GetActiveApps@AppUsageTracker@@UEAA?AV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@XZ @ 0x1800B4DE0 (-GetActiveApps@AppUsageTracker@@UEAA-AV-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$alloca.c)
 *     ?GetActiveApps@UwpAppStateManager@@UEAA?AV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@XZ @ 0x1800B6740 (-GetActiveApps@UwpAppStateManager@@UEAA-AV-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$all.c)
 *     _dynamic_atexit_destructor_for__Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository::c_knownExperienceIds__ @ 0x1800E9850 (_dynamic_atexit_destructor_for__Windows--Internal--Shell--CustomShell--CustomShellExperienceRepo.c)
 *     _std::vector_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____std::allocator_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short_______::_Range_construct_or_tidy_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const____::_1_::catch$28 @ 0x18018074A (_std--vector_std--basic_string_unsigned_short_std--char_traits_unsigned_short__std-_ea_18018074A.c)
 *     ?_ParseExperienceArguments@RetailDemoExperienceManager@@AEAAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1801D5A18 (-_ParseExperienceArguments@RetailDemoExperienceManager@@AEAAXAEBV-$basic_string@GU-$char_traits@.c)
 *     ?_ParseScreenRect@RetailDemoExperienceManager@@CA?AUtagRECT@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1801D5DF0 (-_ParseScreenRect@RetailDemoExperienceManager@@CA-AUtagRECT@@AEBV-$basic_string@GU-$char_traits@.c)
 *     ??_EVirtualPinnedAppsHandler@@UEAAPEAXI@Z @ 0x180416EB0 (--_EVirtualPinnedAppsHandler@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x1800798F4 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800831C8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<std::wstring>::_Tidy(__int64 a1)
{
  _QWORD *v1; // rbx
  _QWORD *v3; // rsi

  v1 = *(_QWORD **)a1;
  if ( *(_QWORD *)a1 )
  {
    v3 = *(_QWORD **)(a1 + 8);
    if ( v1 != v3 )
    {
      do
      {
        std::wstring::_Tidy_deallocate(v1);
        v1 += 4;
      }
      while ( v1 != v3 );
      v1 = *(_QWORD **)a1;
    }
    std::_Deallocate<16,0>(
      v1,
      (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - (_QWORD)v1) & 0xFFFFFFFFFFFFFFE0uLL));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
