/*
 * XREFs of NtUserMessageCall @ 0x1C00F1620
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserMessageCall(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, int a6, int a7)
{
  __int64 v7; // rsi
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  _QWORD v22[4]; // [rsp+40h] [rbp-38h] BYREF

  v7 = a2;
  EnterCrit(0LL, 1LL);
  v14 = 0LL;
  gbValidateHandleForIL = 0;
  if ( ((a1 + 1) & 0xFFFFFFFFFFFEFFFFuLL) != 0 || (unsigned int)(a6 - 695) > 1 )
  {
    v16 = ValidateHwnd(a1);
    if ( !v16 )
      goto LABEL_10;
    v22[0] = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = v22;
    v22[1] = v16;
    _InterlockedIncrement((volatile signed __int32 *)(v16 + 8));
  }
  else
  {
    v16 = -1LL;
  }
  if ( (v7 & 0xFFFE0000) != 0 )
  {
    UserSetLastError(87LL, v11, v12, v13);
    UserSetLastError(87LL, v19, v20, v21);
  }
  else
  {
    if ( (unsigned int)v7 >= 0x400 )
    {
      v17 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, __int64))mpFnidPfn[((_BYTE)a6 + 6) & 0x1F])(
              v16,
              (unsigned int)v7,
              a3,
              a4,
              a5);
    }
    else
    {
      _mm_lfence();
      LOBYTE(v14) = a7 != 0;
      v17 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, __int64, int, _DWORD))gapfnMessageCall[(unsigned __int8)MessageTable[v7]])(
              v16,
              (unsigned int)v7,
              a3,
              a4,
              a5,
              a6,
              v14);
    }
    v14 = v17;
  }
  if ( v16 != -1 )
    ThreadUnlock1(v15, v11);
LABEL_10:
  UserSessionSwitchLeaveCrit(v15, v11, v12, v13);
  return v14;
}
