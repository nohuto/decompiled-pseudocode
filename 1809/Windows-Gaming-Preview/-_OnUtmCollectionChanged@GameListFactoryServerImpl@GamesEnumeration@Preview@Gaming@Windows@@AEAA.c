/*
 * XREFs of ?_OnUtmCollectionChanged@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUIContentsChangedEventArgs@UnifiedTile@Shell@WindowsInternal@@_N@Z @ 0x18001AEE0
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_WindowsInternal::Shell::UnifiedTile::TileCollectionContainer_____ptr64_WindowsInternal::Shell::UnifiedTile::ITileCollectionContainer_____ptr64__Windows::Foundation::Internal::AggregateType_WindowsInternal::Shell::UnifiedTile::ContentsChangedEventArgs_____ptr64_WindowsInternal::Shell::UnifiedTile::IContentsChangedEventArgs_____ptr64___::_)(WindowsInternal::Shell::UnifiedTile::ITileCollectionContainer_____ptr64_WindowsInternal::Shell::UnifiedTile::IContentsChangedEventArgs_____ptr64)___ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_WindowsInternal::Shell::UnifiedTile::TileCollectionContainer_____ptr64_WindowsInternal::Shell::UnifiedTile::ContentsChangedEventArgs_____ptr64__Microsoft::WRL::FtmBase___lambda_6b9194c3216f761a386d947d38e63e72___1_WindowsInternal::Shell::UnifiedTile::ITileCollectionContainer_____ptr64_WindowsInternal::Shell::UnifiedTile::IContentsChangedEventArgs_____ptr64_::Invoke @ 0x18001F520 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--ITypedEventHandler.c)
 * Callees:
 *     ?_ProcessAddedOrRemovedTiles@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAU?$IVectorView@PEAVCollectionTile@UnifiedTile@Shell@WindowsInternal@@@Collections@Foundation@5@V?$function@$$A6AJPEAUICollectionTile@UnifiedTile@Shell@WindowsInternal@@@Z@std@@_N@Z @ 0x18001B0DC (-_ProcessAddedOrRemovedTiles@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@.c)
 *     __security_check_cookie @ 0x180042370 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x180042A84 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180043EE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::_OnUtmCollectionChanged(
        Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl *this,
        struct WindowsInternal::Shell::UnifiedTile::IContentsChangedEventArgs *a2,
        char a3)
{
  __int64 v6; // rcx
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v12; // [rsp+20h] [rbp-A9h] BYREF
  _BYTE v13[40]; // [rsp+28h] [rbp-A1h] BYREF
  _BYTE *v14; // [rsp+60h] [rbp-69h]
  __int64 v15; // [rsp+68h] [rbp-61h]
  void **v16; // [rsp+70h] [rbp-59h] BYREF
  __int128 v17; // [rsp+78h] [rbp-51h]
  __int128 v18; // [rsp+88h] [rbp-41h]
  void *v19; // [rsp+A8h] [rbp-21h]
  void **v20; // [rsp+B0h] [rbp-19h] BYREF
  __int128 v21; // [rsp+B8h] [rbp-11h]
  __int128 v22; // [rsp+C8h] [rbp-1h]
  void *v23; // [rsp+E8h] [rbp+1Fh]

  v15 = -2LL;
  v12 = 0LL;
  if ( (*(int (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::IContentsChangedEventArgs *, __int64 *))(*(_QWORD *)a2 + 64LL))(
         a2,
         &v12) >= 0 )
  {
    *(_QWORD *)v13 = Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::_OnTileAdded;
    *(_DWORD *)&v13[8] = 0;
    *(_QWORD *)&v13[24] = this;
    v16 = &std::_Func_impl_no_alloc<std::_Binder<std::_Unforced,long (Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::*)(WindowsInternal::Shell::UnifiedTile::ICollectionTile *),Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl *,std::_Ph<1> const &>,long,WindowsInternal::Shell::UnifiedTile::ICollectionTile *>::`vftable';
    v17 = *(_OWORD *)v13;
    v18 = *(_OWORD *)&v13[16];
    v19 = &v16;
    *(_QWORD *)v13 = &std::_Func_impl_no_alloc<std::_Binder<std::_Unforced,long (Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::*)(WindowsInternal::Shell::UnifiedTile::ICollectionTile *),Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl *,std::_Ph<1> const &>,long,WindowsInternal::Shell::UnifiedTile::ICollectionTile *>::`vftable';
    *(_OWORD *)&v13[8] = v17;
    *(_OWORD *)&v13[24] = v18;
    v14 = v13;
    LOBYTE(v7) = a3;
    Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::_ProcessAddedOrRemovedTiles(v6, v12, v13, v7);
    if ( v19 )
    {
      if ( v19 != &v16 )
        operator delete(v19, 0x28uLL);
    }
  }
  if ( a3 )
  {
    v8 = v12;
    if ( v12 )
    {
      v12 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    if ( (*(int (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::IContentsChangedEventArgs *, __int64 *))(*(_QWORD *)a2 + 72LL))(
           a2,
           &v12) >= 0 )
    {
      *(_QWORD *)v13 = Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::_OnTileRemoved;
      *(_DWORD *)&v13[8] = 0;
      *(_QWORD *)&v13[24] = this;
      v20 = &std::_Func_impl_no_alloc<std::_Binder<std::_Unforced,long (Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::*)(WindowsInternal::Shell::UnifiedTile::ICollectionTile *),Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl *,std::_Ph<1> const &>,long,WindowsInternal::Shell::UnifiedTile::ICollectionTile *>::`vftable';
      v21 = *(_OWORD *)v13;
      v22 = *(_OWORD *)&v13[16];
      v23 = &v20;
      v16 = &std::_Func_impl_no_alloc<std::_Binder<std::_Unforced,long (Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::*)(WindowsInternal::Shell::UnifiedTile::ICollectionTile *),Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl *,std::_Ph<1> const &>,long,WindowsInternal::Shell::UnifiedTile::ICollectionTile *>::`vftable';
      v17 = *(_OWORD *)v13;
      v18 = *(_OWORD *)&v13[16];
      v19 = &v16;
      Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::_ProcessAddedOrRemovedTiles(
        v9,
        v12,
        &v16,
        0LL);
      if ( v23 )
      {
        if ( v23 != &v20 )
          operator delete(v23, 0x28uLL);
      }
    }
  }
  v10 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return 0LL;
}
