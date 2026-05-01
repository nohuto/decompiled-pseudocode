/*
 * XREFs of ?_OnUtmCollectionChanged@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUIContentsChangedEventArgs@UnifiedTile@Shell@WindowsInternal@@_N@Z @ 0x18001AEA0
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_WindowsInternal::Shell::UnifiedTile::TileCollectionContainer___WindowsInternal::Shell::UnifiedTile::ITileCollectionContainer____Windows::Foundation::Internal::AggregateType_WindowsInternal::Shell::UnifiedTile::ContentsChangedEventArgs___WindowsInternal::Shell::UnifiedTile::IContentsChangedEventArgs_____::_)(WindowsInternal::Shell::UnifiedTile::ITileCollectionContainer___WindowsInternal::Shell::UnifiedTile::IContentsChangedEventArgs__)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_WindowsInternal::Shell::UnifiedTile::TileCollectionContainer___WindowsInternal::Shell::UnifiedTile::ContentsChangedEventArgs____Microsoft::WRL::FtmBase___lambda_6b9194c3216f761a386d947d38e63e72___1_WindowsInternal::Shell::UnifiedTile::ITileCollectionContainer___WindowsInternal::Shell::UnifiedTile::IContentsChangedEventArgs___::Invoke @ 0x18001F580 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--ITypedEventHandler.c)
 * Callees:
 *     ?_ProcessAddedOrRemovedTiles@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAU?$IVectorView@PEAVCollectionTile@UnifiedTile@Shell@WindowsInternal@@@Collections@Foundation@5@V?$function@$$A6AJPEAUICollectionTile@UnifiedTile@Shell@WindowsInternal@@@Z@std@@_N@Z @ 0x18001B0A4 (-_ProcessAddedOrRemovedTiles@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@.c)
 *     __security_check_cookie @ 0x180042850 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180042F64 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800443E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::_OnUtmCollectionChanged(
        Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl *this,
        struct WindowsInternal::Shell::UnifiedTile::IContentsChangedEventArgs *a2,
        char a3)
{
  __int64 v6; // r9
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v10; // [rsp+20h] [rbp-A9h] BYREF
  _BYTE v11[24]; // [rsp+28h] [rbp-A1h] BYREF
  char v12; // [rsp+40h] [rbp-89h]
  Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl *v13; // [rsp+48h] [rbp-81h]
  _BYTE *v14; // [rsp+60h] [rbp-69h]
  __int64 v15; // [rsp+68h] [rbp-61h]
  void **v16; // [rsp+70h] [rbp-59h] BYREF
  __int128 v17; // [rsp+78h] [rbp-51h]
  char v18; // [rsp+88h] [rbp-41h]
  Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl *v19; // [rsp+90h] [rbp-39h]
  void *v20; // [rsp+A8h] [rbp-21h]
  void **v21; // [rsp+B0h] [rbp-19h] BYREF
  __int128 v22; // [rsp+B8h] [rbp-11h]
  char v23; // [rsp+C8h] [rbp-1h]
  Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl *v24; // [rsp+D0h] [rbp+7h]
  void *v25; // [rsp+E8h] [rbp+1Fh]

  v15 = -2LL;
  v10 = 0LL;
  if ( (*(int (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::IContentsChangedEventArgs *, __int64 *))(*(_QWORD *)a2 + 64LL))(
         a2,
         &v10) >= 0 )
  {
    *(_QWORD *)v11 = Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::_OnTileAdded;
    *(_DWORD *)&v11[8] = 0;
    v16 = &std::_Func_impl_no_alloc<std::_Binder<std::_Unforced,long (Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::*)(WindowsInternal::Shell::UnifiedTile::ICollectionTile *),Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl *,std::_Ph<1> const &>,long,WindowsInternal::Shell::UnifiedTile::ICollectionTile *>::`vftable';
    v17 = *(_OWORD *)v11;
    v18 = v11[16];
    v19 = this;
    v20 = &v16;
    *(_QWORD *)v11 = &std::_Func_impl_no_alloc<std::_Binder<std::_Unforced,long (Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::*)(WindowsInternal::Shell::UnifiedTile::ICollectionTile *),Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl *,std::_Ph<1> const &>,long,WindowsInternal::Shell::UnifiedTile::ICollectionTile *>::`vftable';
    *(_OWORD *)&v11[8] = v17;
    v12 = v18;
    v13 = this;
    v14 = v11;
    LOBYTE(v6) = a3;
    Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::_ProcessAddedOrRemovedTiles(
      &v16,
      v10,
      v11,
      v6);
    if ( v20 )
    {
      if ( v20 != &v16 )
        operator delete(v20, (const struct std::nothrow_t *)0x28);
    }
  }
  if ( a3 )
  {
    v7 = v10;
    if ( v10 )
    {
      v10 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    if ( (*(int (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::IContentsChangedEventArgs *, __int64 *))(*(_QWORD *)a2 + 72LL))(
           a2,
           &v10) >= 0 )
    {
      *(_QWORD *)v11 = Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::_OnTileRemoved;
      *(_DWORD *)&v11[8] = 0;
      v21 = &std::_Func_impl_no_alloc<std::_Binder<std::_Unforced,long (Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::*)(WindowsInternal::Shell::UnifiedTile::ICollectionTile *),Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl *,std::_Ph<1> const &>,long,WindowsInternal::Shell::UnifiedTile::ICollectionTile *>::`vftable';
      v22 = *(_OWORD *)v11;
      v23 = v11[16];
      v24 = this;
      v25 = &v21;
      v16 = &std::_Func_impl_no_alloc<std::_Binder<std::_Unforced,long (Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::*)(WindowsInternal::Shell::UnifiedTile::ICollectionTile *),Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl *,std::_Ph<1> const &>,long,WindowsInternal::Shell::UnifiedTile::ICollectionTile *>::`vftable';
      v17 = *(_OWORD *)v11;
      v18 = v11[16];
      v19 = this;
      v20 = &v16;
      Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::_ProcessAddedOrRemovedTiles(
        &v21,
        v10,
        &v16,
        0LL);
      if ( v25 )
      {
        if ( v25 != &v21 )
          operator delete(v25, (const struct std::nothrow_t *)0x28);
      }
    }
  }
  v8 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return 0LL;
}
