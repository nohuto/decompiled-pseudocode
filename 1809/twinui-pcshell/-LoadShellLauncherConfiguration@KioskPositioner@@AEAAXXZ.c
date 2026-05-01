/*
 * XREFs of ?LoadShellLauncherConfiguration@KioskPositioner@@AEAAXXZ @ 0x180098D14
 * Callers:
 *     ?RuntimeClassInitialize@KioskPositioner@@QEAAJXZ @ 0x180099B98 (-RuntimeClassInitialize@KioskPositioner@@QEAAJXZ.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180083640 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180084C08 (--2@YAPEAX_K@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsShellLauncherEnabledForCurrentUser@@YA_NXZ @ 0x18008D1F0 (-IsShellLauncherEnabledForCurrentUser@@YA_NXZ.c)
 *     ??$ActivateInstance@UIShellLauncherManager@ShellLauncher@Shell@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIShellLauncherManager@ShellLauncher@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x18009592C (--$ActivateInstance@UIShellLauncherManager@ShellLauncher@Shell@Internal@Windows@@@wil@@YA-AV-$co.c)
 *     ??0Win32PrimaryAppProxy@@QEAA@PEBG@Z @ 0x180096B20 (--0Win32PrimaryAppProxy@@QEAA@PEBG@Z.c)
 *     ??R?$default_delete@VPrimaryAppProxyBase@@@std@@QEBAXPEAVPrimaryAppProxyBase@@@Z @ 0x180096EC4 (--R-$default_delete@VPrimaryAppProxyBase@@@std@@QEBAXPEAVPrimaryAppProxyBase@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??1String@Internal@Windows@@QEAA@XZ @ 0x1800EBBA4 (--1String@Internal@Windows@@QEAA@XZ.c)
 *     ??I?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1?WindowsDeleteString@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAUHSTRING__@@XZ @ 0x1801990C8 (--I-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1-WindowsDele.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall KioskPositioner::LoadShellLauncherConfiguration(KioskPositioner *this)
{
  char v2; // al
  int v3; // eax
  wil::details::in1diag3 *v4; // rcx
  int v5; // eax
  __int64 *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rax
  int v9; // eax
  wil::details::in1diag3 *v10; // rcx
  unsigned __int16 *StringRawBuffer; // rdi
  Win32PrimaryAppProxy *v12; // rax
  __int64 v13; // rcx
  __int64 (__fastcall ***v14)(_QWORD, __int64); // rdx
  Win32PrimaryAppProxy *v15; // rbx
  int v16; // eax
  _QWORD v17[2]; // [rsp+20h] [rbp-28h] BYREF
  Win32PrimaryAppProxy *v18; // [rsp+30h] [rbp-18h]
  _QWORD *v19; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+20h]
  char v21; // [rsp+70h] [rbp+28h] BYREF
  int v22; // [rsp+78h] [rbp+30h] BYREF
  __int64 *v23; // [rsp+80h] [rbp+38h] BYREF
  HSTRING string; // [rsp+88h] [rbp+40h] BYREF

  v17[1] = -2LL;
  v2 = IsShellLauncherEnabledForCurrentUser((__int64)this);
  *((_BYTE *)this + 608) = v2;
  if ( !v2 )
    return;
  wil::ActivateInstance<Windows::Internal::Shell::ShellLauncher::IShellLauncherManager>((__int64)v17);
  v23 = 0LL;
  v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 **))(*(_QWORD *)v17[0] + 48LL))(v17[0], 0LL, &v23);
  v4 = retaddr;
  if ( v3 < 0 )
  {
LABEL_17:
    wil::details::in1diag3::Throw_Hr(
      v4,
      1091LL,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
      (const char *)(unsigned int)v3);
    __debugbreak();
  }
  v22 = -1;
  v5 = (*(__int64 (__fastcall **)(__int64 *, int *))(*v23 + 80))(v23, &v22);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      1093LL,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
      (const char *)(unsigned int)v5);
LABEL_19:
    wil::details::in1diag3::Throw_Hr(
      v10,
      1095LL,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
      (const char *)(unsigned int)v9);
    __debugbreak();
  }
  string = 0LL;
  v6 = v23;
  v7 = *v23;
  v8 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,0,std::nullptr_t>>>::operator&(&string);
  v9 = (*(__int64 (__fastcall **)(__int64 *, __int64))(v7 + 64))(v6, v8);
  v10 = retaddr;
  if ( v9 < 0 )
    goto LABEL_19;
  StringRawBuffer = (unsigned __int16 *)WindowsGetStringRawBuffer(string, 0LL);
  if ( v22 == 1 )
  {
    v18 = (Win32PrimaryAppProxy *)operator new(0x28uLL);
    v12 = Win32PrimaryAppProxy::Win32PrimaryAppProxy(v18, StringRawBuffer);
    v14 = (__int64 (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 77);
    *((_QWORD *)this + 77) = v12;
  }
  else
  {
    v15 = (Win32PrimaryAppProxy *)operator new(0x50uLL);
    v18 = v15;
    *(_QWORD *)v15 = &UwpPrimaryAppProxy::`vftable';
    v19 = (_QWORD *)((char *)v15 + 8);
    std::wstring::wstring((__int64)v15 + 8, StringRawBuffer);
    *((_QWORD *)v15 + 5) = 0LL;
    *((_QWORD *)v15 + 6) = 0LL;
    *((_QWORD *)v15 + 7) = 0LL;
    *((_QWORD *)v15 + 8) = 0LL;
    *((_QWORD *)v15 + 9) = -1LL;
    v14 = (__int64 (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 77);
    *((_QWORD *)this + 77) = v15;
  }
  if ( v14 )
    std::default_delete<PrimaryAppProxyBase>::operator()(v13, v14);
  v16 = (*(__int64 (__fastcall **)(__int64 *, char *))(*v23 + 96))(v23, &v21);
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      1106LL,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
      (const char *)(unsigned int)v16);
    goto LABEL_17;
  }
  *((_BYTE *)this + 609) = v21 != 0;
  Windows::Internal::String::~String((Windows::Internal::String *)&string);
  if ( v23 )
    (*(void (__fastcall **)(__int64 *))(*v23 + 16))(v23);
  if ( v17[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v17[0] + 16LL))(v17[0]);
}
