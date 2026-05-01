/*
 * XREFs of ??$Unmarshal@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@@CMarshaledInterface@@QEAAJV?$ComPtrRef@V?$ComPtr@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019410
 * Callers:
 *     _lambda_60d16d02b9cc51a6582d9c6577bb1617_::operator() @ 0x18001855C (_lambda_60d16d02b9cc51a6582d9c6577bb1617_--operator().c)
 *     _lambda_cb0af7e1d42ef4d0a3c34c8965299215_::operator() @ 0x18017183C (_lambda_cb0af7e1d42ef4d0a3c34c8965299215_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

int __fastcall CMarshaledInterface::Unmarshal<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>>(
        CMarshaledInterface *this,
        void **a2)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a2);
  return CMarshaledInterface::_Unmarshal(this, &GUID_8cecdf70_ced8_5bc7_84a7_d80615fedcdd, a2, 0);
}
