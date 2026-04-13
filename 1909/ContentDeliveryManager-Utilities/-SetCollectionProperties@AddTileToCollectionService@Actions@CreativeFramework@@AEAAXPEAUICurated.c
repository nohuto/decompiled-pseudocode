/*
 * XREFs of ?SetCollectionProperties@AddTileToCollectionService@Actions@CreativeFramework@@AEAAXPEAUICuratedTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x180087E20
 * Callers:
 *     ?Invoke@AddTileToCollectionService@Actions@CreativeFramework@@UEAAXXZ @ 0x180087330 (-Invoke@AddTileToCollectionService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003774 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18000482C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001563C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CommitCollectionChanges@AddTileToCollectionService@Actions@CreativeFramework@@AEAAXPEAUICuratedTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x1800880FC (-CommitCollectionChanges@AddTileToCollectionService@Actions@CreativeFramework@@AEAAXPEAUICurated.c)
 *     __security_check_cookie @ 0x1800CAA90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBEA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CreativeFramework::Actions::AddTileToCollectionService::SetCollectionProperties(
        CreativeFramework::Actions::AddTileToCollectionService *this,
        struct WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedTileCollection *a2)
{
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(__int64, HSTRING *); // rbx
  int v5; // eax
  wil::details::in1diag3 *v6; // rcx
  __int64 (__fastcall *v7)(struct WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedTileCollection *, HSTRING, HSTRING); // rbx
  HRESULT v8; // eax
  int v9; // eax
  wil::details::in1diag3 *v10; // rcx
  CreativeFramework::Actions::AddTileToCollectionService *v11; // rcx
  __int64 (__fastcall *v12)(struct WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedTileCollection *, HSTRING, PVOID); // rbx
  HSTRING v13; // rax
  HSTRING_HEADER *v14; // rdi
  HRESULT v15; // eax
  int v16; // eax
  HSTRING v17[2]; // [rsp+20h] [rbp-60h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+30h] [rbp-50h] BYREF
  HSTRING string; // [rsp+48h] [rbp-38h] BYREF
  HSTRING_HEADER v20; // [rsp+50h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v17[1] = (HSTRING)-2LL;
  if ( *((_QWORD *)this + 12) )
  {
    v12 = *(__int64 (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedTileCollection *, HSTRING, PVOID))(*(_QWORD *)a2 + 288LL);
    v13 = (HSTRING)((char *)this + 80);
    if ( *((_QWORD *)this + 13) >= 8uLL )
      v13 = *(HSTRING *)v13;
    v17[0] = v13;
    v14 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v20, (const WCHAR **)v17);
    string = 0LL;
    v15 = WindowsCreateStringReference(L"Start.Suggestions.Heading", 0x19u, &hstringHeader, &string);
    if ( v15 < 0 )
    {
LABEL_15:
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v15);
      JUMPOUT(0x180087FD5LL);
    }
    v16 = v12(a2, string, v14[1].Reserved.Reserved1);
    v11 = retaddr;
    if ( v16 >= 0 )
      goto LABEL_10;
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x26D,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v16);
LABEL_12:
    wil::details::in1diag3::Throw_Hr(
      v6,
      (void *)0x267,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
  v17[0] = 0LL;
  v3 = *((_QWORD *)this + 22);
  v4 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v3 + 56LL);
  WindowsDeleteString(0LL);
  v17[0] = 0LL;
  v5 = v4(v3, v17);
  v6 = retaddr;
  if ( v5 < 0 )
    goto LABEL_12;
  v7 = *(__int64 (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedTileCollection *, HSTRING, HSTRING))(*(_QWORD *)a2 + 288LL);
  string = 0LL;
  v8 = WindowsCreateStringReference(L"Start.Suggestions.HiddenTileId", 0x1Eu, &hstringHeader, &string);
  if ( v8 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v8);
    goto LABEL_14;
  }
  v9 = v7(a2, string, v17[0]);
  v10 = retaddr;
  if ( v9 < 0 )
  {
LABEL_14:
    wil::details::in1diag3::Throw_Hr(
      v10,
      (void *)0x268,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_15;
  }
  WindowsDeleteString(v17[0]);
LABEL_10:
  CreativeFramework::Actions::AddTileToCollectionService::CommitCollectionChanges(v11, a2);
}
