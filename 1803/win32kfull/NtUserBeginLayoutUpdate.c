/*
 * XREFs of NtUserBeginLayoutUpdate @ 0x1C0109D10
 * Callers:
 *     <none>
 * Callees:
 *     GreWindowBeginLayoutUpdate @ 0x1C00075F4 (GreWindowBeginLayoutUpdate.c)
 *     _IsTopLevelWindow @ 0x1C002DEA4 (_IsTopLevelWindow.c)
 *     _GetTopLevelWindow @ 0x1C0030730 (_GetTopLevelWindow.c)
 */

__int64 __fastcall NtUserBeginLayoutUpdate(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 TopLevelWindow; // rax
  _QWORD v14[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = 1LL;
  EnterCrit(0LL, 1LL);
  v3 = ValidateHwnd(a1);
  v7 = v3;
  if ( v3 && (v5 = *(_QWORD *)(v3 + 40), v4 = (*(_WORD *)(v5 + 42) & 0x3FFFu) - 669, (v4 & 0xFFFFFFFD) != 0) )
  {
    v14[0] = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = v14;
    v14[1] = v3;
    _InterlockedAdd((volatile signed __int32 *)(v3 + 8), 1u);
    if ( !(unsigned int)IsTopLevelWindow(v3) && *(char *)(*(_QWORD *)(v11 + 40) + 25LL) < 0 )
    {
      TopLevelWindow = GetTopLevelWindow(v11);
      if ( TopLevelWindow )
      {
        v8 = *(_QWORD *)(TopLevelWindow + 40);
        v9 = *(_WORD *)(v8 + 42) & 0x3FFF;
        if ( (_DWORD)v9 != 669 && *(char *)(v8 + 25) < 0 )
          GreWindowBeginLayoutUpdate(*(HWND *)TopLevelWindow, v8);
      }
    }
    ThreadUnlock1(v9, v8, v10);
  }
  else
  {
    v2 = 0LL;
  }
  UserSessionSwitchLeaveCrit(v5, v4, v6, v7);
  return v2;
}
