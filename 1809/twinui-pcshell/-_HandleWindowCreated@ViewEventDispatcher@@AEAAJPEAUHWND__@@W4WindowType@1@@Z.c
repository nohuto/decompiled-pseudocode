/*
 * XREFs of ?_HandleWindowCreated@ViewEventDispatcher@@AEAAJPEAUHWND__@@W4WindowType@1@@Z @ 0x18021EE94
 * Callers:
 *     ?OnShellHookMessage@ViewEventDispatcher@@UEAAJ_K_J@Z @ 0x180216320 (-OnShellHookMessage@ViewEventDispatcher@@UEAAJ_K_J@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18005B338 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??0?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18006FCC0 (--0-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?ShouldTreatShellManagedWindowAsNotShellManaged@ShellManagedWindowHelper@@YA_NPEAUHWND__@@@Z @ 0x1800F30D0 (-ShouldTreatShellManagedWindowAsNotShellManaged@ShellManagedWindowHelper@@YA_NPEAUHWND__@@@Z.c)
 *     ??1HandleWindowCreated@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x180211B00 (--1HandleWindowCreated@ViewManagerInteropTraceLogging@@QEAA@XZ.c)
 *     ?StartActivity@HandleWindowCreated@ViewManagerInteropTraceLogging@@QEAAXPEAXK@Z @ 0x180218854 (-StartActivity@HandleWindowCreated@ViewManagerInteropTraceLogging@@QEAAXPEAXK@Z.c)
 *     ?_HandleWindowCreatedForExistingView@ViewEventDispatcher@@AEAAJPEAUHWND__@@I@Z @ 0x18021EFF8 (-_HandleWindowCreatedForExistingView@ViewEventDispatcher@@AEAAJPEAUHWND__@@I@Z.c)
 *     ?_HandleWindowCreatedWithNoView@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z @ 0x18021F530 (-_HandleWindowCreatedWithNoView@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewEventDispatcher::_HandleWindowCreated(ViewEventDispatcher *a1, HWND a2, int a3)
{
  unsigned int v6; // ebx
  HWND v7; // rdx
  unsigned int PropW; // eax
  int v9; // edi
  int v10; // eax
  _QWORD v12[40]; // [rsp+30h] [rbp-168h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+0h]

  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v12,
    (__int64)"HandleWindowCreated");
  v12[0] = &ViewManagerInteropTraceLogging::HandleWindowCreated::`vftable';
  ViewManagerInteropTraceLogging::HandleWindowCreated::StartActivity(
    (ViewManagerInteropTraceLogging::HandleWindowCreated *)v12,
    a2,
    a3);
  v6 = 0;
  if ( !(unsigned int)IsShellManagedWindow(a2)
    || (unsigned int)IsShellFrameWindow(a2)
    || ShellManagedWindowHelper::ShouldTreatShellManagedWindowAsNotShellManaged((ShellManagedWindowHelper *)a2, v7)
    || GetPropW(a2, L"Shell_Logical_Owner_Window_Prop") )
  {
    wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v12, 0);
    v9 = 0;
    goto LABEL_12;
  }
  PropW = (unsigned int)GetPropW(a2, L"Microsoft.Windows.WindowFactory.ViewId");
  if ( !PropW )
  {
    if ( a3 )
      goto LABEL_8;
    v9 = ViewEventDispatcher::_HandleWindowCreatedWithNoView(a1, a2);
    if ( v9 >= 0 )
      goto LABEL_8;
LABEL_12:
    v6 = v9;
    goto LABEL_13;
  }
  v10 = ViewEventDispatcher::_HandleWindowCreatedForExistingView(a1, a2, PropW);
  v9 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x88A,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)v10);
    goto LABEL_12;
  }
LABEL_8:
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v12, 0);
LABEL_13:
  ViewManagerInteropTraceLogging::HandleWindowCreated::~HandleWindowCreated((ViewManagerInteropTraceLogging::HandleWindowCreated *)v12);
  return v6;
}
