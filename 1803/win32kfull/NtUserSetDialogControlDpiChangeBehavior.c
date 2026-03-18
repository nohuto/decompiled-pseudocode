/*
 * XREFs of NtUserSetDialogControlDpiChangeBehavior @ 0x1C01F4EC0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 */

__int64 __fastcall NtUserSetDialogControlDpiChangeBehavior(__int64 a1, char a2, unsigned __int8 a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // ebx
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rcx
  _QWORD v17[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v11 = 0;
  v12 = v6;
  if ( v6 )
  {
    v17[0] = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = v17;
    v17[1] = v6;
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
    if ( *(_QWORD *)(*(_QWORD *)(v6 + 16) + 416LL) == PsGetCurrentProcessWin32Process(gptiCurrent) )
    {
      v15 = *(_QWORD *)(v12 + 40);
      v11 = 1;
      *(_WORD *)(v15 + 304) = a3 & a2 & 3 | *(_WORD *)(v15 + 304) & ~(a2 & 3);
    }
    else
    {
      UserSetLastError(5LL, v13);
    }
    ThreadUnlock1(v15, v13, v14);
  }
  UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
  return v11;
}
