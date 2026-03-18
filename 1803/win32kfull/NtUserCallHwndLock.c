/*
 * XREFs of NtUserCallHwndLock @ 0x1C003ABB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserCallHwndLock(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = a2;
  EnterCrit(0LL, 1LL);
  v4 = 0LL;
  if ( (_DWORD)v2 == 116
    || (_DWORD)v2 == 121
    || (_DWORD)v2 == 125
    || (unsigned int)v2 > 0x7E && (unsigned int)v2 <= 0x80 )
  {
    gbValidateHandleForIL = 0;
  }
  v5 = ValidateHwnd(a1);
  v9 = v5;
  if ( v5 )
  {
    if ( (_DWORD)v2 != 110 && (_DWORD)v2 != 123
      || (v6 = (*(_WORD *)(*(_QWORD *)(v5 + 40) + 42LL) & 0x3FFFu) - 669, (v6 & 0xFFFFFFFD) != 0) )
    {
      v10 = gptiCurrent;
      v12[0] = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = v12;
      v12[1] = v5;
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
      if ( (unsigned int)(v2 - 109) <= 0xC )
        v4 = ((__int64 (__fastcall *)(__int64))*(&apfnSimpleCall + v2))(v5);
      ThreadUnlock1(v10, v9, v7);
    }
  }
  UserSessionSwitchLeaveCrit(v6, v9, v7, v8);
  return v4;
}
