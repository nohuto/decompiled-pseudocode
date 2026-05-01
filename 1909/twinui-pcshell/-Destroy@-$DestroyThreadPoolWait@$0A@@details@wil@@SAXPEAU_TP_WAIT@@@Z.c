/*
 * XREFs of ?Destroy@?$DestroyThreadPoolWait@$0A@@details@wil@@SAXPEAU_TP_WAIT@@@Z @ 0x1801275C4
 * Callers:
 *     ??_Gregistry_watcher_state@details@wil@@QEAAPEAXI@Z @ 0x18012720C (--_Gregistry_watcher_state@details@wil@@QEAAPEAXI@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_WAIT@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolWait@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_WAIT@@@Z @ 0x180128F14 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_WAIT@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThreadP.c)
 *     ??_EPriorityBoostHelper@@UEAAPEAXI@Z @ 0x1801DF820 (--_EPriorityBoostHelper@@UEAAPEAXI@Z.c)
 *     ??1?$unique_ptr@VWindowPropertyChangedListener@@U?$default_delete@VWindowPropertyChangedListener@@@std@@@std@@QEAA@XZ @ 0x180270014 (--1-$unique_ptr@VWindowPropertyChangedListener@@U-$default_delete@VWindowPropertyChangedListener.c)
 *     ?SetupAppSpecifiedIconsForView@DefaultIconManager@@UEAAJPEAUIApplicationView@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1802728D0 (-SetupAppSpecifiedIconsForView@DefaultIconManager@@UEAAJPEAUIApplicationView@@PEAUIShellTab@Tabs.c)
 *     ?_Change_array@?$vector@V?$unique_ptr@VWindowPropertyChangedListener@@U?$default_delete@VWindowPropertyChangedListener@@@std@@@std@@V?$allocator@V?$unique_ptr@VWindowPropertyChangedListener@@U?$default_delete@VWindowPropertyChangedListener@@@std@@@std@@@2@@std@@AEAAXQEAV?$unique_ptr@VWindowPropertyChangedListener@@U?$default_delete@VWindowPropertyChangedListener@@@std@@@2@_K1@Z @ 0x1802736F0 (-_Change_array@-$vector@V-$unique_ptr@VWindowPropertyChangedListener@@U-$default_delete@VWindowP.c)
 *     ?_Destroy@?$vector@V?$unique_ptr@VWindowPropertyChangedListener@@U?$default_delete@VWindowPropertyChangedListener@@@std@@@std@@V?$allocator@V?$unique_ptr@VWindowPropertyChangedListener@@U?$default_delete@VWindowPropertyChangedListener@@@std@@@std@@@2@@std@@AEAAXPEAV?$unique_ptr@VWindowPropertyChangedListener@@U?$default_delete@VWindowPropertyChangedListener@@@std@@@2@0@Z @ 0x18027387C (-_Destroy@-$vector@V-$unique_ptr@VWindowPropertyChangedListener@@U-$default_delete@VWindowProper.c)
 *     ?_Tidy@?$vector@V?$unique_ptr@VWindowPropertyChangedListener@@U?$default_delete@VWindowPropertyChangedListener@@@std@@@std@@V?$allocator@V?$unique_ptr@VWindowPropertyChangedListener@@U?$default_delete@VWindowPropertyChangedListener@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x180273BA8 (-_Tidy@-$vector@V-$unique_ptr@VWindowPropertyChangedListener@@U-$default_delete@VWindowPropertyC.c)
 *     ??_Gevent_watcher_state@details@wil@@QEAAPEAXI@Z @ 0x18032D114 (--_Gevent_watcher_state@details@wil@@QEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::DestroyThreadPoolWait<0>::Destroy(PTP_WAIT pwa)
{
  SetThreadpoolWait(pwa, 0LL, 0LL);
  WaitForThreadpoolWaitCallbacks(pwa, 1);
  CloseThreadpoolWait(pwa);
}
