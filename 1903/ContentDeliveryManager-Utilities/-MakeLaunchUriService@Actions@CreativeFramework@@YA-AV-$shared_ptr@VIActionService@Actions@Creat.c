/*
 * XREFs of ?MakeLaunchUriService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x18008B390
 * Callers:
 *     <none>
 * Callees:
 *     ??$GetOptionalParameter@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Actions@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@3@PEB_W@Z @ 0x1800841F0 (--$GetOptionalParameter@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@Action.c)
 *     ??$GetRequiredParameter@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Actions@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@3@PEB_W@Z @ 0x180084334 (--$GetRequiredParameter@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@Action.c)
 *     ??$_Resetp@VAppInstallService@Actions@CreativeFramework@@@?$shared_ptr@VAppInstallService@Actions@CreativeFramework@@@std@@AEAAXPEAVAppInstallService@Actions@CreativeFramework@@@Z @ 0x1800844E0 (--$_Resetp@VAppInstallService@Actions@CreativeFramework@@@-$shared_ptr@VAppInstallService@Action.c)
 *     ??0LaunchUriService@Actions@CreativeFramework@@QEAA@QEB_WPEB_W1AEBV?$com_ptr_t@U?$IMapView@W4WindowPosition@ContentManagement@@I@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@0_N@Z @ 0x18008A6CC (--0LaunchUriService@Actions@CreativeFramework@@QEAA@QEB_WPEB_W1AEBV-$com_ptr_t@U-$IMapView@W4Win.c)
 *     ?GetPositionParameters@Actions@CreativeFramework@@YA?AV?$com_ptr_t@U?$IMapView@W4WindowPosition@ContentManagement@@I@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@std@@@Z @ 0x18008ADDC (-GetPositionParameters@Actions@CreativeFramework@@YA-AV-$com_ptr_t@U-$IMapView@W4WindowPosition@.c)
 *     ?ResolveTargetPackageFamilyNameForLaunch@Actions@CreativeFramework@@YA?AUAppIdInfo@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@std@@@Z @ 0x18008B1F0 (-ResolveTargetPackageFamilyNameForLaunch@Actions@CreativeFramework@@YA-AUAppIdInfo@12@AEBV-$map@.c)
 *     ??$?8_WU?$char_traits@_W@std@@V?$allocator@_W@1@@std@@YA_NAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@0@PEB_W@Z @ 0x18008C220 (--$-8_WU-$char_traits@_W@std@@V-$allocator@_W@1@@std@@YA_NAEBV-$basic_string@_WU-$char_traits@_W.c)
 *     ??2@YAPEAX_K@Z @ 0x1800ADD48 (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800CA900 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11
_QWORD *__fastcall CreativeFramework::Actions::MakeLaunchUriService(_QWORD *a1, __int64 a2, void ***a3)
{
  char v5; // di
  void **v6; // rax
  char v7; // r13
  void *v8; // r15
  __int64 v9; // rbx
  void **v10; // r14
  __int64 v11; // rax
  char *v12; // r9
  char *v13; // r8
  void (__fastcall ***v14)(_QWORD, __int64); // rax
  char v15; // di
  __int64 v17; // [rsp+50h] [rbp-91h] BYREF
  _QWORD v18[3]; // [rsp+58h] [rbp-89h] BYREF
  void *v19[3]; // [rsp+70h] [rbp-71h] BYREF
  unsigned __int64 v20; // [rsp+88h] [rbp-59h]
  void *v21[3]; // [rsp+98h] [rbp-49h] BYREF
  unsigned __int64 v22; // [rsp+B0h] [rbp-31h]
  void *v23[3]; // [rsp+B8h] [rbp-29h] BYREF
  unsigned __int64 v24; // [rsp+D0h] [rbp-11h]
  int v25[2]; // [rsp+D8h] [rbp-9h] BYREF
  __int64 v26; // [rsp+E8h] [rbp+7h]
  unsigned __int64 v27; // [rsp+F0h] [rbp+Fh]

  v18[1] = -2LL;
  v18[0] = a1;
  v5 = 0;
  CreativeFramework::Actions::ResolveTargetPackageFamilyNameForLaunch((__int64)v21, a3);
  v6 = CreativeFramework::Actions::GetOptionalParameter<std::wstring>(v19, a3, (char *)L"targetPackage");
  v7 = std::operator==<wchar_t>(v6, L"true");
  if ( v20 >= 8 )
    operator delete(v19[0]);
  v8 = operator new(0x78uLL);
  v18[2] = v8;
  if ( v8 )
  {
    v9 = *CreativeFramework::Actions::GetPositionParameters(v18, a3);
    v17 = v9;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
    v10 = CreativeFramework::Actions::GetOptionalParameter<std::wstring>(v19, a3, (char *)L"showCmd");
    v11 = CreativeFramework::Actions::GetRequiredParameter<std::wstring>((__int64)v25, a3, (char *)L"uri");
    v5 = 15;
    if ( (unsigned __int64)v10[3] >= 8 )
      v10 = (void **)*v10;
    v12 = (char *)v23;
    if ( v24 >= 8 )
      v12 = (char *)v23[0];
    v13 = (char *)v21;
    if ( v22 >= 8 )
      v13 = (char *)v21[0];
    if ( *(_QWORD *)(v11 + 24) >= 8uLL )
      v11 = *(_QWORD *)v11;
    v14 = (void (__fastcall ***)(_QWORD, __int64))CreativeFramework::Actions::LaunchUriService::LaunchUriService(
                                                    (__int64)v8,
                                                    (char *)v11,
                                                    v13,
                                                    v12,
                                                    &v17,
                                                    (const WCHAR *)v10,
                                                    v7);
  }
  else
  {
    v14 = 0LL;
    v9 = v17;
  }
  *a1 = 0LL;
  a1[1] = 0LL;
  std::shared_ptr<CreativeFramework::Actions::AppInstallService>::_Resetp<CreativeFramework::Actions::AppInstallService>(
    a1,
    v14);
  v15 = v5 | 0x10;
  if ( (v15 & 8) != 0 )
  {
    v15 &= ~8u;
    if ( v27 >= 8 )
      operator delete(*(void **)v25);
    v27 = 7LL;
    v26 = 0LL;
    LOWORD(v25[0]) = 0;
  }
  if ( (v15 & 4) != 0 )
  {
    v15 &= ~4u;
    if ( v20 >= 8 )
      operator delete(v19[0]);
    v20 = 7LL;
    v19[2] = 0LL;
    LOWORD(v19[0]) = 0;
  }
  if ( (v15 & 2) != 0 )
  {
    v15 &= ~2u;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  if ( (v15 & 1) != 0 && v18[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v18[0] + 16LL))(v18[0]);
  if ( v24 >= 8 )
    operator delete(v23[0]);
  v24 = 7LL;
  v23[2] = 0LL;
  LOWORD(v23[0]) = 0;
  if ( v22 >= 8 )
    operator delete(v21[0]);
  return a1;
}
