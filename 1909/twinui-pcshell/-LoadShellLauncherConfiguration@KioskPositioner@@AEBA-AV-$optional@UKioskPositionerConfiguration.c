/*
 * XREFs of ?LoadShellLauncherConfiguration@KioskPositioner@@AEBA?AV?$optional@UKioskPositionerConfiguration@KioskPositioner@@@std@@XZ @ 0x1800AD8C4
 * Callers:
 *     ?RuntimeClassInitialize@KioskPositioner@@QEAAJXZ @ 0x1803BDB28 (-RuntimeClassInitialize@KioskPositioner@@QEAAJXZ.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180088E58 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18008A3D8 (--2@YAPEAX_K@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1?WindowsDeleteString@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18012DBB4 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1-WindowsDele.c)
 *     ?IsShellLauncherEnabledForCurrentUser@@YA_NXZ @ 0x18019520C (-IsShellLauncherEnabledForCurrentUser@@YA_NXZ.c)
 *     ??I?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1?WindowsDeleteString@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAUHSTRING__@@XZ @ 0x1801FF1E4 (--I-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1-WindowsDele.c)
 *     ??$ActivateInstance@UIShellLauncherManager@ShellLauncher@Shell@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIShellLauncherManager@ShellLauncher@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x1803B9F0C (--$ActivateInstance@UIShellLauncherManager@ShellLauncher@Shell@Internal@Windows@@@wil@@YA-AV-$co.c)
 *     ??0Win32PrimaryAppProxy@@QEAA@PEBG@Z @ 0x1803BADA8 (--0Win32PrimaryAppProxy@@QEAA@PEBG@Z.c)
 */

// Hidden C++ exception states: #wind=7
Win32PrimaryAppProxy **__fastcall KioskPositioner::LoadShellLauncherConfiguration(
        __int64 a1,
        Win32PrimaryAppProxy **a2)
{
  __int64 v3; // rax
  int v4; // eax
  wil::details::in1diag3 *v5; // rcx
  int v6; // eax
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64, __int64); // rdi
  __int64 v9; // rax
  int v10; // eax
  wil::details::in1diag3 *v11; // rcx
  unsigned __int16 *StringRawBuffer; // rdi
  Win32PrimaryAppProxy *v13; // rbx
  int v14; // eax
  bool v15; // al
  HSTRING string; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v18[2]; // [rsp+28h] [rbp-28h] BYREF
  Win32PrimaryAppProxy *v19; // [rsp+38h] [rbp-18h]
  Win32PrimaryAppProxy *v20; // [rsp+40h] [rbp-10h]
  bool v21; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  __int64 v23; // [rsp+80h] [rbp+30h] BYREF
  int v24; // [rsp+90h] [rbp+40h] BYREF
  __int64 v25; // [rsp+98h] [rbp+48h] BYREF

  v23 = a1;
  v18[1] = -2LL;
  if ( !IsShellLauncherEnabledForCurrentUser() )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
    a2[2] = 0LL;
    *(_BYTE *)a2 = 0;
    *((_BYTE *)a2 + 16) = 0;
    return a2;
  }
  v20 = 0LL;
  v21 = 0;
  wil::ActivateInstance<Windows::Internal::Shell::ShellLauncher::IShellLauncherManager>(v18);
  v25 = 0LL;
  v3 = *(_QWORD *)v18[0];
  v25 = 0LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(v3 + 48))(v18[0], 0LL, &v25);
  v5 = retaddr;
  if ( v4 < 0 )
  {
LABEL_16:
    wil::details::in1diag3::Throw_Hr(
      v5,
      1080LL,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  v24 = -1;
  v6 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v25 + 80LL))(v25, &v24);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      1082LL,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
      (const char *)(unsigned int)v6);
LABEL_18:
    wil::details::in1diag3::Throw_Hr(
      v11,
      1084LL,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
      (const char *)(unsigned int)v10);
    __debugbreak();
  }
  string = 0LL;
  v7 = v25;
  v8 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v25 + 64LL);
  v9 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>>::operator&(&string);
  v10 = v8(v7, v9);
  v11 = retaddr;
  if ( v10 < 0 )
    goto LABEL_18;
  StringRawBuffer = (unsigned __int16 *)WindowsGetStringRawBuffer(string, 0LL);
  if ( v24 == 1 )
  {
    v19 = (Win32PrimaryAppProxy *)operator new(0x28uLL);
    v13 = Win32PrimaryAppProxy::Win32PrimaryAppProxy(v19, StringRawBuffer);
  }
  else
  {
    v13 = (Win32PrimaryAppProxy *)operator new(0x50uLL);
    v19 = v13;
    *(_QWORD *)v13 = &UwpPrimaryAppProxy::`vftable';
    std::wstring::wstring((__int64)v13 + 8, StringRawBuffer);
    *((_QWORD *)v13 + 5) = 0LL;
    *((_QWORD *)v13 + 6) = 0LL;
    *((_QWORD *)v13 + 7) = 0LL;
    *((_QWORD *)v13 + 8) = 0LL;
    *((_QWORD *)v13 + 9) = -1LL;
  }
  v20 = v13;
  v14 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v25 + 96LL))(v25, &v23);
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      1095LL,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
      (const char *)(unsigned int)v14);
    goto LABEL_16;
  }
  v15 = (_BYTE)v23 != 0;
  v21 = (_BYTE)v23 != 0;
  v20 = 0LL;
  *a2 = v13;
  *((_BYTE *)a2 + 8) = v15;
  *((_BYTE *)a2 + 16) = 1;
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>>(&string);
  if ( v25 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  if ( v18[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v18[0] + 16LL))(v18[0]);
  return a2;
}
