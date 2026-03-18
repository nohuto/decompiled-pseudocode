/*
 * XREFs of NtUserForceWindowToDpiForTest @ 0x1C022BA40
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     GetDpiCacheSlot @ 0x1C00A9364 (GetDpiCacheSlot.c)
 *     _IsTopLevelWindow @ 0x1C00C75CC (_IsTopLevelWindow.c)
 *     xxxForceWindowToDpiForTest @ 0x1C01E7E28 (xxxForceWindowToDpiForTest.c)
 */

__int64 __fastcall NtUserForceWindowToDpiForTest(__int64 a1, int a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  int v6; // ebx
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v15; // [rsp+20h] [rbp-28h] BYREF
  __int64 v16; // [rsp+28h] [rbp-20h]
  __int64 v17; // [rsp+30h] [rbp-18h]

  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v6 = 0;
  v7 = v4;
  if ( v4 )
  {
    v5 = *(_QWORD *)(v4 + 40);
    if ( (((*(_WORD *)(v5 + 42) & 0x3FFF) - 669) & 0xFFFFFFFD) != 0 )
    {
      v15 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v15;
      v16 = v4;
      HMLockObject(v4);
      if ( (*(_DWORD *)(*(_QWORD *)(v7 + 40) + 288LL) & 0xF) == 2
        && (unsigned int)IsTopLevelWindow(v7)
        && (unsigned int)GetDpiCacheSlot(a2) != -1 )
      {
        v6 = xxxForceWindowToDpiForTest((struct tagWND *)v7, a2);
      }
      else
      {
        UserSetLastError(87LL, v8, v9, v10);
      }
      ThreadUnlock1(v12, v11, v13);
    }
  }
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
