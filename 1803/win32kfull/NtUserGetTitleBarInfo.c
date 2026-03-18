/*
 * XREFs of NtUserGetTitleBarInfo @ 0x1C0038FC0
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x1C0039270 (-xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C0042C10 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserGetTitleBarInfo(__int64 a1, ULONG64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r15
  int v9; // ebx
  __int64 v10; // rax
  _BYTE *v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 *ThreadWin32Thread; // rax
  struct _KTHREAD *v20; // rsi
  __int64 v21; // rdi
  __int64 *v22; // rax
  unsigned int v23; // r12d
  unsigned int v24; // edi
  struct _KTHREAD *v25; // r13
  __int64 v26; // rsi
  __int64 *v27; // rax
  __int64 CurrentProcessWin32Process; // rax
  _QWORD v30[3]; // [rsp+50h] [rbp-78h] BYREF
  _OWORD v31[3]; // [rsp+68h] [rbp-60h] BYREF

  memset(v31, 0, 0x2CuLL);
  EnterCrit(0LL, 1LL);
  gbValidateHandleForIL = 0;
  v8 = ValidateHwnd(a1);
  if ( v8 )
  {
    v30[0] = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = v30;
    v30[1] = v8;
    _InterlockedAdd((volatile signed __int32 *)(v8 + 8), 1u);
    if ( PsGetCurrentProcessWow64Process(gptiCurrent, v4, v6, v7) )
      v10 = 0LL;
    else
      v10 = 3LL;
    if ( (v10 & a2) != 0 )
      ExRaiseDatatypeMisalignment();
    v11 = (_BYTE *)a2;
    if ( a2 >= MmUserProbeAddress )
      v11 = (_BYTE *)MmUserProbeAddress;
    *v11 = *v11;
    v11[43] = v11[43];
    LODWORD(v31[0]) = *(_DWORD *)a2;
    if ( LODWORD(v31[0]) == 44 )
    {
      *(_QWORD *)((char *)&v31[1] + 4) = 0LL;
      *(_QWORD *)((char *)&v31[1] + 12) = 0LL;
      *(_QWORD *)((char *)&v31[2] + 4) = 0LL;
      xxxCommonGetTitleBarInfo((struct tagWND *)v8, (struct tagTITLEBARINFO *)v31);
      v9 = 1;
    }
    else
    {
      UserSetLastError(87LL);
      v9 = 0;
    }
    CurrentThread = KeGetCurrentThread();
    v15 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(v13, v12) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v15 = *ThreadWin32Thread;
    }
    if ( (*(_BYTE *)(*(_QWORD *)(v15 + 472) + 224LL) & 1) == 0 )
    {
      v20 = KeGetCurrentThread();
      v21 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached(v17, v16) )
      {
        v22 = (__int64 *)PsGetThreadWin32Thread(v20);
        if ( v22 )
          v21 = *v22;
      }
      if ( (*(_BYTE *)(*(_QWORD *)(v21 + 472) + 224LL) & 0x20) == 0 )
      {
        v23 = *(_DWORD *)(*(_QWORD *)(v8 + 40) + 288LL);
        v24 = 18;
        v25 = KeGetCurrentThread();
        v26 = 0LL;
        if ( !(unsigned int)IsThreadCrossSessionAttached(v17, v16) )
        {
          v27 = (__int64 *)PsGetThreadWin32Thread(v25);
          if ( v27 )
            v26 = *v27;
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
            CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v17);
            if ( CurrentProcessWin32Process )
              v24 = *(_DWORD *)(CurrentProcessWin32Process + 280);
          }
        }
        if ( (((unsigned __int16)(v23 >> 8) ^ (unsigned __int16)(v24 >> 8)) & 0x1FF) != 0 )
          TransformRectBetweenCoordinateSpaces((char *)v31 + 4, (char *)v31 + 4, 0LL, v8);
      }
    }
    if ( v9 )
    {
      *(_OWORD *)a2 = v31[0];
      *(_OWORD *)(a2 + 16) = v31[1];
      *(_QWORD *)(a2 + 32) = *(_QWORD *)&v31[2];
      *(_DWORD *)(a2 + 40) = DWORD2(v31[2]);
    }
    ThreadUnlock1(v17, v16, v18);
  }
  else
  {
    v9 = 0;
  }
  UserSessionSwitchLeaveCrit(v5, v4, v6, v7);
  return v9;
}
