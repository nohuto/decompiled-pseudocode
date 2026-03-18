/*
 * XREFs of NtUserShowWindowAsync @ 0x1C0113F60
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     PostEventMessageEx @ 0x1C002BAE0 (PostEventMessageEx.c)
 */

__int64 __fastcall NtUserShowWindowAsync(__int64 a1, unsigned int a2)
{
  __int64 v2; // rsi
  __int64 v4; // rax
  __int64 v5; // rcx
  int v6; // ebx
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v15; // [rsp+40h] [rbp-28h] BYREF
  __int64 v16; // [rsp+48h] [rbp-20h]
  __int64 v17; // [rsp+50h] [rbp-18h]

  v2 = a2;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v6 = 0;
  v7 = v4;
  if ( v4 )
  {
    v5 = *(_QWORD *)(v4 + 40);
    if ( (((*(_WORD *)(v5 + 42) & 0x3FFF) - 669) & 0xFFFFFFFD) != 0 )
    {
      v15 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v15;
      v16 = v4;
      HMLockObject(v4);
      if ( (unsigned int)v2 > 0xB )
        UserSetLastError(87LL, v8, v9, v10);
      else
        v6 = PostEventMessageEx(
               *(struct tagTHREADINFO **)(v7 + 16),
               *(_QWORD *)(*(_QWORD *)(v7 + 16) + 424LL),
               1u,
               v7,
               2u,
               0LL,
               v2 | gdwPUDFlags & 0x10000,
               0LL);
      ThreadUnlock1(v12, v11, v13);
    }
  }
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
