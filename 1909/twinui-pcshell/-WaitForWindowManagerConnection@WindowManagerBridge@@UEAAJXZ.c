/*
 * XREFs of ?WaitForWindowManagerConnection@WindowManagerBridge@@UEAAJXZ @ 0x1802C1190
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180017C28 (--0-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180060518 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?handle_wait@wil@@YA_NPEAXK@Z @ 0x1802031F0 (-handle_wait@wil@@YA_NPEAXK@Z.c)
 *     ??1ConnectToWindowManager@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x1802BE4A0 (--1ConnectToWindowManager@ViewManagerInteropTraceLogging@@QEAA@XZ.c)
 *     ?StartActivity@ConnectToWindowManager@ViewManagerInteropTraceLogging@@QEAAXXZ @ 0x1802C0B7C (-StartActivity@ConnectToWindowManager@ViewManagerInteropTraceLogging@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowManagerBridge::WaitForWindowManagerConnection(wil **this)
{
  __int64 result; // rax
  const char *v4; // r9
  const char *v5; // r9
  _QWORD v6[40]; // [rsp+30h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+0h]

  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v6,
    (__int64)"ConnectToWindowManager");
  v6[0] = &ViewManagerInteropTraceLogging::ConnectToWindowManager::`vftable';
  ViewManagerInteropTraceLogging::ConnectToWindowManager::StartActivity((ViewManagerInteropTraceLogging::ConnectToWindowManager *)v6);
  if ( wil::handle_wait(this[33], (void *)0x7530) )
  {
    try
    {
      v4 = (const char *)*((unsigned int *)this + 72);
      if ( (int)v4 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          119LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
          v4);
      wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v6, 0);
      ViewManagerInteropTraceLogging::ConnectToWindowManager::~ConnectToWindowManager((ViewManagerInteropTraceLogging::ConnectToWindowManager *)v6);
      result = 0LL;
    }
    catch ( ... )
    {
      return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                             retaddr,
                             (void *)0x7D,
                             (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
                             v5);
    }
  }
  else
  {
    ViewManagerInteropTraceLogging::ConnectToWindowManager::~ConnectToWindowManager((ViewManagerInteropTraceLogging::ConnectToWindowManager *)v6);
    return 2147483658LL;
  }
  return result;
}
