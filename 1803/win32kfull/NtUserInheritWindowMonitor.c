/*
 * XREFs of NtUserInheritWindowMonitor @ 0x1C01F1390
 * Callers:
 *     <none>
 * Callees:
 *     xxxInheritWindowMonitor @ 0x1C0030244 (xxxInheritWindowMonitor.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 */

__int64 __fastcall NtUserInheritWindowMonitor(__int64 a1, __int64 a2)
{
  int v2; // edi
  struct tagWND *v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  struct tagWND *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  _QWORD v17[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  v5 = 0LL;
  EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v11 = (struct tagWND *)v6;
  if ( v6 )
  {
    v8 = (*(_WORD *)(*(_QWORD *)(v6 + 40) + 42LL) & 0x3FFFu) - 669;
    if ( (v8 & 0xFFFFFFFD) != 0 )
    {
      v17[0] = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = v17;
      v17[1] = v6;
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
      if ( PsGetCurrentProcessWin32Process(gptiCurrent) == *(_QWORD *)(*(_QWORD *)(v6 + 16) + 416LL) )
      {
        if ( !a2 || (v5 = (struct tagWND *)ValidateHwnd(a2)) != 0LL )
          v2 = xxxInheritWindowMonitor(v11, v5, 1);
      }
      else
      {
        UserSetLastError(5LL, v12);
      }
      ThreadUnlock1(v14, v13, v15);
    }
  }
  UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
  return v2;
}
