/*
 * XREFs of ?_Delete_this@?$_Func_impl_no_alloc@V?$_Binder@U_Unforced@std@@P8GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@EAAJPEAUICollectionTile@UnifiedTile@Shell@WindowsInternal@@@ZPEAV34567@AEBU?$_Ph@$00@2@@std@@JPEAUICollectionTile@UnifiedTile@Shell@WindowsInternal@@@std@@EEAAX_N@Z @ 0x18001EC30
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180042A84 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Func_impl_no_alloc<std::_Binder<std::_Unforced,long (Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::*)(WindowsInternal::Shell::UnifiedTile::ICollectionTile *),Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl *,std::_Ph<1> const &>,long,WindowsInternal::Shell::UnifiedTile::ICollectionTile *>::_Delete_this(
        void *a1,
        char a2)
{
  if ( a2 )
    operator delete(a1, 0x28uLL);
}
