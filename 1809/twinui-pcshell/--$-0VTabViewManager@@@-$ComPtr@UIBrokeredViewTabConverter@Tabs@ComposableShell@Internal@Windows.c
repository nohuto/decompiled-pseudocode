/*
 * XREFs of ??$?0VTabViewManager@@@?$ComPtr@UIBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@@WRL@Microsoft@@QEAA@PEAVTabViewManager@@@Z @ 0x1801CDEAC
 * Callers:
 *     ?DragEnterForApplicationManagedTab@TabViewManager@@UEAAJPEAUIInspectable@@PEAUIApplicationView@@@Z @ 0x1801DA760 (-DragEnterForApplicationManagedTab@TabViewManager@@UEAAJPEAUIInspectable@@PEAUIApplicationView@@.c)
 *     ?OnTabTransferStarting@TabViewManager@@AEAAJPEAUIInspectable@@0@Z @ 0x1801E1080 (-OnTabTransferStarting@TabViewManager@@AEAAJPEAUIInspectable@@0@Z.c)
 *     ?RegisterForTabTransferEvents@TabViewManager@@AEAAJXZ @ 0x1801E3A38 (-RegisterForTabTransferEvents@TabViewManager@@AEAAJXZ.c)
 *     ?RunCallbackWithTabTransferEventBrokerAsync@TabViewManager@@AEAAJV?$function@$$A6AJPEAUITabTransferEventBroker@Experience@Shell@Internal@Windows@@@Z@std@@@Z @ 0x1801E48B0 (-RunCallbackWithTabTransferEventBrokerAsync@TabViewManager@@AEAAJV-$function@$$A6AJPEAUITabTrans.c)
 *     ?TabTransferCompletedWorker@TabViewManager@@AEAAJPEAUIInspectable@@UShellTabId@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1801EB9B8 (-TabTransferCompletedWorker@TabViewManager@@AEAAJPEAUIInspectable@@UShellTabId@Tabs@ComposableSh.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter>::ComPtr<Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter>(
        __int64 *a1,
        __int64 a2)
{
  *a1 = (a2 + 152) & -(__int64)(a2 != 0);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(a1);
  return a1;
}
