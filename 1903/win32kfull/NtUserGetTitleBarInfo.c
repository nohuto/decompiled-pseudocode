/*
 * XREFs of NtUserGetTitleBarInfo @ 0x1C00A5EE0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C00A3A00 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x1C00A8EB0 (-xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 *     memset @ 0x1C0166840 (memset.c)
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
  __int64 v16; // r9
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 *ThreadWin32Thread; // rax
  struct _KTHREAD *v24; // rdi
  __int64 v25; // rbx
  __int64 v26; // r9
  __int64 *v27; // rax
  unsigned int v28; // r12d
  int v29; // r14d
  unsigned int v30; // edi
  struct _KTHREAD *v31; // r15
  __int64 v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 *v37; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v39; // rcx
  int v40; // r12d
  int v41; // ebx
  struct _KTHREAD *v42; // r15
  __int64 v43; // rdi
  __int64 v44; // r9
  __int64 *v45; // rax
  __int64 v46; // rax
  struct _KTHREAD *v47; // rdi
  __int64 v48; // rbx
  __int64 *v49; // rax
  __int64 v50; // rax
  __int64 v52; // [rsp+30h] [rbp-A8h]
  __int64 v54; // [rsp+50h] [rbp-88h] BYREF
  __int64 v55; // [rsp+58h] [rbp-80h]
  __int64 v56; // [rsp+60h] [rbp-78h]
  _OWORD v57[3]; // [rsp+78h] [rbp-60h] BYREF

  v2 = a2;
  memset(v57, 0, 0x2CuLL);
  v54 = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  v4 = 1;
  EnterCrit(0LL, 1LL);
  gbValidateHandleForIL = 0;
  v6 = ValidateHwnd(a1);
  v52 = v6;
  if ( v6 )
  {
    v54 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v54;
    v55 = v6;
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
    LODWORD(v57[0]) = *(_DWORD *)v2;
    if ( LODWORD(v57[0]) == 44 )
    {
      *(_QWORD *)((char *)&v57[1] + 4) = 0LL;
      *(_QWORD *)((char *)&v57[1] + 12) = 0LL;
      *(_QWORD *)((char *)&v57[2] + 4) = 0LL;
      xxxCommonGetTitleBarInfo((struct tagWND *)v6, (struct tagTITLEBARINFO *)v57);
      v7 = 1;
    }
    else
    {
      UserSetLastError(87LL, (__int64)v12, v9, v10);
      v7 = 0;
    }
    CurrentThread = KeGetCurrentThread();
    v18 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(v14, v13, v15, v16) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v18 = *ThreadWin32Thread;
    }
    if ( (*(_BYTE *)(*(_QWORD *)(v18 + 472) + 224LL) & 1) == 0 )
    {
      v24 = KeGetCurrentThread();
      v25 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached(v20, v19, v21, v22) )
      {
        v27 = (__int64 *)PsGetThreadWin32Thread(v24);
        if ( v27 )
          v25 = *v27;
      }
      if ( (*(_BYTE *)(*(_QWORD *)(v25 + 472) + 224LL) & 0x20) == 0 )
      {
        v28 = *(_DWORD *)(*(_QWORD *)(v6 + 40) + 288LL);
        v29 = 18;
        v30 = 18;
        v31 = KeGetCurrentThread();
        v32 = 0LL;
        if ( !(unsigned int)IsThreadCrossSessionAttached(v20, v19, v21, v26) )
        {
          v37 = (__int64 *)PsGetThreadWin32Thread(v31);
          if ( v37 )
            v32 = *v37;
        }
        if ( v32 )
        {
          if ( *(_QWORD *)(v32 + 360) )
            CaptureAndValidateUserModeDpiAwarenessContext(v32);
          if ( *(_DWORD *)(v32 + 340) )
          {
            v30 = *(_DWORD *)(v32 + 340);
          }
          else
          {
            CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v34, v33);
            if ( CurrentProcessWin32Process )
              v30 = *(_DWORD *)(CurrentProcessWin32Process + 280);
          }
          if ( (*(_DWORD *)(v32 + 328) & 8) != 0 && (v30 & 0xF) == 2 && (v30 & 0xF0) == 0x20 )
            v30 |= 0x20000000u;
        }
        if ( (((unsigned __int16)(v28 >> 8) ^ (unsigned __int16)(v30 >> 8)) & 0x1FF) != 0 )
          goto LABEL_68;
        v39 = *(unsigned int *)(*(_QWORD *)(v52 + 40) + 288LL);
        v40 = (*(_DWORD *)(*(_QWORD *)(v52 + 40) + 288LL) & 0xF) == 2 && (v39 & 0x20000000) != 0;
        LOBYTE(v41) = 18;
        v42 = KeGetCurrentThread();
        v43 = 0LL;
        if ( !(unsigned int)IsThreadCrossSessionAttached(v39, v33, v35, v36) )
        {
          v45 = (__int64 *)PsGetThreadWin32Thread(v42);
          if ( v45 )
            v43 = *v45;
        }
        if ( v43 )
        {
          if ( *(_QWORD *)(v43 + 360) )
            CaptureAndValidateUserModeDpiAwarenessContext(v43);
          if ( *(_DWORD *)(v43 + 340) )
          {
            v41 = *(_DWORD *)(v43 + 340);
          }
          else
          {
            v46 = PsGetCurrentProcessWin32Process(v20, v19);
            if ( v46 )
              v41 = *(_DWORD *)(v46 + 280);
          }
        }
        if ( (v41 & 0xF) != 2 )
          goto LABEL_66;
        v47 = KeGetCurrentThread();
        v48 = 0LL;
        if ( !(unsigned int)IsThreadCrossSessionAttached(v20, v19, v21, v44) )
        {
          v49 = (__int64 *)PsGetThreadWin32Thread(v47);
          if ( v49 )
            v48 = *v49;
        }
        if ( v48 )
        {
          if ( *(_QWORD *)(v48 + 360) )
            CaptureAndValidateUserModeDpiAwarenessContext(v48);
          if ( *(_DWORD *)(v48 + 340) )
          {
            v29 = *(_DWORD *)(v48 + 340);
          }
          else
          {
            v50 = PsGetCurrentProcessWin32Process(v20, v19);
            if ( v50 )
              v29 = *(_DWORD *)(v50 + 280);
          }
          if ( (*(_DWORD *)(v48 + 328) & 8) != 0 && (v29 & 0xF) == 2 && (v29 & 0xF0) == 0x20 )
            v29 |= 0x20000000u;
        }
        if ( (v29 & 0x20000000) == 0 )
LABEL_66:
          v4 = 0;
        if ( v40 != v4 )
LABEL_68:
          TransformRectBetweenCoordinateSpaces((char *)v57 + 4, (char *)v57 + 4, 0LL, v52);
        v2 = a2;
      }
    }
    if ( v7 )
    {
      *(_OWORD *)v2 = v57[0];
      *(_OWORD *)(v2 + 16) = v57[1];
      *(_QWORD *)(v2 + 32) = *(_QWORD *)&v57[2];
      *(_DWORD *)(v2 + 40) = DWORD2(v57[2]);
    }
    ThreadUnlock1(v20, v19, v21);
  }
  else
  {
    v7 = 0;
  }
  UserSessionSwitchLeaveCrit(v5);
  return v7;
}
