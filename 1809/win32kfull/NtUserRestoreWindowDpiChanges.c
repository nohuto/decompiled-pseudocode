/*
 * XREFs of NtUserRestoreWindowDpiChanges @ 0x1C0006240
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     xxxRestoreWindowFromDeferredStateIfNeeded @ 0x1C00B8040 (xxxRestoreWindowFromDeferredStateIfNeeded.c)
 */

__int64 __fastcall NtUserRestoreWindowDpiChanges(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r9
  int v6; // ebx
  __int64 v7; // r8
  _QWORD v9[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v6 = 0;
  v7 = v2;
  if ( v2 )
  {
    v4 = *(_QWORD *)(v2 + 40);
    v3 = (*(_WORD *)(v4 + 42) & 0x2FFFu) - 669;
    if ( (v3 & 0xFFFFFFFD) != 0 )
    {
      v9[0] = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = v9;
      v9[1] = v2;
      _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
      if ( (*(_DWORD *)(*(_QWORD *)(v2 + 40) + 288LL) & 0xF) == 2 )
        v6 = xxxRestoreWindowFromDeferredStateIfNeeded((struct tagWND *)v2);
      else
        UserSetLastError(87LL);
      ThreadUnlock1();
    }
  }
  UserSessionSwitchLeaveCrit(v4, v3, v7, v5);
  return v6;
}
