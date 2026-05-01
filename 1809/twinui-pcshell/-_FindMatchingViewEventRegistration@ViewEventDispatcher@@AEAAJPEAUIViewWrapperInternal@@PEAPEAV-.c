/*
 * XREFs of ?_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@@Z @ 0x18021E5DC
 * Callers:
 *     ?NavigateAwayFromView@ViewEventDispatcher@@QEAAXI@Z @ 0x180215E34 (-NavigateAwayFromView@ViewEventDispatcher@@QEAAXI@Z.c)
 *     ?OnIdleStateChanged@ViewEventDispatcher@@UEAAJH@Z @ 0x1802161D0 (-OnIdleStateChanged@ViewEventDispatcher@@UEAAJH@Z.c)
 *     ?TryConsolidate@ViewEventDispatcher@@QEAAXI@Z @ 0x18021B240 (-TryConsolidate@ViewEventDispatcher@@QEAAXI@Z.c)
 *     ?ViewCreated@ViewEventDispatcher@@QEAAXIPEAUIUnknown@@@Z @ 0x18021BEE0 (-ViewCreated@ViewEventDispatcher@@QEAAXIPEAUIUnknown@@@Z.c)
 *     ?ViewDestroyed@ViewEventDispatcher@@QEAAXI@Z @ 0x18021C46C (-ViewDestroyed@ViewEventDispatcher@@QEAAXI@Z.c)
 *     ?ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18021C878 (-ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIProp.c)
 *     ?ViewPropertyChanged@ViewEventDispatcher@@QEAAXIPEBG@Z @ 0x18021D530 (-ViewPropertyChanged@ViewEventDispatcher@@QEAAXIPEBG@Z.c)
 *     ?_EnsureViewHasWrapperAndListener@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@PEA_N@Z @ 0x18021E0AC (-_EnsureViewHasWrapperAndListener@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@PEAPEA.c)
 *     ?_HandleWindowCreatedForExistingView@ViewEventDispatcher@@AEAAJPEAUHWND__@@I@Z @ 0x18021EFF8 (-_HandleWindowCreatedForExistingView@ViewEventDispatcher@@AEAAJPEAUHWND__@@I@Z.c)
 *     ?_HandleWindowCreatedWithNoView@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z @ 0x18021F530 (-_HandleWindowCreatedWithNoView@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z.c)
 *     ?_OverrideNavigationLevelForView@ViewEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4NavigationLevelOverride@@@Z @ 0x18021FB8C (-_OverrideNavigationLevelForView@ViewEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@S.c)
 *     ?_RaiseViewEvent@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@W4ViewEventType@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1802203DC (-_RaiseViewEvent@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@W4ViewEventType@ViewManager.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEBG0PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@@Z @ 0x18021E6BC (-_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEBG0PEAPEAV-$CRefCountedObject@UV.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewEventDispatcher::_FindMatchingViewEventRegistration(__int64 a1, __int64 a2, _QWORD *a3)
{
  int MatchingViewEventRegistration; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  PCWSTR StringRawBuffer; // rbx
  __int64 v10; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  HSTRING string; // [rsp+48h] [rbp+10h] BYREF

  *a3 = 0LL;
  string = 0LL;
  MatchingViewEventRegistration = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 56LL))(a2, &string);
  v7 = MatchingViewEventRegistration;
  if ( MatchingViewEventRegistration < 0 )
  {
    v8 = 2761LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)MatchingViewEventRegistration);
    goto LABEL_7;
  }
  StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
  v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 680LL))(a2);
  MatchingViewEventRegistration = ViewEventDispatcher::_FindMatchingViewEventRegistration(
                                    a1,
                                    StringRawBuffer,
                                    v10,
                                    a3,
                                    -2LL);
  v7 = MatchingViewEventRegistration;
  if ( MatchingViewEventRegistration < 0 )
  {
    v8 = 2766LL;
    goto LABEL_5;
  }
  v7 = 0;
LABEL_7:
  if ( string )
    WindowsDeleteString(string);
  return v7;
}
