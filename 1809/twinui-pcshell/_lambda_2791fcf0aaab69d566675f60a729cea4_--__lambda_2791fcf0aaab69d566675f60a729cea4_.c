/*
 * XREFs of _lambda_2791fcf0aaab69d566675f60a729cea4_::__lambda_2791fcf0aaab69d566675f60a729cea4_ @ 0x180107924
 * Callers:
 *     ??_E?$DelegateInvokeHelper@UIAsyncCallback@@V_lambda_2791fcf0aaab69d566675f60a729cea4_@@$0?0J@?$DelegateArgTraits@P8IAsyncCallback@@EAAJJ@Z@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1801084B0 (--_E-$DelegateInvokeHelper@UIAsyncCallback@@V_lambda_2791fcf0aaab69d566675f60a729cea4_@@$0-0J@-$.c)
 *     ?_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIAsyncCallback@@@Z @ 0x180112000 (-_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIViewWrapp.c)
 *     _CAppViewManager::_SwitchAsyncWorker_::_1_::dtor$5 @ 0x180112296 (_CAppViewManager--_SwitchAsyncWorker_--_1_--dtor$5.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1SwitchAsyncWorker@CAppViewManagerTelemetry@@QEAA@XZ @ 0x180107E84 (--1SwitchAsyncWorker@CAppViewManagerTelemetry@@QEAA@XZ.c)
 */

__int64 __fastcall lambda_2791fcf0aaab69d566675f60a729cea4_::__lambda_2791fcf0aaab69d566675f60a729cea4_(__int64 *a1)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 43);
  CAppViewManagerTelemetry::SwitchAsyncWorker::~SwitchAsyncWorker((CAppViewManagerTelemetry::SwitchAsyncWorker *)(a1 + 4));
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1);
}
