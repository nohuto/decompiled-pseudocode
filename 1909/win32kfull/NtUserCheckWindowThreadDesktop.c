/*
 * XREFs of NtUserCheckWindowThreadDesktop @ 0x1C0229C00
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     GetConsoleDesktop @ 0x1C01EACB0 (GetConsoleDesktop.c)
 */

__int64 __fastcall NtUserCheckWindowThreadDesktop(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  int v6; // ebx
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD v13[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v14; // [rsp+50h] [rbp+18h] BYREF
  __int64 v15; // [rsp+58h] [rbp+20h] BYREF

  EnterSharedCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v6 = 0;
  v7 = v4;
  if ( v4 )
  {
    v8 = PtiFromThreadId(a2);
    if ( v8 )
    {
      v6 = ValidatePwndDesktop(v7, v8);
    }
    else if ( (int)GetConsoleDesktop(a2, v13, &v14, &v15) < 0 )
    {
      UserSetLastError(87LL, v9, v10, v11);
    }
    else
    {
      LOBYTE(v6) = *(_QWORD *)(v7 + 24) == v14;
    }
  }
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
