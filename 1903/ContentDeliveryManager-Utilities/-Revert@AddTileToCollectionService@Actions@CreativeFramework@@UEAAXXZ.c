/*
 * XREFs of ?Revert@AddTileToCollectionService@Actions@CreativeFramework@@UEAAXXZ @ 0x180087280
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003774 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCollection@AddTileToCollectionService@Actions@CreativeFramework@@AEAA?AV?$com_ptr_t@UICuratedTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@PEB_W_N@Z @ 0x180087754 (-GetCollection@AddTileToCollectionService@Actions@CreativeFramework@@AEAA-AV-$com_ptr_t@UICurate.c)
 *     ?UpdateTileAliasSystem@AddTileToCollectionService@Actions@CreativeFramework@@AEAAXPEAUIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@_N@Z @ 0x1800878D8 (-UpdateTileAliasSystem@AddTileToCollectionService@Actions@CreativeFramework@@AEAAXPEAUIUnifiedTi.c)
 *     ?RemoveCollectionProperties@AddTileToCollectionService@Actions@CreativeFramework@@AEAAXPEAUICuratedTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x180087E2C (-RemoveCollectionProperties@AddTileToCollectionService@Actions@CreativeFramework@@AEAAXPEAUICura.c)
 *     ?CommitCollectionChanges@AddTileToCollectionService@Actions@CreativeFramework@@AEAAXPEAUICuratedTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x180087F4C (-CommitCollectionChanges@AddTileToCollectionService@Actions@CreativeFramework@@AEAAXPEAUICurated.c)
 *     CreativeFramework::Actions::EnumerateCollectionItems__lambda_d6cc9bbba6eee700d8b52555e0ea8f6d___ @ 0x180088EB8 (CreativeFramework--Actions--EnumerateCollectionItems__lambda_d6cc9bbba6eee700d8b52555e0ea8f6d___.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
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
  __int64 v8; // rsi
  __int64 (__fastcall *v9)(__int64, HSTRING *); // rdi
  int v10; // eax
  CreativeFramework::Actions::AddTileToCollectionService *v11; // rcx
  _QWORD v12[3]; // [rsp+28h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  char v14; // [rsp+70h] [rbp+30h] BYREF
  HSTRING string; // [rsp+78h] [rbp+38h] BYREF
  struct WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedTileCollection *v16; // [rsp+80h] [rbp+40h] BYREF
  struct WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedTileCollection *v17; // [rsp+88h] [rbp+48h] BYREF

  v5 = (_QWORD *)((char *)this + 16);
  if ( *((_QWORD *)this + 5) >= 8uLL )
    v5 = (_QWORD *)*v5;
  LOBYTE(a4) = *((_BYTE *)this + 184) & 1;
  CreativeFramework::Actions::AddTileToCollectionService::GetCollection(this, &v17, v5, a4, -2LL);
  v7 = v17;
  if ( v17 )
  {
    if ( *((_BYTE *)this + 8) )
    {
      CreativeFramework::Actions::AddTileToCollectionService::RemoveCollectionProperties(v6, v17);
    }
    else if ( (*((_BYTE *)this + 184) & 2) == 0 )
    {
      v16 = v17;
      string = 0LL;
      v8 = *((_QWORD *)this + 22);
      v9 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v8 + 56LL);
      WindowsDeleteString(0LL);
      string = 0LL;
      v10 = v9(v8, &string);
      if ( v10 < 0 )
      {
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x222,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
          (const char *)(unsigned int)v10);
        JUMPOUT(0x1800873ADLL);
      }
      v14 = 0;
      v12[0] = &string;
      v12[1] = &v16;
      v12[2] = &v14;
      CreativeFramework::Actions::EnumerateCollectionItems__lambda_d6cc9bbba6eee700d8b52555e0ea8f6d___(v16, v12);
      if ( v14 )
        CreativeFramework::Actions::AddTileToCollectionService::CommitCollectionChanges(v11, v16);
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
