/*
 * XREFs of ?GetResizeDCompositionSynchronizationObject@@YAHPEAUHWND__@@PEAPEAUCompositionObject@@@Z @ 0x1C00FAAF4
 * Callers:
 *     NtUserGetResizeDCompositionSynchronizationObject @ 0x1C00FAA40 (NtUserGetResizeDCompositionSynchronizationObject.c)
 * Callees:
 *     _GetTopLevelWindow @ 0x1C006A460 (_GetTopLevelWindow.c)
 *     GreGetWindowResizeDCompositionSynchronizationObject @ 0x1C00FAC24 (GreGetWindowResizeDCompositionSynchronizationObject.c)
 */

__int64 __fastcall GetResizeDCompositionSynchronizationObject(HWND a1, struct CompositionObject **a2)
{
  unsigned int WindowResizeDCompositionSynchronizationObject; // edi
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 TopLevelWindow; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v13; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+28h] [rbp-20h]
  __int64 v15; // [rsp+30h] [rbp-18h]

  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  WindowResizeDCompositionSynchronizationObject = 1;
  EnterCrit(0LL, 1LL);
  v5 = ValidateHwnd(a1);
  v7 = v5;
  if ( v5 && (v6 = *(_QWORD *)(v5 + 40), (((*(_WORD *)(v6 + 42) & 0x3FFF) - 669) & 0xFFFFFFFD) != 0) )
  {
    v13 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v13;
    v14 = v5;
    HMLockObject(v5);
    TopLevelWindow = GetTopLevelWindow(v7);
    if ( !TopLevelWindow
      || (v10 = *(_QWORD *)(TopLevelWindow + 40), v9 = *(_WORD *)(v10 + 42) & 0x3FFF, (_DWORD)v9 == 669)
      || (WindowResizeDCompositionSynchronizationObject = GreGetWindowResizeDCompositionSynchronizationObject(*(HWND *)TopLevelWindow)) != 0 )
    {
      *a2 = 0LL;
    }
    ThreadUnlock1(v10, v9, v11);
  }
  else
  {
    WindowResizeDCompositionSynchronizationObject = 0;
  }
  UserSessionSwitchLeaveCrit(v6);
  return WindowResizeDCompositionSynchronizationObject;
}
