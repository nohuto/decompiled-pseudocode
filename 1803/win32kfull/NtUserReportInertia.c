/*
 * XREFs of NtUserReportInertia @ 0x1C00076E0
 * Callers:
 *     <none>
 * Callees:
 *     InvalidateInertiaInfo @ 0x1C00077CC (InvalidateInertiaInfo.c)
 *     ?IsCompositionInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C0035244 (-IsCompositionInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     AddInertiaInfo @ 0x1C01FD954 (AddInertiaInfo.c)
 *     ValidateInertiaInfo @ 0x1C01FDCE8 (ValidateInertiaInfo.c)
 */

__int64 __fastcall NtUserReportInertia(__int64 a1, int a2, __int64 a3, ULONG64 a4, unsigned __int64 a5)
{
  int v9; // ebx
  __int64 v10; // rsi
  int v11; // r12d
  int v12; // edi
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v19; // rcx
  __int64 CurrentProcess; // rax
  int v21; // r13d
  __int64 v22; // rax
  unsigned __int64 v23; // rdi
  int v24; // r12d
  ULONG64 v25; // rdx
  __int64 v27; // [rsp+60h] [rbp-108h] BYREF
  int v28; // [rsp+68h] [rbp-100h]
  __int64 v29; // [rsp+78h] [rbp-F0h] BYREF
  __int64 v30; // [rsp+80h] [rbp-E8h]
  int v31; // [rsp+88h] [rbp-E0h]
  __int128 v32; // [rsp+98h] [rbp-D0h]
  __int128 v33; // [rsp+A8h] [rbp-C0h]
  __int64 v34; // [rsp+B8h] [rbp-B0h]
  _OWORD v35[2]; // [rsp+C0h] [rbp-A8h] BYREF
  __int64 v36; // [rsp+E0h] [rbp-88h]
  _BYTE v37[64]; // [rsp+F0h] [rbp-78h] BYREF

  EnterCrit(0LL, 1LL);
  v9 = 0;
  if ( a3 )
  {
    v10 = ValidateHwnd(a3);
    if ( !v10 )
      goto LABEL_12;
  }
  else
  {
    v10 = 0LL;
  }
  if ( !a1 || (a2 & 0xFFFFFFF8) != 0 )
    goto LABEL_13;
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 2) != 0 )
      goto LABEL_13;
    v11 = 1;
  }
  else
  {
    if ( (a2 & 2) == 0 )
      goto LABEL_13;
    v11 = 0;
  }
  v12 = a2 & 4;
  if ( v12 )
  {
    if ( a3 )
      goto LABEL_13;
    CurrentProcess = PsGetCurrentProcess();
    if ( !(unsigned int)IsProcessDwm(CurrentProcess) )
    {
LABEL_20:
      v19 = 5LL;
      goto LABEL_21;
    }
  }
  if ( v11 )
  {
    if ( a4 )
    {
      if ( !v12 )
      {
        v21 = 0;
        if ( !v10 || (v22 = *(_QWORD *)(v10 + 40), *(char *)(v22 + 20) < 0) || *(char *)(v22 + 19) < 0 )
        {
          v19 = 1400LL;
          goto LABEL_21;
        }
        v23 = a5;
        if ( (unsigned int)IsCompositionInputWindow((const struct tagWND *)v10) && !a5
          || gptiCurrent != *(_QWORD *)(v10 + 16) && gptiCurrent != *(_QWORD *)(v10 + 248) )
        {
          goto LABEL_13;
        }
        if ( (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
           - *(_DWORD *)(gptiCurrent + 1256LL) > 0x7D0 )
          goto LABEL_20;
        goto LABEL_35;
      }
      v21 = 1;
      v23 = a5;
      if ( a5 )
      {
LABEL_35:
        v24 = (*(_DWORD *)(gptiCurrent + 1200LL) >> 17) & 1;
        if ( a4 + 12 < a4 || a4 + 12 > MmUserProbeAddress )
          a4 = MmUserProbeAddress;
        v30 = *(_QWORD *)a4;
        v31 = *(_DWORD *)(a4 + 8);
        v27 = v30;
        v28 = v31;
        if ( v23 )
        {
          v25 = v23;
          if ( v23 + 40 < v23 || v23 + 40 > MmUserProbeAddress )
            v25 = MmUserProbeAddress;
          v32 = *(_OWORD *)v25;
          v33 = *(_OWORD *)(v25 + 16);
          v34 = *(_QWORD *)(v25 + 32);
          v35[0] = v32;
          v35[1] = v33;
          v36 = v34;
        }
        if ( (unsigned int)ValidateInertiaInfo(&v27, (unsigned __int64)v35 & -(__int64)(v23 != 0), v37, &v29) )
        {
          v13 = AddInertiaInfo(
                  gptiCurrent,
                  a1,
                  v10,
                  v24,
                  v21,
                  (__int64)&v27,
                  v29,
                  (unsigned __int64)v35 & -(__int64)(v23 != 0),
                  (unsigned __int64)v37 & -(__int64)(v23 != 0));
          goto LABEL_11;
        }
      }
    }
LABEL_13:
    v19 = 87LL;
LABEL_21:
    UserSetLastError(v19);
    goto LABEL_12;
  }
  v13 = InvalidateInertiaInfo(gptiCurrent, a1);
LABEL_11:
  v9 = v13;
LABEL_12:
  UserSessionSwitchLeaveCrit(v15, v14, v16, v17);
  return v9;
}
