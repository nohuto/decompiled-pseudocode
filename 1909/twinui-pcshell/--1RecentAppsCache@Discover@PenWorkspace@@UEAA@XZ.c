/*
 * XREFs of ??1RecentAppsCache@Discover@PenWorkspace@@UEAA@XZ @ 0x1801FAA44
 * Callers:
 *     ??_GRecentAppsCache@Discover@PenWorkspace@@UEAAPEAXI@Z @ 0x1801FAEE0 (--_GRecentAppsCache@Discover@PenWorkspace@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18001F7E8 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180034EE0 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x1800798F4 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800831C8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x18011FB88 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 */

void __fastcall PenWorkspace::Discover::RecentAppsCache::~RecentAppsCache(
        PenWorkspace::Discover::RecentAppsCache *this)
{
  void *v2; // rdx
  wil::details *v3; // rcx
  char *v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdi
  void *v8; // rcx
  void *v9; // rcx
  std::_Ref_count_base *v10; // rcx
  void *v11; // rcx
  _QWORD **v12; // rax
  _QWORD *v13; // rdi
  _QWORD *v14; // rcx
  std::_Ref_count_base *v15; // rcx
  _QWORD *v16; // rbp

  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)this + 208);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 24);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 23);
  v3 = (wil::details *)*((_QWORD *)this + 19);
  if ( v3 )
    wil::details::CloseHandle(v3, v2);
  v4 = (char *)*((_QWORD *)this + 18);
  if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v4);
  while ( 1 )
  {
    v5 = *((_QWORD *)this + 17);
    if ( !v5 )
      break;
    v6 = v5 - 1;
    *((_QWORD *)this + 17) = v6;
    if ( !v6 )
      *((_QWORD *)this + 16) = 0LL;
  }
  v7 = *((_QWORD *)this + 15);
  while ( v7 )
  {
    --v7;
    v8 = *(void **)(*((_QWORD *)this + 14) + 8 * v7);
    if ( v8 )
      std::_Deallocate<16,0>(v8, (const struct std::nothrow_t *)0xC);
  }
  v9 = (void *)*((_QWORD *)this + 14);
  if ( v9 )
    std::_Deallocate<16,0>(v9, (const struct std::nothrow_t *)(8LL * *((_QWORD *)this + 15)));
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  std::_Deallocate<16,0>(*((void **)this + 13), (const struct std::nothrow_t *)0x10);
  *((_QWORD *)this + 13) = 0LL;
  v10 = (std::_Ref_count_base *)*((_QWORD *)this + 12);
  if ( v10 )
    std::_Ref_count_base::_Decref(v10);
  v11 = (void *)*((_QWORD *)this + 5);
  if ( v11 )
  {
    std::_Deallocate<16,0>(
      v11,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 7) - (_QWORD)v11) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 5) = 0LL;
    *((_QWORD *)this + 6) = 0LL;
    *((_QWORD *)this + 7) = 0LL;
  }
  v12 = (_QWORD **)*((_QWORD *)this + 3);
  v13 = *v12;
  *v12 = v12;
  *(_QWORD *)(*((_QWORD *)this + 3) + 8LL) = *((_QWORD *)this + 3);
  *((_QWORD *)this + 4) = 0LL;
  v14 = (_QWORD *)*((_QWORD *)this + 3);
  if ( v13 != v14 )
  {
    do
    {
      v15 = (std::_Ref_count_base *)v13[7];
      v16 = (_QWORD *)*v13;
      if ( v15 )
        std::_Ref_count_base::_Decref(v15);
      std::wstring::_Tidy_deallocate(v13 + 2);
      std::_Deallocate<16,0>(v13, (const struct std::nothrow_t *)0x40);
      v14 = (_QWORD *)*((_QWORD *)this + 3);
      v13 = v16;
    }
    while ( v16 != v14 );
  }
  std::_Deallocate<16,0>(v14, (const struct std::nothrow_t *)0x40);
  *((_DWORD *)this + 3) = -1073741823;
}
