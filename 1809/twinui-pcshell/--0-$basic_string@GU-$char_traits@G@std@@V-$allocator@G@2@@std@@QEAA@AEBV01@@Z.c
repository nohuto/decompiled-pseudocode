/*
 * XREFs of ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18006C1B8
 * Callers:
 *     ??$_Buynode@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@?$_List_buy@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@PEAX@1@PEAU21@0AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@AEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@1@@Z @ 0x18006C13C (--$_Buynode@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAV-$shared_ptr@UA.c)
 *     ??$_Ucopy@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@PEBV21@0PEAV21@@Z @ 0x18008B718 (--$_Ucopy@PEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$vector@V-$basic_st.c)
 *     ?_ParseExperienceArguments@RetailDemoExperienceManager@@AEAAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1801862F8 (-_ParseExperienceArguments@RetailDemoExperienceManager@@AEAAXAEBV-$basic_string@GU-$char_traits@.c)
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$tuple@$$V@2@@?$_List_buy@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@PEAX@1@PEAU21@0AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180197E18 (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@AEBV-$basic_string@GU-$char_traits@G@std@@V-.c)
 *     ?CreateModalExperienceAsync@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1802B561C (-CreateModalExperienceAsync@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?_Construct_lv_contents@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXAEBV12@@Z @ 0x18006C1F0 (-_Construct_lv_contents@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXAEBV12.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::wstring::wstring(__int64 a1)
{
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  std::wstring::_Construct_lv_contents(a1);
  return a1;
}
