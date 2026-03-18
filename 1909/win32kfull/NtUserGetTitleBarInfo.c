/*
 * XREFs of NtUserGetTitleBarInfo @ 0x1C0046CC0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C00447D0 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x1C0049C90 (-xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserGetTitleBarInfo(__int64 a1, ULONG64 a2)
{
  ULONG64 v2; // r14
  int v4; // r13d
  __int64 v5; // rcx
  __int64 v6; // r15
  int v7; // esi
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  _BYTE *v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 *ThreadWin32Thread; // rax
  struct _KTHREAD *v22; // rdi
  __int64 v23; // rbx
  __int64 *v24; // rax
  unsigned int v25; // r12d
  int v26; // r14d
  unsigned int v27; // edi
  struct _KTHREAD *v28; // r15
  __int64 v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 *v33; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v35; // rcx
  int v36; // r12d
  int v37; // ebx
  struct _KTHREAD *v38; // r15
  __int64 v39; // rdi
  __int64 *v40; // rax
  __int64 v41; // rax
  struct _KTHREAD *v42; // rdi
  __int64 v43; // rbx
  __int64 *v44; // rax
  __int64 v45; // rax
  __int64 v47; // [rsp+30h] [rbp-A8h]
  __int64 v49; // [rsp+50h] [rbp-88h] BYREF
  __int64 v50; // [rsp+58h] [rbp-80h]
  __int64 v51; // [rsp+60h] [rbp-78h]
  _OWORD v52[3]; // [rsp+78h] [rbp-60h] BYREF

  v2 = a2;
  memset(v52, 0, 0x2CuLL);
  v49 = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  v4 = 1;
  EnterCrit(0LL, 1LL);
  gbValidateHandleForIL = 0;
  v6 = ValidateHwnd(a1);
  v47 = v6;
  if ( v6 )
  {
    v49 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v49;
    v50 = v6;
    HMLockObject(v6);
    if ( PsGetCurrentProcessWow64Process(v8) )
      v11 = 0LL;
    else
      v11 = 3LL;
    if ( (v11 & v2) != 0 )
      ExRaiseDatatypeMisalignment();
    v12 = (_BYTE *)v2;
    if ( v2 >= MmUserProbeAddress )
      v12 = (_BYTE *)MmUserProbeAddress;
    *v12 = *v12;
    v12[43] = v12[43];
    LODWORD(v52[0]) = *(_DWORD *)v2;
    if ( LODWORD(v52[0]) == 44 )
    {
      *(_QWORD *)((char *)&v52[1] + 4) = 0LL;
      *(_QWORD *)((char *)&v52[1] + 12) = 0LL;
      *(_QWORD *)((char *)&v52[2] + 4) = 0LL;
      xxxCommonGetTitleBarInfo((struct tagWND *)v6, (struct tagTITLEBARINFO *)v52);
      v7 = 1;
    }
    else
    {
      UserSetLastError(87LL, (__int64)v12, v9, v10);
      v7 = 0;
    }
    CurrentThread = KeGetCurrentThread();
    v17 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(v14, v13, v15) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v17 = *ThreadWin32Thread;
    }
    if ( (*(_BYTE *)(*(_QWORD *)(v17 + 472) + 224LL) & 1) == 0 )
    {
      v22 = KeGetCurrentThread();
      v23 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached(v19, v18, v20) )
      {
        v24 = (__int64 *)PsGetThreadWin32Thread(v22);
        if ( v24 )
          v23 = *v24;
      }
      if ( (*(_BYTE *)(*(_QWORD *)(v23 + 472) + 224LL) & 0x20) == 0 )
      {
        v25 = *(_DWORD *)(*(_QWORD *)(v6 + 40) + 288LL);
        v26 = 18;
        v27 = 18;
        v28 = KeGetCurrentThread();
        v29 = 0LL;
        if ( !(unsigned int)IsThreadCrossSessionAttached(v19, v18, v20) )
        {
          v33 = (__int64 *)PsGetThreadWin32Thread(v28);
          if ( v33 )
            v29 = *v33;
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
        if ( (((unsigned __int16)(v25 >> 8) ^ (unsigned __int16)(v27 >> 8)) & 0x1FF) != 0 )
          goto LABEL_68;
        v35 = *(unsigned int *)(*(_QWORD *)(v47 + 40) + 288LL);
        v36 = (*(_DWORD *)(*(_QWORD *)(v47 + 40) + 288LL) & 0xF) == 2 && (v35 & 0x20000000) != 0;
        LOBYTE(v37) = 18;
        v38 = KeGetCurrentThread();
        v39 = 0LL;
        if ( !(unsigned int)IsThreadCrossSessionAttached(v35, v30, v32) )
        {
          v40 = (__int64 *)PsGetThreadWin32Thread(v38);
          if ( v40 )
            v39 = *v40;
        }
        if ( v39 )
        {
          if ( *(_QWORD *)(v39 + 360) )
            CaptureAndValidateUserModeDpiAwarenessContext(v39);
          if ( *(_DWORD *)(v39 + 340) )
          {
            v37 = *(_DWORD *)(v39 + 340);
          }
          else
          {
            v41 = PsGetCurrentProcessWin32Process(v19, v18);
            if ( v41 )
              v37 = *(_DWORD *)(v41 + 280);
          }
        }
        if ( (v37 & 0xF) != 2 )
          goto LABEL_66;
        v42 = KeGetCurrentThread();
        v43 = 0LL;
        if ( !(unsigned int)IsThreadCrossSessionAttached(v19, v18, v20) )
        {
          v44 = (__int64 *)PsGetThreadWin32Thread(v42);
          if ( v44 )
            v43 = *v44;
        }
        if ( v43 )
        {
          if ( *(_QWORD *)(v43 + 360) )
            CaptureAndValidateUserModeDpiAwarenessContext(v43);
          if ( *(_DWORD *)(v43 + 340) )
          {
            v26 = *(_DWORD *)(v43 + 340);
          }
          else
          {
            v45 = PsGetCurrentProcessWin32Process(v19, v18);
            if ( v45 )
              v26 = *(_DWORD *)(v45 + 280);
          }
          if ( (*(_DWORD *)(v43 + 328) & 8) != 0 && (v26 & 0xF) == 2 && (v26 & 0xF0) == 0x20 )
            v26 |= 0x20000000u;
        }
        if ( (v26 & 0x20000000) == 0 )
LABEL_66:
          v4 = 0;
        if ( v36 != v4 )
LABEL_68:
          TransformRectBetweenCoordinateSpaces((char *)v52 + 4, (char *)v52 + 4, 0LL, v47);
        v2 = a2;
      }
    }
    if ( v7 )
    {
      *(_OWORD *)v2 = v52[0];
      *(_OWORD *)(v2 + 16) = v52[1];
      *(_QWORD *)(v2 + 32) = *(_QWORD *)&v52[2];
      *(_DWORD *)(v2 + 40) = DWORD2(v52[2]);
    }
    ThreadUnlock1(v19, v18, v20);
  }
  else
  {
    v7 = 0;
  }
  UserSessionSwitchLeaveCrit(v5);
  return v7;
}
