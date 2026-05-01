/*
 * XREFs of ?_Move@?$_Func_impl_no_alloc@V?$_Binder@U_Unforced@std@@P8GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@EAAJPEAUICollectionTile@UnifiedTile@Shell@WindowsInternal@@@ZPEAV34567@AEBU?$_Ph@$00@2@@std@@JPEAUICollectionTile@UnifiedTile@Shell@WindowsInternal@@@std@@EEAAPEAV?$_Func_base@JPEAUICollectionTile@UnifiedTile@Shell@WindowsInternal@@@2@PEAX@Z @ 0x18001EC60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Func_impl_no_alloc<std::_Binder<std::_Unforced,long (Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::*)(WindowsInternal::Shell::UnifiedTile::ICollectionTile *),Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl *,std::_Ph<1> const &>,long,WindowsInternal::Shell::UnifiedTile::ICollectionTile *>::_Move(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)a2 = &std::_Func_impl_no_alloc<std::_Binder<std::_Unforced,long (Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::*)(WindowsInternal::Shell::UnifiedTile::ICollectionTile *),Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl *,std::_Ph<1> const &>,long,WindowsInternal::Shell::UnifiedTile::ICollectionTile *>::`vftable';
  result = a2;
  *(_OWORD *)(a2 + 8) = *(_OWORD *)(a1 + 8);
  *(_OWORD *)(a2 + 24) = *(_OWORD *)(a1 + 24);
  return result;
}
