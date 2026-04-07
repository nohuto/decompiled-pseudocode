/*
 * XREFs of ?Destroy@?$DestroyThreadPoolWait@$0A@@details@wil@@SAXPEAU_TP_WAIT@@@Z @ 0x180073110
 * Callers:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_WAIT@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolWait@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_WAIT@@@Z @ 0x18003FCB8 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_WAIT@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThreadP.c)
 *     ??_Gevent_watcher_state@details@wil@@QEAAPEAXI@Z @ 0x180073044 (--_Gevent_watcher_state@details@wil@@QEAAPEAXI@Z.c)
 *     ??_Gregistry_watcher_state@details@wil@@QEAAPEAXI@Z @ 0x1800730A0 (--_Gregistry_watcher_state@details@wil@@QEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::DestroyThreadPoolWait<0>::Destroy(PTP_WAIT pwa)
{
  SetThreadpoolWait(pwa, 0LL, 0LL);
  WaitForThreadpoolWaitCallbacks(pwa, 1);
  CloseThreadpoolWait(pwa);
}
