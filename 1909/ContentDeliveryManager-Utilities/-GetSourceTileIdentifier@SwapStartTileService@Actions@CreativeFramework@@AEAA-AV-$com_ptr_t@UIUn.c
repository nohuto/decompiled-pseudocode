/*
 * XREFs of ?GetSourceTileIdentifier@SwapStartTileService@Actions@CreativeFramework@@AEAA?AV?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x180085E54
 * Callers:
 *     ?SwapStartTiles@SwapStartTileService@Actions@CreativeFramework@@AEAAXXZ @ 0x18008580C (-SwapStartTiles@SwapStartTileService@Actions@CreativeFramework@@AEAAXXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003774 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001563C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?GetFriendlySubscriptionNameFromPlacementId@SubscribedContentUtils@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_W@Z @ 0x180084E10 (-GetFriendlySubscriptionNameFromPlacementId@SubscribedContentUtils@CreativeFramework@@YA-AV-$bas.c)
 *     ?DeserializeUnifiedTileIdentifier@Actions@CreativeFramework@@YA?AV?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@AEBQEB_W@Z @ 0x180085080 (-DeserializeUnifiedTileIdentifier@Actions@CreativeFramework@@YA-AV-$com_ptr_t@UIUnifiedTileIdent.c)
 *     ?EnumerateAliasMap@SwapStartTileService@Actions@CreativeFramework@@AEAAXPEAUITargetedContentIdAliasStore@Internal@TargetedContent@Services@Windows@@AEBV?$function@$$A6A_NPEB_WPEAUITargetedContentIdAliasValue@Internal@TargetedContent@Services@Windows@@@Z@std@@@Z @ 0x180085A30 (-EnumerateAliasMap@SwapStartTileService@Actions@CreativeFramework@@AEAAXPEAUITargetedContentIdAl.c)
 *     ??$GetActivationFactory@UITargetedContentIdAliasStoreStatics@Internal@TargetedContent@Services@Windows@@@wil@@YA?AV?$com_ptr_t@UITargetedContentIdAliasStoreStatics@Internal@TargetedContent@Services@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x180088C18 (--$GetActivationFactory@UITargetedContentIdAliasStoreStatics@Internal@TargetedContent@Services@W.c)
 *     ??2@YAPEAX_K@Z @ 0x1800ADED8 (--2@YAPEAX_K@Z.c)
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x1800AE0C8 (-_Xbad_alloc@std@@YAXXZ.c)
 *     __security_check_cookie @ 0x1800CAA90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBEA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 *__fastcall CreativeFramework::Actions::SwapStartTileService::GetSourceTileIdentifier(_QWORD *a1, __int64 *a2)
{
  char *v4; // rdx
  __int64 v5; // rbx
  __int64 (__fastcall *v6)(__int64, PVOID, _BYTE *); // rdi
  const WCHAR *v7; // rcx
  HSTRING_HEADER *v8; // rax
  int v9; // eax
  wil::details::in1diag3 *v10; // rcx
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, PVOID, _QWORD, WCHAR **); // r15
  void **v13; // rax
  HSTRING_HEADER *v14; // rdi
  WCHAR *v15; // rcx
  int v16; // eax
  wil::details::in1diag3 *v17; // rcx
  char *v18; // rax
  HSTRING_HEADER *v19; // rdx
  __int64 v20; // rax
  _QWORD *v21; // rcx
  _QWORD *v22; // rax
  _BYTE v24[8]; // [rsp+38h] [rbp-49h] BYREF
  WCHAR *v25; // [rsp+40h] [rbp-41h] BYREF
  _QWORD *v26; // [rsp+48h] [rbp-39h] BYREF
  __int64 v27; // [rsp+50h] [rbp-31h] BYREF
  __int128 v28; // [rsp+58h] [rbp-29h] BYREF
  __int64 v29; // [rsp+68h] [rbp-19h]
  void *v30[3]; // [rsp+70h] [rbp-11h] BYREF
  unsigned __int64 v31; // [rsp+88h] [rbp+7h]
  HSTRING_HEADER v32; // [rsp+90h] [rbp+Fh] BYREF
  HSTRING_HEADER *v33; // [rsp+A8h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  v29 = -2LL;
  *(_QWORD *)&v28 = a2;
  if ( !a1[3] )
  {
    v26 = 0LL;
    wil::GetActivationFactory<Windows::Services::TargetedContent::Internal::ITargetedContentIdAliasStoreStatics>(&v27);
    v4 = (char *)(a1 + 21);
    if ( a1[24] >= 8uLL )
      v4 = *(char **)v4;
    CreativeFramework::SubscribedContentUtils::GetFriendlySubscriptionNameFromPlacementId(v30, v4);
    v5 = v27;
    v6 = *(__int64 (__fastcall **)(__int64, PVOID, _BYTE *))(*(_QWORD *)v27 + 56LL);
    v7 = (const WCHAR *)v30;
    if ( v31 >= 8 )
      v7 = (const WCHAR *)v30[0];
    v25 = (WCHAR *)v7;
    v8 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v32, (const WCHAR **)&v25);
    v9 = v6(v5, v8[1].Reserved.Reserved1, v24);
    v10 = retaddr;
    if ( v9 >= 0 )
    {
      if ( v24[0] )
      {
        v25 = 0LL;
        v11 = v27;
        v12 = *(__int64 (__fastcall **)(__int64, PVOID, _QWORD, WCHAR **))(*(_QWORD *)v27 + 64LL);
        v13 = v30;
        if ( v31 >= 8 )
          v13 = (void **)v30[0];
        *(_QWORD *)&v28 = v13;
        v14 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v32, (const WCHAR **)&v28);
        v15 = v25;
        v25 = 0LL;
        if ( v15 )
          (*(void (__fastcall **)(WCHAR *))(*(_QWORD *)v15 + 16LL))(v15);
        v16 = v12(v11, v14[1].Reserved.Reserved1, 0LL, &v25);
        v17 = retaddr;
        if ( v16 < 0 )
          goto LABEL_31;
        *(_QWORD *)&v28 = a1;
        *((_QWORD *)&v28 + 1) = &v26;
        v33 = 0LL;
        v18 = (char *)operator new(0x20uLL);
        if ( !v18 )
          goto LABEL_32;
        *(_QWORD *)v18 = off_1800E50F8;
        *(_OWORD *)(v18 + 8) = v28;
        v33 = (HSTRING_HEADER *)v18;
        CreativeFramework::Actions::SwapStartTileService::EnumerateAliasMap(
          (__int64)off_1800E50F8,
          (__int64 *)v25,
          (__int64)&v32);
        if ( v33 )
        {
          v19 = &v32;
          LOBYTE(v19) = v33 != &v32;
          (*((void (__fastcall **)(HSTRING_HEADER *, HSTRING_HEADER *))v33->Reserved.Reserved1 + 4))(v33, v19);
        }
        if ( v25 )
          (*(void (__fastcall **)(WCHAR *))(*(_QWORD *)v25 + 16LL))(v25);
      }
      v20 = (__int64)v26;
      if ( v26 )
      {
        v21 = 0LL;
        v26 = 0LL;
        *a2 = v20;
        if ( v31 >= 8 )
        {
          operator delete(v30[0]);
          v21 = v26;
        }
        v31 = 7LL;
        v30[2] = 0LL;
        LOWORD(v30[0]) = 0;
        if ( v27 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
          v21 = v26;
        }
        if ( v21 )
          (*(void (__fastcall **)(_QWORD *, _QWORD))(*v21 + 16LL))(v21, *v21);
        return a2;
      }
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x14D,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
        (const char *)0x80070490LL);
    }
    wil::details::in1diag3::Throw_Hr(
      v10,
      (void *)0x138,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v9);
LABEL_31:
    wil::details::in1diag3::Throw_Hr(
      v17,
      (void *)0x13C,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v16);
LABEL_32:
    std::_Xbad_alloc();
  }
  v22 = a1 + 1;
  if ( a1[4] >= 8uLL )
    v22 = (_QWORD *)*v22;
  *(_QWORD *)&v28 = v22;
  CreativeFramework::Actions::DeserializeUnifiedTileIdentifier(a2, (const WCHAR **)&v28);
  return a2;
}
