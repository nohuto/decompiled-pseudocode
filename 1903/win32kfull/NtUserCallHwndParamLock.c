/*
 * XREFs of NtUserCallHwndParamLock @ 0x1C0014D80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserCallHwndParamLock(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rdi
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v14; // [rsp+20h] [rbp-28h] BYREF
  __int64 v15; // [rsp+28h] [rbp-20h]
  __int64 v16; // [rsp+30h] [rbp-18h]

  v3 = a3;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  EnterCrit(0LL, 1LL);
  v6 = 0LL;
  if ( (_DWORD)v3 == 122 || (_DWORD)v3 == 114 || (_DWORD)v3 == 119 || (unsigned int)(v3 - 124) <= 1 )
    gbValidateHandleForIL = 0;
  v7 = ValidateHwnd(a1);
  v9 = v7;
  if ( v7 )
  {
    if ( (_DWORD)v3 != 108 && (_DWORD)v3 != 127
      || (v8 = (*(_WORD *)(*(_QWORD *)(v7 + 40) + 42LL) & 0x3FFFu) - 669, (v8 & 0xFFFFFFFD) != 0) )
    {
      v14 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v14;
      v15 = v7;
      HMLockObject(v7);
      if ( (unsigned int)(v3 - 120) <= 7 )
        v6 = ((__int64 (__fastcall *)(__int64, __int64))*(&apfnSimpleCall + v3))(v9, a2);
      ThreadUnlock1(v11, v10, v12);
    }
  }
  UserSessionSwitchLeaveCrit(v8);
  return v6;
}
