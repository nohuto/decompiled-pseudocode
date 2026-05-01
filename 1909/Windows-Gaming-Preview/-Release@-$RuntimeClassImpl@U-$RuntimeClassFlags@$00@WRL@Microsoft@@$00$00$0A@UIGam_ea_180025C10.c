/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameListStatics@GamesEnumeration@Preview@Gaming@Windows@@UIGameListStatics2@5678@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180025C10
 * Callers:
 *     ??_EGameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAPEAXI@Z @ 0x18001A1E0 (--_EGameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAPEAXI@Z.c)
 *     ?RuntimeClassInitialize@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJXZ @ 0x18001A294 (-RuntimeClassInitialize@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJXZ.c)
 *     ?FindAllAsyncPackageFamilyName@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Foundation@5@@Z @ 0x18001B6B0 (-FindAllAsyncPackageFamilyName@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows.c)
 *     _lambda_363ecfaa426a2d345ca41bd67db72fc0_::__lambda_363ecfaa426a2d345ca41bd67db72fc0_ @ 0x18001BA64 (_lambda_363ecfaa426a2d345ca41bd67db72fc0_--__lambda_363ecfaa426a2d345ca41bd67db72fc0_.c)
 *     ?MergeEntriesAsync@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIGameListEntry@2345@0PEAPEAU?$IAsyncOperation@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Foundation@5@@Z @ 0x18001BD00 (-MergeEntriesAsync@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUI.c)
 *     _lambda_2bb0be94c8b34b0b06b3ace075c36ca6_::__lambda_2bb0be94c8b34b0b06b3ace075c36ca6_ @ 0x18001C31C (_lambda_2bb0be94c8b34b0b06b3ace075c36ca6_--__lambda_2bb0be94c8b34b0b06b3ace075c36ca6_.c)
 *     ?UnmergeEntryAsync@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIGameListEntry@2345@PEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Foundation@5@@Z @ 0x18001C730 (-UnmergeEntryAsync@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUI.c)
 *     _lambda_a9c571ff0e3bbbe6412332e11260abf2_::__lambda_a9c571ff0e3bbbe6412332e11260abf2_ @ 0x18001CE40 (_lambda_a9c571ff0e3bbbe6412332e11260abf2_--__lambda_a9c571ff0e3bbbe6412332e11260abf2_.c)
 *     ??1?$ComPtr@VGameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18001CF4C (--1-$ComPtr@VGameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@.c)
 *     Windows::Internal::COperationLambdaVar_0__lambda_363ecfaa426a2d345ca41bd67db72fc0__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Gaming::Preview::GamesEnumeration::GameListEntry_______::_scalar_deleting_destructor_ @ 0x18001F280 (Windows--Internal--COperationLambdaVar_0__lambda_363ecfaa426a2d345ca41bd67db72fc0___ea_18001F280.c)
 *     Windows::Internal::COperationLambdaVar_0__lambda_2bb0be94c8b34b0b06b3ace075c36ca6__Windows::Internal::CMarshaledInterfaceResult_Windows::Gaming::Preview::GamesEnumeration::IGameListEntry___::_scalar_deleting_destructor_ @ 0x18001F310 (Windows--Internal--COperationLambdaVar_0__lambda_2bb0be94c8b34b0b06b3ace075c36ca6___ea_18001F310.c)
 *     Windows::Internal::COperationLambdaVar_0__lambda_a9c571ff0e3bbbe6412332e11260abf2__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Gaming::Preview::GamesEnumeration::GameListEntry_______::_scalar_deleting_destructor_ @ 0x18001F3D0 (Windows--Internal--COperationLambdaVar_0__lambda_a9c571ff0e3bbbe6412332e11260abf2___ea_18001F3D0.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameListStatics@GamesEnumeration@Preview@Gaming@Windows@@UIGameListStatics2@5678@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x180024A50 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameListStatics@.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameListStatics@GamesEnumeration@Preview@Gaming@Windows@@UIGameListStatics2@5678@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x180024A70 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGam_ea_180024A70.c)
 *     ?Release@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@UEAAKXZ @ 0x180025CB0 (-Release@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@UEAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800443E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics2>::Release(
        volatile signed __int64 *a1)
{
  signed __int64 v1; // rdx
  unsigned __int32 v2; // ebx
  bool v3; // zf
  __int64 v4; // rax
  signed __int32 v5; // r8d

  v1 = *((_QWORD *)a1 + 4);
  if ( v1 < 0 )
  {
    do
LABEL_8:
      v5 = *(_DWORD *)(2 * v1 + 0x10);
    while ( v5 != 0x7FFFFFFF && v5 != _InterlockedCompareExchange((volatile signed __int32 *)(2 * v1 + 16), v5 - 1, v5) );
    v2 = v5 - 1;
LABEL_10:
    if ( !v2 )
    {
      if ( a1 )
        (*(void (__fastcall **)(volatile signed __int64 *, __int64))(*a1 + 112))(a1, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        _InterlockedDecrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    }
  }
  else
  {
    while ( (_DWORD)v1 != 0x7FFFFFFF )
    {
      v2 = v1 - 1;
      v4 = _InterlockedCompareExchange64(a1 + 4, v1 - 1, v1);
      v3 = v1 == v4;
      v1 = v4;
      if ( v3 )
        goto LABEL_10;
      if ( v4 < 0 )
        goto LABEL_8;
    }
    return 2147483646;
  }
  return v2;
}
