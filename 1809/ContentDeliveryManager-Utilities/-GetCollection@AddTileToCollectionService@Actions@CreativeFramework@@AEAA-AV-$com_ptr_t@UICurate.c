/*
 * XREFs of ?GetCollection@AddTileToCollectionService@Actions@CreativeFramework@@AEAA?AV?$com_ptr_t@UICuratedTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@PEB_W_N@Z @ 0x1800859C8
 * Callers:
 *     ?Invoke@AddTileToCollectionService@Actions@CreativeFramework@@UEAAXXZ @ 0x180085410 (-Invoke@AddTileToCollectionService@Actions@CreativeFramework@@UEAAXXZ.c)
 *     ?Revert@AddTileToCollectionService@Actions@CreativeFramework@@UEAAXXZ @ 0x180085510 (-Revert@AddTileToCollectionService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003864 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180014F6C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$ActivateInstance@UICuratedTileCollectionManager@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@wil@@YA?AV?$com_ptr_t@UICuratedTileCollectionManager@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x180086BB8 (--$ActivateInstance@UICuratedTileCollectionManager@CuratedTileCollections@UnifiedTile@Shell@Wind.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall CreativeFramework::Actions::AddTileToCollectionService::GetCollection(
        __int64 a1,
        _QWORD *a2,
        const WCHAR *a3,
        char a4)
{
  __int64 v7; // rbx
  __int64 v8; // rdx
  int v9; // eax
  wil::details::in1diag3 *v10; // rcx
  void (*v11)(void); // rax
  const WCHAR *v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rsi
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rax
  _BYTE v19[8]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v20; // [rsp+28h] [rbp-48h] BYREF
  __int64 v21; // [rsp+30h] [rbp-40h] BYREF
  const WCHAR *v22[2]; // [rsp+38h] [rbp-38h] BYREF
  _BYTE v23[32]; // [rsp+48h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v22[1] = (const WCHAR *)-2LL;
  v22[0] = a3;
  wil::ActivateInstance<WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedTileCollectionManager>(&v21);
  if ( !a4 )
  {
    v7 = v21;
    v8 = *(_QWORD *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v23, v22) + 24);
    v9 = (*(__int64 (__fastcall **)(__int64, __int64, _BYTE *))(*(_QWORD *)v7 + 80LL))(v7, v8, v19);
    v10 = retaddr;
    if ( v9 < 0 )
    {
LABEL_16:
      wil::details::in1diag3::Throw_Hr(
        v10,
        (void *)0x20A,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
        (const char *)(unsigned int)v9);
      JUMPOUT(0x180085B33LL);
    }
    if ( !v19[0] )
    {
      *a2 = 0LL;
      if ( v21 )
      {
        v11 = *(void (**)(void))(*(_QWORD *)v21 + 16LL);
LABEL_13:
        v11();
        return a2;
      }
      return a2;
    }
  }
  v20 = 0LL;
  v12 = (const WCHAR *)(a1 + 16);
  if ( *(_QWORD *)(a1 + 40) >= 8uLL )
    v12 = *(const WCHAR **)v12;
  v22[0] = v12;
  v13 = v21;
  v14 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v23, v22);
  v15 = v20;
  v20 = 0LL;
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v13 + 56LL))(
          v13,
          *(_QWORD *)(v14 + 24),
          &v20);
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x212,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v16);
    goto LABEL_16;
  }
  v17 = v20;
  v20 = 0LL;
  *a2 = v17;
  if ( v21 )
  {
    v11 = *(void (**)(void))(*(_QWORD *)v21 + 16LL);
    goto LABEL_13;
  }
  return a2;
}
