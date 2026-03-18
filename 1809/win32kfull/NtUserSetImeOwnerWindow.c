/*
 * XREFs of NtUserSetImeOwnerWindow @ 0x1C000CA40
 * Callers:
 *     <none>
 * Callees:
 *     zzzImeSetFutureOwner @ 0x1C000C0C4 (zzzImeSetFutureOwner.c)
 *     zzzImeSetOwnerWindow @ 0x1C000CB74 (zzzImeSetOwnerWindow.c)
 *     ImeCheckTopmost @ 0x1C000CD64 (ImeCheckTopmost.c)
 *     zzzEndDeferWinEventNotify @ 0x1C00444C0 (zzzEndDeferWinEventNotify.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserSetImeOwnerWindow(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // r9

  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v9 = 0LL;
  v10 = v4;
  if ( v4 )
  {
    if ( (*gpsi & 4) == 0 )
    {
      UserSetLastError(120LL);
      goto LABEL_10;
    }
    v6 = *(_WORD *)(*(_QWORD *)(v4 + 40) + 42LL) & 0x2FFF;
    if ( (_DWORD)v6 == 681 )
    {
      if ( !a2 )
      {
        v5 = 0LL;
        goto LABEL_6;
      }
      v5 = ValidateHwnd(a2);
      if ( v5 )
      {
LABEL_6:
        ++gdwDeferWinEvent;
        if ( v5 )
          goto LABEL_7;
        v12 = *(_QWORD *)(v10 + 16);
        v13 = *(_QWORD *)(*(_QWORD *)(v12 + 432) + 120LL);
        if ( !v13 )
          goto LABEL_17;
        if ( v13 == *(_QWORD *)(v10 + 96) )
          goto LABEL_9;
        v14 = *(_QWORD *)(*(_QWORD *)(v13 + 112) + 8LL);
        if ( *(_WORD *)v14 != *(_WORD *)(gpsi + 898LL)
          && (*(_BYTE *)(v14 + 10) & 1) == 0
          && v12 == *(_QWORD *)(v13 + 16) )
        {
LABEL_7:
          zzzImeSetOwnerWindow((struct tagWND *)v10);
        }
        else
        {
LABEL_17:
          zzzImeSetFutureOwner((struct tagWND *)v10, *(struct tagWND **)(v10 + 96));
        }
        ImeCheckTopmost(v10);
LABEL_9:
        zzzEndDeferWinEventNotify();
        v9 = 1LL;
      }
    }
  }
LABEL_10:
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v9;
}
