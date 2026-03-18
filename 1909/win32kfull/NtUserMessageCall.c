/*
 * XREFs of NtUserMessageCall @ 0x1C00D6D70
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserMessageCall(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, int a6, int a7)
{
  __int64 v7; // rdi
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rsi
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // [rsp+40h] [rbp-38h] BYREF
  __int64 v25; // [rsp+48h] [rbp-30h]
  __int64 v26; // [rsp+50h] [rbp-28h]

  v7 = a2;
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  EnterCrit(0LL, 1LL);
  gbValidateHandleForIL = 0;
  if ( ((a1 + 1) & 0xFFFFFFFFFFFEFFFFuLL) != 0 || (unsigned int)(a6 - 695) > 1 )
  {
    v15 = ValidateHwnd(a1);
    if ( !v15 )
    {
      v19 = 0LL;
      goto LABEL_10;
    }
    v24 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v24;
    v25 = v15;
    HMLockObject(v15);
  }
  else
  {
    v15 = -1LL;
  }
  if ( (v7 & 0xFFFE0000) != 0 )
  {
    UserSetLastError(87LL, v11, v12, v13);
    v19 = 0LL;
    UserSetLastError(87LL, v21, v22, v23);
  }
  else
  {
    if ( (unsigned int)v7 >= 0x400 )
    {
      v16 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, __int64))mpFnidPfn[((_BYTE)a6 + 6) & 0x1F])(
              v15,
              (unsigned int)v7,
              a3,
              a4,
              a5);
    }
    else
    {
      _mm_lfence();
      v16 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, __int64, int, bool))gapfnMessageCall[(unsigned __int8)MessageTable[v7]])(
              v15,
              (unsigned int)v7,
              a3,
              a4,
              a5,
              a6,
              a7 != 0);
    }
    v19 = v16;
  }
  if ( v15 != -1 )
    ThreadUnlock1(v14, v17, v18);
LABEL_10:
  UserSessionSwitchLeaveCrit(v14);
  return v19;
}
