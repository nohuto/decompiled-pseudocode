/*
 * XREFs of ??_E?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVTileCollectionContainer@UnifiedTile@Shell@WindowsInternal@@PEAVContentsChangedEventArgs@234@@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@V_lambda_2d66124cdfcf65a08201bdfe6f61e828_@@$0?0PEAUITileCollectionContainer@UnifiedTile@Shell@WindowsInternal@@PEAUIContentsChangedEventArgs@678@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVTileCollectionContainer@UnifiedTile@Shell@WindowsInternal@@PEAUITileCollectionContainer@234@@Internal@Foundation@Windows@@U?$AggregateType@PEAVContentsChangedEventArgs@UnifiedTile@Shell@WindowsInternal@@PEAUIContentsChangedEventArgs@234@@234@@Foundation@Windows@@EAAJPEAUITileCollectionContainer@UnifiedTile@Shell@WindowsInternal@@PEAUIContentsChangedEventArgs@567@@Z@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1801FE690
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 *__fastcall Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<WindowsInternal::Shell::UnifiedTile::TileCollectionContainer *,WindowsInternal::Shell::UnifiedTile::ITileCollectionContainer *>,Windows::Foundation::Internal::AggregateType<WindowsInternal::Shell::UnifiedTile::ContentsChangedEventArgs *,WindowsInternal::Shell::UnifiedTile::IContentsChangedEventArgs *>>::*)(WindowsInternal::Shell::UnifiedTile::ITileCollectionContainer *,WindowsInternal::Shell::UnifiedTile::IContentsChangedEventArgs *)>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<WindowsInternal::Shell::UnifiedTile::TileCollectionContainer *,WindowsInternal::Shell::UnifiedTile::ContentsChangedEventArgs *>,Microsoft::WRL::FtmBase>,_lambda_2d66124cdfcf65a08201bdfe6f61e828_,-1,WindowsInternal::Shell::UnifiedTile::ITileCollectionContainer *,WindowsInternal::Shell::UnifiedTile::IContentsChangedEventArgs *>::`vector deleting destructor'(
        __int64 *a1,
        char a2)
{
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(a1 + 8);
  *((_DWORD *)a1 + 15) = -1073741823;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 4);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x50);
  return a1;
}
