/*
 * XREFs of NtUserEnableResizeLayoutSynchronization @ 0x1C012EBF0
 * Callers:
 *     <none>
 * Callees:
 *     SetOrClrWF @ 0x1C0044F3C (SetOrClrWF.c)
 */

__int64 __fastcall NtUserEnableResizeLayoutSynchronization(__int64 a1, int a2)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+28h] [rbp-20h]
  __int64 v14; // [rsp+30h] [rbp-18h]

  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v4 = 1LL;
  EnterCrit(0LL, 1LL);
  v5 = ValidateHwnd(a1);
  v7 = v5;
  if ( v5 && (v6 = (*(_WORD *)(*(_QWORD *)(v5 + 40) + 42LL) & 0x3FFFu) - 669, (v6 & 0xFFFFFFFD) != 0) )
  {
    v12 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v12;
    v13 = v5;
    HMLockObject(v5);
    if ( a2 )
      *(_BYTE *)(*(_QWORD *)(v7 + 40) + 25LL) |= 0x80u;
    else
      SetOrClrWF(0, v7, 0x980u, 0);
    ThreadUnlock1(v9, v8, v10);
  }
  else
  {
    v4 = 0LL;
  }
  UserSessionSwitchLeaveCrit(v6);
  return v4;
}
