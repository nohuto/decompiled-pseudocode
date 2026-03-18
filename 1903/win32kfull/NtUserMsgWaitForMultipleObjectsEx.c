/*
 * XREFs of NtUserMsgWaitForMultipleObjectsEx @ 0x1C0015590
 * Callers:
 *     <none>
 * Callees:
 *     xxxGetInputEvent @ 0x1C0015AE0 (xxxGetInputEvent.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     xxxHandleHealthyThread @ 0x1C0150440 (xxxHandleHealthyThread.c)
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 *     xxxMsgWaitForMultipleObjectsEx @ 0x1C0163854 (xxxMsgWaitForMultipleObjectsEx.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0166500 (memmove.c)
 *     _CancelQueueEventCompletionPacket @ 0x1C01D6EC0 (_CancelQueueEventCompletionPacket.c)
 *     _ReassociateQueueEventCompletionPacket @ 0x1C01D6F60 (_ReassociateQueueEventCompletionPacket.c)
 *     _SetWaitForQueueAttach @ 0x1C01D7010 (_SetWaitForQueueAttach.c)
 */

__int64 __fastcall NtUserMsgWaitForMultipleObjectsEx(unsigned int a1, volatile void *a2, int a3, int a4, int a5)
{
  unsigned __int16 v5; // bx
  __int64 v7; // rsi
  unsigned int v8; // edi
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 CurrentProcess; // rax
  _OWORD *v16; // rcx
  _OWORD *v17; // rax
  __int64 v18; // rdx
  char *v19; // rax
  _OWORD *v20; // rcx
  __int64 v21; // rdx
  __int64 CurrentProcessWow64Process; // rax
  ULONG v23; // r8d
  __int64 v24; // rbx
  _QWORD *v25; // rax
  _QWORD *v26; // r14
  int *v27; // rdx
  unsigned int v28; // ecx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // r10
  int v32; // eax
  __int64 v33; // rcx
  struct _KTHREAD *CurrentThread; // r14
  __int64 v35; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v37; // r9
  unsigned __int64 v38; // rdx
  unsigned __int64 v39; // r8
  __int64 v40; // rcx
  unsigned __int64 v41; // rbx
  struct _KTHREAD *v42; // rbx
  __int64 *v43; // rax
  unsigned int v45; // [rsp+30h] [rbp-8F8h]
  void *v46; // [rsp+40h] [rbp-8E8h]
  __int64 v47; // [rsp+48h] [rbp-8E0h]
  __int128 v48; // [rsp+50h] [rbp-8D8h] BYREF
  void (__fastcall *v49)(_QWORD); // [rsp+60h] [rbp-8C8h]
  __int64 InputEvent; // [rsp+68h] [rbp-8C0h]
  __int64 ProcessPeb; // [rsp+70h] [rbp-8B8h]
  char v52; // [rsp+80h] [rbp-8A8h] BYREF
  __int64 v53; // [rsp+A0h] [rbp-888h]
  __int64 v54; // [rsp+A8h] [rbp-880h]
  __int64 v55; // [rsp+B0h] [rbp-878h]
  _BYTE v56[1088]; // [rsp+4C0h] [rbp-468h] BYREF

  v5 = a4;
  v7 = a1;
  v8 = -1;
  EnterCrit(0LL, 1LL);
  v9 = 0LL;
  if ( (a5 & 0xFFFFFFE0) != 0 || (unsigned int)v7 > 0x3F )
  {
    UserSetLastError(87LL);
    goto LABEL_59;
  }
  v10 = *(_QWORD *)(gptiCurrent + 440LL);
  if ( !v10
    || (a5 & 1) != 0 && (_DWORD)v7
    || ((a5 & 4) == 0 ? (v11 = 0LL) : (v11 = *(unsigned __int16 *)(v10 + 6)),
        ((unsigned __int16)(v11 | *(_WORD *)(v10 + 4)) & v5) == 0) )
  {
    InputEvent = xxxGetInputEvent(v5 | ((unsigned __int16)a5 << 16));
    if ( InputEvent )
    {
      if ( (a5 & 1) != 0 )
      {
        v47 = 0LL;
        CancelQueueEventCompletionPacket();
      }
      else
      {
        v11 = gptiCurrent;
        v47 = *(_QWORD *)(gptiCurrent + 1432LL);
        if ( !v47 )
          goto LABEL_59;
      }
      CurrentProcess = PsGetCurrentProcess(v11, v12, v13, v14);
      ProcessPeb = PsGetProcessPeb(CurrentProcess);
      v16 = *(_OWORD **)(ProcessPeb + 32);
      if ( v16 + 68 < v16 || (unsigned __int64)(v16 + 68) > MmUserProbeAddress )
        v16 = (_OWORD *)MmUserProbeAddress;
      v17 = v56;
      v18 = 8LL;
      do
      {
        *v17 = *v16;
        v17[1] = v16[1];
        v17[2] = v16[2];
        v17[3] = v16[3];
        v17[4] = v16[4];
        v17[5] = v16[5];
        v17[6] = v16[6];
        v17 += 8;
        *(v17 - 1) = v16[7];
        v16 += 8;
        --v18;
      }
      while ( v18 );
      *v17 = *v16;
      v17[1] = v16[1];
      v17[2] = v16[2];
      v17[3] = v16[3];
      v19 = &v52;
      v20 = v56;
      v21 = 8LL;
      do
      {
        *(_OWORD *)v19 = *v20;
        *((_OWORD *)v19 + 1) = v20[1];
        *((_OWORD *)v19 + 2) = v20[2];
        *((_OWORD *)v19 + 3) = v20[3];
        *((_OWORD *)v19 + 4) = v20[4];
        *((_OWORD *)v19 + 5) = v20[5];
        *((_OWORD *)v19 + 6) = v20[6];
        v19 += 128;
        *((_OWORD *)v19 - 1) = v20[7];
        v20 += 8;
        --v21;
      }
      while ( v21 );
      *(_OWORD *)v19 = *v20;
      *((_OWORD *)v19 + 1) = v20[1];
      *((_OWORD *)v19 + 2) = v20[2];
      *((_OWORD *)v19 + 3) = v20[3];
      if ( (_DWORD)v7 )
      {
        CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v20);
        v23 = 4;
        if ( CurrentProcessWow64Process )
          v23 = 1;
        v24 = v7;
        ProbeForRead(a2, 8 * v7, v23);
      }
      else
      {
        v24 = 0LL;
      }
      v25 = (_QWORD *)Win32AllocPoolWithQuota(8LL * (unsigned int)(v7 + 1), 2037609301LL);
      v26 = v25;
      v46 = v25;
      if ( v25 )
      {
        memmove(v25, (const void *)a2, 8 * v24);
        v28 = 0;
        v29 = v55;
        v30 = v54;
        v31 = v53;
        while ( v28 < (unsigned int)v7 )
        {
          v27 = (int *)&v26[v28];
          v32 = *v27;
          if ( (unsigned int)*v27 >= 0xFFFFFFF4 )
          {
            switch ( v32 )
            {
              case -12:
                *(_QWORD *)v27 = v29;
                break;
              case -11:
                *(_QWORD *)v27 = v30;
                break;
              case -10:
                *(_QWORD *)v27 = v31;
                break;
            }
          }
          ++v28;
        }
        if ( (a5 & 8) != 0 )
          SetWaitForQueueAttach(1LL, v27, v29, v30);
        v33 = v47;
        if ( (a5 & 1) != 0 )
          v33 = InputEvent;
        v26[v7] = v33;
        v48 = 0LL;
        v49 = 0LL;
        CurrentThread = KeGetCurrentThread();
        v35 = 0LL;
        if ( !(unsigned int)IsThreadCrossSessionAttached(v33, v27, v29, v30) )
        {
          ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
          if ( ThreadWin32Thread )
            v35 = *ThreadWin32Thread;
        }
        *(_QWORD *)&v48 = *(_QWORD *)(v35 + 16);
        *(_QWORD *)(v35 + 16) = &v48;
        *((_QWORD *)&v48 + 1) = v46;
        v49 = (void (__fastcall *)(_QWORD))Win32FreePool;
        v45 = xxxMsgWaitForMultipleObjectsEx(v7, (_DWORD)v46, a3, a4, a5);
        v38 = 0xFFFFF78000000320uLL;
        v39 = 0xFFFFF78000000004uLL;
        v40 = (unsigned int)_InterlockedExchange(
                              (volatile __int32 *)(*(_QWORD *)(gptiCurrent + 440LL) + 12LL),
                              (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
        if ( !*(_DWORD *)(gptiCurrent + 1168LL) )
        {
          v41 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          EtwTraceMessageCheckDelay(gptiCurrent);
          if ( (_DWORD)v41 )
            v8 = v41;
          *(_DWORD *)(gptiCurrent + 1168LL) = v8;
          if ( *(int *)(gptiCurrent + 480LL) < 0 )
            xxxHandleHealthyThread(gptiCurrent);
          *(_QWORD *)(gptiCurrent + 1224LL) &= ~0x100000000uLL;
          EtwTraceProcessWindowInfo(gptiCurrent);
        }
        *(_WORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 10LL) = 0;
        *(_DWORD *)(gptiCurrent + 1224LL) &= ~0x400u;
        v42 = KeGetCurrentThread();
        if ( !(unsigned int)IsThreadCrossSessionAttached(v40, v38, v39, v37) )
        {
          v43 = (__int64 *)PsGetThreadWin32Thread(v42);
          if ( v43 )
            v9 = *v43;
        }
        *(_QWORD *)(v9 + 16) = v48;
        v49(*((_QWORD *)&v48 + 1));
        if ( (a5 & 1) != 0 )
          ReassociateQueueEventCompletionPacket();
        v8 = v45;
      }
      else
      {
        UserSetLastError(8LL);
      }
    }
  }
  else
  {
    v8 = v7;
  }
LABEL_59:
  UserSessionSwitchLeaveCrit(v11);
  return v8;
}
