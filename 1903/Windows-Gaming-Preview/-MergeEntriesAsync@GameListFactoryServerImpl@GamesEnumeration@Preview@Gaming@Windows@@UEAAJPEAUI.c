/*
 * XREFs of ?MergeEntriesAsync@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIGameListEntry@2345@0PEAPEAU?$IAsyncOperation@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Foundation@5@@Z @ 0x18001BA30
 * Callers:
 *     ?MergeEntriesAsync@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIGameListEntry@2345@0PEAPEAU?$IAsyncOperation@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Foundation@5@@Z @ 0x18001A110 (-MergeEntriesAsync@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIGame.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800031DC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::MakeAsyncOperation_Windows::Internal::CMarshaledInterfaceResult_Windows::Gaming::Preview::GamesEnumeration::IGameListEntry__Windows::Gaming::Preview::GamesEnumeration::GameListEntry___Windows::Internal::ComTaskPoolHandler__lambda_2bb0be94c8b34b0b06b3ace075c36ca6___ @ 0x18001DE94 (Windows--Internal--MakeAsyncOperation_Windows--Internal--CMarshaledInterfaceResult_Windows--Gami.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameListStatics@GamesEnumeration@Preview@Gaming@Windows@@UIGameListStatics2@5678@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180025B40 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGam_ea_180025B40.c)
 *     _guard_dispatch_icall_nop @ 0x180044260 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::MergeEntriesAsync(
        __int64 a1,
        __int64 *a2,
        __int64 *a3,
        __int64 a4)
{
  __int64 v8; // rdx
  __int64 v10; // rbx
  signed __int64 v11; // rax
  signed __int64 v12; // rtt
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r8
  signed __int64 v16; // rax
  signed __int64 v17; // rtt
  int v18; // r14d
  signed __int64 v19; // [rsp+20h] [rbp-30h]
  _DWORD v20[4]; // [rsp+28h] [rbp-28h] BYREF
  __int64 *v21; // [rsp+38h] [rbp-18h] BYREF
  __int64 *v22; // [rsp+40h] [rbp-10h]
  __int64 v23; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

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
  {
    v11 = *(_QWORD *)(v10 + 32);
    while ( v11 >= 0 )
    {
      v12 = v11;
      v11 = _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 32), v11 + 1, v11);
      if ( v12 == v11 )
        goto LABEL_13;
    }
    _InterlockedIncrement((volatile signed __int32 *)(2 * v11 + 16));
  }
LABEL_13:
  v13 = *a2;
  v21 = a2;
  (*(void (__fastcall **)(__int64 *))(v13 + 8))(a2);
  v14 = *a3;
  v22 = a3;
  (*(void (__fastcall **)(__int64 *))(v14 + 8))(a3);
  v23 = v10;
  if ( v10 )
  {
    v16 = *(_QWORD *)(v10 + 32);
    v19 = v16;
    while ( v16 >= 0 )
    {
      v17 = v16;
      v16 = _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 32), v16 + 1, v16);
      if ( v17 == v16 )
        goto LABEL_18;
    }
    _InterlockedIncrement((volatile signed __int32 *)(2 * v16 + 16));
  }
LABEL_18:
  v20[2] = 0;
  v20[0] = 3;
  v20[1] = 128;
  v18 = ((__int64 (__fastcall *)(_DWORD *, __int64, __int64, __int64 **, signed __int64))Windows::Internal::MakeAsyncOperation_Windows::Internal::CMarshaledInterfaceResult_Windows::Gaming::Preview::GamesEnumeration::IGameListEntry__Windows::Gaming::Preview::GamesEnumeration::GameListEntry___Windows::Internal::ComTaskPoolHandler__lambda_2bb0be94c8b34b0b06b3ace075c36ca6___)(
          v20,
          a4,
          v15,
          &v21,
          v19);
  if ( v23 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics2>::Release(v23);
  if ( v22 )
    (*(void (__fastcall **)(__int64 *))(*v22 + 16))(v22);
  if ( v21 )
    (*(void (__fastcall **)(__int64 *))(*v21 + 16))(v21);
  if ( v18 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x231,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)(unsigned int)v18);
  if ( v10 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics2>::Release(v10);
  (*(void (__fastcall **)(__int64 *))(*a3 + 16))(a3);
  (*(void (__fastcall **)(__int64 *))(*a2 + 16))(a2);
  return (unsigned int)v18;
}
