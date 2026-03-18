/*
 * XREFs of NtUserGetScrollBarInfo @ 0x1C004B710
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0042A18 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C00447D0 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     xxxGetScrollBarInfo @ 0x1C004BAF8 (xxxGetScrollBarInfo.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 __fastcall NtUserGetScrollBarInfo(__int64 a1, __int64 a2, ULONG64 a3)
{
  int v5; // r13d
  __int64 v6; // rcx
  ULONG_PTR v7; // rsi
  int ScrollBarInfo; // r14d
  __int64 v9; // rcx
  __int64 v10; // rax
  _BYTE *v11; // rdx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 *ThreadWin32Thread; // rax
  struct _KTHREAD *v21; // rdi
  __int64 v22; // rbx
  __int64 *v23; // rax
  unsigned int v24; // edi
  struct _KTHREAD *v25; // r12
  __int64 v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 *v30; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v32; // rcx
  int v33; // r12d
  struct _KTHREAD *v34; // rdi
  __int64 v35; // rbx
  __int64 *v36; // rax
  __int64 v37; // rax
  unsigned int v39; // [rsp+20h] [rbp-C8h]
  ULONG_PTR v40; // [rsp+38h] [rbp-B0h]
  __int64 v41; // [rsp+50h] [rbp-98h] BYREF
  ULONG_PTR v42; // [rsp+58h] [rbp-90h]
  __int64 v43; // [rsp+60h] [rbp-88h]
  _OWORD v44[4]; // [rsp+78h] [rbp-70h] BYREF

  memset(v44, 0, 0x3CuLL);
  v41 = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  v5 = 1;
  EnterCrit(0LL, 1LL);
  v7 = ValidateHwnd(a1);
  v40 = v7;
  if ( v7 )
  {
    v41 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v41;
    v42 = v7;
    HMLockObject(v7);
    if ( PsGetCurrentProcessWow64Process(v9) )
      v10 = 0LL;
    else
      v10 = 3LL;
    if ( (v10 & a3) != 0 )
      ExRaiseDatatypeMisalignment();
    v11 = (_BYTE *)a3;
    if ( a3 >= MmUserProbeAddress )
      v11 = (_BYTE *)MmUserProbeAddress;
    *v11 = *v11;
    v11[59] = v11[59];
    LODWORD(v44[0]) = *(_DWORD *)a3;
    ScrollBarInfo = xxxGetScrollBarInfo(v7);
    CurrentThread = KeGetCurrentThread();
    v13 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(v15, v14, v16) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v13 = *ThreadWin32Thread;
    }
    if ( (*(_BYTE *)(*(_QWORD *)(v13 + 472) + 224LL) & 1) == 0 )
    {
      v21 = KeGetCurrentThread();
      v22 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached(v18, v17, v19) )
      {
        v23 = (__int64 *)PsGetThreadWin32Thread(v21);
        if ( v23 )
          v22 = *v23;
      }
      if ( (*(_BYTE *)(*(_QWORD *)(v22 + 472) + 224LL) & 0x20) == 0 )
      {
        v39 = *(_DWORD *)(*(_QWORD *)(v7 + 40) + 288LL);
        LOBYTE(v7) = 18;
        v24 = 18;
        v25 = KeGetCurrentThread();
        v26 = 0LL;
        if ( !(unsigned int)IsThreadCrossSessionAttached(v39, v17, v19) )
        {
          v30 = (__int64 *)PsGetThreadWin32Thread(v25);
          if ( v30 )
            v26 = *v30;
        }
        if ( v26 )
        {
          if ( *(_QWORD *)(v26 + 360) )
            CaptureAndValidateUserModeDpiAwarenessContext(v26);
          if ( *(_DWORD *)(v26 + 340) )
          {
            v24 = *(_DWORD *)(v26 + 340);
          }
          else
          {
            CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v28, v27);
            if ( CurrentProcessWin32Process )
              v24 = *(_DWORD *)(CurrentProcessWin32Process + 280);
          }
          if ( (*(_DWORD *)(v26 + 328) & 8) != 0 && (v24 & 0xF) == 2 && (v24 & 0xF0) == 0x20 )
            v24 |= 0x20000000u;
        }
        if ( (((unsigned __int16)(v39 >> 8) ^ (unsigned __int16)(v24 >> 8)) & 0x1FF) != 0 )
          goto LABEL_51;
        v32 = *(unsigned int *)(*(_QWORD *)(v40 + 40) + 288LL);
        v33 = (*(_DWORD *)(*(_QWORD *)(v40 + 40) + 288LL) & 0xF) == 2 && (v32 & 0x20000000) != 0;
        v34 = KeGetCurrentThread();
        v35 = 0LL;
        if ( !(unsigned int)IsThreadCrossSessionAttached(v32, v27, v29) )
        {
          v36 = (__int64 *)PsGetThreadWin32Thread(v34);
          if ( v36 )
            v35 = *v36;
        }
        if ( v35 )
        {
          if ( *(_QWORD *)(v35 + 360) )
            CaptureAndValidateUserModeDpiAwarenessContext(v35);
          if ( *(_DWORD *)(v35 + 340) )
          {
            LODWORD(v7) = *(_DWORD *)(v35 + 340);
          }
          else
          {
            v37 = PsGetCurrentProcessWin32Process(v18, v17);
            if ( v37 )
              LODWORD(v7) = *(_DWORD *)(v37 + 280);
          }
        }
        if ( (v7 & 0xF) != 2 || (W32GetCurrentThreadDpiAwarenessContext(v18, v17, v19) & 0x20000000) == 0 )
          v5 = 0;
        if ( v33 != v5 )
LABEL_51:
          TransformRectBetweenCoordinateSpaces((char *)v44 + 4, (char *)v44 + 4, 0LL, v40);
      }
    }
    if ( ScrollBarInfo )
    {
      *(_OWORD *)a3 = v44[0];
      *(_OWORD *)(a3 + 16) = v44[1];
      *(_OWORD *)(a3 + 32) = v44[2];
      *(_QWORD *)(a3 + 48) = *(_QWORD *)&v44[3];
      *(_DWORD *)(a3 + 56) = DWORD2(v44[3]);
    }
    ThreadUnlock1(v18, v17, v19);
  }
  else
  {
    ScrollBarInfo = 0;
  }
  UserSessionSwitchLeaveCrit(v6);
  return ScrollBarInfo;
}
