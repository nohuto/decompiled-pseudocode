/*
 * XREFs of InternalSetProp @ 0x1C00B3498
 * Callers:
 *     NtUserSetBrokeredForeground @ 0x1C0009E90 (NtUserSetBrokeredForeground.c)
 *     xxxInheritWindowMonitor @ 0x1C006F3B0 (xxxInheritWindowMonitor.c)
 *     SetWindowCompositionInfo @ 0x1C00731FC (SetWindowCompositionInfo.c)
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1C0073E98 (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x1C00B3230 (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 *     FeedbackSetWindowSetting @ 0x1C00B3414 (FeedbackSetWindowSetting.c)
 *     _SetTargetingWindowValue @ 0x1C00B369C (_SetTargetingWindowValue.c)
 *     ?SetRedrawProp@@YAXPEAUtagWND@@H@Z @ 0x1C00B6650 (-SetRedrawProp@@YAXPEAUtagWND@@H@Z.c)
 *     CkptRestore @ 0x1C00B6EB0 (CkptRestore.c)
 *     xxxFlashWindow @ 0x1C00DE38C (xxxFlashWindow.c)
 *     NtUserShutdownBlockReasonCreate @ 0x1C0124850 (NtUserShutdownBlockReasonCreate.c)
 *     FeedbackClearWindowSetting @ 0x1C01CA37C (FeedbackClearWindowSetting.c)
 *     _SetTouchWindowFlags @ 0x1C01CB9C4 (_SetTouchWindowFlags.c)
 *     ?SetMiPWindowFlags@@YAXPEAUtagWND@@_K@Z @ 0x1C01CE7D4 (-SetMiPWindowFlags@@YAXPEAUtagWND@@_K@Z.c)
 *     PostMousePointerLeaveAndCleanup @ 0x1C01CF0B0 (PostMousePointerLeaveAndCleanup.c)
 *     UserAssociateHwnd @ 0x1C01D4990 (UserAssociateHwnd.c)
 *     ?SetFrostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1C01E2534 (-SetFrostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z.c)
 *     ?SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1C01E25E8 (-SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z.c)
 *     ?AddConvProp@@YAHPEAUtagWND@@0KPEAUtagDDECONV@@1@Z @ 0x1C01F3254 (-AddConvProp@@YAHPEAUtagWND@@0KPEAUtagDDECONV@@1@Z.c)
 *     ?UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z @ 0x1C01F3910 (-UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z.c)
 *     NtUserSetAppImeLevel @ 0x1C021BEB0 (NtUserSetAppImeLevel.c)
 *     NtUserfnDDEINIT @ 0x1C021F2C0 (NtUserfnDDEINIT.c)
 *     SetDisplayAffinity @ 0x1C022BBCC (SetDisplayAffinity.c)
 * Callees:
 *     SetSharedPropForFilteredProcesses @ 0x1C0003AB4 (SetSharedPropForFilteredProcesses.c)
 *     UserGetGlobalAtomTableOfWindow @ 0x1C00B6874 (UserGetGlobalAtomTableOfWindow.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

__int64 __fastcall InternalSetProp(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // r15
  __int16 AtomFromAtomTable; // dx
  __int64 v11; // rdi
  __int64 GlobalAtomTableOfWindow; // rax
  int v13; // ebx
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-78h] BYREF

  v5 = a1 + 120;
  AtomFromAtomTable = word_1C0317660;
  if ( !word_1C0317660 )
  {
    GlobalAtomTableOfWindow = UserGetGlobalAtomTableOfWindow();
    if ( GlobalAtomTableOfWindow )
    {
      AtomFromAtomTable = UserFindAtomFromAtomTable(GlobalAtomTableOfWindow, L"Microsoft.Windows.WindowFactory.ViewId");
      word_1C0317660 = AtomFromAtomTable;
    }
  }
  if ( (a4 & 1) != 0 )
    return RealInternalSetProp(v5, a2, a3, a4);
  if ( (_WORD)a2 == AtomFromAtomTable )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 40) + 312LL) = a3;
    return RealInternalSetProp(v5, a2, a3, a4);
  }
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL);
  if ( v11 == PsGetCurrentProcessWin32Process(a1) )
    return RealInternalSetProp(v5, a2, a3, a4);
  if ( (*(_DWORD *)(v11 + 820) & 0x1000000) == 0 )
    return RealInternalSetProp(v5, a2, a3, a4);
  KeStackAttachProcess(*(PRKPROCESS *)v11, &ApcState);
  v13 = SetSharedPropForFilteredProcesses(a1, a2, a3);
  KeUnstackDetachProcess(&ApcState);
  if ( v13 != 1 )
    return RealInternalSetProp(v5, a2, a3, a4);
  return 1LL;
}
