/*
 * XREFs of NtUserSetImeOwnerWindow @ 0x1C00891C0
 * Callers:
 *     <none>
 * Callees:
 *     zzzImeSetFutureOwner @ 0x1C0086C10 (zzzImeSetFutureOwner.c)
 *     zzzImeSetOwnerWindow @ 0x1C00892FC (zzzImeSetOwnerWindow.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     ImeCheckTopmost @ 0x1C008C5C4 (ImeCheckTopmost.c)
 *     zzzEndDeferWinEventNotify @ 0x1C00CCF6C (zzzEndDeferWinEventNotify.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserSetImeOwnerWindow(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // r9

  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v6 = 0LL;
  v7 = v4;
  if ( v4 )
  {
    if ( (*gpsi & 4) == 0 )
    {
      UserSetLastError(120LL);
      goto LABEL_10;
    }
    v5 = *(_WORD *)(*(_QWORD *)(v4 + 40) + 42LL) & 0x3FFF;
    if ( (_DWORD)v5 == 681 )
    {
      if ( !a2 )
      {
        v8 = 0LL;
        goto LABEL_6;
      }
      v8 = ValidateHwnd(a2);
      if ( v8 )
      {
LABEL_6:
        ++gdwDeferWinEvent;
        if ( v8 )
          goto LABEL_7;
        v10 = *(_QWORD *)(v7 + 16);
        v11 = *(_QWORD *)(*(_QWORD *)(v10 + 424) + 128LL);
        if ( !v11 )
          goto LABEL_17;
        if ( v11 == *(_QWORD *)(v7 + 120) )
          goto LABEL_9;
        v12 = *(_QWORD *)(*(_QWORD *)(v11 + 136) + 8LL);
        if ( *(_WORD *)v12 != *(_WORD *)(gpsi + 898LL)
          && (*(_BYTE *)(v12 + 10) & 1) == 0
          && v10 == *(_QWORD *)(v11 + 16) )
        {
LABEL_7:
          zzzImeSetOwnerWindow((struct tagWND *)v7);
        }
        else
        {
LABEL_17:
          zzzImeSetFutureOwner((struct tagWND *)v7, *(struct tagWND **)(v7 + 120));
        }
        ImeCheckTopmost(v7);
LABEL_9:
        zzzEndDeferWinEventNotify();
        v6 = 1LL;
      }
    }
  }
LABEL_10:
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
