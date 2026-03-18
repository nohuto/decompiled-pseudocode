/*
 * XREFs of NtUserMinMaximize @ 0x1C01F3090
 * Callers:
 *     <none>
 * Callees:
 *     xxxMinMaximizeEx @ 0x1C0065CDC (xxxMinMaximizeEx.c)
 */

__int64 __fastcall NtUserMinMaximize(__int64 a1, unsigned int a2, int a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbx
  __int64 *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  _QWORD v17[5]; // [rsp+30h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v11 = 0LL;
  if ( v6 )
  {
    v8 = *(_QWORD *)(v6 + 40);
    v7 = (*(_WORD *)(v8 + 42) & 0x3FFFu) - 669;
    if ( (v7 & 0xFFFFFFFD) != 0 )
    {
      v17[0] = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = v17;
      v17[1] = v6;
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
      v12 = (__int64 *)xxxMinMaximizeEx(
                         (struct tagWND *)v6,
                         a2,
                         gdwPUDFlags & 0x10000 | (unsigned int)(a3 != 0),
                         0LL,
                         0LL,
                         0LL);
      if ( v12 )
        v11 = *v12;
      ThreadUnlock1(v14, v13, v15);
    }
  }
  UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
  return v11;
}
