/*
 * XREFs of NtUserBeginLayoutUpdate @ 0x1C0113AB0
 * Callers:
 *     <none>
 * Callees:
 *     GreWindowBeginLayoutUpdate @ 0x1C000A590 (GreWindowBeginLayoutUpdate.c)
 *     _IsTopLevelWindow @ 0x1C0068C9C (_IsTopLevelWindow.c)
 *     _GetTopLevelWindow @ 0x1C006A460 (_GetTopLevelWindow.c)
 */

__int64 __fastcall NtUserBeginLayoutUpdate(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 TopLevelWindow; // rax
  __int64 v11; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+28h] [rbp-20h]
  __int64 v13; // [rsp+30h] [rbp-18h]

  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v2 = 1LL;
  EnterCrit(0LL, 1LL);
  v3 = ValidateHwnd(a1);
  v5 = v3;
  if ( v3 && (v4 = *(_QWORD *)(v3 + 40), (((*(_WORD *)(v4 + 42) & 0x3FFF) - 669) & 0xFFFFFFFD) != 0) )
  {
    v11 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v11;
    v12 = v3;
    HMLockObject(v3);
    if ( !(unsigned int)IsTopLevelWindow(v5) && *(char *)(*(_QWORD *)(v5 + 40) + 25LL) < 0 )
    {
      TopLevelWindow = GetTopLevelWindow(v5);
      if ( TopLevelWindow )
      {
        v6 = *(_QWORD *)(TopLevelWindow + 40);
        v7 = *(_WORD *)(v6 + 42) & 0x3FFF;
        if ( (_DWORD)v7 != 669 && *(char *)(v6 + 25) < 0 )
          GreWindowBeginLayoutUpdate(*(HWND *)TopLevelWindow, v6);
      }
    }
    ThreadUnlock1(v7, v6, v8);
  }
  else
  {
    v2 = 0LL;
  }
  UserSessionSwitchLeaveCrit(v4);
  return v2;
}
