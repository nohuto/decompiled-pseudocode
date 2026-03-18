/*
 * XREFs of NtUserShowWindow @ 0x1C0075690
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     xxxShowWindowEx @ 0x1C0075774 (xxxShowWindowEx.c)
 */

__int64 __fastcall NtUserShowWindow(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // ebx
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  _QWORD v14[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v4 = ValidateHwndEx(a1, 1LL, 1LL);
  v8 = 0;
  v9 = v4;
  if ( v4 )
  {
    v6 = *(_QWORD *)(v4 + 40);
    v5 = (*(_WORD *)(v6 + 42) & 0x3FFFu) - 669;
    if ( (v5 & 0xFFFFFFFD) != 0 )
    {
      v14[0] = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = v14;
      v14[1] = v4;
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
      if ( a2 > 0xB || *(char *)(*(_QWORD *)(v4 + 40) + 20LL) < 0 )
        UserSetLastError(87LL, v5);
      else
        v8 = xxxShowWindowEx((struct tagWND *)v4);
      ThreadUnlock1(v11, v10, v12);
    }
  }
  UserSessionSwitchLeaveCrit(v6, v5, v7, v9);
  return v8;
}
