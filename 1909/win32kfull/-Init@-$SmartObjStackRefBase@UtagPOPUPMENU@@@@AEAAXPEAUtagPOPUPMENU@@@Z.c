/*
 * XREFs of ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00EB5EC
 * Callers:
 *     xxxFreeWindow @ 0x1C00396A4 (xxxFreeWindow.c)
 *     xxxInsertMenuItem @ 0x1C00608B0 (xxxInsertMenuItem.c)
 *     GetInheritedMonitor @ 0x1C006BA24 (GetInheritedMonitor.c)
 *     xxxGetSystemMenu @ 0x1C00FB780 (xxxGetSystemMenu.c)
 *     xxxSysCommand @ 0x1C0111880 (xxxSysCommand.c)
 *     xxxSetMenuInfo @ 0x1C0129EA8 (xxxSetMenuInfo.c)
 *     xxxEnableMenuItem @ 0x1C012C8A0 (xxxEnableMenuItem.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1C012CAD0 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     ??0?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@PEAUtagPOPUPMENU@@@Z @ 0x1C0165214 (--0-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@PEAUtagPOPUPMENU@@@Z.c)
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1C01F2740 (-xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 *     MNFlushDestroyedPopups @ 0x1C02103F0 (MNFlushDestroyedPopups.c)
 *     MNUnlinkDelayedFreePopups @ 0x1C0210640 (MNUnlinkDelayedFreePopups.c)
 *     xxxMNEndMenuState @ 0x1C0210700 (xxxMNEndMenuState.c)
 *     xxxMNEndMenuStateInternal @ 0x1C0210820 (xxxMNEndMenuStateInternal.c)
 *     xxxMNStartMenuState @ 0x1C0210DE4 (xxxMNStartMenuState.c)
 *     xxxEndMenuLoop @ 0x1C021FD50 (xxxEndMenuLoop.c)
 *     xxxHandleMenuMessages @ 0x1C021FF24 (xxxHandleMenuMessages.c)
 *     ?GetMenuInheritedContextHelpId@@YAKAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1C0221274 (-GetMenuInheritedContextHelpId@@YAKAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@@Z.c)
 *     ?MNCheckScroll@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@AEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagMONITOR@@@Z @ 0x1C022135C (-MNCheckScroll@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@AEBV-$SmartObjStackRef@UtagMENU@@@@PE.c)
 *     ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1C0221A34 (-xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C0221FC4 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     ?zzzMNFadeSelection@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C02223D8 (-zzzMNFadeSelection@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     MNSetTimerToCloseHierarchy @ 0x1C02229F0 (MNSetTimerToCloseHierarchy.c)
 *     xxxCallHandleMenuMessages @ 0x1C0222BB0 (xxxCallHandleMenuMessages.c)
 *     xxxMNCancel @ 0x1C0222EF4 (xxxMNCancel.c)
 *     xxxMNCloseHierarchy @ 0x1C02236C0 (xxxMNCloseHierarchy.c)
 *     xxxMNDismissIfOffMenu @ 0x1C0223A90 (xxxMNDismissIfOffMenu.c)
 *     xxxMNKeyDown @ 0x1C0224370 (xxxMNKeyDown.c)
 *     xxxMNMouseMove @ 0x1C0224DD8 (xxxMNMouseMove.c)
 *     xxxMNOpenHierarchy @ 0x1C02250D0 (xxxMNOpenHierarchy.c)
 *     xxxMNSelectItem @ 0x1C0226024 (xxxMNSelectItem.c)
 *     xxxMenuWindowProc @ 0x1C0226F00 (xxxMenuWindowProc.c)
 *     ?GetMenuPwnd@@YAPEAUtagWND@@PEAU1@AEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C0245EA0 (-GetMenuPwnd@@YAPEAUtagWND@@PEAU1@AEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     xxxMNDragOver @ 0x1C02465DC (xxxMNDragOver.c)
 *     xxxMNSetGapState @ 0x1C0246784 (xxxMNSetGapState.c)
 *     xxxMNUpdateDraggingInfo @ 0x1C02469B4 (xxxMNUpdateDraggingInfo.c)
 *     xxxEndMenu @ 0x1C0246FFC (xxxEndMenu.c)
 *     xxxTrackPopupMenuEx @ 0x1C024C438 (xxxTrackPopupMenuEx.c)
 *     xxxHiliteMenuItem @ 0x1C024D170 (xxxHiliteMenuItem.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall SmartObjStackRefBase<tagPOPUPMENU>::Init(_QWORD *a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v5; // rbx
  __int64 *ThreadWin32Thread; // rax
  _QWORD *v7; // rcx
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v5 = *ThreadWin32Thread;
  }
  v7 = a1 + 1;
  a1[1] = 0LL;
  *a1 = gSmartObjNullRef;
  if ( a2 )
  {
    *a1 = *(_QWORD *)(a2 + 88);
    ++*(_DWORD *)(*(_QWORD *)(a2 + 88) + 8LL);
  }
  result = *(_QWORD *)(v5 + 1472);
  *v7 = result;
  *(_QWORD *)(v5 + 1472) = v7;
  return result;
}
