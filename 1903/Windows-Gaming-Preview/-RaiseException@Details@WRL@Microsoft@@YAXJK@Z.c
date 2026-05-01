/*
 * XREFs of ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1800115A0
 * Callers:
 *     ?RuntimeClassInitialize@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUIUnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@PEAUIGameListChangedEventHandler@2345@PEAUHSTRING__@@@Z @ 0x180009610 (-RuntimeClassInitialize@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUIUnif.c)
 *     ?_GetFileDescription@GameConfigAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJAEBV?$ComPtr@UIStorageItemProperties@Storage@Windows@@@WRL@Microsoft@@PEAPEAUHSTRING__@@@Z @ 0x180012494 (-_GetFileDescription@GameConfigAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@AEA.c)
 *     ?JsonDocumentFromGameConfigValues@@YAJK_KK_N11KPEBGPEAPEAUHSTRING__@@@Z @ 0x180016A64 (-JsonDocumentFromGameConfigValues@@YAJK_KK_N11KPEBGPEAPEAUHSTRING__@@@Z.c)
 *     ?RuntimeClassInitialize@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@QEAAJXZ @ 0x18001A340 (-RuntimeClassInitialize@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@QEAAJ.c)
 *     _lambda_2bb0be94c8b34b0b06b3ace075c36ca6_::operator() @ 0x18001BBF0 (_lambda_2bb0be94c8b34b0b06b3ace075c36ca6_--operator().c)
 *     _lambda_a9c571ff0e3bbbe6412332e11260abf2_::operator() @ 0x18001C5F8 (_lambda_a9c571ff0e3bbbe6412332e11260abf2_--operator().c)
 *     ?InitCausality@?$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00UDisableCausality@67@@WRL@Microsoft@@CAHPEAT_RTL_RUN_ONCE@@PEAXPEAPEAX@Z @ 0x1800226C0 (-InitCausality@-$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details@WRL@Mi.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180025190 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?_InitializeCategoryFromStateRepository@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180026EDC (-_InitializeCategoryFromStateRepository@GameListEntryServer@GamesEnumeration@Preview@Gaming@Wind.c)
 *     ?_InitializeProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180029B00 (-_InitializeProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?_MakeNullableInt@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJAEAV?$ComPtr@U?$IReference@H@Foundation@Windows@@@WRL@Microsoft@@H@Z @ 0x180037D28 (-_MakeNullableInt@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJAEAV.c)
 *     ?LoadKglAsync@KglDefaults@GamesEnumeration@Preview@Gaming@Windows@@SAXXZ @ 0x18003B160 (-LoadKglAsync@KglDefaults@GamesEnumeration@Preview@Gaming@Windows@@SAXXZ.c)
 *     ?PopulateAsync@SystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@SAXXZ @ 0x18003BF48 (-PopulateAsync@SystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@SAXXZ.c)
 *     ?PopulateValues@SystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18003C308 (-PopulateValues@SystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?GetLogo@TileAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJUSize@Foundation@5@PEAPEAUIRandomAccessStreamReference@Streams@Storage@5@@Z @ 0x18003CA00 (-GetLogo@TileAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJUSize@Foundation.c)
 *     _dynamic_atexit_destructor_for__Windows::Gaming::Preview::GamesEnumeration::KglDefaults::_readyEvent__ @ 0x180045B40 (_dynamic_atexit_destructor_for__Windows--Gaming--Preview--GamesEnumeration--KglDefaults--_readyE.c)
 *     _dynamic_atexit_destructor_for__Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::_readyEvent__ @ 0x180045C20 (_dynamic_atexit_destructor_for__Windows--Gaming--Preview--GamesEnumeration--SystemDefaults--_rea.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Details::RaiseException(Microsoft::WRL::Details *this)
{
  RaiseException((DWORD)this, 1u, 0, 0LL);
}
