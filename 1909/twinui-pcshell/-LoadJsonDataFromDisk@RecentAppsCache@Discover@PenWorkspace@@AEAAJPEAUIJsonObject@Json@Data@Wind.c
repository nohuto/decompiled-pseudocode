/*
 * XREFs of ?LoadJsonDataFromDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEAUIJsonObject@Json@Data@Windows@@@Z @ 0x180200794
 * Callers:
 *     ?LoadDataFromDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x1802002AC (-LoadDataFromDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18001F7E8 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180043620 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18004FD9C (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x1800500AC (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18005CFFC (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ??$emplace@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@@std@@@std@@@std@@_N@1@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@AEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@1@@Z @ 0x18005E430 (--$emplace@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAV-$shared_ptr@UAp.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$make_shared@UAppUsageData@Discover@PenWorkspace@@$$V@std@@YA?AV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@0@XZ @ 0x180081EAC (--$make_shared@UAppUsageData@Discover@PenWorkspace@@$$V@std@@YA-AV-$shared_ptr@UAppUsageData@Dis.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$As@U?$IVector@PEAUIJsonValue@Json@Data@Windows@@@Collections@Foundation@Windows@@@?$ComPtr@UIJsonArray@Json@Data@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@U?$IVector@PEAUIJsonValue@Json@Data@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801E07FC (--$As@U-$IVector@PEAUIJsonValue@Json@Data@Windows@@@Collections@Foundation@Windows@@@-$ComPtr@UI.c)
 *     ?IsQualifiedDisplayItem@RecentAppsCache@Discover@PenWorkspace@@AEAA_NV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@Z @ 0x1802001A8 (-IsQualifiedDisplayItem@RecentAppsCache@Discover@PenWorkspace@@AEAA_NV-$shared_ptr@UAppUsageData.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall PenWorkspace::Discover::RecentAppsCache::LoadJsonDataFromDisk(
        RTL_SRWLOCK *this,
        struct Windows::Data::Json::IJsonObject *a2)
{
  __int64 (__fastcall *v4)(struct Windows::Data::Json::IJsonObject *, PVOID, _QWORD); // rdi
  HSTRING_HEADER *v5; // rbx
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // rdx
  unsigned int v10; // r12d
  unsigned int v11; // r15d
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, _QWORD, __int64 *); // rdi
  int v14; // eax
  __int64 v15; // rbx
  __int64 (__fastcall *v16)(__int64, __int64 *); // rdi
  int v17; // eax
  __int64 v18; // rbx
  __int64 (__fastcall *v19)(__int64, PVOID, HSTRING *); // rsi
  HSTRING_HEADER *v20; // rdi
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rbx
  __int64 (__fastcall *v24)(__int64, PVOID, double *); // rdi
  HSTRING_HEADER *v25; // rax
  __int64 v26; // rbx
  __int64 (__fastcall *v27)(__int64, PVOID, double *); // rdi
  HSTRING_HEADER *v28; // rax
  __int64 v29; // rbx
  __int64 (__fastcall *v30)(__int64, PVOID, double *); // rdi
  HSTRING_HEADER *v31; // rax
  __int64 v32; // rbx
  __int64 (__fastcall *v33)(__int64, PVOID, _BYTE *); // rdi
  HSTRING_HEADER *v34; // rax
  PCWSTR StringRawBuffer; // rax
  unsigned __int64 v36; // r8
  const char *v37; // r9
  HSTRING string; // [rsp+20h] [rbp-198h] BYREF
  _BYTE v40[8]; // [rsp+28h] [rbp-190h] BYREF
  __int64 v41; // [rsp+30h] [rbp-188h] BYREF
  __int64 v42; // [rsp+38h] [rbp-180h] BYREF
  __int64 v43[2]; // [rsp+40h] [rbp-178h] BYREF
  std::_Ref_count_base *v44[2]; // [rsp+50h] [rbp-168h] BYREF
  __int64 (__fastcall ***v45)(_QWORD, GUID *, __int64 *); // [rsp+60h] [rbp-158h] BYREF
  unsigned int v46; // [rsp+68h] [rbp-150h] BYREF
  RTL_SRWLOCK *v47; // [rsp+70h] [rbp-148h] BYREF
  double v48; // [rsp+78h] [rbp-140h] BYREF
  double v49; // [rsp+80h] [rbp-138h] BYREF
  double v50; // [rsp+88h] [rbp-130h] BYREF
  __int128 v51; // [rsp+90h] [rbp-128h] BYREF
  __int64 v52; // [rsp+A0h] [rbp-118h]
  _BYTE v53[16]; // [rsp+B0h] [rbp-108h] BYREF
  HSTRING_HEADER v54; // [rsp+C0h] [rbp-F8h] BYREF
  HSTRING_HEADER v55; // [rsp+E0h] [rbp-D8h] BYREF
  HSTRING_HEADER v56; // [rsp+100h] [rbp-B8h] BYREF
  HSTRING_HEADER v57; // [rsp+120h] [rbp-98h] BYREF
  HSTRING_HEADER v58; // [rsp+140h] [rbp-78h] BYREF
  HSTRING_HEADER v59; // [rsp+160h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+0h]

  v52 = -2LL;
  v45 = 0LL;
  v4 = *(__int64 (__fastcall **)(struct Windows::Data::Json::IJsonObject *, PVOID, _QWORD))(*(_QWORD *)a2 + 72LL);
  v5 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v54, (const WCHAR **)off_180451620);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v45);
  v6 = v4(a2, v5[1].Reserved.Reserved1, &v45);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x23A,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_38;
  }
  v42 = 0LL;
  v8 = Microsoft::WRL::ComPtr<Windows::Data::Json::IJsonArray>::As<Windows::Foundation::Collections::IVector<Windows::Data::Json::IJsonValue *>>(
         &v45,
         &v42);
  v7 = v8;
  if ( v8 < 0 )
  {
    v9 = 573LL;
    goto LABEL_5;
  }
  v10 = 0;
  v8 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v42 + 56LL))(v42, &v46);
  v7 = v8;
  if ( v8 < 0 )
  {
    v9 = 577LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)(unsigned int)v8);
LABEL_6:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v42);
    goto LABEL_38;
  }
  v11 = 0;
  while ( v11 < v46 )
  {
    v43[0] = 0LL;
    v12 = v42;
    v13 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v42 + 48LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v43);
    v14 = v13(v12, v11, v43);
    v7 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x245,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
        (const char *)(unsigned int)v14);
      goto LABEL_13;
    }
    v41 = 0LL;
    v15 = v43[0];
    v16 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v43[0] + 96LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v41);
    v17 = v16(v15, &v41);
    v7 = v17;
    if ( v17 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x248,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
        (const char *)(unsigned int)v17);
      goto LABEL_16;
    }
    string = 0LL;
    v18 = v41;
    v19 = *(__int64 (__fastcall **)(__int64, PVOID, HSTRING *))(*(_QWORD *)v41 + 80LL);
    v20 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v55, (const WCHAR **)off_180451610);
    WindowsDeleteString(string);
    string = 0LL;
    v21 = v19(v18, v20[1].Reserved.Reserved1, &string);
    v7 = v21;
    if ( v21 < 0 )
    {
      v22 = 587LL;
      goto LABEL_19;
    }
    v23 = v41;
    v24 = *(__int64 (__fastcall **)(__int64, PVOID, double *))(*(_QWORD *)v41 + 88LL);
    v25 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v56, (const WCHAR **)off_180451618);
    v21 = v24(v23, v25[1].Reserved.Reserved1, &v48);
    v7 = v21;
    if ( v21 < 0 )
    {
      v22 = 590LL;
      goto LABEL_19;
    }
    v26 = v41;
    v27 = *(__int64 (__fastcall **)(__int64, PVOID, double *))(*(_QWORD *)v41 + 88LL);
    v28 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v57, (const WCHAR **)off_180451630);
    v21 = v27(v26, v28[1].Reserved.Reserved1, &v49);
    v7 = v21;
    if ( v21 < 0 )
    {
      v22 = 593LL;
      goto LABEL_19;
    }
    v29 = v41;
    v30 = *(__int64 (__fastcall **)(__int64, PVOID, double *))(*(_QWORD *)v41 + 88LL);
    v31 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v58, (const WCHAR **)off_180451638);
    v21 = v30(v29, v31[1].Reserved.Reserved1, &v50);
    v7 = v21;
    if ( v21 < 0 )
    {
      v22 = 596LL;
      goto LABEL_19;
    }
    v32 = v41;
    v33 = *(__int64 (__fastcall **)(__int64, PVOID, _BYTE *))(*(_QWORD *)v41 + 96LL);
    v34 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v59, (const WCHAR **)off_180451628);
    v21 = v33(v32, v34[1].Reserved.Reserved1, v40);
    v7 = v21;
    if ( v21 < 0 )
    {
      v22 = 599LL;
LABEL_19:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v22,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
        (const char *)(unsigned int)v21);
      WindowsDeleteString(string);
      string = 0LL;
LABEL_16:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v41);
LABEL_13:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v43);
      goto LABEL_6;
    }
    try
    {
      std::make_shared<PenWorkspace::Discover::AppUsageData,>((__int64 *)v44);
      StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
      v36 = -1LL;
      do
        ++v36;
      while ( StringRawBuffer[v36] );
      std::wstring::assign((char *)v44[0], StringRawBuffer, v36);
      *((_DWORD *)v44[0] + 8) = (int)v48;
      *((_DWORD *)v44[0] + 9) = (int)v49;
      *((_DWORD *)v44[0] + 10) = (int)v50;
      *((_BYTE *)v44[0] + 44) = v40[0] != 0;
      if ( v44[1] )
        _InterlockedIncrement((volatile signed __int32 *)v44[1] + 2);
      v51 = *(_OWORD *)v44;
      if ( PenWorkspace::Discover::RecentAppsCache::IsQualifiedDisplayItem((__int64)this, (const WCHAR **)&v51) )
        ++v10;
      Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v47, this + 21);
      std::_Hash<std::_Umap_traits<std::wstring,std::shared_ptr<PenWorkspace::Discover::AppUsageData>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::shared_ptr<PenWorkspace::Discover::AppUsageData>>>,0>>::emplace<std::wstring &,std::shared_ptr<PenWorkspace::Discover::AppUsageData> &>(
        (__int64)&this[2],
        (__int64)v53,
        (__int64)v44[0],
        v44);
      Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v47);
      if ( v44[1] )
        std::_Ref_count_base::_Decref(v44[1]);
      WindowsDeleteString(string);
      string = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v41);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v43);
      ++v11;
    }
    catch ( ... )
    {
      LODWORD(v47) = wil::details::in1diag3::Return_CaughtException(
                       retaddr,
                       (void *)0x26A,
                       (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
                       v37);
      WindowsDeleteString(string);
      string = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v41);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v43);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v42);
      v7 = (unsigned int)v47;
      goto LABEL_38;
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v42);
  v7 = -2147467259;
  if ( v10 >= 6 )
    v7 = 0;
LABEL_38:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v45);
  return v7;
}
