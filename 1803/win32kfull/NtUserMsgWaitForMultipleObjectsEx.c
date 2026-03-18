/*
 * XREFs of NtUserMsgWaitForMultipleObjectsEx @ 0x1C003B2C0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     xxxGetInputEvent @ 0x1C003B780 (xxxGetInputEvent.c)
 *     xxxHandleHealthyThread @ 0x1C00E6A60 (xxxHandleHealthyThread.c)
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
 *     xxxMsgWaitForMultipleObjectsEx @ 0x1C0139E0C (xxxMsgWaitForMultipleObjectsEx.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 *     _CancelQueueEventCompletionPacket @ 0x1C01A2280 (_CancelQueueEventCompletionPacket.c)
 *     _ReassociateQueueEventCompletionPacket @ 0x1C01A2310 (_ReassociateQueueEventCompletionPacket.c)
 *     _SetWaitForQueueAttach @ 0x1C01A23B0 (_SetWaitForQueueAttach.c)
 */

__int64 __fastcall NtUserMsgWaitForMultipleObjectsEx(
        unsigned int a1,
        volatile void *a2,
        int a3,
        int a4,
        unsigned int a5)
{
  unsigned __int16 v5; // bx
  __int64 v7; // rsi
  unsigned int v8; // edi
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r15
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 CurrentProcess; // rax
  __int64 v16; // r8
  __int64 v17; // r9
  _OWORD *v18; // rcx
  _OWORD *v19; // rax
  __int64 v20; // rdx
  char *v21; // rax
  _OWORD *v22; // rcx
  __int64 v23; // rdx
  __int64 CurrentProcessWow64Process; // rax
  ULONG v25; // r8d
  __int64 v26; // rbx
  _QWORD *v27; // rax
  __int64 v28; // rdx
  _QWORD *v29; // r14
  int *v30; // rdx
  unsigned int v31; // ecx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // r10
  int v35; // eax
  __int64 v36; // rcx
  struct _KTHREAD *CurrentThread; // r14
  __int64 v38; // rbx
  __int64 *ThreadWin32Thread; // rax
  unsigned __int64 v40; // rdx
  __int64 v41; // rcx
  unsigned __int64 v42; // rbx
  struct _KTHREAD *v43; // rbx
  __int64 *v44; // rax
  unsigned int v46; // [rsp+30h] [rbp-898h]
  void *v47; // [rsp+40h] [rbp-888h]
  __int64 v48; // [rsp+48h] [rbp-880h]
  __int64 v49; // [rsp+50h] [rbp-878h] BYREF
  void *v50; // [rsp+58h] [rbp-870h]
  void (__fastcall *v51)(void *); // [rsp+60h] [rbp-868h]
  __int64 InputEvent; // [rsp+68h] [rbp-860h]
  __int64 ProcessPeb; // [rsp+70h] [rbp-858h]
  char v54; // [rsp+80h] [rbp-848h] BYREF
  __int64 v55; // [rsp+A0h] [rbp-828h]
  __int64 v56; // [rsp+A8h] [rbp-820h]
  __int64 v57; // [rsp+B0h] [rbp-818h]
  _BYTE v58[1040]; // [rsp+490h] [rbp-438h] BYREF

  v5 = a4;
  v7 = a1;
  v8 = -1;
  EnterCrit(0LL, 1LL);
  v11 = 0LL;
  v12 = a5;
  if ( (a5 & 0xFFFFFFE0) != 0 || (unsigned int)v7 > 0x3F )
  {
    UserSetLastError(87LL, a5);
    goto LABEL_59;
  }
  v13 = *(_QWORD *)(gptiCurrent + 440LL);
  if ( !v13
    || (a5 & 1) != 0 && (_DWORD)v7
    || ((a5 & 4) == 0 ? (v14 = 0LL) : (v14 = *(unsigned __int16 *)(v13 + 6)),
        ((unsigned __int16)(v14 | *(_WORD *)(v13 + 4)) & v5) == 0) )
  {
    InputEvent = xxxGetInputEvent(v5 | ((unsigned __int16)a5 << 16));
    if ( InputEvent )
    {
      if ( (a5 & 1) != 0 )
      {
        v48 = 0LL;
        CancelQueueEventCompletionPacket();
      }
      else
      {
        v14 = gptiCurrent;
        v48 = *(_QWORD *)(gptiCurrent + 1416LL);
        if ( !v48 )
          goto LABEL_59;
      }
      CurrentProcess = PsGetCurrentProcess(v14, v12);
      ProcessPeb = PsGetProcessPeb(CurrentProcess);
      v18 = *(_OWORD **)(ProcessPeb + 32);
      if ( v18 + 65 < v18 || (unsigned __int64)(v18 + 65) > MmUserProbeAddress )
        v18 = (_OWORD *)MmUserProbeAddress;
      v19 = v58;
      v20 = 8LL;
      do
      {
        *v19 = *v18;
        v19[1] = v18[1];
        v19[2] = v18[2];
        v19[3] = v18[3];
        v19[4] = v18[4];
        v19[5] = v18[5];
        v19[6] = v18[6];
        v19 += 8;
        *(v19 - 1) = v18[7];
        v18 += 8;
        --v20;
      }
      while ( v20 );
      *v19 = *v18;
      v21 = &v54;
      v22 = v58;
      v23 = 8LL;
      do
      {
        *(_OWORD *)v21 = *v22;
        *((_OWORD *)v21 + 1) = v22[1];
        *((_OWORD *)v21 + 2) = v22[2];
        *((_OWORD *)v21 + 3) = v22[3];
        *((_OWORD *)v21 + 4) = v22[4];
        *((_OWORD *)v21 + 5) = v22[5];
        *((_OWORD *)v21 + 6) = v22[6];
        v21 += 128;
        *((_OWORD *)v21 - 1) = v22[7];
        v22 += 8;
        --v23;
      }
      while ( v23 );
      *(_OWORD *)v21 = *v22;
      if ( (_DWORD)v7 )
      {
        CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v22, 0LL, v16, v17);
        v25 = 4;
        if ( CurrentProcessWow64Process )
          v25 = 1;
        v26 = v7;
        ProbeForRead(a2, 8 * v7, v25);
      }
      else
      {
        v26 = 0LL;
      }
      v27 = (_QWORD *)Win32AllocPoolWithQuota(8LL * (unsigned int)(v7 + 1), 2037609301LL);
      v29 = v27;
      v47 = v27;
      if ( v27 )
      {
        memmove(v27, (const void *)a2, 8 * v26);
        v31 = 0;
        v32 = v57;
        v33 = v56;
        v34 = v55;
        while ( v31 < (unsigned int)v7 )
        {
          v30 = (int *)&v29[v31];
          v35 = *v30;
          if ( (unsigned int)*v30 >= 0xFFFFFFF4 )
          {
            switch ( v35 )
            {
              case -12:
                *(_QWORD *)v30 = v32;
                break;
              case -11:
                *(_QWORD *)v30 = v33;
                break;
              case -10:
                *(_QWORD *)v30 = v34;
                break;
            }
          }
          ++v31;
        }
        if ( (a5 & 8) != 0 )
          SetWaitForQueueAttach(1LL, v30, v32, v33);
        v36 = v48;
        if ( (a5 & 1) != 0 )
          v36 = InputEvent;
        v29[v7] = v36;
        CurrentThread = KeGetCurrentThread();
        v38 = 0LL;
        if ( !(unsigned int)IsThreadCrossSessionAttached(v36, v30) )
        {
          ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
          if ( ThreadWin32Thread )
            v38 = *ThreadWin32Thread;
        }
        v49 = *(_QWORD *)(v38 + 16);
        *(_QWORD *)(v38 + 16) = &v49;
        v50 = v47;
        v51 = (void (__fastcall *)(void *))Win32FreePool;
        v46 = xxxMsgWaitForMultipleObjectsEx(v7, (_DWORD)v47, a3, a4, a5);
        v40 = 0xFFFFF78000000320uLL;
        v41 = (unsigned int)_InterlockedExchange(
                              (volatile __int32 *)(*(_QWORD *)(gptiCurrent + 440LL) + 12LL),
                              (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
        if ( !*(_DWORD *)(gptiCurrent + 1144LL) )
        {
          v42 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          EtwTraceMessageCheckDelay(gptiCurrent);
          if ( (_DWORD)v42 )
            v8 = v42;
          *(_DWORD *)(gptiCurrent + 1144LL) = v8;
          if ( *(int *)(gptiCurrent + 480LL) < 0 )
            xxxHandleHealthyThread(gptiCurrent);
          *(_DWORD *)(gptiCurrent + 1200LL) &= ~0x80000000;
          EtwTraceProcessWindowInfo(gptiCurrent);
        }
        *(_WORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 10LL) = 0;
        *(_DWORD *)(gptiCurrent + 1200LL) &= ~0x400u;
        v43 = KeGetCurrentThread();
        if ( !(unsigned int)IsThreadCrossSessionAttached(v41, v40) )
        {
          v44 = (__int64 *)PsGetThreadWin32Thread(v43);
          if ( v44 )
            v11 = *v44;
        }
        *(_QWORD *)(v11 + 16) = v49;
        v51(v50);
        if ( (a5 & 1) != 0 )
          ReassociateQueueEventCompletionPacket();
        v8 = v46;
      }
      else
      {
        UserSetLastError(8LL, v28);
      }
    }
  }
  else
  {
    v8 = v7;
  }
LABEL_59:
  UserSessionSwitchLeaveCrit(v14, v12, v9, v10);
  return v8;
}
