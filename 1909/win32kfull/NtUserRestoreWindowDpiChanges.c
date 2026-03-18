/*
 * XREFs of NtUserRestoreWindowDpiChanges @ 0x1C0009550
 * Callers:
 *     <none>
 * Callees:
 *     xxxRestoreWindowFromDeferredStateIfNeeded @ 0x1C0014B38 (xxxRestoreWindowFromDeferredStateIfNeeded.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 */

__int64 __fastcall NtUserRestoreWindowDpiChanges(__int64 a1)
{
  __int64 v2; // rax
  int v3; // ebx
  __int64 v4; // rdi
  __int64 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+28h] [rbp-20h]
  __int64 v8; // [rsp+30h] [rbp-18h]

  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  EnterCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v3 = 0;
  v4 = v2;
  if ( v2 && (((*(_WORD *)(*(_QWORD *)(v2 + 40) + 42LL) & 0x3FFF) - 669) & 0xFFFFFFFD) != 0 )
  {
    v6 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v6;
    v7 = v2;
    HMLockObject(v2);
    if ( (*(_DWORD *)(*(_QWORD *)(v4 + 40) + 288LL) & 0xF) == 2 )
      v3 = xxxRestoreWindowFromDeferredStateIfNeeded((struct tagWND *)v4);
    else
      UserSetLastError(87LL);
    ThreadUnlock1();
  }
  UserSessionSwitchLeaveCrit();
  return v3;
}
