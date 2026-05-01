/*
 * XREFs of ??_G?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVUnifiedTile@1Shell@WindowsInternal@@PEAVTileChangedEventArgs@123@@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@V_lambda_d22facc111afee216f03a1c91e368862_@@$0?0PEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@PEAUITileChangedEventArgs@678@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVUnifiedTile@1Shell@WindowsInternal@@PEAUIUnifiedTile@123@@Internal@Foundation@Windows@@U?$AggregateType@PEAVTileChangedEventArgs@UnifiedTile@Shell@WindowsInternal@@PEAUITileChangedEventArgs@234@@234@@Foundation@Windows@@EAAJPEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@PEAUITileChangedEventArgs@567@@Z@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1800354F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180042A84 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180043EE0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<WindowsInternal::Shell::UnifiedTile::UnifiedTile *,WindowsInternal::Shell::UnifiedTile::IUnifiedTile *>,Windows::Foundation::Internal::AggregateType<WindowsInternal::Shell::UnifiedTile::TileChangedEventArgs *,WindowsInternal::Shell::UnifiedTile::ITileChangedEventArgs *>>::*)(WindowsInternal::Shell::UnifiedTile::IUnifiedTile *,WindowsInternal::Shell::UnifiedTile::ITileChangedEventArgs *)>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<WindowsInternal::Shell::UnifiedTile::UnifiedTile *,WindowsInternal::Shell::UnifiedTile::TileChangedEventArgs *>,Microsoft::WRL::FtmBase>,_lambda_d22facc111afee216f03a1c91e368862_,-1,WindowsInternal::Shell::UnifiedTile::IUnifiedTile *,WindowsInternal::Shell::UnifiedTile::ITileChangedEventArgs *>::`scalar deleting destructor'(
        _QWORD *a1,
        char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx

  v4 = a1[8];
  if ( v4 )
  {
    a1[8] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  *((_DWORD *)a1 + 15) = -1073741823;
  v5 = a1[4];
  if ( v5 )
  {
    a1[4] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  if ( (a2 & 1) != 0 )
    operator delete(a1, 0x50uLL);
  return a1;
}
