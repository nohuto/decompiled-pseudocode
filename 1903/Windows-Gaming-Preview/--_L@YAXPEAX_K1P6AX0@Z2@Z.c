/*
 * XREFs of ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x1800431E4
 * Callers:
 *     Windows::Internal::MakeAsyncOperation_Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Gaming::Preview::GamesEnumeration::GameListEntry______Windows::Foundation::Collections::IVectorView_Windows::Gaming::Preview::GamesEnumeration::GameListEntry______Windows::Internal::ComTaskPoolHandler__lambda_363ecfaa426a2d345ca41bd67db72fc0___ @ 0x18001DDA0 (Windows--Internal--MakeAsyncOperation_Windows--Internal--CMarshaledInterfaceResult_Windows--Foun.c)
 *     Windows::Internal::MakeAsyncOperation_Windows::Internal::CMarshaledInterfaceResult_Windows::Gaming::Preview::GamesEnumeration::IGameListEntry__Windows::Gaming::Preview::GamesEnumeration::GameListEntry___Windows::Internal::ComTaskPoolHandler__lambda_2bb0be94c8b34b0b06b3ace075c36ca6___ @ 0x18001DE94 (Windows--Internal--MakeAsyncOperation_Windows--Internal--CMarshaledInterfaceResult_Windows--Gami.c)
 *     Windows::Internal::MakeAsyncOperation_Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Gaming::Preview::GamesEnumeration::GameListEntry______Windows::Foundation::Collections::IVectorView_Windows::Gaming::Preview::GamesEnumeration::GameListEntry______Windows::Internal::ComTaskPoolHandler__lambda_a9c571ff0e3bbbe6412332e11260abf2___ @ 0x18001E238 (Windows--Internal--MakeAsyncOperation_Windows--Internal--CMarshaledInterfaceResult__ea_18001E238.c)
 *     ?RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z @ 0x180025618 (-RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z.c)
 *     ?LaunchAsync@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAU?$IAsyncOperation@_N@Foundation@5@@Z @ 0x180029170 (-LaunchAsync@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAU-$IAsyncOp.c)
 *     ?SetLauncherExecutableFileWithParamsAsync@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIStorageFile@Storage@5@PEAUHSTRING__@@PEAPEAUIAsyncAction@Foundation@5@@Z @ 0x18002B140 (-SetLauncherExecutableFileWithParamsAsync@GameListEntryServer@GamesEnumeration@Preview@Gaming@Wi.c)
 *     Windows::Internal::MakeAsyncAction_Microsoft::WRL::DisableCausality_Windows::Internal::ComTaskPoolHandler__lambda_d6e28d15cb03386e0d7e5ac918f3cf05___ @ 0x18002D61C (Windows--Internal--MakeAsyncAction_Microsoft--WRL--DisableCausality_Windows--Internal--ComTaskPo.c)
 *     Windows::Internal::MakeAsyncAction_Microsoft::WRL::DisableCausality_Windows::Internal::ComTaskPoolHandler__lambda_21b8fbba22a3d8e1beadf144030eed52___ @ 0x18002D6F4 (Windows--Internal--MakeAsyncAction_Microsoft--WRL--DisableCausality_Windows--Intern_ea_18002D6F4.c)
 *     ?SaveAsync@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUIAsyncAction@Foundation@5@@Z @ 0x180039760 (-SaveAsync@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUIAsy.c)
 *     ?SaveAsync@GameModeUserConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUIAsyncAction@Foundation@5@@Z @ 0x18003A2E0 (-SaveAsync@GameModeUserConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAU.c)
 * Callees:
 *     ?__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z @ 0x180042934 (-__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180044260 (_guard_dispatch_icall_nop.c)
 */

void __fastcall `eh vector constructor iterator'(char *a1, __int64 a2, __int64 a3, void (*a4)(void *))
{
  __int64 i; // rbx

  for ( i = 0LL; i != a3; ++i )
  {
    _guard_dispatch_icall_fptr();
    a1 += a2;
  }
}
