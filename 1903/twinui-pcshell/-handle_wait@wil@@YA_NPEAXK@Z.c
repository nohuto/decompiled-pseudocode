/*
 * XREFs of ?handle_wait@wil@@YA_NPEAXK@Z @ 0x1801E3FB0
 * Callers:
 *     ?ShutdownServices@PenWorkspaceDiscoverBroker@@UEAAJPEAUIProfferService@@@Z @ 0x1801DCC20 (-ShutdownServices@PenWorkspaceDiscoverBroker@@UEAAJPEAUIProfferService@@@Z.c)
 *     ?WaitForViewManagerConnection@ViewManagerBridge@@QEAAJXZ @ 0x1802910F0 (-WaitForViewManagerConnection@ViewManagerBridge@@QEAAJXZ.c)
 *     ?WaitForWindowManagerConnection@WindowManagerBridge@@UEAAJXZ @ 0x1802A1CA0 (-WaitForWindowManagerConnection@WindowManagerBridge@@UEAAJXZ.c)
 *     ??1AssistantLightManager@Lighting@TwinUI@@QEAA@XZ @ 0x1803FFE94 (--1AssistantLightManager@Lighting@TwinUI@@QEAA@XZ.c)
 *     ?Animate@AssistantLightManager@Lighting@TwinUI@@AEAAXW4AssistantState@2Cortana@@@Z @ 0x1804004E0 (-Animate@AssistantLightManager@Lighting@TwinUI@@AEAAXW4AssistantState@2Cortana@@@Z.c)
 *     ?HandleState@AssistantLightManager@Lighting@TwinUI@@QEAAXW4AssistantState@2Cortana@@@Z @ 0x1804006D4 (-HandleState@AssistantLightManager@Lighting@TwinUI@@QEAAXW4AssistantState@2Cortana@@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008BBC0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

char __fastcall wil::handle_wait(wil *this, void *a2)
{
  DWORD v2; // ecx
  const char *v3; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = WaitForSingleObjectEx(this, (DWORD)a2, 0);
  if ( v2 == 258 )
    return 0;
  if ( v2 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      2512LL,
      (__int64)"internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
      v3);
    __debugbreak();
  }
  return 1;
}
