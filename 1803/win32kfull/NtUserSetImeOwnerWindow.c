/*
 * XREFs of NtUserSetImeOwnerWindow @ 0x1C0070A70
 * Callers:
 *     <none>
 * Callees:
 *     zzzEndDeferWinEventNotify @ 0x1C0028B0C (zzzEndDeferWinEventNotify.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     zzzImeSetFutureOwner @ 0x1C006D7A0 (zzzImeSetFutureOwner.c)
 *     zzzImeSetOwnerWindow @ 0x1C006EBFC (zzzImeSetOwnerWindow.c)
 *     ImeCheckTopmost @ 0x1C0070E5C (ImeCheckTopmost.c)
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
  __int64 v13; // r9

  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v9 = 0LL;
  v10 = v4;
  if ( v4 )
  {
    if ( (*gpsi & 4) == 0 )
    {
      UserSetLastError(120LL, v5);
      goto LABEL_10;
    }
    v6 = *(_WORD *)(*(_QWORD *)(v4 + 40) + 42LL) & 0x3FFF;
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
        v5 = *(_QWORD *)(*(_QWORD *)(v12 + 424) + 120LL);
        if ( !v5 )
          goto LABEL_17;
        if ( v5 == *(_QWORD *)(v10 + 96) )
          goto LABEL_9;
        v13 = *(_QWORD *)(*(_QWORD *)(v5 + 112) + 8LL);
        if ( *(_WORD *)v13 != *(_WORD *)(gpsi + 898LL) && (*(_BYTE *)(v13 + 10) & 1) == 0 && v12 == *(_QWORD *)(v5 + 16) )
LABEL_7:
          zzzImeSetOwnerWindow((struct tagWND *)v10, v5);
        else
LABEL_17:
          zzzImeSetFutureOwner((struct tagWND *)v10, *(struct tagWND **)(v10 + 96));
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
