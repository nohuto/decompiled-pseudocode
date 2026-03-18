/*
 * XREFs of NtUserCallHwnd @ 0x1C003BD20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserCallHwnd(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r9
  __int64 v8; // rbx
  __int64 v9; // r8
  __int64 v10; // rcx
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = a2;
  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v8 = 0LL;
  v9 = v4;
  if ( v4 )
  {
    v10 = gptiCurrent;
    v12[0] = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = v12;
    v12[1] = v4;
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    if ( (unsigned int)(v2 - 88) <= 7 )
      v8 = ((__int64 (__fastcall *)(__int64))*(&apfnSimpleCall + v2))(v4);
    ThreadUnlock1(v10, v5, v9);
  }
  UserSessionSwitchLeaveCrit(v6, v5, v9, v7);
  return v8;
}
