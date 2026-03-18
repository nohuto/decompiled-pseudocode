/*
 * XREFs of NtUserRemoveProp @ 0x1C00E1140
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 */

__int64 __fastcall NtUserRemoveProp(__int64 a1, unsigned __int16 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax

  EnterCrit(0LL, 1LL);
  v4 = ValidateHwndEx(a1, 1LL, 1LL);
  v9 = 0LL;
  v10 = v4;
  if ( v4 )
  {
    v11 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 8LL);
    if ( *(_QWORD *)(v11 + 24) == v4
      || gbEnforceUIPI && (v11 = *(unsigned int *)(*(_QWORD *)(v4 + 16) + 480LL), (v11 & 0xC) == 0)
      || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v11),
          v14 = *(_QWORD *)(*(_QWORD *)(v10 + 16) + 416LL),
          v15 = *(unsigned int *)(v14 + 772),
          *(_DWORD *)(CurrentProcessWin32Process + 772) == (_DWORD)v15)
      && (v16 = PsGetCurrentProcessWin32Process(v15),
          v14 = *(_QWORD *)(*(_QWORD *)(v10 + 16) + 416LL),
          *(_DWORD *)(v16 + 776) == *(_DWORD *)(v14 + 776)) )
    {
      v9 = RealInternalRemoveProp(*(_QWORD *)(v10 + 120), a2, 0LL);
    }
    else
    {
      UserSetLastError(5LL, v14);
    }
  }
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v9;
}
