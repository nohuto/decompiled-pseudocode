/*
 * XREFs of NtUserCallHwnd @ 0x1C0131430
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserCallHwnd(__int64 a1, unsigned int a2)
{
  __int64 v2; // rsi
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+28h] [rbp-20h]
  __int64 v14; // [rsp+30h] [rbp-18h]

  v2 = a2;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v6 = 0LL;
  v7 = v4;
  if ( v4 )
  {
    v12 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v12;
    v13 = v4;
    HMLockObject(v4);
    if ( (unsigned int)(v2 - 86) <= 7 )
      v6 = ((__int64 (__fastcall *)(__int64))*(&apfnSimpleCall + v2))(v7);
    ThreadUnlock1(v9, v8, v10);
  }
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
