/*
 * XREFs of NtUserCallHwndParamLock @ 0x1C005F3C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserCallHwndParamLock(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rdi
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r9
  __int64 v11; // r8
  __int64 v12; // rcx
  _QWORD v14[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = a3;
  EnterCrit(0LL, 1LL);
  v6 = 0LL;
  if ( (_DWORD)v4 == 125
    || (_DWORD)v4 == 116
    || (_DWORD)v4 == 121
    || (unsigned int)v4 > 0x7E && (unsigned int)v4 <= 0x80 )
  {
    gbValidateHandleForIL = 0;
  }
  v7 = ValidateHwnd(a1);
  v11 = v7;
  if ( v7 )
  {
    if ( (_DWORD)v4 != 123 && (_DWORD)v4 != 110
      || (v9 = (*(_WORD *)(*(_QWORD *)(v7 + 40) + 42LL) & 0x3FFFu) - 669, (v9 & 0xFFFFFFFD) != 0) )
    {
      v12 = gptiCurrent;
      v14[0] = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = v14;
      v14[1] = v7;
      _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
      if ( (unsigned int)(v4 - 122) <= 7 )
        v6 = ((__int64 (__fastcall *)(__int64, __int64))*(&apfnSimpleCall + v4))(v7, a2);
      ThreadUnlock1(v12, v8, v11);
    }
  }
  UserSessionSwitchLeaveCrit(v9, v8, v11, v10);
  return v6;
}
