/*
 * XREFs of ?TrackProcess@RecentAppsCache@Discover@PenWorkspace@@AEAAJKAEBU_FILETIME@@@Z @ 0x18001D1A0
 * Callers:
 *     ?ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@AEAAKXZ @ 0x1800FF1B0 (-ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@AEAAKXZ.c)
 * Callees:
 *     ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x18001D500 (-GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001D85C (--1-$unique_any_t@V-$unique_storage@U-$handle_invalid_resource_policy@P6AHPEAX@Z$1-CloseHandle@@.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002B9E0 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180036E68 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18004D924 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18004DC78 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@@std@@@std@@@2@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x180059F30 (-lower_bound@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@st.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18005D8F4 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??$emplace@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@@std@@@std@@@std@@_N@1@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@AEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@1@@Z @ 0x18005EFF0 (--$emplace@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAV-$shared_ptr@UAp.c)
 *     ??$make_shared@UAppUsageData@Discover@PenWorkspace@@$$V@std@@YA?AV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@0@XZ @ 0x18007FB1C (--$make_shared@UAppUsageData@Discover@PenWorkspace@@$$V@std@@YA-AV-$shared_ptr@UAppUsageData@Dis.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008755C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180087898 (--2@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x1800B0F57 (memcpy_0.c)
 *     memmove_0 @ 0x1800B0F63 (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1801017C8 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x18011B568 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall PenWorkspace::Discover::RecentAppsCache::TrackProcess(
        PenWorkspace::Discover::RecentAppsCache *this,
        DWORD a2,
        const struct _FILETIME *a3)
{
  char *v6; // r15
  wil::details *v7; // rcx
  HANDLE v8; // rbx
  unsigned __int16 **v9; // r8
  const void *v10; // rdi
  unsigned __int64 v11; // rbx
  __int64 v12; // r14
  unsigned __int64 v13; // rdx
  size_t v14; // rbx
  __int64 v15; // rbx
  __int64 v16; // rdx
  std::_Ref_count_base *v17; // rcx
  RTL_SRWLOCK *v18; // rbx
  const char *v19; // r9
  const struct std::nothrow_t *v20; // rdx
  void *v21; // rcx
  int LastErrorFailHr; // edi
  size_t v24; // rbx
  size_t v25; // rcx
  void *v26; // rax
  HANDLE v27; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v28; // [rsp+48h] [rbp-C0h] BYREF
  unsigned __int64 v29; // [rsp+50h] [rbp-B8h] BYREF
  void *v30; // [rsp+58h] [rbp-B0h] BYREF
  void *Src[3]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v32; // [rsp+78h] [rbp-90h] BYREF
  std::_Ref_count_base *v33; // [rsp+80h] [rbp-88h]
  __int64 v34; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v35[8]; // [rsp+90h] [rbp-78h] BYREF
  __int64 v36; // [rsp+98h] [rbp-70h]
  _BYTE v37[16]; // [rsp+A0h] [rbp-68h] BYREF
  void *v38[2]; // [rsp+B0h] [rbp-58h] BYREF
  unsigned __int64 v39; // [rsp+C0h] [rbp-48h]
  unsigned __int64 v40; // [rsp+C8h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+0h]

  v36 = -2LL;
  v6 = 0LL;
  Src[0] = 0LL;
  Src[1] = (void *)-1LL;
  Src[2] = (void *)-1LL;
  v8 = OpenProcess(0x410u, 0, a2);
  v27 = v8;
  if ( (((unsigned __int64)v8 + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
  {
    if ( (int)CallerIdentity::GetProcessAppId(v8, Src, v9) >= 0
      || (LastErrorFailHr = (*(__int64 (__fastcall **)(_QWORD, _QWORD, void **, _QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 23) + 48LL))(
                              *((_QWORD *)this + 23),
                              a2,
                              Src,
                              0LL,
                              0LL,
                              0LL),
          LastErrorFailHr >= 0) )
    {
      CloseHandle(v8);
      goto LABEL_4;
    }
  }
  else
  {
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v7);
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(&v27);
  if ( LastErrorFailHr < 0 )
  {
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(Src);
    return (unsigned int)LastErrorFailHr;
  }
LABEL_4:
  v10 = Src[0];
  v39 = 0LL;
  v40 = 7LL;
  LOWORD(v38[0]) = 0;
  v11 = -1LL;
  do
    ++v11;
  while ( *((_WORD *)Src[0] + v11) );
  try
  {
    if ( v11 <= 7 )
    {
      v39 = v11;
      v24 = 2 * v11;
      memmove_0(v38, Src[0], v24);
      *(_WORD *)((char *)v38 + v24) = 0;
      goto LABEL_17;
    }
    v12 = 0x7FFFFFFFFFFFFFFELL;
    if ( v11 > 0x7FFFFFFFFFFFFFFELL )
      std::_Xlength_error("string too long");
    if ( (v11 | 7) <= 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (v11 | 7) < 0xA )
        v12 = 10LL;
      else
        v12 = v11 | 7;
    }
    v13 = 2 * (v12 + 1);
    if ( (unsigned __int64)(v12 + 1) > 0x7FFFFFFFFFFFFFFFLL )
    {
      v13 = -1LL;
    }
    else if ( v13 < 0x1000 )
    {
      if ( v13 )
        v6 = (char *)operator new(2 * (v12 + 1));
LABEL_16:
      v39 = v11;
      v40 = v12;
      v14 = 2 * v11;
      memcpy_0(v6, v10, v14);
      *(_WORD *)&v6[v14] = 0;
      v38[0] = v6;
LABEL_17:
      std::_Hash<std::_Umap_traits<std::wstring,std::shared_ptr<PenWorkspace::Discover::AppUsageData>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::shared_ptr<PenWorkspace::Discover::AppUsageData>>>,0>>::lower_bound(
        (char *)this + 16,
        &v28,
        v38);
      v15 = v28;
      if ( v28 == *((_QWORD *)this + 3) )
      {
        std::make_shared<PenWorkspace::Discover::AppUsageData,>(&v32);
        std::wstring::operator=(v32, v38);
        *(_BYTE *)(v32 + 44) = 0;
        Microsoft::WRL::Wrappers::SRWLock::LockExclusive(v35, (char *)this + 168);
        std::_Hash<std::_Umap_traits<std::wstring,std::shared_ptr<PenWorkspace::Discover::AppUsageData>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::shared_ptr<PenWorkspace::Discover::AppUsageData>>>,0>>::emplace<std::wstring &,std::shared_ptr<PenWorkspace::Discover::AppUsageData> &>(
          (char *)this + 16,
          v37,
          v38,
          &v32);
        std::_Hash<std::_Umap_traits<std::wstring,std::shared_ptr<PenWorkspace::Discover::AppUsageData>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::shared_ptr<PenWorkspace::Discover::AppUsageData>>>,0>>::lower_bound(
          (char *)this + 16,
          &v34,
          v38);
        v15 = v34;
        v28 = v34;
        Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock((Microsoft::WRL::Wrappers::Details::SyncLockExclusive *)v35);
        if ( v33 )
          std::_Ref_count_base::_Decref(v33);
      }
      *((_DWORD *)this + 20) = a2;
      v16 = *(_QWORD *)(v15 + 56);
      if ( v16 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v16 + 8));
        v16 = *(_QWORD *)(v15 + 56);
      }
      *((_QWORD *)this + 11) = *(_QWORD *)(v15 + 48);
      v17 = (std::_Ref_count_base *)*((_QWORD *)this + 12);
      *((_QWORD *)this + 12) = v16;
      if ( !v17 )
        goto LABEL_21;
      goto LABEL_46;
    }
    v25 = v13 + 39;
    if ( v13 + 39 < v13 )
      v25 = -1LL;
    v26 = operator new(v25);
    if ( !v26 )
    {
      _o__invalid_parameter_noinfo_noreturn();
LABEL_46:
      std::_Ref_count_base::_Decref(v17);
LABEL_21:
      *(_BYTE *)(*((_QWORD *)this + 11) + 44LL) = 0;
      v18 = (RTL_SRWLOCK *)(*((_QWORD *)this + 11) + 48LL);
      AcquireSRWLockExclusive(v18);
      *(struct _FILETIME *)(*((_QWORD *)this + 11) + 36LL) = *a3;
      if ( v18 )
        ReleaseSRWLockExclusive(v18);
      if ( v40 >= 8 )
      {
        v20 = (const struct std::nothrow_t *)(2 * v40 + 2);
        v29 = (unsigned __int64)v20;
        v21 = v38[0];
        v30 = v38[0];
        if ( (unsigned __int64)v20 >= 0x1000 )
        {
          std::_Adjust_manually_vector_aligned(&v30, &v29);
          v20 = (const struct std::nothrow_t *)v29;
          v21 = v30;
        }
        operator delete(v21, v20);
      }
      goto LABEL_49;
    }
    v6 = (char *)(((unsigned __int64)v26 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
    *((_QWORD *)v6 - 1) = v26;
    goto LABEL_16;
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x1EE,
      (unsigned int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      v19);
  }
LABEL_49:
  if ( Src[0] )
    CoTaskMemFree(Src[0]);
  return 0LL;
}
