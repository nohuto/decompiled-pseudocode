/*
 * XREFs of NtUserBeginLayoutUpdate @ 0x1C012D200
 * Callers:
 *     <none>
 * Callees:
 *     GreWindowBeginLayoutUpdate @ 0x1C000799C (GreWindowBeginLayoutUpdate.c)
 *     _IsTopLevelWindow @ 0x1C002BEB4 (_IsTopLevelWindow.c)
 *     _GetTopLevelWindow @ 0x1C0071310 (_GetTopLevelWindow.c)
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
  __int64 v10; // r9
  __int64 TopLevelWindow; // rax
  _QWORD v13[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = 1LL;
  EnterCrit(0LL, 1LL);
  v3 = ValidateHwnd(a1);
  v7 = v3;
  if ( v3 && (v5 = *(_QWORD *)(v3 + 40), v4 = (*(_WORD *)(v5 + 42) & 0x2FFFu) - 669, (v4 & 0xFFFFFFFD) != 0) )
  {
    v13[0] = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = v13;
    v13[1] = v3;
    _InterlockedAdd((volatile signed __int32 *)(v3 + 8), 1u);
    if ( !(unsigned int)IsTopLevelWindow(v3) && *(char *)(*(_QWORD *)(v10 + 40) + 25LL) < 0 )
    {
      TopLevelWindow = GetTopLevelWindow(v10);
      if ( TopLevelWindow )
      {
        v8 = *(_QWORD *)(TopLevelWindow + 40);
        v9 = *(_WORD *)(v8 + 42) & 0x2FFF;
        if ( (_DWORD)v9 != 669 && *(char *)(v8 + 25) < 0 )
          GreWindowBeginLayoutUpdate(*(HWND *)TopLevelWindow);
      }
    }
    ThreadUnlock1(v9, v8);
  }
  else
  {
    v2 = 0LL;
  }
  UserSessionSwitchLeaveCrit(v5, v4, v6, v7);
  return v2;
}
