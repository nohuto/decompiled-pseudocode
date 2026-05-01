/*
 * XREFs of ?UnmergeEntryAsync@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIGameListEntry@2345@PEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Foundation@5@@Z @ 0x18001C4A0
 * Callers:
 *     ?UnmergeEntryAsync@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIGameListEntry@2345@PEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Foundation@5@@Z @ 0x18001A130 (-UnmergeEntryAsync@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIGame.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800031DC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::MakeAsyncOperation_Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Gaming::Preview::GamesEnumeration::GameListEntry______Windows::Foundation::Collections::IVectorView_Windows::Gaming::Preview::GamesEnumeration::GameListEntry______Windows::Internal::ComTaskPoolHandler__lambda_a9c571ff0e3bbbe6412332e11260abf2___ @ 0x18001E238 (Windows--Internal--MakeAsyncOperation_Windows--Internal--CMarshaledInterfaceResult__ea_18001E238.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameListStatics@GamesEnumeration@Preview@Gaming@Windows@@UIGameListStatics2@5678@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180025B40 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGam_ea_180025B40.c)
 *     _guard_dispatch_icall_nop @ 0x180044260 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::UnmergeEntryAsync(
        __int64 a1,
        __int64 *a2,
        __int64 a3)
{
  __int64 v6; // rdx
  __int64 v8; // rbx
  signed __int64 v9; // rax
  signed __int64 v10; // rtt
  __int64 v11; // rax
  __int64 v12; // r8
  signed __int64 v13; // rax
  signed __int64 v14; // rtt
  int v15; // esi
  _DWORD v16[4]; // [rsp+20h] [rbp-20h] BYREF
  __int64 *v17; // [rsp+30h] [rbp-10h] BYREF
  __int64 v18; // [rsp+38h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]

  if ( !a2 )
  {
    v6 = 627LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  if ( !a3 )
  {
    v6 = 628LL;
    goto LABEL_3;
  }
  (*(void (__fastcall **)(__int64 *))(*a2 + 8))(a2);
  v8 = a1 - 16;
  if ( v8 )
  {
    v9 = *(_QWORD *)(v8 + 32);
    while ( v9 >= 0 )
    {
      v10 = v9;
      v9 = _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 32), v9 + 1, v9);
      if ( v10 == v9 )
        goto LABEL_11;
    }
    _InterlockedIncrement((volatile signed __int32 *)(2 * v9 + 16));
  }
LABEL_11:
  v11 = *a2;
  v17 = a2;
  (*(void (__fastcall **)(__int64 *))(v11 + 8))(a2);
  v18 = v8;
  if ( v8 )
  {
    v13 = *(_QWORD *)(v8 + 32);
    while ( v13 >= 0 )
    {
      v14 = v13;
      v13 = _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 32), v13 + 1, v13);
      if ( v14 == v13 )
        goto LABEL_16;
    }
    _InterlockedIncrement((volatile signed __int32 *)(2 * v13 + 16));
  }
LABEL_16:
  v16[2] = 0;
  v16[0] = 3;
  v16[1] = 128;
  v15 = ((__int64 (__fastcall *)(_DWORD *, __int64, __int64, __int64 **))Windows::Internal::MakeAsyncOperation_Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Gaming::Preview::GamesEnumeration::GameListEntry______Windows::Foundation::Collections::IVectorView_Windows::Gaming::Preview::GamesEnumeration::GameListEntry______Windows::Internal::ComTaskPoolHandler__lambda_a9c571ff0e3bbbe6412332e11260abf2___)(
          v16,
          a3,
          v12,
          &v17);
  if ( v18 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics2>::Release(v18);
  if ( v17 )
    (*(void (__fastcall **)(__int64 *))(*v17 + 16))(v17);
  if ( v15 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2C9,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)(unsigned int)v15);
  if ( v8 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics2>::Release(v8);
  (*(void (__fastcall **)(__int64 *))(*a2 + 16))(a2);
  return (unsigned int)v15;
}
