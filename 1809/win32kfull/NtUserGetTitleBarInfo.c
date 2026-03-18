/*
 * XREFs of NtUserGetTitleBarInfo @ 0x1C0020290
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x1C0020584 (-xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z.c)
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C002B550 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C015BC14 (IsThreadCrossSessionAttached.c)
 *     memset @ 0x1C0163640 (memset.c)
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
  __int64 *ThreadWin32Thread; // rax
  struct _KTHREAD *v19; // rsi
  __int64 v20; // rdi
  __int64 *v21; // rax
  unsigned int v22; // r12d
  unsigned int v23; // edi
  struct _KTHREAD *v24; // r13
  __int64 v25; // rsi
  __int64 *v26; // rax
  __int64 CurrentProcessWin32Process; // rax
  _QWORD v29[3]; // [rsp+50h] [rbp-78h] BYREF
  _OWORD v30[3]; // [rsp+68h] [rbp-60h] BYREF

  memset(v30, 0, 0x2CuLL);
  EnterCrit(0LL, 1LL);
  gbValidateHandleForIL = 0;
  v8 = ValidateHwnd(a1);
  if ( v8 )
  {
    v29[0] = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = v29;
    v29[1] = v8;
    _InterlockedAdd((volatile signed __int32 *)(v8 + 8), 1u);
    if ( PsGetCurrentProcessWow64Process(gptiCurrent) )
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
    LODWORD(v30[0]) = *(_DWORD *)a2;
    if ( LODWORD(v30[0]) == 44 )
    {
      *(_QWORD *)((char *)&v30[1] + 4) = 0LL;
      *(_QWORD *)((char *)&v30[1] + 12) = 0LL;
      *(_QWORD *)((char *)&v30[2] + 4) = 0LL;
      xxxCommonGetTitleBarInfo((struct tagWND *)v8, (struct tagTITLEBARINFO *)v30);
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
    if ( (*(_BYTE *)(*(_QWORD *)(v15 + 480) + 224LL) & 1) == 0 )
    {
      v19 = KeGetCurrentThread();
      v20 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached(v17, v16) )
      {
        v21 = (__int64 *)PsGetThreadWin32Thread(v19);
        if ( v21 )
          v20 = *v21;
      }
      if ( (*(_BYTE *)(*(_QWORD *)(v20 + 480) + 224LL) & 0x20) == 0 )
      {
        v22 = *(_DWORD *)(*(_QWORD *)(v8 + 40) + 288LL);
        v23 = 18;
        v24 = KeGetCurrentThread();
        v25 = 0LL;
        if ( !(unsigned int)IsThreadCrossSessionAttached(v17, v16) )
        {
          v26 = (__int64 *)PsGetThreadWin32Thread(v24);
          if ( v26 )
            v25 = *v26;
        }
        if ( v25 )
        {
          if ( *(_QWORD *)(v25 + 360) )
            CaptureAndValidateUserModeDpiAwarenessContext(v25);
          if ( *(_DWORD *)(v25 + 340) )
          {
            v23 = *(_DWORD *)(v25 + 340);
          }
          else
          {
            CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v17);
            if ( CurrentProcessWin32Process )
              v23 = *(_DWORD *)(CurrentProcessWin32Process + 280);
          }
        }
        if ( (((unsigned __int16)(v22 >> 8) ^ (unsigned __int16)(v23 >> 8)) & 0x1FF) != 0 )
          TransformRectBetweenCoordinateSpaces((char *)v30 + 4, (char *)v30 + 4, 0LL, v8);
      }
    }
    if ( v9 )
    {
      *(_OWORD *)a2 = v30[0];
      *(_OWORD *)(a2 + 16) = v30[1];
      *(_QWORD *)(a2 + 32) = *(_QWORD *)&v30[2];
      *(_DWORD *)(a2 + 40) = DWORD2(v30[2]);
    }
    ThreadUnlock1(v17, v16);
  }
  else
  {
    v9 = 0;
  }
  UserSessionSwitchLeaveCrit(v5, v4, v6, v7);
  return v9;
}
