/*
 * XREFs of NtUserCheckWindowThreadDesktop @ 0x1C01EC2D0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     GetConsoleDesktop @ 0x1C01B2FC0 (GetConsoleDesktop.c)
 */

__int64 __fastcall NtUserCheckWindowThreadDesktop(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // ebx
  __int64 v10; // rdi
  __int64 v11; // rax
  _QWORD v13[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v14; // [rsp+50h] [rbp+18h] BYREF
  __int64 v15; // [rsp+58h] [rbp+20h] BYREF

  EnterSharedCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v9 = 0;
  v10 = v4;
  if ( v4 )
  {
    v11 = PtiFromThreadId(a2);
    if ( v11 )
    {
      v9 = ValidatePwndDesktop(v10, v11);
    }
    else if ( (int)GetConsoleDesktop(a2, v13, &v14, &v15) < 0 )
    {
      UserSetLastError(87LL, v5);
    }
    else
    {
      LOBYTE(v9) = *(_QWORD *)(v10 + 24) == v14;
    }
  }
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v9;
}
