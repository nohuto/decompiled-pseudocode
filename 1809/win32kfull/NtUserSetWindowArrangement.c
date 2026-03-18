/*
 * XREFs of NtUserSetWindowArrangement @ 0x1C021D560
 * Callers:
 *     <none>
 * Callees:
 *     IsHungWindow @ 0x1C0017040 (IsHungWindow.c)
 *     IAMThreadAccessGranted @ 0x1C0071900 (IAMThreadAccessGranted.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     ?CheckCanonicalForegroundAccess@@YA_NXZ @ 0x1C00D7EC8 (-CheckCanonicalForegroundAccess@@YA_NXZ.c)
 *     ?BeginSetWindowArrangement@@YA_NPEAUtagWND@@QEBUtagRECT@@1K@Z @ 0x1C01E4434 (-BeginSetWindowArrangement@@YA_NPEAUtagWND@@QEBUtagRECT@@1K@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserSetWindowArrangement(__int64 a1, struct tagRECT *a2, struct tagRECT *a3, int a4)
{
  int v8; // edi
  __int64 v9; // rax
  _WORD *v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbx
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  struct tagRECT v20; // [rsp+28h] [rbp-40h] BYREF
  struct tagRECT v21; // [rsp+38h] [rbp-30h] BYREF
  _QWORD v22[3]; // [rsp+48h] [rbp-20h] BYREF

  EnterCrit(0LL, 1LL);
  v8 = 0;
  gbValidateHandleForIL = 0;
  v9 = ValidateHwnd(a1);
  v14 = v9;
  if ( v9 )
  {
    v11 = (*(_WORD *)(*(_QWORD *)(v9 + 40) + 42LL) & 0x2FFFu) - 669;
    if ( (v11 & 0xFFFFFFFD) != 0 )
    {
      v15 = gptiCurrent;
      v22[0] = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = v22;
      v22[1] = v9;
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
      if ( !*(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 328LL) || !IAMThreadAccessGranted(gptiCurrent) )
        goto LABEL_4;
      if ( *(_QWORD *)(v14 + 16) == v15 || (a4 & 0xFFFFFFF8) != 0 )
        goto LABEL_7;
      if ( (unsigned int)IsHungWindow(v14)
        || (v10 = *(_WORD **)(*(_QWORD *)(v14 + 112) + 8LL), *v10 == *(_WORD *)(gpsi + 900LL)) )
      {
        v16 = 5023LL;
        goto LABEL_30;
      }
      if ( (a4 & 1) == 0 && !CheckCanonicalForegroundAccess(gpsi, (__int64)v10) )
      {
LABEL_4:
        v16 = 5LL;
LABEL_30:
        UserSetLastError(v16, (__int64)v10, v15, v13);
LABEL_31:
        ThreadUnlock1(v18, v17);
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
        v16 = 87LL;
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
      v8 = (unsigned __int8)BeginSetWindowArrangement((struct tagTHREADINFO **)v14, &v21, &v20, a4);
      goto LABEL_31;
    }
  }
LABEL_32:
  UserSessionSwitchLeaveCrit(v11, v10, v12, v13);
  return v8;
}
