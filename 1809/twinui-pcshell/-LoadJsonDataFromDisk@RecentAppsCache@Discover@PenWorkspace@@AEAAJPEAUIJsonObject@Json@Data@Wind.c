/*
 * XREFs of ?LoadJsonDataFromDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEAUIJsonObject@Json@Data@Windows@@@Z @ 0x18019A6B0
 * Callers:
 *     ?LoadDataFromDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x18019A198 (-LoadDataFromDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ.c)
 * Callees:
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18000EC50 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18000EF5C (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180022328 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180025DE0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$emplace@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@@std@@@std@@@std@@_N@1@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@AEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@1@@Z @ 0x18006C080 (--$emplace@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAV-$shared_ptr@UAp.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18006C29C (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ??$make_shared@UAppUsageData@Discover@PenWorkspace@@$$V@std@@YA?AV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@0@XZ @ 0x18006D274 (--$make_shared@UAppUsageData@Discover@PenWorkspace@@$$V@std@@YA-AV-$shared_ptr@UAppUsageData@Dis.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$As@U?$IVector@PEAUIJsonValue@Json@Data@Windows@@@Collections@Foundation@Windows@@@?$ComPtr@UIJsonArray@Json@Data@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@U?$IVector@PEAUIJsonValue@Json@Data@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180197C00 (--$As@U-$IVector@PEAUIJsonValue@Json@Data@Windows@@@Collections@Foundation@Windows@@@-$ComPtr@UI.c)
 *     ?IsQualifiedDisplayItem@RecentAppsCache@Discover@PenWorkspace@@AEAA_NV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@Z @ 0x18019A0A0 (-IsQualifiedDisplayItem@RecentAppsCache@Discover@PenWorkspace@@AEAA_NV-$shared_ptr@UAppUsageData.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall PenWorkspace::Discover::RecentAppsCache::LoadJsonDataFromDisk(
        RTL_SRWLOCK *this,
        struct Windows::Data::Json::IJsonObject *a2)
{
  unsigned int v4; // esi
  HSTRING_HEADER *v5; // rbx
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // rdx
  unsigned int v10; // r15d
  unsigned int v11; // r14d
  __int64 v12; // rbx
  int v13; // eax
  __int64 v14; // rbx
  int v15; // eax
  __int64 v16; // rdi
  HSTRING_HEADER *v17; // rbx
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rbx
  PVOID Reserved1; // rdx
  __int64 v22; // rbx
  PVOID v23; // rdx
  __int64 v24; // rbx
  PVOID v25; // rdx
  __int64 v26; // rbx
  PVOID v27; // rdx
  PCWSTR StringRawBuffer; // rax
  unsigned __int64 v29; // r8
  const char *v30; // r9
  HSTRING string; // [rsp+20h] [rbp-198h] BYREF
  _BYTE v33[8]; // [rsp+28h] [rbp-190h] BYREF
  __int64 v34; // [rsp+30h] [rbp-188h] BYREF
  __int64 v35; // [rsp+38h] [rbp-180h] BYREF
  __int64 v36; // [rsp+40h] [rbp-178h] BYREF
  __int64 v37; // [rsp+48h] [rbp-170h] BYREF
  std::_Ref_count_base *v38[2]; // [rsp+50h] [rbp-168h] BYREF
  unsigned int v39; // [rsp+60h] [rbp-158h] BYREF
  RTL_SRWLOCK *v40; // [rsp+68h] [rbp-150h] BYREF
  double v41; // [rsp+70h] [rbp-148h] BYREF
  double v42; // [rsp+78h] [rbp-140h] BYREF
  double v43[2]; // [rsp+80h] [rbp-138h] BYREF
  __int128 v44; // [rsp+90h] [rbp-128h] BYREF
  __int64 v45; // [rsp+A0h] [rbp-118h]
  _BYTE v46[16]; // [rsp+B0h] [rbp-108h] BYREF
  HSTRING_HEADER v47; // [rsp+C0h] [rbp-F8h] BYREF
  HSTRING_HEADER v48; // [rsp+E0h] [rbp-D8h] BYREF
  HSTRING_HEADER v49; // [rsp+100h] [rbp-B8h] BYREF
  HSTRING_HEADER v50; // [rsp+120h] [rbp-98h] BYREF
  HSTRING_HEADER v51; // [rsp+140h] [rbp-78h] BYREF
  HSTRING_HEADER v52; // [rsp+160h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+0h]

  v45 = -2LL;
  v4 = 0;
  v37 = 0LL;
  v5 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v47, (const WCHAR **)off_180400210);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v37);
  v6 = (*(__int64 (__fastcall **)(struct Windows::Data::Json::IJsonObject *, PVOID, __int64 *))(*(_QWORD *)a2 + 72LL))(
         a2,
         v5[1].Reserved.Reserved1,
         &v37);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x23A,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_36;
  }
  v35 = 0LL;
  v8 = Microsoft::WRL::ComPtr<Windows::Data::Json::IJsonArray>::As<Windows::Foundation::Collections::IVector<Windows::Data::Json::IJsonValue *>>(
         &v37,
         &v35);
  v7 = v8;
  if ( v8 < 0 )
  {
    v9 = 573LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)(unsigned int)v8);
LABEL_6:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v35);
LABEL_36:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v37);
    return v7;
  }
  v10 = 0;
  v8 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v35 + 56LL))(v35, &v39);
  v7 = v8;
  if ( v8 < 0 )
  {
    v9 = 577LL;
    goto LABEL_5;
  }
  v11 = 0;
  while ( v11 < v39 )
  {
    v36 = 0LL;
    v12 = v35;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v36);
    v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v12 + 48LL))(v12, v11, &v36);
    v7 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x245,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
        (const char *)(unsigned int)v13);
      goto LABEL_13;
    }
    v34 = 0LL;
    v14 = v36;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v34);
    v15 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v14 + 96LL))(v14, &v34);
    v7 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x248,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
        (const char *)(unsigned int)v15);
      goto LABEL_16;
    }
    string = 0LL;
    v16 = v34;
    v17 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v48, (const WCHAR **)off_180400208);
    WindowsDeleteString(string);
    string = 0LL;
    v18 = (*(__int64 (__fastcall **)(__int64, PVOID, HSTRING *))(*(_QWORD *)v16 + 80LL))(
            v16,
            v17[1].Reserved.Reserved1,
            &string);
    v7 = v18;
    if ( v18 < 0 )
    {
      v19 = 587LL;
      goto LABEL_19;
    }
    v20 = v34;
    Reserved1 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v49, (const WCHAR **)off_180400230)[1].Reserved.Reserved1;
    v18 = (*(__int64 (__fastcall **)(__int64, PVOID, double *))(*(_QWORD *)v20 + 88LL))(v20, Reserved1, &v41);
    v7 = v18;
    if ( v18 < 0 )
    {
      v19 = 590LL;
      goto LABEL_19;
    }
    v22 = v34;
    v23 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v50, (const WCHAR **)off_180400228)[1].Reserved.Reserved1;
    v18 = (*(__int64 (__fastcall **)(__int64, PVOID, double *))(*(_QWORD *)v22 + 88LL))(v22, v23, &v42);
    v7 = v18;
    if ( v18 < 0 )
    {
      v19 = 593LL;
      goto LABEL_19;
    }
    v24 = v34;
    v25 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v51, (const WCHAR **)off_180400220)[1].Reserved.Reserved1;
    v18 = (*(__int64 (__fastcall **)(__int64, PVOID, double *))(*(_QWORD *)v24 + 88LL))(v24, v25, v43);
    v7 = v18;
    if ( v18 < 0 )
    {
      v19 = 596LL;
      goto LABEL_19;
    }
    v26 = v34;
    v27 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v52, (const WCHAR **)off_180400218)[1].Reserved.Reserved1;
    v18 = (*(__int64 (__fastcall **)(__int64, PVOID, _BYTE *))(*(_QWORD *)v26 + 96LL))(v26, v27, v33);
    v7 = v18;
    if ( v18 < 0 )
    {
      v19 = 599LL;
LABEL_19:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v19,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
        (const char *)(unsigned int)v18);
      WindowsDeleteString(string);
      string = 0LL;
LABEL_16:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v34);
LABEL_13:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v36);
      goto LABEL_6;
    }
    try
    {
      std::make_shared<PenWorkspace::Discover::AppUsageData,>((__int64 *)v38);
      StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
      v29 = -1LL;
      do
        ++v29;
      while ( StringRawBuffer[v29] );
      std::wstring::assign((char *)v38[0], StringRawBuffer, v29);
      *((_DWORD *)v38[0] + 8) = (int)v41;
      *((_DWORD *)v38[0] + 9) = (int)v42;
      *((_DWORD *)v38[0] + 10) = (int)v43[0];
      *((_BYTE *)v38[0] + 44) = v33[0] != 0;
      if ( v38[1] )
        _InterlockedIncrement((volatile signed __int32 *)v38[1] + 2);
      v44 = *(_OWORD *)v38;
      if ( PenWorkspace::Discover::RecentAppsCache::IsQualifiedDisplayItem((__int64)this, (const WCHAR **)&v44) )
        ++v10;
      Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v40, this + 21);
      std::_Hash<std::_Umap_traits<std::wstring,std::shared_ptr<PenWorkspace::Discover::AppUsageData>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::shared_ptr<PenWorkspace::Discover::AppUsageData>>>,0>>::emplace<std::wstring &,std::shared_ptr<PenWorkspace::Discover::AppUsageData> &>(
        (__int64)&this[2],
        (__int64)v46,
        (int)v38[0],
        (__int64)v38);
      Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v40);
      if ( v38[1] )
        std::_Ref_count_base::_Decref(v38[1]);
      WindowsDeleteString(string);
      string = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v34);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v36);
      ++v11;
    }
    catch ( ... )
    {
      LODWORD(v40) = wil::details::in1diag3::Return_CaughtException(
                       retaddr,
                       (void *)0x26A,
                       (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
                       v30);
      WindowsDeleteString(string);
      string = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v34);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v36);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v35);
      v7 = (unsigned int)v40;
      goto LABEL_36;
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v35);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v37);
  if ( v10 < 6 )
    return (unsigned int)-2147467259;
  return v4;
}
