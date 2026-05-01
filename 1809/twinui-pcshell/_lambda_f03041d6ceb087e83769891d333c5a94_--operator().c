/*
 * XREFs of _lambda_f03041d6ceb087e83769891d333c5a94_::operator() @ 0x180249B60
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f03041d6ceb087e83769891d333c5a94___::Run @ 0x18024AD20 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_f03041d6ceb087e83769891d333c5a94___--.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800806E0 (-reset@-$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?WindowEventDispatcher_WindowManagerWatcherDisconnected@ViewManagerInteropTraceLogging@@SAXXZ @ 0x18024BBD4 (-WindowEventDispatcher_WindowManagerWatcherDisconnected@ViewManagerInteropTraceLogging@@SAXXZ.c)
 */

__int64 __fastcall lambda_f03041d6ceb087e83769891d333c5a94_::operator()(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  const char *v18; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *(_BYTE *)(*(_QWORD *)a1 + 64LL) = 0;
  v2 = *(_QWORD *)(*(_QWORD *)a1 + 56LL);
  try
  {
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 56LL))(v2);
    if ( v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        385LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v3);
    v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 56LL) + 72LL))(
           *(_QWORD *)(*(_QWORD *)a1 + 56LL),
           *(_QWORD *)(*(_QWORD *)a1 + 80LL));
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        386LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v4);
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 56LL) + 88LL))(
           *(_QWORD *)(*(_QWORD *)a1 + 56LL),
           *(_QWORD *)(*(_QWORD *)a1 + 88LL));
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        387LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v5);
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 56LL) + 104LL))(
           *(_QWORD *)(*(_QWORD *)a1 + 56LL),
           *(_QWORD *)(*(_QWORD *)a1 + 96LL));
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        388LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v6);
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 56LL) + 120LL))(
           *(_QWORD *)(*(_QWORD *)a1 + 56LL),
           *(_QWORD *)(*(_QWORD *)a1 + 104LL));
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        389LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v7);
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 56LL) + 136LL))(
           *(_QWORD *)(*(_QWORD *)a1 + 56LL),
           *(_QWORD *)(*(_QWORD *)a1 + 112LL));
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        390LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v8);
    v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 56LL) + 200LL))(
           *(_QWORD *)(*(_QWORD *)a1 + 56LL),
           *(_QWORD *)(*(_QWORD *)a1 + 120LL));
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        391LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v9);
    v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 56LL) + 264LL))(
            *(_QWORD *)(*(_QWORD *)a1 + 56LL),
            *(_QWORD *)(*(_QWORD *)a1 + 128LL));
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        392LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v10);
    v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 56LL) + 280LL))(
            *(_QWORD *)(*(_QWORD *)a1 + 56LL),
            *(_QWORD *)(*(_QWORD *)a1 + 136LL));
    if ( v11 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        393LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v11);
    v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 56LL) + 296LL))(
            *(_QWORD *)(*(_QWORD *)a1 + 56LL),
            *(_QWORD *)(*(_QWORD *)a1 + 144LL));
    if ( v12 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        394LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v12);
    v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 56LL) + 312LL))(
            *(_QWORD *)(*(_QWORD *)a1 + 56LL),
            *(_QWORD *)(*(_QWORD *)a1 + 152LL));
    if ( v13 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        395LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v13);
    v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 56LL) + 328LL))(
            *(_QWORD *)(*(_QWORD *)a1 + 56LL),
            *(_QWORD *)(*(_QWORD *)a1 + 160LL));
    if ( v14 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        396LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v14);
    v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 56LL) + 408LL))(
            *(_QWORD *)(*(_QWORD *)a1 + 56LL),
            *(_QWORD *)(*(_QWORD *)a1 + 168LL));
    if ( v15 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        397LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v15);
    v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 56LL) + 152LL))(
            *(_QWORD *)(*(_QWORD *)a1 + 56LL),
            *(_QWORD *)(*(_QWORD *)a1 + 176LL));
    if ( v16 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        398LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v16);
    v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 56LL) + 184LL))(
            *(_QWORD *)(*(_QWORD *)a1 + 56LL),
            *(_QWORD *)(*(_QWORD *)a1 + 184LL));
    if ( v17 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        399LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v17);
    wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset((__int64 *)(*(_QWORD *)a1 + 56LL));
    *(_BYTE *)(*(_QWORD *)a1 + 264LL) = 0;
    ViewManagerInteropTraceLogging::WindowEventDispatcher_WindowManagerWatcherDisconnected();
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x194,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
                           v18);
  }
  return 0LL;
}
