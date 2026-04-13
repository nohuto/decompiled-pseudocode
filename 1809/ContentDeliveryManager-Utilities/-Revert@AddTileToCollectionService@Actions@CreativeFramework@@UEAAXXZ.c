/*
 * XREFs of ?Revert@AddTileToCollectionService@Actions@CreativeFramework@@UEAAXXZ @ 0x180085510
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003864 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCollection@AddTileToCollectionService@Actions@CreativeFramework@@AEAA?AV?$com_ptr_t@UICuratedTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@PEB_W_N@Z @ 0x1800859C8 (-GetCollection@AddTileToCollectionService@Actions@CreativeFramework@@AEAA-AV-$com_ptr_t@UICurate.c)
 *     ?UpdateTileAliasSystem@AddTileToCollectionService@Actions@CreativeFramework@@AEAAXPEAUIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@_N@Z @ 0x180085B3C (-UpdateTileAliasSystem@AddTileToCollectionService@Actions@CreativeFramework@@AEAAXPEAUIUnifiedTi.c)
 *     ?RemoveCollectionProperties@AddTileToCollectionService@Actions@CreativeFramework@@AEAAXPEAUICuratedTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x1800860AC (-RemoveCollectionProperties@AddTileToCollectionService@Actions@CreativeFramework@@AEAAXPEAUICura.c)
 *     ?CommitCollectionChanges@AddTileToCollectionService@Actions@CreativeFramework@@AEAAXPEAUICuratedTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x1800861B8 (-CommitCollectionChanges@AddTileToCollectionService@Actions@CreativeFramework@@AEAAXPEAUICurated.c)
 *     CreativeFramework::Actions::EnumerateCollectionItems__lambda_3371b89729d85ac0978161adb097d47e___ @ 0x18008710C (CreativeFramework--Actions--EnumerateCollectionItems__lambda_3371b89729d85ac0978161adb097d47e___.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CreativeFramework::Actions::AddTileToCollectionService::Revert(
        CreativeFramework::Actions::AddTileToCollectionService *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  _QWORD *v5; // r8
  CreativeFramework::Actions::AddTileToCollectionService *v6; // rcx
  struct WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedTileCollection *v7; // rbx
  __int64 v8; // rdi
  int v9; // eax
  CreativeFramework::Actions::AddTileToCollectionService *v10; // rcx
  _QWORD v11[4]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+20h]
  char v13; // [rsp+70h] [rbp+28h] BYREF
  HSTRING string; // [rsp+78h] [rbp+30h] BYREF
  struct WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedTileCollection *v15; // [rsp+80h] [rbp+38h] BYREF
  struct WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedTileCollection *v16; // [rsp+88h] [rbp+40h] BYREF

  v5 = (_QWORD *)((char *)this + 16);
  if ( *((_QWORD *)this + 5) >= 8uLL )
    v5 = (_QWORD *)*v5;
  LOBYTE(a4) = *((_BYTE *)this + 184) & 1;
  CreativeFramework::Actions::AddTileToCollectionService::GetCollection(this, &v16, v5, a4, -2LL);
  v7 = v16;
  if ( v16 )
  {
    if ( *((_BYTE *)this + 8) )
    {
      CreativeFramework::Actions::AddTileToCollectionService::RemoveCollectionProperties(v6, v16);
    }
    else if ( (*((_BYTE *)this + 184) & 2) == 0 )
    {
      v15 = v16;
      string = 0LL;
      v8 = *((_QWORD *)this + 22);
      WindowsDeleteString(0LL);
      string = 0LL;
      v9 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v8 + 56LL))(v8, &string);
      if ( v9 < 0 )
      {
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x221,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
          (const char *)(unsigned int)v9);
        JUMPOUT(0x180085634LL);
      }
      v13 = 0;
      v11[0] = &string;
      v11[1] = &v15;
      v11[2] = &v13;
      CreativeFramework::Actions::EnumerateCollectionItems__lambda_3371b89729d85ac0978161adb097d47e___(v15, v11);
      if ( v13 )
        CreativeFramework::Actions::AddTileToCollectionService::CommitCollectionChanges(v10, v15);
      WindowsDeleteString(string);
    }
    CreativeFramework::Actions::AddTileToCollectionService::UpdateTileAliasSystem(
      this,
      *((struct WindowsInternal::Shell::UnifiedTile::IUnifiedTileIdentifier **)this + 22),
      0);
  }
  if ( v7 )
    (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedTileCollection *))(*(_QWORD *)v7 + 16LL))(v7);
}
