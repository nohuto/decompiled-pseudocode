/*
 * XREFs of ?GetCollection@AddTileToCollectionService@Actions@CreativeFramework@@AEAA?AV?$com_ptr_t@UICuratedTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@PEB_W_N@Z @ 0x180087904
 * Callers:
 *     ?Invoke@AddTileToCollectionService@Actions@CreativeFramework@@UEAAXXZ @ 0x180087330 (-Invoke@AddTileToCollectionService@Actions@CreativeFramework@@UEAAXXZ.c)
 *     ?Revert@AddTileToCollectionService@Actions@CreativeFramework@@UEAAXXZ @ 0x180087430 (-Revert@AddTileToCollectionService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003774 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001563C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$ActivateInstance@UICuratedTileCollectionManager@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@wil@@YA?AV?$com_ptr_t@UICuratedTileCollectionManager@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x180088B0C (--$ActivateInstance@UICuratedTileCollectionManager@CuratedTileCollections@UnifiedTile@Shell@Wind.c)
 *     __security_check_cookie @ 0x1800CAA90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBEA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall CreativeFramework::Actions::AddTileToCollectionService::GetCollection(
        __int64 a1,
        _QWORD *a2,
        const WCHAR *a3,
        char a4)
{
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64, PVOID, char *); // rdi
  HSTRING_HEADER *v9; // rax
  int v10; // eax
  wil::details::in1diag3 *v11; // rcx
  void (*v12)(void); // rax
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, PVOID, _QWORD **); // r15
  const WCHAR *v15; // rax
  HSTRING_HEADER *v16; // rdi
  _QWORD *v17; // rcx
  int v18; // eax
  _QWORD *v19; // rax
  char v21[8]; // [rsp+20h] [rbp-50h] BYREF
  _QWORD *v22; // [rsp+28h] [rbp-48h] BYREF
  __int64 v23; // [rsp+30h] [rbp-40h] BYREF
  const WCHAR *v24[2]; // [rsp+38h] [rbp-38h] BYREF
  HSTRING_HEADER v25; // [rsp+48h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  v24[1] = (const WCHAR *)-2LL;
  v24[0] = a3;
  wil::ActivateInstance<WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedTileCollectionManager>(&v23);
  if ( !a4 )
  {
    v7 = v23;
    v8 = *(__int64 (__fastcall **)(__int64, PVOID, char *))(*(_QWORD *)v23 + 80LL);
    v9 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v25, v24);
    v10 = v8(v7, v9[1].Reserved.Reserved1, v21);
    v11 = retaddr;
    if ( v10 < 0 )
    {
LABEL_16:
      wil::details::in1diag3::Throw_Hr(
        v11,
        (void *)0x20B,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
        (const char *)(unsigned int)v10);
      JUMPOUT(0x180087A81LL);
    }
    if ( !v21[0] )
    {
      *a2 = 0LL;
      if ( v23 )
      {
        v12 = *(void (**)(void))(*(_QWORD *)v23 + 16LL);
LABEL_13:
        v12();
        return a2;
      }
      return a2;
    }
  }
  v22 = 0LL;
  v13 = v23;
  v14 = *(__int64 (__fastcall **)(__int64, PVOID, _QWORD **))(*(_QWORD *)v23 + 56LL);
  v15 = (const WCHAR *)(a1 + 16);
  if ( *(_QWORD *)(a1 + 40) >= 8uLL )
    v15 = *(const WCHAR **)v15;
  v24[0] = v15;
  v16 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v25, v24);
  v17 = v22;
  v22 = 0LL;
  if ( v17 )
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v17 + 16LL))(v17, *v17);
  v18 = v14(v13, v16[1].Reserved.Reserved1, &v22);
  if ( v18 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x213,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v18);
    goto LABEL_16;
  }
  v19 = v22;
  v22 = 0LL;
  *a2 = v19;
  if ( v23 )
  {
    v12 = *(void (**)(void))(*(_QWORD *)v23 + 16LL);
    goto LABEL_13;
  }
  return a2;
}
