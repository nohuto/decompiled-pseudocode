/*
 * XREFs of _WaitForCompletion_Windows::Foundation::IAsyncOperationCompletedHandler_WindowsInternal::Shell::UnifiedTile::UnifiedTileManager____Windows::Foundation::IAsyncOperation_WindowsInternal::Shell::UnifiedTile::UnifiedTileManager______::_2_::FTMEventDelegate::_scalar_deleting_destructor_ @ 0x1801FACA0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008A0A0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void *__fastcall WaitForCompletion_Windows::Foundation::IAsyncOperationCompletedHandler_WindowsInternal::Shell::UnifiedTile::UnifiedTileManager____Windows::Foundation::IAsyncOperation_WindowsInternal::Shell::UnifiedTile::UnifiedTileManager______::_2_::FTMEventDelegate::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  *(_QWORD *)a1 = off_18045ED10;
  *((_QWORD *)a1 + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IAsyncOperationCompletedHandler<WindowsInternal::Shell::UnifiedTile::UnifiedTileManager *>,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  CloseHandle(*((HANDLE *)a1 + 7));
  *((_DWORD *)a1 + 11) = -1073741823;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)a1 + 4);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x40);
  return a1;
}
