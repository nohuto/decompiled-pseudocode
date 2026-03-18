/*
 * XREFs of InternalSetProp @ 0x1C008C438
 * Callers:
 *     NtUserSetBrokeredForeground @ 0x1C00106A0 (NtUserSetBrokeredForeground.c)
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1C002C250 (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     xxxFlashWindow @ 0x1C0083E54 (xxxFlashWindow.c)
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x1C008876C (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 *     SetWindowCompositionInfo @ 0x1C008BDD4 (SetWindowCompositionInfo.c)
 *     FeedbackSetWindowSetting @ 0x1C008C3B4 (FeedbackSetWindowSetting.c)
 *     CkptRestore @ 0x1C0090C80 (CkptRestore.c)
 *     xxxInheritWindowMonitor @ 0x1C00C78F8 (xxxInheritWindowMonitor.c)
 *     ?SetRedrawProp@@YAXPEAUtagWND@@H@Z @ 0x1C01024A4 (-SetRedrawProp@@YAXPEAUtagWND@@H@Z.c)
 *     _SetTargetingWindowValue @ 0x1C012927C (_SetTargetingWindowValue.c)
 *     NtUserShutdownBlockReasonCreate @ 0x1C012ED70 (NtUserShutdownBlockReasonCreate.c)
 *     ?SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1C0150C18 (-SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z.c)
 *     FeedbackClearWindowSetting @ 0x1C01DDDEC (FeedbackClearWindowSetting.c)
 *     _SetTouchWindowFlags @ 0x1C01DF8AC (_SetTouchWindowFlags.c)
 *     ?SetMiPWindowFlags@@YAXPEAUtagWND@@_K@Z @ 0x1C01E2D94 (-SetMiPWindowFlags@@YAXPEAUtagWND@@_K@Z.c)
 *     PostMousePointerLeaveAndCleanup @ 0x1C01E3990 (PostMousePointerLeaveAndCleanup.c)
 *     UserAssociateHwnd @ 0x1C01EA19C (UserAssociateHwnd.c)
 *     ?SetFrostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1C01F9328 (-SetFrostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z.c)
 *     ?AddConvProp@@YAHPEAUtagWND@@0KPEAUtagDDECONV@@1@Z @ 0x1C0209504 (-AddConvProp@@YAHPEAUtagWND@@0KPEAUtagDDECONV@@1@Z.c)
 *     ?UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z @ 0x1C0209D54 (-UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z.c)
 *     NtUserSetAppImeLevel @ 0x1C0234020 (NtUserSetAppImeLevel.c)
 *     NtUserfnDDEINIT @ 0x1C0237630 (NtUserfnDDEINIT.c)
 *     SetDisplayAffinity @ 0x1C0244BFC (SetDisplayAffinity.c)
 * Callees:
 *     SetSharedPropForFilteredProcesses @ 0x1C0005FF0 (SetSharedPropForFilteredProcesses.c)
 *     UserGetGlobalAtomTableOfWindow @ 0x1C01026E4 (UserGetGlobalAtomTableOfWindow.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

__int64 __fastcall InternalSetProp(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int16 AtomFromAtomTable; // ax
  __int64 v5; // r15
  unsigned int v10; // edi
  unsigned int DLT; // eax
  __int64 GlobalAtomTableOfWindow; // rax
  int v14; // ebx
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-78h] BYREF

  AtomFromAtomTable = word_1C032C66C;
  v5 = a1 + 144;
  if ( !word_1C032C66C )
  {
    DLT = DLT_JOB::getDLT();
    GetDomainLockRef(DLT);
    GlobalAtomTableOfWindow = UserGetGlobalAtomTableOfWindow(a1);
    if ( GlobalAtomTableOfWindow )
    {
      AtomFromAtomTable = UserFindAtomFromAtomTable(GlobalAtomTableOfWindow, L"Microsoft.Windows.WindowFactory.ViewId");
      word_1C032C66C = AtomFromAtomTable;
    }
    else
    {
      AtomFromAtomTable = word_1C032C66C;
    }
  }
  v10 = 1;
  if ( (a4 & 1) != 0 )
    return (unsigned int)RealInternalSetProp(v5, a2, a3, a4);
  if ( (_WORD)a2 == AtomFromAtomTable )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 40) + 312LL) = a3;
    return (unsigned int)RealInternalSetProp(v5, a2, a3, a4);
  }
  if ( (*(_DWORD *)(a1 + 328) & 0x10) == 0 )
    return (unsigned int)RealInternalSetProp(v5, a2, a3, a4);
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(**(PRKPROCESS **)(*(_QWORD *)(a1 + 16) + 416LL), &ApcState);
  v14 = SetSharedPropForFilteredProcesses(a1, a2, a3);
  KeUnstackDetachProcess(&ApcState);
  if ( v14 != 1 )
    return (unsigned int)RealInternalSetProp(v5, a2, a3, a4);
  return v10;
}
