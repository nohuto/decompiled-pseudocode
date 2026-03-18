/*
 * XREFs of NtUserCallHwndLockSafe @ 0x1C0014C70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserCallHwndLockSafe(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rsi
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
  v4 = 0LL;
  if ( (_DWORD)v2 == 114
    || (_DWORD)v2 == 119
    || (_DWORD)v2 == 122
    || (unsigned int)v2 > 0x7B && (unsigned int)v2 <= 0x7D )
  {
    gbValidateHandleForIL = 0;
  }
  v5 = ValidateHwnd(a1);
  v7 = v5;
  if ( v5 )
  {
    if ( (_DWORD)v2 != 108 && (_DWORD)v2 != 127
      || (v6 = (*(_WORD *)(*(_QWORD *)(v5 + 40) + 42LL) & 0x3FFFu) - 669, (v6 & 0xFFFFFFFD) != 0) )
    {
      v12 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v12;
      v13 = v5;
      HMLockObject(v5);
      if ( (_DWORD)v2 == 109 )
        v4 = ((__int64 (__fastcall *)(__int64))*(&apfnSimpleCall + v2))(v7);
      ThreadUnlock1(v9, v8, v10);
    }
  }
  UserSessionSwitchLeaveCrit(v6);
  return v4;
}
