/*
 * XREFs of NtUserRegisterPointerInputTarget @ 0x1C01F3FD0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     _RegisterPointerInputTarget @ 0x1C01BAD8C (_RegisterPointerInputTarget.c)
 */

__int64 __fastcall NtUserRegisterPointerInputTarget(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // ebx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rax

  EnterCrit(0LL, 1LL);
  v7 = ValidateHwnd(a1);
  v11 = 0;
  v12 = v7;
  if ( v7 )
  {
    if ( gbEnforceUIPI && *(int *)(*(_QWORD *)(gptiCurrent + 416LL) + 12LL) >= 0 )
    {
      UserSetLastError(5LL, v8);
      EtwTraceUIPISystemError(*(_QWORD *)(gptiCurrent + 416LL), 0LL, 12LL);
    }
    else
    {
      if ( gptiCurrent == *(_QWORD *)(v7 + 16) )
      {
        if ( !a4 || (v14 = *(_QWORD *)(v7 + 40), *(char *)(v14 + 20) >= 0) && *(char *)(v14 + 19) >= 0 )
        {
          if ( (unsigned int)(a3 - 2) <= 1 )
          {
            v11 = RegisterPointerInputTarget(v12, v8, a3, a4);
            goto LABEL_14;
          }
        }
        v13 = 87LL;
      }
      else
      {
        v13 = 5LL;
      }
      UserSetLastError(v13, v8);
    }
  }
LABEL_14:
  UserSessionSwitchLeaveCrit(v12, v8, v9, v10);
  return v11;
}
