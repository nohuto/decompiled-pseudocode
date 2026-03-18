/*
 * XREFs of NtUserCallHwndLockSafe @ 0x1C0116050
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserCallHwndLockSafe(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = a2;
  EnterCrit(0LL, 1LL);
  v4 = 0LL;
  if ( (_DWORD)v2 == 115
    || (_DWORD)v2 == 120
    || (_DWORD)v2 == 123
    || (unsigned int)v2 > 0x7C && (unsigned int)v2 <= 0x7E )
  {
    gbValidateHandleForIL = 0;
  }
  v5 = ValidateHwnd(a1);
  if ( v5 )
  {
    if ( (_DWORD)v2 != 109 && (_DWORD)v2 != 128
      || (v6 = (*(_WORD *)(*(_QWORD *)(v5 + 40) + 42LL) & 0x2FFFu) - 669, (v6 & 0xFFFFFFFD) != 0) )
    {
      v9 = gptiCurrent;
      v11[0] = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = v11;
      v11[1] = v5;
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
      if ( (_DWORD)v2 == 110 )
        v4 = ((__int64 (__fastcall *)(__int64))*(&apfnSimpleCall + v2))(v5);
      ThreadUnlock1(v9, v5);
    }
  }
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v4;
}
