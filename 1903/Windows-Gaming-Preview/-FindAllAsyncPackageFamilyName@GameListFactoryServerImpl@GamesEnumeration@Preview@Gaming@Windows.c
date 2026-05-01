/*
 * XREFs of ?FindAllAsyncPackageFamilyName@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Foundation@5@@Z @ 0x18001B3A0
 * Callers:
 *     ?FindAllAsync@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Foundation@5@@Z @ 0x18001A080 (-FindAllAsync@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAU-$IAsyn.c)
 *     ?FindAllAsyncPackageFamilyName@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Foundation@5@@Z @ 0x18001A0A0 (-FindAllAsyncPackageFamilyName@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UE.c)
 *     ?FindAllAsync@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Foundation@5@@Z @ 0x18001B390 (-FindAllAsync@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAU-$I.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800031DC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::MakeAsyncOperation_Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Gaming::Preview::GamesEnumeration::GameListEntry______Windows::Foundation::Collections::IVectorView_Windows::Gaming::Preview::GamesEnumeration::GameListEntry______Windows::Internal::ComTaskPoolHandler__lambda_363ecfaa426a2d345ca41bd67db72fc0___ @ 0x18001DDA0 (Windows--Internal--MakeAsyncOperation_Windows--Internal--CMarshaledInterfaceResult_Windows--Foun.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameListStatics@GamesEnumeration@Preview@Gaming@Windows@@UIGameListStatics2@5678@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180025B40 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGam_ea_180025B40.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::FindAllAsyncPackageFamilyName(
        __int64 a1,
        HSTRING a2,
        __int64 a3)
{
  signed __int64 v6; // rax
  signed __int64 v7; // rtt
  HRESULT v8; // eax
  __int64 v9; // r8
  int v10; // edi
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  signed __int64 v13; // rax
  signed __int64 v14; // rtt
  HSTRING v15; // rax
  _DWORD v17[4]; // [rsp+20h] [rbp-40h] BYREF
  HSTRING newString; // [rsp+30h] [rbp-30h] BYREF
  __int16 v19; // [rsp+38h] [rbp-28h]
  __int64 v20; // [rsp+40h] [rbp-20h] BYREF
  __int64 v21; // [rsp+48h] [rbp-18h]
  HSTRING string; // [rsp+50h] [rbp-10h]
  char v23; // [rsp+58h] [rbp-8h]
  char v24; // [rsp+59h] [rbp-7h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  if ( a1 )
  {
    v6 = *(_QWORD *)(a1 + 32);
    while ( v6 >= 0 )
    {
      v7 = v6;
      v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 32), v6 + 1, v6);
      if ( v7 == v6 )
        goto LABEL_6;
    }
    _InterlockedIncrement((volatile signed __int32 *)(2 * v6 + 16));
  }
LABEL_6:
  v19 = 0;
  WindowsDeleteString(0LL);
  newString = 0LL;
  v8 = WindowsDuplicateString(a2, &newString);
  v10 = v8;
  if ( v8 < 0 )
  {
    v11 = (unsigned int)v8;
    v12 = 407LL;
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)v11);
    goto LABEL_18;
  }
  v20 = a1;
  v21 = a1;
  if ( a1 )
  {
    v13 = *(_QWORD *)(a1 + 32);
    while ( v13 >= 0 )
    {
      v14 = v13;
      v13 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 32), v13 + 1, v13);
      if ( v14 == v13 )
        goto LABEL_13;
    }
    _InterlockedIncrement((volatile signed __int32 *)(2 * v13 + 16));
  }
LABEL_13:
  v15 = newString;
  newString = 0LL;
  v17[2] = 0;
  string = v15;
  v23 = 0;
  v24 = HIBYTE(v19) + 1;
  LOBYTE(v19) = 1;
  v17[0] = 3;
  v17[1] = 128;
  v10 = ((__int64 (__fastcall *)(_DWORD *, __int64, __int64, __int64 *))Windows::Internal::MakeAsyncOperation_Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Gaming::Preview::GamesEnumeration::GameListEntry______Windows::Foundation::Collections::IVectorView_Windows::Gaming::Preview::GamesEnumeration::GameListEntry______Windows::Internal::ComTaskPoolHandler__lambda_363ecfaa426a2d345ca41bd67db72fc0___)(
          v17,
          a3,
          v9,
          &v20);
  WindowsDeleteString(string);
  if ( v21 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics2>::Release(v21);
  if ( v10 < 0 )
  {
    v11 = (unsigned int)v10;
    v12 = 424LL;
    goto LABEL_17;
  }
LABEL_18:
  WindowsDeleteString(newString);
  newString = 0LL;
  if ( a1 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics2>::Release(a1);
  return (unsigned int)v10;
}
