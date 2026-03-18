/*
 * XREFs of NtUserCallHwndParamLockSafe @ 0x1C010BD50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserCallHwndParamLockSafe(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rdi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rbx
  __int64 v11; // r9
  __int64 v12; // rcx
  _QWORD v14[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = a3;
  EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v10 = 0LL;
  v11 = v6;
  if ( v6 )
  {
    if ( (_DWORD)v4 != 128 || (v8 = (*(_WORD *)(*(_QWORD *)(v6 + 40) + 42LL) & 0x2FFFu) - 669, (v8 & 0xFFFFFFFD) != 0) )
    {
      v12 = gptiCurrent;
      v14[0] = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = v14;
      v14[1] = v6;
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
      if ( (_DWORD)v4 == 128 )
        v10 = ((__int64 (__fastcall *)(__int64, __int64))*(&apfnSimpleCall + v4))(v6, a2);
      ThreadUnlock1(v12, v7);
    }
  }
  UserSessionSwitchLeaveCrit(v8, v7, v9, v11);
  return v10;
}
