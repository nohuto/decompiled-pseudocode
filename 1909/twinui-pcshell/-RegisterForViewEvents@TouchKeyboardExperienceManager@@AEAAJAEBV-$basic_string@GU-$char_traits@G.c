/*
 * XREFs of ?RegisterForViewEvents@TouchKeyboardExperienceManager@@AEAAJAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1803330DC
 * Callers:
 *     _lambda_344d118cde8247a665c09f3d1d41eb56_::operator() @ 0x1800A9F74 (_lambda_344d118cde8247a665c09f3d1d41eb56_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?c_str@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAPEBGXZ @ 0x1800904C0 (-c_str@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAPEBGXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18012C2C8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHandler@PEAUIViewWrapper.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TouchKeyboardExperienceManager::RegisterForViewEvents(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // rbx
  int v5; // eax
  unsigned int v6; // ebx
  char *v7; // rdi
  char *v8; // rax
  char *v9; // rbx
  const WCHAR *v10; // rax
  const WCHAR *v11; // rsi
  __int64 v12; // r15
  unsigned __int64 v13; // rbx
  int v14; // eax
  __int64 v16; // [rsp+30h] [rbp-50h] BYREF
  __int128 v17; // [rsp+38h] [rbp-48h] BYREF
  __int64 v18; // [rsp+48h] [rbp-38h]
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v18 = -2LL;
  v16 = 0LL;
  v4 = a1[42];
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
  v5 = (*(__int64 (__fastcall **)(__int64, GUID *, GUID *, __int64 *))(*(_QWORD *)v4 + 24LL))(
         v4,
         &SID_ViewEventDispatcher,
         &GUID_f5ef6433_2dc3_4aeb_b387_7c6cba1c012e,
         &v16);
  v6 = v5;
  if ( v5 >= 0 )
  {
    *(_QWORD *)&v17 = TouchKeyboardExperienceManager::OnViewEvent;
    DWORD2(v17) = 0;
    hstringHeader.Reserved.Reserved1 = a1;
    *(_OWORD *)&hstringHeader.Reserved.Reserved2[8] = v17;
    v7 = 0LL;
    v8 = (char *)operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
    v9 = v8;
    if ( v8 )
    {
      Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *>>((__int64)v8);
      *(HSTRING_HEADER *)(v9 + 16) = hstringHeader;
      *(_QWORD *)v9 = off_18045CC50;
      v7 = v9;
    }
    *(_QWORD *)&v17 = v7;
    v10 = (const WCHAR *)std::wstring::c_str(a2);
    v11 = v10;
    v12 = v16;
    v13 = -1LL;
    do
      ++v13;
    while ( v10[v13] );
    if ( v13 > 0xFFFFFFFF )
    {
      LODWORD(v13) = -1;
      RaiseException(0xC000000D, 1u, 0, 0LL);
    }
    WindowsCreateStringReference(
      v11,
      v13,
      (HSTRING_HEADER *)&hstringHeader.Reserved.Reserved2[8],
      (HSTRING *)&hstringHeader);
    v14 = (*(__int64 (__fastcall **)(__int64, char *, PVOID, _QWORD, _QWORD *))(*(_QWORD *)v12 + 48LL))(
            v12,
            v7,
            hstringHeader.Reserved.Reserved1,
            0LL,
            a1 + 32);
    v6 = v14;
    if ( v14 >= 0 )
      v6 = 0;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x804,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v14);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7FD,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
  return v6;
}
