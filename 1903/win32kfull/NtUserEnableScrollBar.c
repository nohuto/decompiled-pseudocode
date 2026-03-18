/*
 * XREFs of NtUserEnableScrollBar @ 0x1C0027D30
 * Callers:
 *     <none>
 * Callees:
 *     xxxEnableScrollBar @ 0x1C0027E30 (xxxEnableScrollBar.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 */

__int64 __fastcall NtUserEnableScrollBar(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  int v6; // ebx
  ULONG_PTR v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+28h] [rbp-20h]
  __int64 v14; // [rsp+30h] [rbp-18h]

  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v6 = 0;
  v7 = v4;
  if ( v4 )
  {
    v5 = *(_QWORD *)(v4 + 40);
    if ( (((*(_WORD *)(v5 + 42) & 0x3FFF) - 669) & 0xFFFFFFFD) != 0 )
    {
      v12 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v12;
      v13 = v4;
      HMLockObject(v4);
      if ( a2 > 3 || a2 == 2 && *(_WORD *)(*(_QWORD *)(v7 + 40) + 42LL) != 666 )
        UserSetLastError(87LL);
      else
        v6 = xxxEnableScrollBar(v7);
      ThreadUnlock1(v9, v8, v10);
    }
  }
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
