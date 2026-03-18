/*
 * XREFs of NtUserMsgWaitForMultipleObjectsEx @ 0x1C0025360
 * Callers:
 *     <none>
 * Callees:
 *     xxxGetInputEvent @ 0x1C0025880 (xxxGetInputEvent.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     IsThreadCrossSessionAttached @ 0x1C015BC14 (IsThreadCrossSessionAttached.c)
 *     xxxMsgWaitForMultipleObjectsEx @ 0x1C015C6B4 (xxxMsgWaitForMultipleObjectsEx.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 *     _CancelQueueEventCompletionPacket @ 0x1C01C3B70 (_CancelQueueEventCompletionPacket.c)
 *     _ReassociateQueueEventCompletionPacket @ 0x1C01C3C10 (_ReassociateQueueEventCompletionPacket.c)
 *     _SetWaitForQueueAttach @ 0x1C01C3CC0 (_SetWaitForQueueAttach.c)
 *     xxxHandleHealthyThread @ 0x1C01E3B40 (xxxHandleHealthyThread.c)
 */

__int64 __fastcall NtUserMsgWaitForMultipleObjectsEx(
        unsigned int a1,
        volatile void *a2,
        int a3,
        int a4,
        unsigned int a5)
{
  unsigned __int16 v5; // si
  __int64 v7; // rbx
  unsigned int v8; // edi
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r15
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 CurrentProcess; // rax
  _OWORD *v16; // rcx
  _OWORD *v17; // rax
  __int64 v18; // rdx
  char *v19; // rax
  _OWORD *v20; // rcx
  __int64 v21; // rdx
  __int64 CurrentProcessWow64Process; // rax
  ULONG v23; // r8d
  __int64 v24; // rsi
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
  __int64 v35; // rsi
  __int64 *ThreadWin32Thread; // rax
  unsigned __int64 v37; // rdx
  __int64 v38; // rcx
  unsigned __int64 v39; // rbx
  struct _KTHREAD *v40; // rbx
  __int64 *v41; // rax
  unsigned int v43; // [rsp+30h] [rbp-8B8h]
  void *v44; // [rsp+40h] [rbp-8A8h]
  __int64 v45; // [rsp+48h] [rbp-8A0h]
  __int64 v46; // [rsp+50h] [rbp-898h] BYREF
  void *v47; // [rsp+58h] [rbp-890h]
  void (__fastcall *v48)(void *); // [rsp+60h] [rbp-888h]
  __int64 InputEvent; // [rsp+68h] [rbp-880h]
  __int64 ProcessPeb; // [rsp+70h] [rbp-878h]
  char v51; // [rsp+80h] [rbp-868h] BYREF
  __int64 v52; // [rsp+A0h] [rbp-848h]
  __int64 v53; // [rsp+A8h] [rbp-840h]
  __int64 v54; // [rsp+B0h] [rbp-838h]
  _BYTE v55[1056]; // [rsp+4A0h] [rbp-448h] BYREF

  v5 = a4;
  v7 = a1;
  v8 = -1;
  EnterCrit(0LL, 1LL);
  v11 = 0LL;
  v12 = a5;
  if ( (a5 & 0xFFFFFFE0) != 0 || (unsigned int)v7 > 0x3F )
  {
    UserSetLastError(87LL);
    goto LABEL_59;
  }
  v13 = *(_QWORD *)(gptiCurrent + 448LL);
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
        v45 = 0LL;
        CancelQueueEventCompletionPacket();
      }
      else
      {
        v14 = gptiCurrent;
        v45 = *(_QWORD *)(gptiCurrent + 1408LL);
        if ( !v45 )
          goto LABEL_59;
      }
      CurrentProcess = PsGetCurrentProcess(v14, v12, v9, v10);
      ProcessPeb = PsGetProcessPeb(CurrentProcess);
      v16 = *(_OWORD **)(ProcessPeb + 32);
      if ( v16 + 66 < v16 || (unsigned __int64)(v16 + 66) > MmUserProbeAddress )
        v16 = (_OWORD *)MmUserProbeAddress;
      v17 = v55;
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
      v19 = &v51;
      v20 = v55;
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
      v44 = v25;
      if ( v25 )
      {
        memmove(v25, (const void *)a2, 8 * v24);
        v28 = 0;
        v29 = v54;
        v30 = v53;
        v31 = v52;
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
        v33 = v45;
        if ( (a5 & 1) != 0 )
          v33 = InputEvent;
        v26[v7] = v33;
        CurrentThread = KeGetCurrentThread();
        v35 = 0LL;
        if ( !(unsigned int)IsThreadCrossSessionAttached(v33, v27) )
        {
          ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
          if ( ThreadWin32Thread )
            v35 = *ThreadWin32Thread;
        }
        v46 = *(_QWORD *)(v35 + 16);
        *(_QWORD *)(v35 + 16) = &v46;
        v47 = v44;
        v48 = (void (__fastcall *)(void *))Win32FreePool;
        v43 = xxxMsgWaitForMultipleObjectsEx(v7, (_DWORD)v44, a3, a4, a5);
        v37 = 0xFFFFF78000000320uLL;
        v38 = (unsigned int)_InterlockedExchange(
                              (volatile __int32 *)(*(_QWORD *)(gptiCurrent + 448LL) + 12LL),
                              (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
        if ( !*(_DWORD *)(gptiCurrent + 1152LL) )
        {
          v39 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          EtwTraceMessageCheckDelay(gptiCurrent);
          if ( (_DWORD)v39 )
            v8 = v39;
          *(_DWORD *)(gptiCurrent + 1152LL) = v8;
          if ( *(int *)(gptiCurrent + 488LL) < 0 )
            xxxHandleHealthyThread(gptiCurrent);
          *(_DWORD *)(gptiCurrent + 1208LL) &= ~0x80000000;
          EtwTraceProcessWindowInfo(gptiCurrent);
        }
        *(_WORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 10LL) = 0;
        *(_DWORD *)(gptiCurrent + 1208LL) &= ~0x400u;
        v40 = KeGetCurrentThread();
        if ( !(unsigned int)IsThreadCrossSessionAttached(v38, v37) )
        {
          v41 = (__int64 *)PsGetThreadWin32Thread(v40);
          if ( v41 )
            v11 = *v41;
        }
        *(_QWORD *)(v11 + 16) = v46;
        v48(v47);
        if ( (a5 & 1) != 0 )
          ReassociateQueueEventCompletionPacket();
        v8 = v43;
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
  UserSessionSwitchLeaveCrit(v14, v12, v9, v10);
  return v8;
}
