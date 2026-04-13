/*
 * XREFs of ?SetCollectionProperties@AddTileToCollectionService@Actions@CreativeFramework@@AEAAXPEAUICuratedTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x180085EF4
 * Callers:
 *     ?Invoke@AddTileToCollectionService@Actions@CreativeFramework@@UEAAXXZ @ 0x180085410 (-Invoke@AddTileToCollectionService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003864 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18000480C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180014F6C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CommitCollectionChanges@AddTileToCollectionService@Actions@CreativeFramework@@AEAAXPEAUICuratedTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x1800861B8 (-CommitCollectionChanges@AddTileToCollectionService@Actions@CreativeFramework@@AEAAXPEAUICurated.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CreativeFramework::Actions::AddTileToCollectionService::SetCollectionProperties(
        CreativeFramework::Actions::AddTileToCollectionService *this,
        struct WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedTileCollection *a2)
{
  __int64 v3; // rbx
  int v4; // eax
  wil::details::in1diag3 *v5; // rcx
  HRESULT v6; // eax
  int v7; // eax
  wil::details::in1diag3 *v8; // rcx
  CreativeFramework::Actions::AddTileToCollectionService *v9; // rcx
  HSTRING v10; // rax
  __int64 v11; // rbx
  HRESULT v12; // eax
  int v13; // eax
  HSTRING v14[2]; // [rsp+20h] [rbp-60h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+30h] [rbp-50h] BYREF
  HSTRING string; // [rsp+48h] [rbp-38h] BYREF
  _BYTE v17[32]; // [rsp+50h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  v14[1] = (HSTRING)-2LL;
  if ( *((_QWORD *)this + 12) )
  {
    v10 = (HSTRING)((char *)this + 80);
    if ( *((_QWORD *)this + 13) >= 8uLL )
      v10 = *(HSTRING *)v10;
    v14[0] = v10;
    v11 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v17, (const WCHAR **)v14);
    string = 0LL;
    v12 = WindowsCreateStringReference(L"Start.Suggestions.Heading", 0x19u, &hstringHeader, &string);
    if ( v12 < 0 )
    {
LABEL_15:
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v12);
      JUMPOUT(0x1800860A4LL);
    }
    v13 = (*(__int64 (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedTileCollection *, HSTRING, _QWORD))(*(_QWORD *)a2 + 288LL))(
            a2,
            string,
            *(_QWORD *)(v11 + 24));
    v9 = retaddr;
    if ( v13 >= 0 )
      goto LABEL_10;
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x26C,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v13);
LABEL_12:
    wil::details::in1diag3::Throw_Hr(
      v5,
      (void *)0x266,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  v14[0] = 0LL;
  v3 = *((_QWORD *)this + 22);
  WindowsDeleteString(0LL);
  v14[0] = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v3 + 56LL))(v3, v14);
  v5 = retaddr;
  if ( v4 < 0 )
    goto LABEL_12;
  string = 0LL;
  v6 = WindowsCreateStringReference(L"Start.Suggestions.HiddenTileId", 0x1Eu, &hstringHeader, &string);
  if ( v6 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v6);
    goto LABEL_14;
  }
  v7 = (*(__int64 (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedTileCollection *, HSTRING, HSTRING))(*(_QWORD *)a2 + 288LL))(
         a2,
         string,
         v14[0]);
  v8 = retaddr;
  if ( v7 < 0 )
  {
LABEL_14:
    wil::details::in1diag3::Throw_Hr(
      v8,
      (void *)0x267,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_15;
  }
  WindowsDeleteString(v14[0]);
LABEL_10:
  CreativeFramework::Actions::AddTileToCollectionService::CommitCollectionChanges(v9, a2);
}
