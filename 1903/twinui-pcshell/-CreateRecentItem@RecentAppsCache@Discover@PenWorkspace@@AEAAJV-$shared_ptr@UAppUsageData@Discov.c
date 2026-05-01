/*
 * XREFs of ?CreateRecentItem@RecentAppsCache@Discover@PenWorkspace@@AEAAJV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@PEAPEAUIDiscoverRecentItem@@@Z @ 0x1801E00FC
 * Callers:
 *     ?GetMRUApps@RecentAppsCache@Discover@PenWorkspace@@QEAAJHAEAV?$vector@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1801E0948 (-GetMRUApps@RecentAppsCache@Discover@PenWorkspace@@QEAAJHAEAV-$vector@V-$ComPtr@UIDiscoverRecent.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180036E68 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x1800402F0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800403C0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VUTMRecentItem@Discover@PenWorkspace@@UIDiscoverRecentItem@@PEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@@Details@WRL@Microsoft@@YAJPEAPEAUIDiscoverRecentItem@@$$QEAPEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x1801DEC90 (--$MakeAndInitialize@VUTMRecentItem@Discover@PenWorkspace@@UIDiscoverRecentItem@@PEAUIUnifiedTil.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall PenWorkspace::Discover::RecentAppsCache::CreateRecentItem(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rbx
  int ActivationFactory; // eax
  int v8; // ebx
  std::_Ref_count_base *v9; // rcx
  __int64 v11; // rbx
  int (__fastcall *v12)(__int64, PVOID, __int64 *); // r14
  const WCHAR *v13; // rax
  HSTRING_HEADER *v14; // rdi
  __int64 v15; // rbx
  __int64 v16; // rdx
  const WCHAR *v17; // rbx
  __int64 (__fastcall *v18)(const WCHAR *, PVOID, __int64 *); // r14
  struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *v19; // rax
  HSTRING_HEADER *v20; // rdi
  __int64 v21; // rdi
  __int64 (__fastcall *v22)(__int64, __int64, struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile **); // rbx
  __int64 v23; // rdx
  std::_Ref_count_base *v24; // rcx
  std::_Ref_count_base *v25; // rcx
  __int64 v26; // [rsp+20h] [rbp-60h] BYREF
  __int64 v27; // [rsp+28h] [rbp-58h] BYREF
  const WCHAR *v28; // [rsp+30h] [rbp-50h] BYREF
  struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *v29; // [rsp+38h] [rbp-48h] BYREF
  struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *v30[3]; // [rsp+40h] [rbp-40h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+58h] [rbp-28h] BYREF
  __int64 v32; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]

  v30[1] = (struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *)-2LL;
  v30[2] = (struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *)a2;
  *a3 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v32 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"WindowsInternal.Shell.UnifiedTile.PackagedUnifiedTileIdentifier",
    0x40u,
    0x3Fu);
  v6 = v32;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
  ActivationFactory = RoGetActivationFactory(v6, &GUID_ec3e7864_aaab_4367_9c63_94d289545500, &v27);
  v8 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x12B,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)(unsigned int)ActivationFactory);
LABEL_3:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
    v9 = *(std::_Ref_count_base **)(a2 + 8);
    if ( v9 )
      std::_Ref_count_base::_Decref(v9);
    return (unsigned int)v8;
  }
  v11 = v27;
  v12 = *(int (__fastcall **)(__int64, PVOID, __int64 *))(*(_QWORD *)v27 + 48LL);
  v13 = *(const WCHAR **)a2;
  if ( *(_QWORD *)(*(_QWORD *)a2 + 24LL) >= 8uLL )
    v13 = *(const WCHAR **)v13;
  v28 = v13;
  v14 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, &v28);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
  if ( v12(v11, v14[1].Reserved.Reserved1, &v26) < 0 )
  {
    v28 = 0LL;
    v32 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"WindowsInternal.Shell.UnifiedTile.Win32UnifiedTileIdentifier",
      0x3Du,
      0x3Cu);
    v15 = v32;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v28);
    v8 = RoGetActivationFactory(v15, &GUID_0e7735be_a965_44a6_a75f_54b8bcd67bec, &v28);
    if ( v8 < 0 )
    {
      v16 = 303LL;
LABEL_11:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v16,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
        (const char *)(unsigned int)v8);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v28);
      goto LABEL_3;
    }
    v17 = v28;
    v18 = *(__int64 (__fastcall **)(const WCHAR *, PVOID, __int64 *))(*(_QWORD *)v28 + 48LL);
    v19 = *(struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile **)a2;
    if ( *(_QWORD *)(*(_QWORD *)a2 + 24LL) >= 8uLL )
      v19 = *(struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile **)v19;
    v30[0] = v19;
    v20 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, (const WCHAR **)v30);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
    v8 = v18(v17, v20[1].Reserved.Reserved1, &v26);
    if ( v8 < 0 )
    {
      v16 = 304LL;
      goto LABEL_11;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v28);
  }
  v29 = 0LL;
  v21 = *(_QWORD *)(a1 + 192);
  v22 = *(__int64 (__fastcall **)(__int64, __int64, struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile **))(*(_QWORD *)v21 + 72LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v29);
  v8 = v22(v21, v26, &v29);
  if ( v8 < 0 )
  {
    v23 = 308LL;
LABEL_19:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v23,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)(unsigned int)v8);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v29);
    goto LABEL_3;
  }
  if ( v29 )
  {
    v30[0] = v29;
    v8 = Microsoft::WRL::Details::MakeAndInitialize<PenWorkspace::Discover::UTMRecentItem,IDiscoverRecentItem,WindowsInternal::Shell::UnifiedTile::IUnifiedTile *>(
           a3,
           v30);
    if ( v8 < 0 )
    {
      v23 = 311LL;
      goto LABEL_19;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v29);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
    v25 = *(std::_Ref_count_base **)(a2 + 8);
    if ( v25 )
      std::_Ref_count_base::_Decref(v25);
    return 0LL;
  }
  else
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v29);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
    v24 = *(std::_Ref_count_base **)(a2 + 8);
    if ( v24 )
      std::_Ref_count_base::_Decref(v24);
    return 2147549183LL;
  }
}
