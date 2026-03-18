/*
 * XREFs of ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C011022C
 * Callers:
 *     xxxGetSystemMenu @ 0x1C000C650 (xxxGetSystemMenu.c)
 *     xxxEnableMenuItem @ 0x1C001FF08 (xxxEnableMenuItem.c)
 *     xxxSetMenuInfo @ 0x1C0020138 (xxxSetMenuInfo.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1C0020698 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     xxxFreeWindow @ 0x1C00988D4 (xxxFreeWindow.c)
 *     xxxInsertMenuItem @ 0x1C00BF1D0 (xxxInsertMenuItem.c)
 *     GetInheritedMonitor @ 0x1C00CA354 (GetInheritedMonitor.c)
 *     xxxSysCommand @ 0x1C0137980 (xxxSysCommand.c)
 *     ??0?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@PEAUtagPOPUPMENU@@@Z @ 0x1C0164244 (--0-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@PEAUtagPOPUPMENU@@@Z.c)
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1C01F28C0 (-xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 *     MNFlushDestroyedPopups @ 0x1C0210930 (MNFlushDestroyedPopups.c)
 *     MNUnlinkDelayedFreePopups @ 0x1C0210B80 (MNUnlinkDelayedFreePopups.c)
 *     xxxMNEndMenuState @ 0x1C0210C40 (xxxMNEndMenuState.c)
 *     xxxMNEndMenuStateInternal @ 0x1C0210D60 (xxxMNEndMenuStateInternal.c)
 *     xxxMNStartMenuState @ 0x1C0211324 (xxxMNStartMenuState.c)
 *     xxxEndMenuLoop @ 0x1C0220290 (xxxEndMenuLoop.c)
 *     xxxHandleMenuMessages @ 0x1C0220464 (xxxHandleMenuMessages.c)
 *     ?GetMenuInheritedContextHelpId@@YAKAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1C02217B4 (-GetMenuInheritedContextHelpId@@YAKAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@@Z.c)
 *     ?MNCheckScroll@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@AEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagMONITOR@@@Z @ 0x1C022189C (-MNCheckScroll@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@AEBV-$SmartObjStackRef@UtagMENU@@@@PE.c)
 *     ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1C0221F74 (-xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C0222504 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     ?zzzMNFadeSelection@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C0222918 (-zzzMNFadeSelection@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     MNSetTimerToCloseHierarchy @ 0x1C0222F30 (MNSetTimerToCloseHierarchy.c)
 *     xxxCallHandleMenuMessages @ 0x1C02230F0 (xxxCallHandleMenuMessages.c)
 *     xxxMNCancel @ 0x1C0223434 (xxxMNCancel.c)
 *     xxxMNCloseHierarchy @ 0x1C0223C00 (xxxMNCloseHierarchy.c)
 *     xxxMNDismissIfOffMenu @ 0x1C0223FD0 (xxxMNDismissIfOffMenu.c)
 *     xxxMNKeyDown @ 0x1C02248B0 (xxxMNKeyDown.c)
 *     xxxMNMouseMove @ 0x1C0225318 (xxxMNMouseMove.c)
 *     xxxMNOpenHierarchy @ 0x1C0225610 (xxxMNOpenHierarchy.c)
 *     xxxMNSelectItem @ 0x1C0226564 (xxxMNSelectItem.c)
 *     xxxMenuWindowProc @ 0x1C0227440 (xxxMenuWindowProc.c)
 *     ?GetMenuPwnd@@YAPEAUtagWND@@PEAU1@AEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C02465E0 (-GetMenuPwnd@@YAPEAUtagWND@@PEAU1@AEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     xxxMNDragOver @ 0x1C0246D1C (xxxMNDragOver.c)
 *     xxxMNSetGapState @ 0x1C0246EC4 (xxxMNSetGapState.c)
 *     xxxMNUpdateDraggingInfo @ 0x1C02470F4 (xxxMNUpdateDraggingInfo.c)
 *     xxxEndMenu @ 0x1C024773C (xxxEndMenu.c)
 *     xxxTrackPopupMenuEx @ 0x1C024CB78 (xxxTrackPopupMenuEx.c)
 *     xxxHiliteMenuItem @ 0x1C024D8B0 (xxxHiliteMenuItem.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
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
