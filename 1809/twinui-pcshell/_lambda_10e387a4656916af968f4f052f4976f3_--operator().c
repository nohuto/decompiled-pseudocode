/*
 * XREFs of _lambda_10e387a4656916af968f4f052f4976f3_::operator() @ 0x180248B88
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_10e387a4656916af968f4f052f4976f3___::Run @ 0x18024AB10 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_10e387a4656916af968f4f052f4976f3___--.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800806E0 (-reset@-$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?WindowEventDispatcher_WindowManagerWatcherDisconnected@ViewManagerInteropTraceLogging@@SAXXZ @ 0x18024BBD4 (-WindowEventDispatcher_WindowManagerWatcherDisconnected@ViewManagerInteropTraceLogging@@SAXXZ.c)
 */

__int64 __fastcall lambda_10e387a4656916af968f4f052f4976f3_::operator()(__int64 a1)
{
  int v2; // edi
  __int64 v3; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_BYTE *)(*(_QWORD *)a1 + 208LL) = 0;
  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 200LL) + 56LL))(
         *(_QWORD *)(*(_QWORD *)a1 + 200LL),
         *(_QWORD *)(*(_QWORD *)a1 + 216LL));
  if ( v2 < 0 )
  {
    v3 = 599LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
      (const char *)(unsigned int)v2);
    return (unsigned int)v2;
  }
  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 200LL) + 72LL))(
         *(_QWORD *)(*(_QWORD *)a1 + 200LL),
         *(_QWORD *)(*(_QWORD *)a1 + 224LL));
  if ( v2 < 0 )
  {
    v3 = 600LL;
    goto LABEL_3;
  }
  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 200LL) + 88LL))(
         *(_QWORD *)(*(_QWORD *)a1 + 200LL),
         *(_QWORD *)(*(_QWORD *)a1 + 232LL));
  if ( v2 < 0 )
  {
    v3 = 601LL;
    goto LABEL_3;
  }
  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 200LL) + 104LL))(
         *(_QWORD *)(*(_QWORD *)a1 + 200LL),
         *(_QWORD *)(*(_QWORD *)a1 + 240LL));
  if ( v2 < 0 )
  {
    v3 = 602LL;
    goto LABEL_3;
  }
  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 200LL) + 168LL))(
         *(_QWORD *)(*(_QWORD *)a1 + 200LL),
         *(_QWORD *)(*(_QWORD *)a1 + 248LL));
  if ( v2 < 0 )
  {
    v3 = 603LL;
    goto LABEL_3;
  }
  wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset((__int64 *)(*(_QWORD *)a1 + 200LL));
  *(_BYTE *)(*(_QWORD *)a1 + 264LL) = 0;
  ViewManagerInteropTraceLogging::WindowEventDispatcher_WindowManagerWatcherDisconnected();
  return 0LL;
}
