/*
 * XREFs of ?GetSourceTileIdentifier@SwapStartTileService@Actions@CreativeFramework@@AEAA?AV?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x180083F5C
 * Callers:
 *     ?SwapStartTiles@SwapStartTileService@Actions@CreativeFramework@@AEAAXXZ @ 0x18008394C (-SwapStartTiles@SwapStartTileService@Actions@CreativeFramework@@AEAAXXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003864 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180014F6C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?GetFriendlySubscriptionNameFromPlacementId@SubscribedContentUtils@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_W@Z @ 0x180082F40 (-GetFriendlySubscriptionNameFromPlacementId@SubscribedContentUtils@CreativeFramework@@YA-AV-$bas.c)
 *     ?DeserializeUnifiedTileIdentifier@Actions@CreativeFramework@@YA?AV?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@AEBQEB_W@Z @ 0x1800831B0 (-DeserializeUnifiedTileIdentifier@Actions@CreativeFramework@@YA-AV-$com_ptr_t@UIUnifiedTileIdent.c)
 *     ?EnumerateAliasMap@SwapStartTileService@Actions@CreativeFramework@@AEAAXPEAUITargetedContentIdAliasStore@Internal@TargetedContent@Services@Windows@@AEBV?$function@$$A6A_NPEB_WPEAUITargetedContentIdAliasValue@Internal@TargetedContent@Services@Windows@@@Z@std@@@Z @ 0x180083B44 (-EnumerateAliasMap@SwapStartTileService@Actions@CreativeFramework@@AEAAXPEAUITargetedContentIdAl.c)
 *     ??$GetActivationFactory@UITargetedContentIdAliasStoreStatics@Internal@TargetedContent@Services@Windows@@@wil@@YA?AV?$com_ptr_t@UITargetedContentIdAliasStoreStatics@Internal@TargetedContent@Services@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x180086CBC (--$GetActivationFactory@UITargetedContentIdAliasStoreStatics@Internal@TargetedContent@Services@W.c)
 *     ??2@YAPEAX_K@Z @ 0x1800A9DC8 (--2@YAPEAX_K@Z.c)
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x1800A9FB8 (-_Xbad_alloc@std@@YAXXZ.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 *__fastcall CreativeFramework::Actions::SwapStartTileService::GetSourceTileIdentifier(_QWORD *a1, __int64 *a2)
{
  char *v4; // rdx
  const WCHAR *v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rdx
  int v8; // eax
  wil::details::in1diag3 *v9; // rcx
  void **v10; // rax
  __int64 v11; // rbx
  __int64 v12; // r14
  const WCHAR *v13; // rcx
  int v14; // eax
  wil::details::in1diag3 *v15; // rcx
  char *v16; // rax
  _BYTE *v17; // rdx
  __int64 v18; // rax
  _QWORD *v19; // rcx
  _QWORD *v20; // rax
  _BYTE v22[8]; // [rsp+38h] [rbp-49h] BYREF
  const WCHAR *v23; // [rsp+40h] [rbp-41h] BYREF
  _QWORD *v24; // [rsp+48h] [rbp-39h] BYREF
  __int64 v25; // [rsp+50h] [rbp-31h] BYREF
  __int128 v26; // [rsp+58h] [rbp-29h] BYREF
  __int64 v27; // [rsp+68h] [rbp-19h]
  void *v28[3]; // [rsp+70h] [rbp-11h] BYREF
  unsigned __int64 v29; // [rsp+88h] [rbp+7h]
  _BYTE v30[24]; // [rsp+90h] [rbp+Fh] BYREF
  _BYTE *v31; // [rsp+A8h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  v27 = -2LL;
  if ( !a1[3] )
  {
    v24 = 0LL;
    wil::GetActivationFactory<Windows::Services::TargetedContent::Internal::ITargetedContentIdAliasStoreStatics>(&v25);
    v4 = (char *)(a1 + 21);
    if ( a1[24] >= 8uLL )
      v4 = *(char **)v4;
    CreativeFramework::SubscribedContentUtils::GetFriendlySubscriptionNameFromPlacementId(v28, v4);
    v5 = (const WCHAR *)v28;
    if ( v29 >= 8 )
      v5 = (const WCHAR *)v28[0];
    v23 = v5;
    v6 = v25;
    v7 = *(_QWORD *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v30, &v23) + 24);
    v8 = (*(__int64 (__fastcall **)(__int64, __int64, _BYTE *))(*(_QWORD *)v6 + 56LL))(v6, v7, v22);
    v9 = retaddr;
    if ( v8 >= 0 )
    {
      if ( v22[0] )
      {
        v23 = 0LL;
        v10 = v28;
        if ( v29 >= 8 )
          v10 = (void **)v28[0];
        *(_QWORD *)&v26 = v10;
        v11 = v25;
        v12 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v30, (const WCHAR **)&v26);
        v13 = v23;
        v23 = 0LL;
        if ( v13 )
          (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v13 + 16LL))(v13);
        v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, const WCHAR **))(*(_QWORD *)v11 + 64LL))(
                v11,
                *(_QWORD *)(v12 + 24),
                0LL,
                &v23);
        v15 = retaddr;
        if ( v14 < 0 )
          goto LABEL_31;
        *(_QWORD *)&v26 = a1;
        *((_QWORD *)&v26 + 1) = &v24;
        v31 = 0LL;
        v16 = (char *)operator new(0x20uLL);
        if ( !v16 )
          goto LABEL_32;
        *(_QWORD *)v16 = off_1800E1088;
        *(_OWORD *)(v16 + 8) = v26;
        v31 = v16;
        CreativeFramework::Actions::SwapStartTileService::EnumerateAliasMap(
          (__int64)off_1800E1088,
          (__int64)v23,
          (__int64)v30);
        if ( v31 )
        {
          v17 = v30;
          LOBYTE(v17) = v31 != v30;
          (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v31 + 32LL))(v31, v17);
        }
        if ( v23 )
          (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v23 + 16LL))(v23);
      }
      v18 = (__int64)v24;
      if ( v24 )
      {
        v19 = 0LL;
        v24 = 0LL;
        *a2 = v18;
        if ( v29 >= 8 )
        {
          operator delete(v28[0]);
          v19 = v24;
        }
        v29 = 7LL;
        v28[2] = 0LL;
        LOWORD(v28[0]) = 0;
        if ( v25 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
          v19 = v24;
        }
        if ( v19 )
          (*(void (__fastcall **)(_QWORD *, _QWORD))(*v19 + 16LL))(v19, *v19);
        return a2;
      }
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x14C,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
        (const char *)0x80070490LL);
    }
    wil::details::in1diag3::Throw_Hr(
      v9,
      (void *)0x137,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v8);
LABEL_31:
    wil::details::in1diag3::Throw_Hr(
      v15,
      (void *)0x13B,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v14);
LABEL_32:
    std::_Xbad_alloc();
  }
  v20 = a1 + 1;
  if ( a1[4] >= 8uLL )
    v20 = (_QWORD *)*v20;
  *(_QWORD *)&v26 = v20;
  CreativeFramework::Actions::DeserializeUnifiedTileIdentifier(a2, (const WCHAR **)&v26);
  return a2;
}
