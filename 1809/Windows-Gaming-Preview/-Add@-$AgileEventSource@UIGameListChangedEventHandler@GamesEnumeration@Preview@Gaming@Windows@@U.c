/*
 * XREFs of ?Add@?$AgileEventSource@UIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAUIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@PEAUEventRegistrationToken@@@Z @ 0x18001D0D4
 * Callers:
 *     ?add_GameAdded@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIGameListChangedEventHandler@2345@PEAUEventRegistrationToken@@@Z @ 0x18001BAF0 (-add_GameAdded@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIGame.c)
 *     ?add_GameUpdated@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIGameListChangedEventHandler@2345@PEAUEventRegistrationToken@@@Z @ 0x18001BC70 (-add_GameUpdated@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIGa.c)
 * Callees:
 *     ?AddInternal@?$EventSource@UIGameListRemovedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAUIGameListRemovedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x18001D254 (-AddInternal@-$EventSource@UIGameListRemovedEventHandler@GamesEnumeration@Preview@Gaming@Windows.c)
 *     ??$CreateAgileHelper@UIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@@Details@WRL@Microsoft@@YAJPEAUIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@PEAPEAU34567@@Z @ 0x18001E310 (--$CreateAgileHelper@UIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@@Det.c)
 *     _guard_dispatch_icall_nop @ 0x180043EE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::AgileEventSource<Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler,Microsoft::WRL::InvokeModeOptions<-2>>::Add(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  int v7; // eax
  __int64 v8; // rbx
  unsigned int v9; // edi
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  if ( !a2 )
    return 2147942487LL;
  v10 = 0LL;
  v7 = Microsoft::WRL::Details::CreateAgileHelper<Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler>(
         a2,
         &v10);
  v8 = v10;
  v9 = v7;
  if ( v7 < 0 )
    goto LABEL_7;
  if ( v10 )
  {
    v9 = Microsoft::WRL::EventSource<Windows::Gaming::Preview::GamesEnumeration::IGameListRemovedEventHandler,Microsoft::WRL::InvokeModeOptions<-2>>::AddInternal(
           a1,
           v10,
           *(_QWORD *)(*(_QWORD *)a2 + 24LL),
           a3);
LABEL_7:
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    return v9;
  }
  return (unsigned int)-2147024809;
}
