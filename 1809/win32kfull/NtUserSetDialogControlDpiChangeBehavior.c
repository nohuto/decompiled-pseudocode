/*
 * XREFs of NtUserSetDialogControlDpiChangeBehavior @ 0x1C021C6D0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 */

__int64 __fastcall NtUserSetDialogControlDpiChangeBehavior(__int64 a1, char a2, unsigned __int8 a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbx
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  _QWORD v18[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v11 = 0LL;
  v12 = v6;
  if ( v6 )
  {
    v18[0] = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = v18;
    v18[1] = v6;
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
    if ( *(_QWORD *)(*(_QWORD *)(v6 + 16) + 424LL) == PsGetCurrentProcessWin32Process(gptiCurrent) )
    {
      v16 = *(_QWORD *)(v12 + 40);
      v11 = 1LL;
      *(_WORD *)(v16 + 304) = a3 & a2 & 3 | *(_WORD *)(v16 + 304) & ~(a2 & 3);
    }
    else
    {
      UserSetLastError(5LL, v13, v14, v15);
    }
    ThreadUnlock1(v16, v13);
  }
  UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
  return v11;
}
