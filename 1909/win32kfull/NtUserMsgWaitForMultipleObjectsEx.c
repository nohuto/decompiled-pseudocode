/*
 * XREFs of NtUserMsgWaitForMultipleObjectsEx @ 0x1C0131510
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     xxxGetInputEvent @ 0x1C0131A60 (xxxGetInputEvent.c)
 *     xxxHandleHealthyThread @ 0x1C0151200 (xxxHandleHealthyThread.c)
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
 *     xxxMsgWaitForMultipleObjectsEx @ 0x1C0164824 (xxxMsgWaitForMultipleObjectsEx.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0168100 (memmove.c)
 *     _CancelQueueEventCompletionPacket @ 0x1C01D6D40 (_CancelQueueEventCompletionPacket.c)
 *     _ReassociateQueueEventCompletionPacket @ 0x1C01D6DE0 (_ReassociateQueueEventCompletionPacket.c)
 *     _SetWaitForQueueAttach @ 0x1C01D6E90 (_SetWaitForQueueAttach.c)
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
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 CurrentProcess; // rax
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
  __int64 v29; // r8
  __int64 v30; // r9
  _QWORD *v31; // r14
  int *v32; // rdx
  unsigned int v33; // ecx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // r10
  int v37; // eax
  __int64 v38; // rcx
  struct _KTHREAD *CurrentThread; // r14
  __int64 v40; // rbx
  __int64 *ThreadWin32Thread; // rax
  int v42; // edx
  __int64 v43; // rcx
  unsigned __int64 v44; // rbx
  struct _KTHREAD *v45; // rbx
  __int64 *v46; // rax
  unsigned int v48; // [rsp+30h] [rbp-8F8h]
  void *v49; // [rsp+40h] [rbp-8E8h]
  __int64 v50; // [rsp+48h] [rbp-8E0h]
  __int128 v51; // [rsp+50h] [rbp-8D8h] BYREF
  void (__fastcall *v52)(_QWORD); // [rsp+60h] [rbp-8C8h]
  __int64 InputEvent; // [rsp+68h] [rbp-8C0h]
  __int64 ProcessPeb; // [rsp+70h] [rbp-8B8h]
  char v55; // [rsp+80h] [rbp-8A8h] BYREF
  __int64 v56; // [rsp+A0h] [rbp-888h]
  __int64 v57; // [rsp+A8h] [rbp-880h]
  __int64 v58; // [rsp+B0h] [rbp-878h]
  _BYTE v59[1088]; // [rsp+4C0h] [rbp-468h] BYREF

  v5 = a4;
  v7 = a1;
  v8 = -1;
  EnterCrit(0LL, 1LL);
  v11 = 0LL;
  if ( (a5 & 0xFFFFFFE0) != 0 || (unsigned int)v7 > 0x3F )
  {
    UserSetLastError(87LL, a5, v9, v10);
    goto LABEL_59;
  }
  v12 = *(_QWORD *)(gptiCurrent + 440LL);
  if ( !v12
    || (a5 & 1) != 0 && (_DWORD)v7
    || ((a5 & 4) == 0 ? (v13 = 0LL) : (v13 = *(unsigned __int16 *)(v12 + 6)),
        ((unsigned __int16)(v13 | *(_WORD *)(v12 + 4)) & v5) == 0) )
  {
    InputEvent = xxxGetInputEvent(v5 | ((unsigned __int16)a5 << 16));
    if ( InputEvent )
    {
      if ( (a5 & 1) != 0 )
      {
        v50 = 0LL;
        CancelQueueEventCompletionPacket();
      }
      else
      {
        v13 = gptiCurrent;
        v50 = *(_QWORD *)(gptiCurrent + 1432LL);
        if ( !v50 )
          goto LABEL_59;
      }
      CurrentProcess = PsGetCurrentProcess(v13, v14, v15, v16);
      ProcessPeb = PsGetProcessPeb(CurrentProcess);
      v18 = *(_OWORD **)(ProcessPeb + 32);
      if ( v18 + 68 < v18 || (unsigned __int64)(v18 + 68) > MmUserProbeAddress )
        v18 = (_OWORD *)MmUserProbeAddress;
      v19 = v59;
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
      v19[1] = v18[1];
      v19[2] = v18[2];
      v19[3] = v18[3];
      v21 = &v55;
      v22 = v59;
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
      *((_OWORD *)v21 + 1) = v22[1];
      *((_OWORD *)v21 + 2) = v22[2];
      *((_OWORD *)v21 + 3) = v22[3];
      if ( (_DWORD)v7 )
      {
        CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v22);
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
      v31 = v27;
      v49 = v27;
      if ( v27 )
      {
        memmove(v27, (const void *)a2, 8 * v26);
        v33 = 0;
        v34 = v58;
        v35 = v57;
        v36 = v56;
        while ( v33 < (unsigned int)v7 )
        {
          v32 = (int *)&v31[v33];
          v37 = *v32;
          if ( (unsigned int)*v32 >= 0xFFFFFFF4 )
          {
            switch ( v37 )
            {
              case -12:
                *(_QWORD *)v32 = v34;
                break;
              case -11:
                *(_QWORD *)v32 = v35;
                break;
              case -10:
                *(_QWORD *)v32 = v36;
                break;
            }
          }
          ++v33;
        }
        if ( (a5 & 8) != 0 )
          SetWaitForQueueAttach(1LL, v32, v34, v35);
        v38 = v50;
        if ( (a5 & 1) != 0 )
          v38 = InputEvent;
        v31[v7] = v38;
        v51 = 0LL;
        v52 = 0LL;
        CurrentThread = KeGetCurrentThread();
        v40 = 0LL;
        if ( !(unsigned int)IsThreadCrossSessionAttached(v38, (_DWORD)v32) )
        {
          ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
          if ( ThreadWin32Thread )
            v40 = *ThreadWin32Thread;
        }
        *(_QWORD *)&v51 = *(_QWORD *)(v40 + 16);
        *(_QWORD *)(v40 + 16) = &v51;
        *((_QWORD *)&v51 + 1) = v49;
        v52 = (void (__fastcall *)(_QWORD))Win32FreePool;
        v48 = xxxMsgWaitForMultipleObjectsEx(v7, (_DWORD)v49, a3, a4, a5);
        v42 = 800;
        v43 = (unsigned int)_InterlockedExchange(
                              (volatile __int32 *)(*(_QWORD *)(gptiCurrent + 440LL) + 12LL),
                              (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
        if ( !*(_DWORD *)(gptiCurrent + 1168LL) )
        {
          v44 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          EtwTraceMessageCheckDelay(gptiCurrent);
          if ( (_DWORD)v44 )
            v8 = v44;
          *(_DWORD *)(gptiCurrent + 1168LL) = v8;
          if ( *(int *)(gptiCurrent + 480LL) < 0 )
            xxxHandleHealthyThread(gptiCurrent);
          *(_QWORD *)(gptiCurrent + 1224LL) &= ~0x100000000uLL;
          EtwTraceProcessWindowInfo(gptiCurrent);
        }
        *(_WORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 10LL) = 0;
        *(_DWORD *)(gptiCurrent + 1224LL) &= ~0x400u;
        v45 = KeGetCurrentThread();
        if ( !(unsigned int)IsThreadCrossSessionAttached(v43, v42) )
        {
          v46 = (__int64 *)PsGetThreadWin32Thread(v45);
          if ( v46 )
            v11 = *v46;
        }
        *(_QWORD *)(v11 + 16) = v51;
        v52(*((_QWORD *)&v51 + 1));
        if ( (a5 & 1) != 0 )
          ReassociateQueueEventCompletionPacket();
        v8 = v48;
      }
      else
      {
        UserSetLastError(8LL, v28, v29, v30);
      }
    }
  }
  else
  {
    v8 = v7;
  }
LABEL_59:
  UserSessionSwitchLeaveCrit(v13);
  return v8;
}
