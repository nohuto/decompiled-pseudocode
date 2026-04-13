/*
 * XREFs of ?MakeSetLockScreenHotspotsService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x180097D60
 * Callers:
 *     <none>
 * Callees:
 *     ??$GetOptionalParameter@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Actions@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@3@PEB_W@Z @ 0x1800841F0 (--$GetOptionalParameter@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@Action.c)
 *     ??$GetRequiredParameter@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Actions@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@3@PEB_W@Z @ 0x180084334 (--$GetRequiredParameter@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@Action.c)
 *     ??$_Resetp@VAppInstallService@Actions@CreativeFramework@@@?$shared_ptr@VAppInstallService@Actions@CreativeFramework@@@std@@AEAAXPEAVAppInstallService@Actions@CreativeFramework@@@Z @ 0x1800844E0 (--$_Resetp@VAppInstallService@Actions@CreativeFramework@@@-$shared_ptr@VAppInstallService@Action.c)
 *     ??0SetLockScreenHotspotsService@Actions@CreativeFramework@@QEAA@PEB_W000@Z @ 0x180097034 (--0SetLockScreenHotspotsService@Actions@CreativeFramework@@QEAA@PEB_W000@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800ADD48 (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800CA900 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=9
_QWORD *__fastcall CreativeFramework::Actions::MakeSetLockScreenHotspotsService(_QWORD *a1, __int64 a2, void ***a3)
{
  char v5; // bl
  CreativeFramework::Actions::SetLockScreenHotspotsService *v6; // r12
  void **v7; // r15
  void **v8; // rsi
  void **v9; // r14
  __int64 v10; // rax
  CreativeFramework::Actions::SetLockScreenHotspotsService *v11; // rax
  char v12; // bl
  int v14[2]; // [rsp+50h] [rbp-61h] BYREF
  __int64 v15; // [rsp+60h] [rbp-51h]
  unsigned __int64 v16; // [rsp+68h] [rbp-49h]
  void *v17[3]; // [rsp+70h] [rbp-41h] BYREF
  unsigned __int64 v18; // [rsp+88h] [rbp-29h]
  void *v19[3]; // [rsp+90h] [rbp-21h] BYREF
  unsigned __int64 v20; // [rsp+A8h] [rbp-9h]
  void *v21[4]; // [rsp+B0h] [rbp-1h] BYREF

  v5 = 0;
  v6 = (CreativeFramework::Actions::SetLockScreenHotspotsService *)operator new(0x80uLL);
  if ( v6 )
  {
    v7 = CreativeFramework::Actions::GetOptionalParameter<std::wstring>(v21, a3, (char *)L"showImageOnSecureLock");
    v8 = CreativeFramework::Actions::GetOptionalParameter<std::wstring>(v19, a3, (char *)L"portraitImage");
    v9 = CreativeFramework::Actions::GetOptionalParameter<std::wstring>(v17, a3, (char *)L"landscapeImage");
    v10 = CreativeFramework::Actions::GetRequiredParameter<std::wstring>((__int64)v14, a3, (char *)L"ctx.contentId");
    v5 = 15;
    if ( (unsigned __int64)v7[3] >= 8 )
      v7 = (void **)*v7;
    if ( (unsigned __int64)v8[3] >= 8 )
      v8 = (void **)*v8;
    if ( (unsigned __int64)v9[3] >= 8 )
      v9 = (void **)*v9;
    if ( *(_QWORD *)(v10 + 24) >= 8uLL )
      v10 = *(_QWORD *)v10;
    v11 = CreativeFramework::Actions::SetLockScreenHotspotsService::SetLockScreenHotspotsService(
            v6,
            (wchar_t *)v10,
            (wchar_t *)v9,
            (wchar_t *)v8,
            (const wchar_t *)v7);
  }
  else
  {
    v11 = 0LL;
  }
  *a1 = 0LL;
  a1[1] = 0LL;
  std::shared_ptr<CreativeFramework::Actions::AppInstallService>::_Resetp<CreativeFramework::Actions::AppInstallService>(
    a1,
    (void (__fastcall ***)(_QWORD, __int64))v11);
  v12 = v5 | 0x10;
  if ( (v12 & 8) != 0 )
  {
    v12 &= ~8u;
    if ( v16 >= 8 )
      operator delete(*(void **)v14);
    v16 = 7LL;
    v15 = 0LL;
    LOWORD(v14[0]) = 0;
  }
  if ( (v12 & 4) != 0 )
  {
    v12 &= ~4u;
    if ( v18 >= 8 )
      operator delete(v17[0]);
    v18 = 7LL;
    v17[2] = 0LL;
    LOWORD(v17[0]) = 0;
  }
  if ( (v12 & 2) != 0 )
  {
    v12 &= ~2u;
    if ( v20 >= 8 )
      operator delete(v19[0]);
    v20 = 7LL;
    v19[2] = 0LL;
    LOWORD(v19[0]) = 0;
  }
  if ( (v12 & 1) != 0 && v21[3] >= (void *)8 )
    operator delete(v21[0]);
  return a1;
}
