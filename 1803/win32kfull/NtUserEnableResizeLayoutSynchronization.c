/*
 * XREFs of NtUserEnableResizeLayoutSynchronization @ 0x1C0105400
 * Callers:
 *     <none>
 * Callees:
 *     SetOrClrWF @ 0x1C00C3E94 (SetOrClrWF.c)
 */

__int64 __fastcall NtUserEnableResizeLayoutSynchronization(__int64 a1, int a2)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = 1LL;
  EnterCrit(0LL, 1LL);
  v5 = ValidateHwnd(a1);
  v9 = v5;
  if ( v5 && (v6 = (*(_WORD *)(*(_QWORD *)(v5 + 40) + 42LL) & 0x3FFFu) - 669, (v6 & 0xFFFFFFFD) != 0) )
  {
    v10 = gptiCurrent;
    v12[0] = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = v12;
    v12[1] = v5;
    _InterlockedAdd((volatile signed __int32 *)(v5 + 8), 1u);
    if ( a2 )
      *(_BYTE *)(*(_QWORD *)(v5 + 40) + 25LL) |= 0x80u;
    else
      SetOrClrWF(0, v5, 2432, 0);
    ThreadUnlock1(v10, v9, v7);
  }
  else
  {
    v4 = 0LL;
  }
  UserSessionSwitchLeaveCrit(v6, v9, v7, v8);
  return v4;
}
