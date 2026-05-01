/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_WindowsInternal::Shell::UnifiedTile::TileCollectionContainer___WindowsInternal::Shell::UnifiedTile::ITileCollectionContainer____Windows::Foundation::Internal::AggregateType_WindowsInternal::Shell::UnifiedTile::ContentsChangedEventArgs___WindowsInternal::Shell::UnifiedTile::IContentsChangedEventArgs_____::_)(WindowsInternal::Shell::UnifiedTile::ITileCollectionContainer___WindowsInternal::Shell::UnifiedTile::IContentsChangedEventArgs__)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_WindowsInternal::Shell::UnifiedTile::TileCollectionContainer___WindowsInternal::Shell::UnifiedTile::ContentsChangedEventArgs____Microsoft::WRL::FtmBase___lambda_6b9194c3216f761a386d947d38e63e72___1_WindowsInternal::Shell::UnifiedTile::ITileCollectionContainer___WindowsInternal::Shell::UnifiedTile::IContentsChangedEventArgs___::_scalar_deleting_destructor_ @ 0x1800225D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180042DE4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180044260 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_WindowsInternal::Shell::UnifiedTile::TileCollectionContainer___WindowsInternal::Shell::UnifiedTile::ITileCollectionContainer____Windows::Foundation::Internal::AggregateType_WindowsInternal::Shell::UnifiedTile::ContentsChangedEventArgs___WindowsInternal::Shell::UnifiedTile::IContentsChangedEventArgs_____::___WindowsInternal::Shell::UnifiedTile::ITileCollectionContainer___WindowsInternal::Shell::UnifiedTile::IContentsChangedEventArgs____::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_WindowsInternal::Shell::UnifiedTile::TileCollectionContainer___WindowsInternal::Shell::UnifiedTile::ContentsChangedEventArgs____Microsoft::WRL::FtmBase___lambda_6b9194c3216f761a386d947d38e63e72___1_WindowsInternal::Shell::UnifiedTile::ITileCollectionContainer___WindowsInternal::Shell::UnifiedTile::IContentsChangedEventArgs___::_scalar_deleting_destructor_(
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
    operator delete(a1, (const struct std::nothrow_t *)0x58);
  return a1;
}
