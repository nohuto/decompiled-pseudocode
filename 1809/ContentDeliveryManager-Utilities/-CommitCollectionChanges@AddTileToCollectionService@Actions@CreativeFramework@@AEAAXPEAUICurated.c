/*
 * XREFs of ?CommitCollectionChanges@AddTileToCollectionService@Actions@CreativeFramework@@AEAAXPEAUICuratedTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x1800861B8
 * Callers:
 *     ?Invoke@AddTileToCollectionService@Actions@CreativeFramework@@UEAAXXZ @ 0x180085410 (-Invoke@AddTileToCollectionService@Actions@CreativeFramework@@UEAAXXZ.c)
 *     ?Revert@AddTileToCollectionService@Actions@CreativeFramework@@UEAAXXZ @ 0x180085510 (-Revert@AddTileToCollectionService@Actions@CreativeFramework@@UEAAXXZ.c)
 *     ?SetCollectionProperties@AddTileToCollectionService@Actions@CreativeFramework@@AEAAXPEAUICuratedTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x180085EF4 (-SetCollectionProperties@AddTileToCollectionService@Actions@CreativeFramework@@AEAAXPEAUICurated.c)
 *     ?RemoveCollectionProperties@AddTileToCollectionService@Actions@CreativeFramework@@AEAAXPEAUICuratedTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x1800860AC (-RemoveCollectionProperties@AddTileToCollectionService@Actions@CreativeFramework@@AEAAXPEAUICura.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003864 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$WaitForCompletion@PEAUIAsyncAction@Foundation@Windows@@@details@wil@@YAJPEAUIAsyncAction@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x18004A89C (--$WaitForCompletion@PEAUIAsyncAction@Foundation@Windows@@@details@wil@@YAJPEAUIAsyncAction@Foun.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CreativeFramework::Actions::AddTileToCollectionService::CommitCollectionChanges(
        CreativeFramework::Actions::AddTileToCollectionService *this,
        struct WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedTileCollection *a2)
{
  int v2; // eax
  DWORD v3; // edx
  int v4; // r8d
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void (__fastcall ***v7)(__int64, GUID *, __int64 *); // [rsp+40h] [rbp+8h] BYREF

  v7 = 0LL;
  v2 = (*(__int64 (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedTileCollection *, void (__fastcall ****)(__int64, GUID *, __int64 *)))(*(_QWORD *)a2 + 224LL))(
         a2,
         &v7);
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x27B,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v2);
    JUMPOUT(0x180086248LL);
  }
  v5 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncAction *>(v7, v3, v4);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x63B,
      (__int64)"internal\\sdk\\inc\\wil\\winrt.h",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
  if ( v7 )
    ((void (__fastcall *)(void (__fastcall ***)(__int64, GUID *, __int64 *)))(*v7)[2])(v7);
}
