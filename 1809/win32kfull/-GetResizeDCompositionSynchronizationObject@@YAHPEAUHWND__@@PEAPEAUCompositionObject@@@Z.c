/*
 * XREFs of ?GetResizeDCompositionSynchronizationObject@@YAHPEAUHWND__@@PEAPEAUCompositionObject@@@Z @ 0x1C0115E04
 * Callers:
 *     NtUserGetResizeDCompositionSynchronizationObject @ 0x1C0115D50 (NtUserGetResizeDCompositionSynchronizationObject.c)
 * Callees:
 *     _GetTopLevelWindow @ 0x1C0071310 (_GetTopLevelWindow.c)
 *     GreGetWindowResizeDCompositionSynchronizationObject @ 0x1C0115F10 (GreGetWindowResizeDCompositionSynchronizationObject.c)
 */

__int64 __fastcall GetResizeDCompositionSynchronizationObject(HWND a1, struct CompositionObject **a2)
{
  unsigned int WindowResizeDCompositionSynchronizationObject; // edi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 TopLevelWindow; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD v14[5]; // [rsp+20h] [rbp-28h] BYREF

  WindowResizeDCompositionSynchronizationObject = 1;
  EnterCrit(0LL, 1LL);
  v5 = ValidateHwnd(a1);
  v9 = v5;
  if ( v5 && (v7 = *(_QWORD *)(v5 + 40), v6 = (*(_WORD *)(v7 + 42) & 0x2FFFu) - 669, (v6 & 0xFFFFFFFD) != 0) )
  {
    v14[0] = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = v14;
    v14[1] = v5;
    _InterlockedAdd((volatile signed __int32 *)(v5 + 8), 1u);
    TopLevelWindow = GetTopLevelWindow(v5);
    if ( !TopLevelWindow
      || (v12 = *(_QWORD *)(TopLevelWindow + 40), v11 = *(_WORD *)(v12 + 42) & 0x2FFF, (_DWORD)v11 == 669)
      || (WindowResizeDCompositionSynchronizationObject = GreGetWindowResizeDCompositionSynchronizationObject(*(HWND *)TopLevelWindow)) != 0 )
    {
      *a2 = 0LL;
    }
    ThreadUnlock1(v12, v11);
  }
  else
  {
    WindowResizeDCompositionSynchronizationObject = 0;
  }
  UserSessionSwitchLeaveCrit(v7, v6, v9, v8);
  return WindowResizeDCompositionSynchronizationObject;
}
