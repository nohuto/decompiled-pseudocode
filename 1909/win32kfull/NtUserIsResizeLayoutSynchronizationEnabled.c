/*
 * XREFs of NtUserIsResizeLayoutSynchronizationEnabled @ 0x1C0230860
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtUserIsResizeLayoutSynchronizationEnabled(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rdi
  unsigned __int8 v6; // bl
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v11; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+28h] [rbp-20h]
  __int64 v13; // [rsp+30h] [rbp-18h]

  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  EnterCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v4 = 0LL;
  v5 = v2;
  if ( v2 )
  {
    v3 = *(_QWORD *)(v2 + 40);
    if ( (((*(_WORD *)(v3 + 42) & 0x3FFF) - 669) & 0xFFFFFFFD) != 0 )
    {
      v11 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v11;
      v12 = v2;
      HMLockObject(v2);
      v6 = *(_BYTE *)(*(_QWORD *)(v5 + 40) + 25LL);
      ThreadUnlock1(v8, v7, v9);
      v4 = v6 & 0x80;
    }
  }
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
