/*
 * XREFs of NtUserCallHwndParam @ 0x1C011C110
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 */

// write access to const memory has been detected, the output may be wrong!
_QWORD *__fastcall NtUserCallHwndParam(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rdi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // rcx
  _QWORD *v12; // rax
  _QWORD *v13; // rbx
  _QWORD v15[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = a3;
  EnterCrit(0LL, 1LL);
  if ( (_DWORD)v4 == 97 || (_DWORD)v4 == -1 )
    gbValidateHandleForIL = 0;
  v6 = ValidateHwnd(a1);
  v10 = v6;
  if ( !v6 )
  {
    v13 = 0LL;
    goto LABEL_9;
  }
  v11 = gptiCurrent;
  v15[0] = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = v15;
  v15[1] = v6;
  _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
  if ( (unsigned int)(v4 - 97) > 0xA )
    goto LABEL_10;
  _mm_lfence();
  v12 = (_QWORD *)((__int64 (__fastcall *)(__int64, __int64))*(&apfnSimpleCall + v4))(v6, a2);
  v13 = v12;
  if ( (unsigned int)v4 < 0x62 )
  {
    if ( v12 )
    {
      v13 = (_QWORD *)*v12;
      goto LABEL_8;
    }
LABEL_10:
    v13 = 0LL;
  }
LABEL_8:
  ThreadUnlock1(v11, v7);
LABEL_9:
  UserSessionSwitchLeaveCrit(v8, v7, v10, v9);
  return v13;
}
