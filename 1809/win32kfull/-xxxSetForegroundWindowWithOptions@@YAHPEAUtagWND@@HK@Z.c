/*
 * XREFs of ?xxxSetForegroundWindowWithOptions@@YAHPEAUtagWND@@HK@Z @ 0x1C00D77CC
 * Callers:
 *     xxxSwitchToThisWindow @ 0x1C0006C70 (xxxSwitchToThisWindow.c)
 *     ?xxxSetForegroundWindow@@YAHPEAUtagWND@@H@Z @ 0x1C0009FEC (-xxxSetForegroundWindow@@YAHPEAUtagWND@@H@Z.c)
 *     NtUserSetForegroundWindowForApplication @ 0x1C00CCAB0 (NtUserSetForegroundWindowForApplication.c)
 *     ?xxxStubSetForegroundWindow@@YAHPEAUtagWND@@@Z @ 0x1C00D77B0 (-xxxStubSetForegroundWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C00D83CC (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     xxxMenuWindowProc @ 0x1C020F6B0 (xxxMenuWindowProc.c)
 * Callees:
 *     GetNonChildAncestor @ 0x1C000CE08 (GetNonChildAncestor.c)
 *     _GhostWindowFromHungWindow @ 0x1C001C6D0 (_GhostWindowFromHungWindow.c)
 *     IsTrayWindow @ 0x1C002CD08 (IsTrayWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     IAMThreadAccessGranted @ 0x1C0071900 (IAMThreadAccessGranted.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C00AD848 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     IsImmersiveBandOrShellManaged @ 0x1C00CCB7C (IsImmersiveBandOrShellManaged.c)
 *     PostEventMessageEx @ 0x1C00D4C3C (PostEventMessageEx.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@K@Z @ 0x1C00D5D9C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@K@Z.c)
 *     ?CanSetForegroundWindow@@YA?AW4ForegroundRightCheck@@PEBUtagWND@@@Z @ 0x1C00D7AF4 (-CanSetForegroundWindow@@YA-AW4ForegroundRightCheck@@PEBUtagWND@@@Z.c)
 *     _anonymous_namespace_::RemoveForegroundActivate @ 0x1C00D7F6C (_anonymous_namespace_--RemoveForegroundActivate.c)
 *     PostIAMShellHookMessageEx @ 0x1C00DC890 (PostIAMShellHookMessageEx.c)
 *     xxxFlashWindow @ 0x1C00DE38C (xxxFlashWindow.c)
 *     DSW_GetTopLevelCreatorWindow @ 0x1C0132880 (DSW_GetTopLevelCreatorWindow.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C02C1D3C (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 */

__int64 __fastcall xxxSetForegroundWindowWithOptions(LARGE_INTEGER *a1, int a2, unsigned int a3)
{
  bool v3; // si
  unsigned int v4; // edi
  LARGE_INTEGER *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r15
  LARGE_INTEGER v9; // rcx
  int v10; // r13d
  bool v12; // si
  __int64 v13; // r8
  __int64 v14; // rax
  _QWORD *v15; // rax
  __int64 NonChildAncestor; // rax
  LONGLONG *TopLevelCreatorWindow; // r14
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 ThreadWin32Thread; // rax
  _QWORD v23[3]; // [rsp+40h] [rbp-68h] BYREF
  _QWORD v24[10]; // [rsp+58h] [rbp-50h] BYREF
  char v25; // [rsp+B0h] [rbp+8h]

  v3 = 0;
  v4 = 1;
  v25 = 1;
  v6 = a1;
  if ( !a1 )
    MicrosoftTelemetryAssertTriggeredMsgKM("Expect non-null window here");
  v8 = GhostWindowFromHungWindow((__int64)v6);
  if ( v8 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v7);
    v23[0] = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = v23;
    v23[1] = v8;
    _InterlockedAdd((volatile signed __int32 *)(v8 + 8), 1u);
    v6 = (LARGE_INTEGER *)v8;
  }
  v9.QuadPart = gpqForeground;
  if ( *(_QWORD *)(v6[2].QuadPart + 432) == gpqForeground )
  {
    v12 = gpqForeground == *(_QWORD *)(gptiCurrent + 432LL);
    if ( (*(_DWORD *)(gptiCurrent + 1208LL) & 0x40) != 0 )
      MicrosoftTelemetryAssertTriggeredMsgKM("fSystemUnrestrictedForegroundRight should be used only in the case when foreground Q needs to be changed.");
    goto LABEL_18;
  }
  v10 = CanSetForegroundWindow(v6);
  if ( v10 != 2 )
  {
    v25 = 0;
    if ( a2 )
    {
      NonChildAncestor = GetNonChildAncestor((__int64)v6);
      TopLevelCreatorWindow = (LONGLONG *)DSW_GetTopLevelCreatorWindow(NonChildAncestor);
      if ( !(unsigned int)IsTrayWindow(TopLevelCreatorWindow) )
        TopLevelCreatorWindow = (LONGLONG *)v6;
      if ( *(_DWORD *)(TopLevelCreatorWindow[5] + 236) != 15 )
      {
        if ( (unsigned int)IsImmersiveBandOrShellManaged((__int64)TopLevelCreatorWindow) )
        {
          PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 456LL), 34LL, *TopLevelCreatorWindow);
        }
        else
        {
          v19 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v18);
          v24[0] = *(_QWORD *)(v19 + 416);
          *(_QWORD *)(v19 + 416) = v24;
          v24[1] = TopLevelCreatorWindow;
          _InterlockedAdd((volatile signed __int32 *)TopLevelCreatorWindow + 2, 1u);
          UPDWORDPointer(8196LL);
          xxxFlashWindow((ULONG_PTR)TopLevelCreatorWindow);
          ThreadUnlock1(v21, v20);
        }
      }
    }
    if ( v10 == 1 )
      goto LABEL_9;
    v9 = *(LARGE_INTEGER *)(v6[2].QuadPart + 432);
    if ( *(_QWORD *)(gptiCurrent + 432LL) == v9.QuadPart )
      goto LABEL_23;
    v12 = 0;
LABEL_18:
    if ( !v12 )
    {
      v9 = v6[2];
      v7 = *(_QWORD *)(v9.QuadPart + 432);
      if ( v6 == *(LARGE_INTEGER **)(v7 + 120) )
        goto LABEL_8;
      v3 = (unsigned int)PostEventMessageEx((struct tagTHREADINFO *)v9.QuadPart, v7, 6u, 0LL, 0, 0LL, *v6, 0LL) != 0;
      goto LABEL_9;
    }
LABEL_23:
    LOBYTE(v9.LowPart) = *(_BYTE *)(v6[5].QuadPart + 31) & 0xC0;
    if ( LOBYTE(v9.LowPart) != 64 && anonymous_namespace_::xxxLocalActivateWindow((struct tagWND *)v6, 0, 128) )
      goto LABEL_8;
    v3 = 0;
    goto LABEL_9;
  }
  anonymous_namespace_::RemoveForegroundActivate();
  if ( (unsigned int)xxxSetForegroundWindow2(v6, gptiCurrent, a3) )
  {
LABEL_8:
    v3 = 1;
    goto LABEL_9;
  }
  v3 = 0;
  v9.QuadPart = grpdeskRitInput;
  if ( *(_QWORD *)(gptiCurrent + 456LL) != grpdeskRitInput
    && *(char *)(v6[5].QuadPart + 19) >= 0
    && !IAMThreadAccessGranted(gptiCurrent)
    && *(_DWORD *)(v13 + 236) != 15
    && (unsigned int)IsImmersiveBandOrShellManaged((__int64)v6) )
  {
    v14 = GetNonChildAncestor((__int64)v6);
    v15 = (_QWORD *)DSW_GetTopLevelCreatorWindow(v14);
    PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 456LL), 34LL, *v15);
  }
LABEL_9:
  if ( v8 )
    ((void (__fastcall *)(_QWORD, _QWORD))ThreadUnlock1)((LARGE_INTEGER)v9.QuadPart, v7);
  if ( (*(_DWORD *)(gptiCurrent + 1208LL) & 0x40) != 0 )
    MicrosoftTelemetryAssertTriggeredMsgKM("fSystemAssignedForegroundRight must not persist");
  if ( !v25 || !v3 )
    return 0;
  return v4;
}
