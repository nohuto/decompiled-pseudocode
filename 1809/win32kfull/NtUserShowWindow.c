/*
 * XREFs of NtUserShowWindow @ 0x1C006D4B0
 * Callers:
 *     <none>
 * Callees:
 *     xxxShowWindowEx @ 0x1C006B634 (xxxShowWindowEx.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 */

__int64 __fastcall NtUserShowWindow(__int64 a1, unsigned int a2)
{
  ULONG_PTR v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // ebx
  ULONG_PTR v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD v13[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v4 = ValidateHwndEx(a1, 1LL, 1LL);
  v8 = 0;
  v9 = v4;
  if ( v4 )
  {
    v6 = *(_QWORD *)(v4 + 40);
    v5 = (*(_WORD *)(v6 + 42) & 0x2FFFu) - 669;
    if ( (v5 & 0xFFFFFFFD) != 0 )
    {
      v13[0] = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = v13;
      v13[1] = v4;
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
      if ( a2 > 0xB || *(char *)(*(_QWORD *)(v4 + 40) + 20LL) < 0 )
        UserSetLastError(87LL);
      else
        v8 = xxxShowWindowEx(v4, a2, a2 & 0x10000 | gdwPUDFlags & 0x10000);
      ThreadUnlock1(v11, v10);
    }
  }
  UserSessionSwitchLeaveCrit(v6, v5, v7, v9);
  return v8;
}
