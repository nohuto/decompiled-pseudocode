/*
 * XREFs of ?MergeEntriesAsync@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIGameListEntry@2345@0PEAPEAU?$IAsyncOperation@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Foundation@5@@Z @ 0x18001BD50
 * Callers:
 *     ?MergeEntriesAsync@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIGameListEntry@2345@0PEAPEAU?$IAsyncOperation@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Foundation@5@@Z @ 0x18001A4F0 (-MergeEntriesAsync@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIGame.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800032BC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@Windows@@U?$IIterable@PEAUHSTRING__@@@567@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180017770 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IVectorView@PEAU.c)
 *     Windows::Internal::MakeAsyncOperation_Windows::Internal::CMarshaledInterfaceResult_Windows::Gaming::Preview::GamesEnumeration::IGameListEntry__Windows::Gaming::Preview::GamesEnumeration::GameListEntry_____ptr64_Windows::Internal::ComTaskPoolHandler__lambda_2bb0be94c8b34b0b06b3ace075c36ca6___ @ 0x18001DDA8 (Windows--Internal--MakeAsyncOperation_Windows--Internal--CMarshaledInterfaceResult_Windows--Gami.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameListStatics@GamesEnumeration@Preview@Gaming@Windows@@UIGameListStatics2@5678@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180025DA0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGam_ea_180025DA0.c)
 *     _guard_dispatch_icall_nop @ 0x180043EE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::MergeEntriesAsync(
        __int64 a1,
        __int64 *a2,
        __int64 *a3,
        __int64 a4)
{
  __int64 v8; // rdx
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // r8
  int v14; // ebp
  int v15[4]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v16[5]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( !a2 )
  {
    v8 = 493LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  if ( !a3 )
  {
    v8 = 494LL;
    goto LABEL_3;
  }
  if ( !a4 )
  {
    v8 = 495LL;
    goto LABEL_3;
  }
  (*(void (__fastcall **)(__int64 *))(*a2 + 8))(a2);
  (*(void (__fastcall **)(__int64 *))(*a3 + 8))(a3);
  v10 = a1 - 16;
  if ( v10 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVectorView<HSTRING__ *>,Windows::Foundation::Collections::IIterable<HSTRING__ *>>::AddRef(v10);
  v11 = *a2;
  v16[0] = a2;
  (*(void (__fastcall **)(__int64 *))(v11 + 8))(a2);
  v12 = *a3;
  v16[1] = a3;
  (*(void (__fastcall **)(__int64 *))(v12 + 8))(a3);
  v16[2] = v10;
  if ( v10 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVectorView<HSTRING__ *>,Windows::Foundation::Collections::IIterable<HSTRING__ *>>::AddRef(v10);
  v15[2] = 0;
  v15[0] = 3;
  v15[1] = 128;
  v14 = ((__int64 (__fastcall *)(int *, __int64, __int64, _QWORD *))Windows::Internal::MakeAsyncOperation_Windows::Internal::CMarshaledInterfaceResult_Windows::Gaming::Preview::GamesEnumeration::IGameListEntry__Windows::Gaming::Preview::GamesEnumeration::GameListEntry_____ptr64_Windows::Internal::ComTaskPoolHandler__lambda_2bb0be94c8b34b0b06b3ace075c36ca6___)(
          v15,
          a4,
          v13,
          v16);
  if ( v10 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics2>::Release(v10);
  (*(void (__fastcall **)(__int64 *))(*a3 + 16))(a3);
  (*(void (__fastcall **)(__int64 *))(*a2 + 16))(a2);
  if ( v14 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x231,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)(unsigned int)v14);
  if ( v10 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics2>::Release(v10);
  (*(void (__fastcall **)(__int64 *))(*a3 + 16))(a3);
  (*(void (__fastcall **)(__int64 *))(*a2 + 16))(a2);
  return (unsigned int)v14;
}
