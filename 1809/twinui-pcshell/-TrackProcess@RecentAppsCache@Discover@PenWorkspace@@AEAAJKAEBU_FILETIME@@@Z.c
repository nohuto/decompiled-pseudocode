/*
 * XREFs of ?TrackProcess@RecentAppsCache@Discover@PenWorkspace@@AEAAJKAEBU_FILETIME@@@Z @ 0x180040220
 * Callers:
 *     ?ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@AEAAKXZ @ 0x1800DD46C (-ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@AEAAKXZ.c)
 * Callees:
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18000EC50 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18000EF5C (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180022328 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002D674 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18003374C (--1-$unique_any_t@V-$unique_storage@U-$handle_invalid_resource_policy@P6AHPEAX@Z$1-CloseHandle@@.c)
 *     ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x18003DA00 (-GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@@std@@@std@@@2@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x1800535D0 (-lower_bound@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@st.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18006C048 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??$emplace@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@@std@@@std@@@std@@_N@1@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@AEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@1@@Z @ 0x18006C080 (--$emplace@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAV-$shared_ptr@UAp.c)
 *     ??$make_shared@UAppUsageData@Discover@PenWorkspace@@$$V@std@@YA?AV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@0@XZ @ 0x18006D274 (--$make_shared@UAppUsageData@Discover@PenWorkspace@@$$V@std@@YA-AV-$shared_ptr@UAppUsageData@Dis.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180084C08 (--2@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x18009B2D7 (memcpy_0.c)
 *     memmove_0 @ 0x18009B2E3 (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1800DF4A0 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800F6294 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
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
  __int64 v25; // rax
  size_t v26; // rcx
  void *v27; // rax
  __int64 v28; // rcx
  __int64 v29; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int64 v30; // [rsp+48h] [rbp-C0h] BYREF
  void *v31; // [rsp+50h] [rbp-B8h] BYREF
  void *Src[3]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v33; // [rsp+70h] [rbp-98h] BYREF
  std::_Ref_count_base *v34; // [rsp+78h] [rbp-90h]
  void *v35; // [rsp+80h] [rbp-88h] BYREF
  __int64 v36; // [rsp+88h] [rbp-80h] BYREF
  RTL_SRWLOCK *v37[2]; // [rsp+90h] [rbp-78h] BYREF
  _BYTE v38[16]; // [rsp+A0h] [rbp-68h] BYREF
  void *v39[2]; // [rsp+B0h] [rbp-58h] BYREF
  unsigned __int64 v40; // [rsp+C0h] [rbp-48h]
  unsigned __int64 v41; // [rsp+C8h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+0h]

  v37[1] = (RTL_SRWLOCK *)-2LL;
  v6 = 0LL;
  Src[0] = 0LL;
  Src[1] = (void *)-1LL;
  Src[2] = (void *)-1LL;
  v8 = OpenProcess(0x410u, 0, a2);
  v35 = v8;
  if ( (((unsigned __int64)v8 + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
  {
    if ( (int)CallerIdentity::GetProcessAppId(v8, (unsigned int **)Src, v9) >= 0
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
  wil::unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(&v35);
  if ( LastErrorFailHr < 0 )
  {
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)Src);
    return (unsigned int)LastErrorFailHr;
  }
LABEL_4:
  v10 = Src[0];
  v40 = 0LL;
  v41 = 7LL;
  LOWORD(v39[0]) = 0;
  v11 = -1LL;
  do
    ++v11;
  while ( *((_WORD *)Src[0] + v11) );
  try
  {
    if ( v11 <= 7 )
    {
      v40 = v11;
      v24 = 2 * v11;
      memmove_0(v39, Src[0], v24);
      *(_WORD *)((char *)v39 + v24) = 0;
LABEL_17:
      std::_Hash<std::_Umap_traits<std::wstring,std::shared_ptr<PenWorkspace::Discover::AppUsageData>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::shared_ptr<PenWorkspace::Discover::AppUsageData>>>,0>>::lower_bound(
        (char *)this + 16,
        &v29,
        v39);
      v15 = v29;
      if ( v29 == *((_QWORD *)this + 3) )
      {
        std::make_shared<PenWorkspace::Discover::AppUsageData,>(&v33);
        std::wstring::operator=(v33, v39);
        *(_BYTE *)(v33 + 44) = 0;
        Microsoft::WRL::Wrappers::SRWLock::LockExclusive(v37, (RTL_SRWLOCK *)this + 21);
        std::_Hash<std::_Umap_traits<std::wstring,std::shared_ptr<PenWorkspace::Discover::AppUsageData>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::shared_ptr<PenWorkspace::Discover::AppUsageData>>>,0>>::emplace<std::wstring &,std::shared_ptr<PenWorkspace::Discover::AppUsageData> &>(
          (char *)this + 16,
          v38,
          v39,
          &v33);
        std::_Hash<std::_Umap_traits<std::wstring,std::shared_ptr<PenWorkspace::Discover::AppUsageData>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::shared_ptr<PenWorkspace::Discover::AppUsageData>>>,0>>::lower_bound(
          (char *)this + 16,
          &v36,
          v39);
        v15 = v36;
        v29 = v36;
        Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(v37);
        if ( v34 )
          std::_Ref_count_base::_Decref(v34);
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
      if ( v17 )
        std::_Ref_count_base::_Decref(v17);
      *(_BYTE *)(*((_QWORD *)this + 11) + 44LL) = 0;
      v18 = (RTL_SRWLOCK *)(*((_QWORD *)this + 11) + 48LL);
      AcquireSRWLockExclusive(v18);
      *(struct _FILETIME *)(*((_QWORD *)this + 11) + 36LL) = *a3;
      if ( v18 )
        ReleaseSRWLockExclusive(v18);
      if ( v41 >= 8 )
      {
        v20 = (const struct std::nothrow_t *)(2 * v41 + 2);
        v30 = (unsigned __int64)v20;
        v21 = v39[0];
        v31 = v39[0];
        if ( (unsigned __int64)v20 >= 0x1000 )
        {
          std::_Adjust_manually_vector_aligned(&v31, &v30);
          v20 = (const struct std::nothrow_t *)v30;
          v21 = v31;
        }
        operator delete(v21, v20);
      }
      goto LABEL_50;
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
      v25 = -1LL;
      v13 = -1LL;
    }
    else
    {
      if ( v13 < 0x1000 )
      {
        if ( v13 )
          v6 = (char *)operator new(2 * (v12 + 1));
LABEL_16:
        v40 = v11;
        v41 = v12;
        v14 = 2 * v11;
        memcpy_0(v6, v10, v14);
        *(_WORD *)&v6[v14] = 0;
        v39[0] = v6;
        goto LABEL_17;
      }
      v25 = -1LL;
    }
    v26 = v13 + 39;
    if ( v13 + 39 >= v13 )
      goto LABEL_45;
    while ( 1 )
    {
      v26 = v25;
LABEL_45:
      v27 = operator new(v26);
      if ( v27 )
        break;
      v25 = _o__invalid_parameter_noinfo_noreturn(v28);
    }
    v6 = (char *)(((unsigned __int64)v27 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
    *((_QWORD *)v6 - 1) = v27;
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
LABEL_50:
  if ( Src[0] )
    CoTaskMemFree(Src[0]);
  return 0LL;
}
