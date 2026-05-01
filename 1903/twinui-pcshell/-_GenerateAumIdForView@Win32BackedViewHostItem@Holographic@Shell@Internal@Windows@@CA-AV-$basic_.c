/*
 * XREFs of ?_GenerateAumIdForView@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@CA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAUIWin32ApplicationView@@@Z @ 0x180215510
 * Callers:
 *     ?RuntimeClassInitialize@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@QEAAJPEAUIApplicationView@@PEAUIServiceProvider@@@Z @ 0x180212C20 (-RuntimeClassInitialize@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@QEAAJPEAUIAp.c)
 * Callees:
 *     ?GetAppViewFileName@Win32ApplicationViewHelpers@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAUIWin32ApplicationView@@@Z @ 0x18000EEA4 (-GetAppViewFileName@Win32ApplicationViewHelpers@@YA-AV-$unique_any_t@V-$unique_storage@U-$resour.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x1800768E4 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008BBC0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18019E9EC (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ??$?6GU?$char_traits@G@std@@@std@@YAAEAV?$basic_ostream@GU?$char_traits@G@std@@@0@AEAV10@PEBG@Z @ 0x180208CF0 (--$-6GU-$char_traits@G@std@@@std@@YAAEAV-$basic_ostream@GU-$char_traits@G@std@@@0@AEAV10@PEBG@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG_K@Z @ 0x18020C7B0 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG_K@Z.c)
 *     ??0?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@H@Z @ 0x18020C7F8 (--0-$basic_stringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@H@Z.c)
 *     ??1?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UEAA@XZ @ 0x18020D218 (--1-$basic_stringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@UEAA@XZ.c)
 *     ?insert@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KQEBG0@Z @ 0x18021777C (-insert@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_KQEBG0@Z.c)
 *     ?str@?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@XZ @ 0x180218418 (-str@-$basic_stringbuf@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA-AV-$basic_string@GU-$c.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::_GenerateAumIdForView(
        _OWORD *a1,
        __int64 a2)
{
  int v3; // eax
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rax
  const char *v7; // r9
  int v8; // eax
  const void *v9; // rsi
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rbx
  __int64 v12; // rcx
  unsigned __int64 v13; // r9
  void **v14; // rax
  _QWORD *v15; // rdx
  __int128 v16; // xmm0
  const char *v17; // r9
  __int128 v18; // xmm0
  __int64 result; // rax
  LPVOID pv; // [rsp+20h] [rbp-1E8h] BYREF
  __int64 v21; // [rsp+28h] [rbp-1E0h]
  _OWORD *v22; // [rsp+30h] [rbp-1D8h]
  __int128 v23; // [rsp+38h] [rbp-1D0h] BYREF
  __int128 v24; // [rsp+48h] [rbp-1C0h]
  __int64 v25; // [rsp+58h] [rbp-1B0h]
  _DWORD v26[8]; // [rsp+60h] [rbp-1A8h] BYREF
  _BYTE v27[16]; // [rsp+80h] [rbp-188h] BYREF
  _BYTE v28[8]; // [rsp+90h] [rbp-178h] BYREF
  _BYTE v29[128]; // [rsp+98h] [rbp-170h] BYREF
  _BYTE v30[104]; // [rsp+118h] [rbp-F0h] BYREF
  _QWORD v31[2]; // [rsp+180h] [rbp-88h] BYREF
  unsigned __int64 v32; // [rsp+190h] [rbp-78h]
  unsigned __int64 v33; // [rsp+198h] [rbp-70h]
  __int128 v34; // [rsp+1A0h] [rbp-68h] BYREF
  __int128 v35; // [rsp+1B0h] [rbp-58h]
  _QWORD v36[4]; // [rsp+1C0h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+208h] [rbp+0h]

  v25 = -2LL;
  v22 = a1;
  v21 = 0LL;
  try
  {
    v3 = (*(__int64 (**)(void))(*(_QWORD *)a2 + 24LL))();
    if ( v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1008LL,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
        (const char *)(unsigned int)v3);
    Win32ApplicationViewHelpers::GetAppViewFileName(&pv);
    if ( !pv )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1011LL,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
        (const char *)0x80070057LL);
    std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>((__int64)v27);
    v4 = std::operator<<<unsigned short,std::char_traits<unsigned short>>((__int64)v28, (__int64)L"!HWND.");
    v5 = std::basic_ostream<unsigned short>::operator<<(v4, std::hex);
    std::basic_ios<unsigned short>::fill(v5 + *(int *)(*(_QWORD *)v5 + 4LL), 48LL);
    v6 = std::setw(&v23, 8LL);
    (*(void (__fastcall **)(__int64, _QWORD))v6)(v5 + *(int *)(*(_QWORD *)v5 + 4LL), *(_QWORD *)(v6 + 8));
    std::basic_ostream<unsigned short>::operator<<(v5, (unsigned int)v21);
    std::basic_ostream<unsigned short>::seekp(v28, 0LL, 2LL);
    std::basic_ostream<unsigned short>::tellp(v28, v26);
    v8 = 130 - v26[2] - v26[0];
    if ( v8 <= 0 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        1021LL,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
        v7);
    v9 = pv;
    v10 = -1LL;
    do
      ++v10;
    while ( *((_WORD *)pv + v10) );
    v11 = v8;
    if ( v8 >= v10 )
      v11 = v10;
    std::basic_stringbuf<unsigned short>::str(v29, v31);
    v12 = std::wstring::wstring((__int64)v36, v9, v11);
    v13 = *(_QWORD *)(v12 + 16);
    if ( v32 <= *(_QWORD *)(v12 + 24) - v13 || v33 - v32 < v13 )
    {
      v15 = v31;
      if ( v33 >= 8 )
        v15 = (_QWORD *)v31[0];
      v14 = std::wstring::append((void **)v12, v15, v32);
    }
    else
    {
      v14 = (void **)std::wstring::insert(v31);
    }
    v23 = *(_OWORD *)v14;
    v34 = v23;
    v16 = *((_OWORD *)v14 + 1);
    v14[2] = 0LL;
    v14[3] = (void *)7;
    *(_WORD *)v14 = 0;
    v35 = v16;
    v24 = v16;
    std::wstring::_Tidy_deallocate(v36);
    std::wstring::_Tidy_deallocate(v31);
    v18 = v24;
    if ( (unsigned __int64)v24 > 0x82 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        1028LL,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
        v17);
    *a1 = v23;
    a1[1] = v18;
    *(_QWORD *)&v35 = 0LL;
    *((_QWORD *)&v35 + 1) = 7LL;
    LOWORD(v34) = 0;
    std::wstring::_Tidy_deallocate(&v34);
    std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::~basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>((__int64)v30);
    std::basic_ios<unsigned short>::~basic_ios<unsigned short,std::char_traits<unsigned short>>(v30);
    if ( pv )
      CoTaskMemFree(pv);
    result = (__int64)a1;
  }
  catch ( ... )
  {
    std::wstring::wstring((__int64)v22, L"Win32BackedItem!App");
    return (__int64)v22;
  }
  return result;
}
