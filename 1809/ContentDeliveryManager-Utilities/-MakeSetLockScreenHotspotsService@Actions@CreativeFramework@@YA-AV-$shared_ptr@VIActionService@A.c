/*
 * XREFs of ?MakeSetLockScreenHotspotsService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x180094290
 * Callers:
 *     <none>
 * Callees:
 *     ??$GetOptionalParameter@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Actions@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@3@PEB_W@Z @ 0x1800824E0 (--$GetOptionalParameter@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@Action.c)
 *     ??$GetRequiredParameter@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Actions@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@3@PEB_W@Z @ 0x180082620 (--$GetRequiredParameter@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@Action.c)
 *     ??$_Resetp@VAppInstallService@Actions@CreativeFramework@@@?$shared_ptr@VAppInstallService@Actions@CreativeFramework@@@std@@AEAAXPEAVAppInstallService@Actions@CreativeFramework@@@Z @ 0x1800827C8 (--$_Resetp@VAppInstallService@Actions@CreativeFramework@@@-$shared_ptr@VAppInstallService@Action.c)
 *     ??0SetLockScreenHotspotsService@Actions@CreativeFramework@@QEAA@PEB_W000@Z @ 0x180093568 (--0SetLockScreenHotspotsService@Actions@CreativeFramework@@QEAA@PEB_W000@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800A9DC8 (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=9
_QWORD *__fastcall CreativeFramework::Actions::MakeSetLockScreenHotspotsService(_QWORD *a1, __int64 a2, _QWORD *a3)
{
  char v5; // bl
  CreativeFramework::Actions::SetLockScreenHotspotsService *v6; // r12
  const wchar_t *v7; // r15
  wchar_t *v8; // rsi
  wchar_t *v9; // r14
  void **v10; // rax
  CreativeFramework::Actions::SetLockScreenHotspotsService *v11; // rax
  char v12; // bl
  void *v14[3]; // [rsp+50h] [rbp-61h] BYREF
  unsigned __int64 v15; // [rsp+68h] [rbp-49h]
  void *v16[3]; // [rsp+70h] [rbp-41h] BYREF
  unsigned __int64 v17; // [rsp+88h] [rbp-29h]
  void *v18[3]; // [rsp+90h] [rbp-21h] BYREF
  unsigned __int64 v19; // [rsp+A8h] [rbp-9h]
  void *v20[4]; // [rsp+B0h] [rbp-1h] BYREF

  v5 = 0;
  v6 = (CreativeFramework::Actions::SetLockScreenHotspotsService *)operator new(0x80uLL);
  if ( v6 )
  {
    v7 = (const wchar_t *)CreativeFramework::Actions::GetOptionalParameter<std::wstring>(
                            v20,
                            a3,
                            (char *)L"showImageOnSecureLock");
    v8 = (wchar_t *)CreativeFramework::Actions::GetOptionalParameter<std::wstring>(v18, a3, (char *)L"portraitImage");
    v9 = (wchar_t *)CreativeFramework::Actions::GetOptionalParameter<std::wstring>(v16, a3, (char *)L"landscapeImage");
    v10 = CreativeFramework::Actions::GetRequiredParameter<std::wstring>(v14, a3, (char *)L"ctx.contentId");
    v5 = 15;
    if ( *((_QWORD *)v7 + 3) >= 8uLL )
      v7 = *(const wchar_t **)v7;
    if ( *((_QWORD *)v8 + 3) >= 8uLL )
      v8 = *(wchar_t **)v8;
    if ( *((_QWORD *)v9 + 3) >= 8uLL )
      v9 = *(wchar_t **)v9;
    if ( (unsigned __int64)v10[3] >= 8 )
      v10 = (void **)*v10;
    v11 = CreativeFramework::Actions::SetLockScreenHotspotsService::SetLockScreenHotspotsService(
            v6,
            (wchar_t *)v10,
            v9,
            v8,
            v7);
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
    if ( v15 >= 8 )
      operator delete(v14[0]);
    v15 = 7LL;
    v14[2] = 0LL;
    LOWORD(v14[0]) = 0;
  }
  if ( (v12 & 4) != 0 )
  {
    v12 &= ~4u;
    if ( v17 >= 8 )
      operator delete(v16[0]);
    v17 = 7LL;
    v16[2] = 0LL;
    LOWORD(v16[0]) = 0;
  }
  if ( (v12 & 2) != 0 )
  {
    v12 &= ~2u;
    if ( v19 >= 8 )
      operator delete(v18[0]);
    v19 = 7LL;
    v18[2] = 0LL;
    LOWORD(v18[0]) = 0;
  }
  if ( (v12 & 1) != 0 && v20[3] >= (void *)8 )
    operator delete(v20[0]);
  return a1;
}
