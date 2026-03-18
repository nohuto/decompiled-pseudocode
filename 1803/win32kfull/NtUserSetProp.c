/*
 * XREFs of NtUserSetProp @ 0x1C00E1C00
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 */

__int64 __fastcall NtUserSetProp(__int64 a1, int a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // ebx
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax

  EnterCrit(0LL, 1LL);
  v6 = ValidateHwndEx(a1, 1LL, 1LL);
  v11 = 0;
  v12 = v6;
  if ( v6 )
  {
    v13 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 8LL);
    if ( *(_QWORD *)(v13 + 24) == v6
      || gbEnforceUIPI && (v13 = *(unsigned int *)(*(_QWORD *)(v6 + 16) + 480LL), (v13 & 0xC) == 0)
      || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v13),
          v16 = *(_QWORD *)(*(_QWORD *)(v12 + 16) + 416LL),
          v17 = *(unsigned int *)(v16 + 772),
          *(_DWORD *)(CurrentProcessWin32Process + 772) == (_DWORD)v17)
      && (v18 = PsGetCurrentProcessWin32Process(v17),
          v16 = *(_QWORD *)(*(_QWORD *)(v12 + 16) + 416LL),
          *(_DWORD *)(v18 + 776) == *(_DWORD *)(v16 + 776)) )
    {
      v11 = RealInternalSetProp(v12 + 120, (unsigned __int16)a2, a3, HIWORD(a2) != 0 ? 2 : 0);
    }
    else
    {
      UserSetLastError(5LL, v16);
    }
  }
  UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
  return v11;
}
