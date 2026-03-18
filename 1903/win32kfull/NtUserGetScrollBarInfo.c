/*
 * XREFs of NtUserGetScrollBarInfo @ 0x1C00AA930
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00A1C48 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C00A3A00 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     xxxGetScrollBarInfo @ 0x1C00AAD18 (xxxGetScrollBarInfo.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 *     memset @ 0x1C0166840 (memset.c)
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
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 *ThreadWin32Thread; // rax
  struct _KTHREAD *v23; // rdi
  __int64 v24; // rbx
  __int64 v25; // r9
  __int64 *v26; // rax
  unsigned int v27; // edi
  struct _KTHREAD *v28; // r12
  __int64 v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 *v34; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v36; // rcx
  int v37; // r12d
  struct _KTHREAD *v38; // rdi
  __int64 v39; // rbx
  __int64 v40; // r9
  __int64 *v41; // rax
  __int64 v42; // rax
  unsigned int v44; // [rsp+20h] [rbp-C8h]
  ULONG_PTR v45; // [rsp+38h] [rbp-B0h]
  __int64 v46; // [rsp+50h] [rbp-98h] BYREF
  ULONG_PTR v47; // [rsp+58h] [rbp-90h]
  __int64 v48; // [rsp+60h] [rbp-88h]
  _OWORD v49[4]; // [rsp+78h] [rbp-70h] BYREF

  memset(v49, 0, 0x3CuLL);
  v46 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  v5 = 1;
  EnterCrit(0LL, 1LL);
  v7 = ValidateHwnd(a1);
  v45 = v7;
  if ( v7 )
  {
    v46 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v46;
    v47 = v7;
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
    LODWORD(v49[0]) = *(_DWORD *)a3;
    ScrollBarInfo = xxxGetScrollBarInfo(v7);
    CurrentThread = KeGetCurrentThread();
    v13 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(v15, v14, v16, v17) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v13 = *ThreadWin32Thread;
    }
    if ( (*(_BYTE *)(*(_QWORD *)(v13 + 472) + 224LL) & 1) == 0 )
    {
      v23 = KeGetCurrentThread();
      v24 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached(v19, v18, v20, v21) )
      {
        v26 = (__int64 *)PsGetThreadWin32Thread(v23);
        if ( v26 )
          v24 = *v26;
      }
      if ( (*(_BYTE *)(*(_QWORD *)(v24 + 472) + 224LL) & 0x20) == 0 )
      {
        v44 = *(_DWORD *)(*(_QWORD *)(v7 + 40) + 288LL);
        LOBYTE(v7) = 18;
        v27 = 18;
        v28 = KeGetCurrentThread();
        v29 = 0LL;
        if ( !(unsigned int)IsThreadCrossSessionAttached(v44, v18, v20, v25) )
        {
          v34 = (__int64 *)PsGetThreadWin32Thread(v28);
          if ( v34 )
            v29 = *v34;
        }
        if ( v29 )
        {
          if ( *(_QWORD *)(v29 + 360) )
            CaptureAndValidateUserModeDpiAwarenessContext(v29);
          if ( *(_DWORD *)(v29 + 340) )
          {
            v27 = *(_DWORD *)(v29 + 340);
          }
          else
          {
            CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v31, v30);
            if ( CurrentProcessWin32Process )
              v27 = *(_DWORD *)(CurrentProcessWin32Process + 280);
          }
          if ( (*(_DWORD *)(v29 + 328) & 8) != 0 && (v27 & 0xF) == 2 && (v27 & 0xF0) == 0x20 )
            v27 |= 0x20000000u;
        }
        if ( (((unsigned __int16)(v44 >> 8) ^ (unsigned __int16)(v27 >> 8)) & 0x1FF) != 0 )
          goto LABEL_51;
        v36 = *(unsigned int *)(*(_QWORD *)(v45 + 40) + 288LL);
        v37 = (*(_DWORD *)(*(_QWORD *)(v45 + 40) + 288LL) & 0xF) == 2 && (v36 & 0x20000000) != 0;
        v38 = KeGetCurrentThread();
        v39 = 0LL;
        if ( !(unsigned int)IsThreadCrossSessionAttached(v36, v30, v32, v33) )
        {
          v41 = (__int64 *)PsGetThreadWin32Thread(v38);
          if ( v41 )
            v39 = *v41;
        }
        if ( v39 )
        {
          if ( *(_QWORD *)(v39 + 360) )
            CaptureAndValidateUserModeDpiAwarenessContext(v39);
          if ( *(_DWORD *)(v39 + 340) )
          {
            LODWORD(v7) = *(_DWORD *)(v39 + 340);
          }
          else
          {
            v42 = PsGetCurrentProcessWin32Process(v19, v18);
            if ( v42 )
              LODWORD(v7) = *(_DWORD *)(v42 + 280);
          }
        }
        if ( (v7 & 0xF) != 2 || (W32GetCurrentThreadDpiAwarenessContext(v19, v18, v20, v40) & 0x20000000) == 0 )
          v5 = 0;
        if ( v37 != v5 )
LABEL_51:
          TransformRectBetweenCoordinateSpaces((char *)v49 + 4, (char *)v49 + 4, 0LL, v45);
      }
    }
    if ( ScrollBarInfo )
    {
      *(_OWORD *)a3 = v49[0];
      *(_OWORD *)(a3 + 16) = v49[1];
      *(_OWORD *)(a3 + 32) = v49[2];
      *(_QWORD *)(a3 + 48) = *(_QWORD *)&v49[3];
      *(_DWORD *)(a3 + 56) = DWORD2(v49[3]);
    }
    ThreadUnlock1(v19, v18, v20);
  }
  else
  {
    ScrollBarInfo = 0;
  }
  UserSessionSwitchLeaveCrit(v6);
  return ScrollBarInfo;
}
