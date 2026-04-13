/*
 * XREFs of ??0LaunchUriService@Actions@CreativeFramework@@QEAA@QEB_WPEB_W1AEBV?$com_ptr_t@U?$IMapView@W4WindowPosition@ContentManagement@@I@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@0_N@Z @ 0x18008A6CC
 * Callers:
 *     ?MakeLaunchUriService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x18008B390 (-MakeLaunchUriService@Actions@CreativeFramework@@YA-AV-$shared_ptr@VIActionService@Actions@Creat.c)
 * Callees:
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x180067CBC (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CreativeFramework::Actions::LaunchUriService::LaunchUriService(
        __int64 a1,
        char *a2,
        char *a3,
        char *a4,
        __int64 *a5,
        const WCHAR *lpString2,
        char a7)
{
  _QWORD *v10; // rcx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rax
  wchar_t **v16; // rdi
  int v17; // eax

  *(_QWORD *)a1 = &CreativeFramework::Actions::LaunchUriService::`vftable';
  v10 = (_QWORD *)(a1 + 8);
  v10[3] = 7LL;
  v10[2] = 0LL;
  *(_WORD *)v10 = 0;
  if ( *(_WORD *)a2 )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( *(_WORD *)&a2[2 * v11] );
  }
  else
  {
    v11 = 0LL;
  }
  std::wstring::assign(v10, a2, v11);
  *(_QWORD *)(a1 + 64) = 7LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_WORD *)(a1 + 40) = 0;
  if ( *(_WORD *)a3 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( *(_WORD *)&a3[2 * v12] );
  }
  else
  {
    v12 = 0LL;
  }
  std::wstring::assign((_QWORD *)(a1 + 40), a3, v12);
  *(_QWORD *)(a1 + 96) = 7LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_WORD *)(a1 + 72) = 0;
  if ( *(_WORD *)a4 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( *(_WORD *)&a4[2 * v13] );
  }
  else
  {
    v13 = 0LL;
  }
  std::wstring::assign((_QWORD *)(a1 + 72), a4, v13);
  v14 = *a5;
  *(_QWORD *)(a1 + 104) = *a5;
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
  *(_BYTE *)(a1 + 112) = 0;
  *(_BYTE *)(a1 + 113) = a7;
  if ( *(_QWORD *)(a1 + 56) )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( lpString2[v15] );
    if ( v15 )
    {
      v16 = &off_18018D900;
      while ( CompareStringOrdinal(*v16, -1, lpString2, -1, 1) != 2 )
      {
        v16 += 2;
        if ( v16 == &off_18018D9A0 )
        {
          v17 = 1;
          goto LABEL_24;
        }
      }
      v17 = *((_DWORD *)v16 + 2);
LABEL_24:
      *(_DWORD *)(a1 + 116) = v17;
      *(_BYTE *)(a1 + 112) = 1;
    }
  }
  return a1;
}
