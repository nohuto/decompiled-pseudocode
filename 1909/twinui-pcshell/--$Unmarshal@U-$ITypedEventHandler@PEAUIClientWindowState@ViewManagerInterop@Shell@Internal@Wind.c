/*
 * XREFs of ??$Unmarshal@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@@CMarshaledInterface@@QEAAJV?$ComPtrRef@V?$ComPtr@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1801BEF4C
 * Callers:
 *     _lambda_7236ad44fa518745a9bdf4ca8e40e752_::operator() @ 0x1800974E0 (_lambda_7236ad44fa518745a9bdf4ca8e40e752_--operator().c)
 *     _lambda_cb0af7e1d42ef4d0a3c34c8965299215_::operator() @ 0x1801BF8AC (_lambda_cb0af7e1d42ef4d0a3c34c8965299215_--operator().c)
 *     _lambda_957ead38568c8ad518049f8c3d4ac3cc_::operator() @ 0x1801DA9B0 (_lambda_957ead38568c8ad518049f8c3d4ac3cc_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CMarshaledInterface::Unmarshal<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>>(
        CMarshaledInterface *this,
        void **a2)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)a2);
  return CMarshaledInterface::_Unmarshal(
           this,
           &GUID_8cecdf70_ced8_5bc7_84a7_d80615fedcdd,
           (struct IInspectable **)a2,
           0);
}
