/*
 * XREFs of ?LoadShellLauncherConfiguration@KioskPositioner@@AEAAXXZ @ 0x18039D7B8
 * Callers:
 *     ?RuntimeClassInitialize@KioskPositioner@@QEAAJXZ @ 0x18039E5F8 (-RuntimeClassInitialize@KioskPositioner@@QEAAJXZ.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x1800863D8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180087898 (--2@YAPEAX_K@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?IsShellLauncherEnabledForCurrentUser@@YA_NXZ @ 0x180176014 (-IsShellLauncherEnabledForCurrentUser@@YA_NXZ.c)
 *     ??$ActivateInstance@UIShellLauncherManager@ShellLauncher@Shell@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIShellLauncherManager@ShellLauncher@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x18039A62C (--$ActivateInstance@UIShellLauncherManager@ShellLauncher@Shell@Internal@Windows@@@wil@@YA-AV-$co.c)
 *     ??0Win32PrimaryAppProxy@@QEAA@PEBG@Z @ 0x18039B4B0 (--0Win32PrimaryAppProxy@@QEAA@PEBG@Z.c)
 *     ??R?$default_delete@VPrimaryAppProxyBase@@@std@@QEBAXPEAVPrimaryAppProxyBase@@@Z @ 0x18039B8FC (--R-$default_delete@VPrimaryAppProxyBase@@@std@@QEBAXPEAVPrimaryAppProxyBase@@@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_KioskPositioner@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18039E538 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_KioskPositioner@@@wil@@CAX_NW4Report.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall KioskPositioner::LoadShellLauncherConfiguration(KioskPositioner *this)
{
  __int64 v2; // rcx
  bool v3; // al
  __int64 v4; // rax
  int v5; // eax
  int v6; // eax
  __int64 v7; // rax
  int v8; // eax
  unsigned __int16 *StringRawBuffer; // rsi
  Win32PrimaryAppProxy *v10; // rax
  __int64 v11; // rcx
  __int64 (__fastcall ***v12)(_QWORD, __int64); // rdx
  Win32PrimaryAppProxy *v13; // rbx
  int v14; // eax
  _QWORD v15[2]; // [rsp+20h] [rbp-28h] BYREF
  Win32PrimaryAppProxy *v16; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+20h]
  char v18; // [rsp+70h] [rbp+28h] BYREF
  int v19; // [rsp+78h] [rbp+30h] BYREF
  __int64 *v20; // [rsp+80h] [rbp+38h] BYREF
  HSTRING string; // [rsp+88h] [rbp+40h] BYREF

  v15[1] = -2LL;
  wil::Feature<__WilFeatureTraits_Feature_KioskPositioner>::ReportUsageToService();
  v3 = IsShellLauncherEnabledForCurrentUser(v2) != 0;
  *((_BYTE *)this + 632) = v3;
  if ( v3 )
  {
    wil::ActivateInstance<Windows::Internal::Shell::ShellLauncher::IShellLauncherManager>((__int64)v15);
    v20 = 0LL;
    v4 = *(_QWORD *)v15[0];
    v20 = 0LL;
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 **))(v4 + 48))(v15[0], 0LL, &v20);
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1071LL,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
        (const char *)(unsigned int)v5);
      __debugbreak();
    }
    v19 = -1;
    v6 = (*(__int64 (__fastcall **)(__int64 *, int *))(*v20 + 80))(v20, &v19);
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1073LL,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
        (const char *)(unsigned int)v6);
      __debugbreak();
    }
    string = 0LL;
    v7 = *v20;
    string = 0LL;
    v8 = (*(__int64 (__fastcall **)(__int64 *, HSTRING *))(v7 + 64))(v20, &string);
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1075LL,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
        (const char *)(unsigned int)v8);
      __debugbreak();
    }
    StringRawBuffer = (unsigned __int16 *)WindowsGetStringRawBuffer(string, 0LL);
    if ( v19 == 1 )
    {
      v16 = (Win32PrimaryAppProxy *)operator new(0x28uLL);
      v10 = Win32PrimaryAppProxy::Win32PrimaryAppProxy(v16, StringRawBuffer);
      v12 = (__int64 (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 80);
      *((_QWORD *)this + 80) = v10;
    }
    else
    {
      v13 = (Win32PrimaryAppProxy *)operator new(0x50uLL);
      v16 = v13;
      *(_QWORD *)v13 = &UwpPrimaryAppProxy::`vftable';
      std::wstring::wstring((__int64)v13 + 8, StringRawBuffer);
      *((_QWORD *)v13 + 5) = 0LL;
      *((_QWORD *)v13 + 6) = 0LL;
      *((_QWORD *)v13 + 7) = 0LL;
      *((_QWORD *)v13 + 8) = 0LL;
      *((_QWORD *)v13 + 9) = -1LL;
      v12 = (__int64 (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 80);
      *((_QWORD *)this + 80) = v13;
    }
    if ( v12 )
      std::default_delete<PrimaryAppProxyBase>::operator()(v11, v12);
    v14 = (*(__int64 (__fastcall **)(__int64 *, char *))(*v20 + 96))(v20, &v18);
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1086LL,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
        (const char *)(unsigned int)v14);
      __debugbreak();
    }
    *((_BYTE *)this + 633) = v18 != 0;
    if ( string )
      WindowsDeleteString(string);
    if ( v20 )
      (*(void (__fastcall **)(__int64 *))(*v20 + 16))(v20);
    if ( v15[0] )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v15[0] + 16LL))(v15[0]);
  }
}
