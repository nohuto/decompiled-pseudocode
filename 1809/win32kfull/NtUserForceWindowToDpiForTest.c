/*
 * XREFs of NtUserForceWindowToDpiForTest @ 0x1C0213D10
 * Callers:
 *     <none>
 * Callees:
 *     GetDpiCacheSlot @ 0x1C0020A38 (GetDpiCacheSlot.c)
 *     _IsTopLevelWindow @ 0x1C002BEB4 (_IsTopLevelWindow.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     xxxForceWindowToDpiForTest @ 0x1C01D31F4 (xxxForceWindowToDpiForTest.c)
 */

__int64 __fastcall NtUserForceWindowToDpiForTest(__int64 a1, int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // ebx
  struct tagWND *v10; // r11
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD v14[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v9 = 0;
  if ( v4 )
  {
    v6 = *(_QWORD *)(v4 + 40);
    v5 = (*(_WORD *)(v6 + 42) & 0x2FFFu) - 669;
    if ( (v5 & 0xFFFFFFFD) != 0 )
    {
      v14[0] = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = v14;
      v14[1] = v4;
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
      if ( (*(_DWORD *)(*(_QWORD *)(v4 + 40) + 288LL) & 0xF) == 2
        && (unsigned int)IsTopLevelWindow(v4)
        && (unsigned int)GetDpiCacheSlot(a2) != -1 )
      {
        v9 = xxxForceWindowToDpiForTest(v10, a2);
      }
      else
      {
        UserSetLastError(87LL, v5, v7, v8);
      }
      ThreadUnlock1(v12, v11);
    }
  }
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v9;
}
