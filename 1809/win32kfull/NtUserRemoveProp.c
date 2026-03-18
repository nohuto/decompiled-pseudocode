/*
 * XREFs of NtUserRemoveProp @ 0x1C00FA760
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 */

__int64 __fastcall NtUserRemoveProp(__int64 a1, unsigned int a2)
{
  __int64 v2; // rsi
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbx
  _QWORD *v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax

  v2 = a2;
  EnterCrit(0LL, 1LL);
  v4 = ValidateHwndEx(a1, 1LL, 1LL);
  v9 = 0LL;
  v10 = (_QWORD *)v4;
  if ( v4 )
  {
    v11 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 8LL);
    if ( *(_QWORD *)(v11 + 24) == v4
      || gbEnforceUIPI && (v11 = *(unsigned int *)(*(_QWORD *)(v4 + 16) + 488LL), (v11 & 0xC) == 0)
      || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v11),
          v17 = *(_QWORD *)(v10[2] + 424LL),
          v18 = *(unsigned int *)(v17 + 780),
          *(_DWORD *)(CurrentProcessWin32Process + 780) == (_DWORD)v18)
      && (v19 = PsGetCurrentProcessWin32Process(v18),
          v17 = *(_QWORD *)(v10[2] + 424LL),
          *(_DWORD *)(v19 + 784) == *(_DWORD *)(v17 + 784)) )
    {
      v12 = v10[15];
      if ( (_WORD)v2 == word_1C0317660 )
        *(_QWORD *)(v10[5] + 312LL) = 0LL;
      v9 = RealInternalRemoveProp(v12, v2, 0LL);
    }
    else
    {
      UserSetLastError(5LL, v17, v15, v16);
    }
  }
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v9;
}
