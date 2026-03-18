/*
 * XREFs of NtUserSetWindowArrangement @ 0x1C0235150
 * Callers:
 *     <none>
 * Callees:
 *     IAMThreadAccessGranted @ 0x1C0027D6C (IAMThreadAccessGranted.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     IsHungWindow @ 0x1C004F680 (IsHungWindow.c)
 *     ?CheckCanonicalForegroundAccess@@YA_NW4ForegroundChangeAllowPolicy@@@Z @ 0x1C013438C (-CheckCanonicalForegroundAccess@@YA_NW4ForegroundChangeAllowPolicy@@@Z.c)
 *     ?BeginSetWindowArrangement@@YA_NPEAUtagWND@@QEBUtagRECT@@1K@Z @ 0x1C01F9A20 (-BeginSetWindowArrangement@@YA_NPEAUtagWND@@QEBUtagRECT@@1K@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserSetWindowArrangement(__int64 a1, struct tagRECT *a2, struct tagRECT *a3, int a4)
{
  int v8; // edi
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  struct tagRECT v20; // [rsp+28h] [rbp-50h] BYREF
  struct tagRECT v21; // [rsp+38h] [rbp-40h] BYREF
  __int64 v22; // [rsp+48h] [rbp-30h] BYREF
  __int64 v23; // [rsp+50h] [rbp-28h]
  __int64 v24; // [rsp+58h] [rbp-20h]

  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  EnterCrit(0LL, 1LL);
  v8 = 0;
  gbValidateHandleForIL = 0;
  v9 = ValidateHwnd(a1);
  v11 = v9;
  if ( v9 )
  {
    v10 = (*(_WORD *)(*(_QWORD *)(v9 + 40) + 42LL) & 0x3FFFu) - 669;
    if ( (v10 & 0xFFFFFFFD) != 0 )
    {
      v22 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v22;
      v23 = v9;
      HMLockObject(v9);
      if ( !*(_QWORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 328LL) || !IAMThreadAccessGranted(gptiCurrent) )
        goto LABEL_4;
      if ( *(_QWORD *)(v11 + 16) == gptiCurrent || (a4 & 0xFFFFFFF8) != 0 )
        goto LABEL_7;
      if ( (unsigned int)IsHungWindow(v11)
        || (v12 = **(unsigned __int16 **)(*(_QWORD *)(v11 + 136) + 8LL), (_WORD)v12 == *(_WORD *)(gpsi + 900LL)) )
      {
        v15 = 5023LL;
        goto LABEL_30;
      }
      if ( (a4 & 1) == 0 && !CheckCanonicalForegroundAccess(0, v12, v13) )
      {
LABEL_4:
        v15 = 5LL;
LABEL_30:
        UserSetLastError(v15, v12, v13, v14);
LABEL_31:
        ThreadUnlock1(v17, v16, v18);
        goto LABEL_32;
      }
      if ( (a4 & 4) != 0 )
      {
        if ( a2 || a3 )
          goto LABEL_7;
      }
      else if ( !a2 )
      {
LABEL_7:
        v15 = 87LL;
        goto LABEL_30;
      }
      if ( a2 )
      {
        if ( (unsigned __int64)a2 >= MmUserProbeAddress )
          a2 = (struct tagRECT *)MmUserProbeAddress;
        v21 = *a2;
      }
      else
      {
        *(_QWORD *)&v21.left = 0LL;
        *(_QWORD *)&v21.right = 0LL;
      }
      if ( a3 )
      {
        if ( (unsigned __int64)a3 >= MmUserProbeAddress )
          a3 = (struct tagRECT *)MmUserProbeAddress;
        v20 = *a3;
      }
      else
      {
        *(_QWORD *)&v20.left = 0LL;
        *(_QWORD *)&v20.right = 0LL;
      }
      v8 = (unsigned __int8)BeginSetWindowArrangement((struct tagTHREADINFO **)v11, &v21, &v20, a4);
      goto LABEL_31;
    }
  }
LABEL_32:
  UserSessionSwitchLeaveCrit(v10);
  return v8;
}
