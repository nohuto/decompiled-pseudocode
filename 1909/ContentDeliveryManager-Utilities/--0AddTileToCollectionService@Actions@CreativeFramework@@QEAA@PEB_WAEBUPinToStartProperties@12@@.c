/*
 * XREFs of ??0AddTileToCollectionService@Actions@CreativeFramework@@QEAA@PEB_WAEBUPinToStartProperties@12@@Z @ 0x180087020
 * Callers:
 *     ??$make_shared@VAddTileToCollectionService@Actions@CreativeFramework@@PEB_WAEAUPinToStartProperties@23@@std@@YA?AV?$shared_ptr@VAddTileToCollectionService@Actions@CreativeFramework@@@0@$$QEAPEB_WAEAUPinToStartProperties@Actions@CreativeFramework@@@Z @ 0x1800894C4 (--$make_shared@VAddTileToCollectionService@Actions@CreativeFramework@@PEB_WAEAUPinToStartPropert.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003774 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001563C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x180067D10 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?GetFriendlySubscriptionNameFromPlacementId@SubscribedContentUtils@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_W@Z @ 0x180084E10 (-GetFriendlySubscriptionNameFromPlacementId@SubscribedContentUtils@CreativeFramework@@YA-AV-$bas.c)
 *     ?GetHashedTileAlias@AddTileToCollectionService@Actions@CreativeFramework@@AEAA?AVHString@Wrappers@WRL@Microsoft@@PEB_W0@Z @ 0x180087564 (-GetHashedTileAlias@AddTileToCollectionService@Actions@CreativeFramework@@AEAA-AVHString@Wrapper.c)
 *     ??$GetActivationFactory@UITargetedContentUnifiedTileIdentifierFactory@UnifiedTile@Shell@WindowsInternal@@@wil@@YA?AV?$com_ptr_t@UITargetedContentUnifiedTileIdentifierFactory@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x180088CE8 (--$GetActivationFactory@UITargetedContentUnifiedTileIdentifierFactory@UnifiedTile@Shell@WindowsI.c)
 *     __security_check_cookie @ 0x1800CAA90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBEA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12
CreativeFramework::Actions::AddTileToCollectionService *__fastcall CreativeFramework::Actions::AddTileToCollectionService::AddTileToCollectionService(
        CreativeFramework::Actions::AddTileToCollectionService *this,
        wchar_t *a2,
        void **a3)
{
  char *v6; // rcx
  _QWORD *v7; // rsi
  _QWORD *v8; // r14
  _QWORD *v9; // rbx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rax
  const wchar_t *v13; // rcx
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rbx
  __int64 (__fastcall *v17)(__int64, PVOID, HSTRING, _QWORD **); // r14
  const WCHAR *v18; // rax
  HSTRING_HEADER *v19; // rsi
  int v20; // eax
  _QWORD *v21; // rax
  _QWORD *v22; // rcx
  __int64 v23; // rdx
  _QWORD *v25; // [rsp+38h] [rbp-59h] BYREF
  int v26; // [rsp+40h] [rbp-51h]
  HSTRING string; // [rsp+48h] [rbp-49h] BYREF
  __int64 v28; // [rsp+50h] [rbp-41h] BYREF
  const WCHAR *v29[3]; // [rsp+58h] [rbp-39h] BYREF
  void *v30[3]; // [rsp+70h] [rbp-21h] BYREF
  unsigned __int64 v31; // [rsp+88h] [rbp-9h]
  HSTRING_HEADER v32; // [rsp+90h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  v29[1] = (const WCHAR *)-2LL;
  v29[2] = (const WCHAR *)this;
  v26 = 0;
  *(_QWORD *)this = &CreativeFramework::Actions::AddTileToCollectionService::`vftable';
  v6 = (char *)this + 16;
  *((_QWORD *)v6 + 3) = 7LL;
  *((_QWORD *)v6 + 2) = 0LL;
  *(_WORD *)v6 = 0;
  std::wstring::assign((void **)v6, a3, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
  *((_QWORD *)this + 9) = 7LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_WORD *)this + 24) = 0;
  *((_QWORD *)this + 13) = 7LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_WORD *)this + 40) = 0;
  std::wstring::assign((void **)this + 10, a3 + 8, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
  v7 = (_QWORD *)((char *)this + 112);
  *((_QWORD *)this + 17) = 7LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_WORD *)this + 56) = 0;
  std::wstring::assign((void **)this + 14, a3 + 12, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
  v8 = (_QWORD *)((char *)this + 144);
  *((_QWORD *)this + 21) = 7LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_WORD *)this + 72) = 0;
  std::wstring::assign((void **)this + 18, a3 + 16, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
  *((_QWORD *)this + 22) = 0LL;
  *((_DWORD *)this + 46) = *((_DWORD *)a3 + 40);
  v9 = a3 + 4;
  v10 = aHidden[0] != 0 ? 6 : 0;
  v11 = v9[2];
  if ( v9[3] >= 8uLL )
    v9 = (_QWORD *)*v9;
  v12 = aHidden[0] != 0 ? 6 : 0;
  if ( v11 < v10 )
    v12 = v11;
  if ( v12 )
  {
    v13 = L"hidden";
    while ( *(_WORD *)v9 == *v13 )
    {
      v9 = (_QWORD *)((char *)v9 + 2);
      ++v13;
      if ( !--v12 )
        goto LABEL_9;
    }
    v14 = *(_WORD *)v9 < *v13 ? -1 : 1;
  }
  else
  {
LABEL_9:
    v14 = 0LL;
  }
  v15 = v11 != (aHidden[0] != 0 ? 6 : 0);
  if ( v11 < v10 )
    v15 = -1;
  if ( (_DWORD)v14 )
    v15 = v14;
  *((_BYTE *)this + 8) = v15 == 0;
  if ( *((_QWORD *)this + 21) >= 8uLL )
    v8 = (_QWORD *)*v8;
  if ( *((_QWORD *)this + 17) >= 8uLL )
    v7 = (_QWORD *)*v7;
  CreativeFramework::Actions::AddTileToCollectionService::GetHashedTileAlias(v14, &string, v7, v8);
  CreativeFramework::SubscribedContentUtils::GetFriendlySubscriptionNameFromPlacementId(v30, (char *)a2);
  wil::GetActivationFactory<WindowsInternal::Shell::UnifiedTile::ITargetedContentUnifiedTileIdentifierFactory>(&v28);
  v25 = 0LL;
  v26 = 1;
  v16 = v28;
  v17 = *(__int64 (__fastcall **)(__int64, PVOID, HSTRING, _QWORD **))(*(_QWORD *)v28 + 48LL);
  v18 = (const WCHAR *)v30;
  if ( v31 >= 8 )
    v18 = (const WCHAR *)v30[0];
  v29[0] = v18;
  v19 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v32, v29);
  v25 = 0LL;
  v20 = v17(v16, v19[1].Reserved.Reserved1, string, &v25);
  if ( v20 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1FF,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v20);
    JUMPOUT(0x180087325LL);
  }
  if ( v28 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  if ( v31 >= 8 )
    operator delete(v30[0]);
  v31 = 7LL;
  v30[2] = 0LL;
  LOWORD(v30[0]) = 0;
  WindowsDeleteString(string);
  string = 0LL;
  v21 = v25;
  v22 = 0LL;
  v25 = 0LL;
  v23 = *((_QWORD *)this + 22);
  *((_QWORD *)this + 22) = v21;
  if ( v23 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    v22 = v25;
  }
  if ( v22 )
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v22 + 16LL))(v22, *v22);
  return this;
}
