/*
 * XREFs of NtUserInheritWindowMonitor @ 0x1C0107F70
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     xxxInheritWindowMonitor @ 0x1C0068FC8 (xxxInheritWindowMonitor.c)
 */

__int64 __fastcall NtUserInheritWindowMonitor(__int64 a1, __int64 a2)
{
  int v2; // edi
  __int64 *v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v18; // [rsp+20h] [rbp-28h] BYREF
  __int64 v19; // [rsp+28h] [rbp-20h]
  __int64 v20; // [rsp+30h] [rbp-18h]

  v2 = 0;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v5 = 0LL;
  EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v8 = v6;
  if ( v6 )
  {
    v7 = (*(_WORD *)(*(_QWORD *)(v6 + 40) + 42LL) & 0x3FFFu) - 669;
    if ( (v7 & 0xFFFFFFFD) != 0 )
    {
      v18 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v18;
      v19 = v6;
      HMLockObject(v6);
      if ( PsGetCurrentProcessWin32Process(v10, v9) == *(_QWORD *)(*(_QWORD *)(v8 + 16) + 416LL) )
      {
        if ( !a2 || (v5 = (__int64 *)ValidateHwnd(a2)) != 0LL )
          v2 = xxxInheritWindowMonitor((struct tagWND *)v8, v5, 1);
      }
      else
      {
        UserSetLastError(5LL, v11, v12, v13);
      }
      ThreadUnlock1(v15, v14, v16);
    }
  }
  UserSessionSwitchLeaveCrit(v7);
  return v2;
}
