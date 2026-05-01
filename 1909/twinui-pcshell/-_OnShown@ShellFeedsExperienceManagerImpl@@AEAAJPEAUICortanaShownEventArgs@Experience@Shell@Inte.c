/*
 * XREFs of ?_OnShown@ShellFeedsExperienceManagerImpl@@AEAAJPEAUICortanaShownEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x180095600
 * Callers:
 *     ?OnShown@ShellFeedsExperienceManagerNotification@@UEAAXURect@Foundation@Windows@@@Z @ 0x180094180 (-OnShown@ShellFeedsExperienceManagerNotification@@UEAAXURect@Foundation@Windows@@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180039514 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180043620 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_TlgProvider_t@@XZ @ 0x1800942E8 (-Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_TlgProvider_t@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ShellFeedsExperienceManagerImpl::_OnShown(
        ShellFeedsExperienceManagerImpl *this,
        struct Windows::Internal::Shell::Experience::ICortanaShownEventArgs *a2)
{
  const struct _TlgProvider_t *v3; // rcx
  const struct _TlgProvider_t *v4; // rcx
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, PVOID, _QWORD); // rbx
  HSTRING_HEADER *v7; // rax
  int v8; // eax
  unsigned int v9; // ebx
  _QWORD v11[2]; // [rsp+30h] [rbp-58h] BYREF
  HSTRING_HEADER pData; // [rsp+40h] [rbp-48h] BYREF
  _QWORD *v13; // [rsp+60h] [rbp-28h]
  int v14; // [rsp+68h] [rbp-20h]
  int v15; // [rsp+6Ch] [rbp-1Ch]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v11[1] = -2LL;
  v3 = FeedsMicrosoftTelemetryProvider::Provider((__int64)this);
  if ( *(_DWORD *)v3 > 5u && TlgKeywordOn(v3, 0x200000000000uLL) )
  {
    v11[0] = 0x1000000LL;
    v13 = v11;
    v14 = 8;
    v15 = 0;
    TlgWrite(v4, &unk_1804EAB45, 0LL, 0LL, 3u, (EVENT_DATA_DESCRIPTOR *)&pData);
  }
  *((_BYTE *)this + 153) = 1;
  v5 = *((_QWORD *)this + 13);
  if ( !v5 )
    return 0LL;
  v6 = *(__int64 (__fastcall **)(__int64, PVOID, _QWORD))(*(_QWORD *)v5 + 120LL);
  v7 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&pData, (const WCHAR **)off_1804514A8);
  v8 = v6(v5, v7[1].Reserved.Reserved1, 0LL);
  v9 = v8;
  if ( v8 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x231,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsexperiencemanager.cpp",
    (const char *)(unsigned int)v8);
  return v9;
}
