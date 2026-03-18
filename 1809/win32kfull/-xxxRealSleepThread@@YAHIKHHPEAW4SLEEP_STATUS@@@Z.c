/*
 * XREFs of ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C0030D50
 * Callers:
 *     xxxInterSendMsgEx @ 0x1C002E6E0 (xxxInterSendMsgEx.c)
 *     xxxSleepThread2 @ 0x1C0030BEC (xxxSleepThread2.c)
 *     xxxRealInternalGetMessage @ 0x1C0032740 (xxxRealInternalGetMessage.c)
 * Callees:
 *     xxxComputeInputSinkInfo @ 0x1C00053B0 (xxxComputeInputSinkInfo.c)
 *     IsMulDestroyBrushInternalSupported @ 0x1C0005990 (IsMulDestroyBrushInternalSupported.c)
 *     zzzCalcStartCursorHide @ 0x1C0017CF0 (zzzCalcStartCursorHide.c)
 *     ?xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATION@@W4tagQUEUE_COMPLETION_DRAINER@@@Z @ 0x1C00262E4 (-xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATIO.c)
 *     xxxReceiveMessage @ 0x1C003156C (xxxReceiveMessage.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     xxxDoSysExpunge @ 0x1C00B7EE4 (xxxDoSysExpunge.c)
 *     xxxDesktopThreadWaiter @ 0x1C00BC0B4 (xxxDesktopThreadWaiter.c)
 *     ?CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z @ 0x1C00CF08C (-CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z.c)
 *     WakeDIT @ 0x1C01089A4 (WakeDIT.c)
 *     ClientDeliverUserApc @ 0x1C0125DD0 (ClientDeliverUserApc.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C015D880 (-xxxCallHook@@YAHH_K_JH@Z.c)
 */

__int64 __fastcall xxxRealSleepThread(unsigned int a1, int a2, int a3, unsigned int a4, enum SLEEP_STATUS *a5)
{
  int v5; // r13d
  unsigned int v6; // edi
  NTSTATUS v7; // r12d
  int v8; // esi
  enum SLEEP_STATUS *v9; // r14
  unsigned int v10; // r15d
  unsigned __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v14; // rcx
  __int16 v15; // dx
  __int64 v16; // rcx
  __int64 CurrentProcessWin32Process; // rsi
  __int64 v18; // rax
  int v19; // eax
  ULONG v20; // esi
  __int64 v21; // r9
  char v22; // r13
  void *v23; // rcx
  unsigned __int64 v24; // rcx
  unsigned __int128 v25; // rax
  __int64 v26; // r14
  __int64 v27; // rcx
  int v28; // eax
  int v29; // r14d
  int v30; // esi
  int v31; // esi
  __int64 v32; // rax
  __int64 v33; // rsi
  struct _KEVENT *v34; // rcx
  struct _KEVENT *v35; // rcx
  __int64 *v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rdx
  struct _KEVENT *v40; // rcx
  int v41; // edx
  __int64 v42; // rdx
  BOOLEAN Alertable[4]; // [rsp+28h] [rbp-E0h]
  union _LARGE_INTEGER *Timeout; // [rsp+40h] [rbp-C8h]
  enum SLEEP_STATUS *v45; // [rsp+48h] [rbp-C0h]
  _DWORD v46[5]; // [rsp+50h] [rbp-B8h] BYREF
  int v47; // [rsp+64h] [rbp-A4h]
  int v48; // [rsp+68h] [rbp-A0h]
  __int64 v49; // [rsp+70h] [rbp-98h]
  __int64 v50; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v51[4]; // [rsp+84h] [rbp-84h] BYREF
  __int64 v52; // [rsp+88h] [rbp-80h]
  __int64 v53; // [rsp+90h] [rbp-78h] BYREF
  PVOID Object[3]; // [rsp+98h] [rbp-70h] BYREF
  ULONG64 v55; // [rsp+B0h] [rbp-58h] BYREF
  int v56; // [rsp+B8h] [rbp-50h]
  __int16 v57; // [rsp+110h] [rbp+8h]
  unsigned int v59; // [rsp+128h] [rbp+20h]
  int v60; // [rsp+130h] [rbp+28h]

  v59 = a4;
  v5 = a3;
  v6 = 0;
  v7 = 0;
  v8 = a1 & 0x8000;
  v48 = v8;
  v46[4] = 0;
  v46[0] = 0;
  v9 = (enum SLEEP_STATUS *)v46;
  if ( a5 )
    v9 = a5;
  v45 = v9;
  *(_DWORD *)v9 = 0;
  v10 = a1 & 0xFFFF7FFF;
  if ( (a1 & 0x8000) == 0 )
    v10 = a1;
  if ( a2 )
  {
    v50 = -10000LL * a2;
    Timeout = (union _LARGE_INTEGER *)&v50;
  }
  else
  {
    Timeout = 0LL;
  }
  v52 = gptiCurrent;
  v57 = *(_WORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 10LL);
LABEL_8:
  v11 = 0xFFFFF78000000004uLL;
  while ( 1 )
  {
    do
    {
      v12 = *(_QWORD *)(gptiCurrent + 448LL);
      if ( (*(_WORD *)(v12 + 4) & (unsigned __int16)v10) != 0
        || a4 && (*(_WORD *)(v12 + 6) & (unsigned __int16)v10) != 0 )
      {
        v6 = 1;
        goto LABEL_11;
      }
      if ( *(_DWORD *)v9 == 2 )
        goto LABEL_11;
      if ( !v8 && (*(_BYTE *)(v12 + 6) & 0x40) != 0 )
      {
        while ( 1 )
        {
          v37 = *(_QWORD *)(gptiCurrent + 448LL);
          v38 = *(unsigned __int16 *)(v37 + 6);
          if ( (v38 & 0x40) == 0 )
            break;
          xxxReceiveMessage(gptiCurrent, v38, v11);
        }
        *(_WORD *)(v37 + 4) |= (unsigned __int16)v38 & *(_WORD *)(gptiCurrent + 872LL);
        *(_WORD *)(gptiCurrent + 872LL) = 0;
      }
      v14 = *(_QWORD *)(gptiCurrent + 424LL);
      if ( *(_DWORD *)(v14 + 408) != gcSysExpunge )
      {
        *(_DWORD *)(v14 + 408) = gcSysExpunge;
        if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 412LL) & gdwSysExpungeMask) != 0 )
          xxxDoSysExpunge(gptiCurrent, gcSysExpunge, v11);
      }
      v15 = 0;
      if ( !v8 )
        v15 = 64;
      *(_WORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 10LL) = v10 | v15;
      KeClearEvent(*(PRKEVENT *)(gptiCurrent + 736LL));
      if ( v7 == 258 )
      {
        UserSetLastError(1460LL);
        *(_DWORD *)v9 = 1;
        goto LABEL_11;
      }
      if ( v7 == 192 )
      {
        ClientDeliverUserApc();
        goto LABEL_11;
      }
      v16 = *(_QWORD *)(gptiCurrent + 448LL);
      v11 = 0xFFFFF78000000004uLL;
      a4 = v59;
    }
    while ( (*(_WORD *)(v16 + 10) & *(_WORD *)(v16 + 4)) != 0 );
    if ( gptiCurrent != *((_QWORD *)&gTermIO + 2) || (v10 & 0x200) == 0 || Timeout )
      break;
    v7 = xxxDesktopThreadWaiter(0LL, v10, 0xFFFFF78000000004uLL, v59);
    v11 = 0xFFFFF78000000004uLL;
    if ( v7 == -1073741790 )
      goto LABEL_11;
    a4 = v59;
  }
  if ( !v5 )
    goto LABEL_34;
  if ( (*(_DWORD *)(gptiCurrent + 488LL) & 0x400) == 0 || (int)CheckProcessForeground(gptiCurrent) >= 0 )
  {
    *(_QWORD *)(*(_QWORD *)(gptiCurrent + 480LL) + 8LL) = 0LL;
    if ( gptiCurrent == gptiForeground )
    {
      v36 = *(__int64 **)(gptiCurrent + 464LL);
      v16 = *v36;
      if ( ((*(_DWORD *)(gptiCurrent + 680LL) | *(_DWORD *)(*v36 + 16)) & 0x1000) != 0 )
        xxxCallHook(0, 0LL, 0LL, 11);
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v16);
    *(_DWORD *)(gptiCurrent + 488LL) &= ~0x2000u;
    if ( (*(_DWORD *)(gptiCurrent + 488LL) & 0x1000) != 0 )
    {
      if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 616LL) + 24LL) )
      {
        EtwTraceWakeInputIdle(0LL, gptiCurrent);
        v39 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 616LL) + 24LL);
        v40 = *(struct _KEVENT **)(v39 + 32);
        if ( v40 )
        {
          if ( v40 != (struct _KEVENT *)-1LL )
          {
            KeSetEvent(v40, 1, 0);
            ObfDereferenceObject(*(PVOID *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 616LL) + 24LL) + 32LL));
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 616LL) + 24LL) + 32LL) = -1LL;
          }
        }
        else
        {
          *(_QWORD *)(v39 + 32) = -1LL;
        }
      }
      goto LABEL_32;
    }
    v18 = *(_QWORD *)(gptiCurrent + 424LL);
    if ( !*(_QWORD *)(v18 + 336) )
    {
      *(_QWORD *)(v18 + 336) = gptiCurrent;
      v18 = *(_QWORD *)(gptiCurrent + 424LL);
    }
    if ( *(_QWORD *)(v18 + 336) != gptiCurrent )
    {
LABEL_32:
      v19 = *(_DWORD *)(CurrentProcessWin32Process + 12);
      if ( (v19 & 4) != 0 )
      {
        *(_DWORD *)(CurrentProcessWin32Process + 12) = v19 & 0xFFFFFFFB;
        zzzCalcStartCursorHide(0LL, 0LL);
      }
LABEL_34:
      IsMulDestroyBrushInternalSupported();
      Object[0] = *(PVOID *)(gptiCurrent + 1392LL);
      v20 = 1;
      v60 = 1;
      if ( (unsigned __int8)IsInputThread() && (v10 & 0x200) != 0 )
      {
        v22 = 1;
        Object[1] = gpkeComputeInputSinkInfo;
        v20 = 2;
        v60 = 2;
      }
      else
      {
        v22 = 0;
      }
      v23 = *(void **)(gptiCurrent + 1360LL);
      if ( v23 && (v10 & 0xFFFF7DFF) != 0 )
      {
        Object[v20++] = v23;
        v60 = v20;
      }
      if ( v22 )
        gfMITWaitingForLLHook = 1;
      v47 = 0;
      while ( 1 )
      {
        v24 = (unsigned __int64)MEMORY[0xFFFFF78000000004] << 32;
        v25 = v24 * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8);
        v26 = *((_QWORD *)&v25 + 1);
        v49 = *((_QWORD *)&v25 + 1);
        if ( gdwInAtomicOperation )
        {
          v24 = gdwExtraInstrumentations;
          if ( (gdwExtraInstrumentations & 1) != 0 )
            KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
        }
        UserSessionSwitchLeaveCrit(v24, *((_QWORD *)&v25 + 1), gdwInAtomicOperation, v21);
        v7 = KeWaitForMultipleObjects(v20, Object, WaitAny, WrUserRequest, 1, 0, Timeout, 0LL);
        EnterCrit(0LL, 1LL);
        if ( v7 )
          goto LABEL_47;
        v53 = 0LL;
        Alertable[0] = 0;
        v28 = ZwRemoveIoCompletionEx(*(_QWORD *)(gptiCurrent + 1400LL), &v55, 1LL, v51, &v53, *(_DWORD *)Alertable);
        v29 = 0;
        if ( v28 )
        {
          if ( v28 == 258 )
            break;
        }
        else if ( v56 == 1 )
        {
          v29 = 3;
          ZwAssociateWaitCompletionPacket(
            *(_QWORD *)(gptiCurrent + 1424LL),
            *(_QWORD *)(gptiCurrent + 1400LL),
            *(_QWORD *)(gptiCurrent + 1416LL),
            0LL,
            1LL,
            0,
            0LL,
            0LL);
        }
        else
        {
          if ( v56 == 2 )
            break;
          if ( !v56 && *(_QWORD *)(gptiCurrent + 1440LL) )
          {
            v29 = v56 + 4;
            xxxHandleCoreMessagingQueueCompletion(gptiCurrent, &v55, v56 + 1);
          }
        }
        if ( v29 != 4 )
          break;
        v27 = 3LL;
        LOBYTE(v27) = (*(_WORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 6LL) & 8) != 0;
        if ( ((unsigned __int8)v27 & ((v10 & 8) != 0)) != 0 )
          break;
        v30 = 1;
        v26 = v49;
LABEL_48:
        if ( v7 == 1 )
        {
          if ( !v22 )
          {
            v9 = v45;
            *(_DWORD *)v45 = 2;
            v50 = -100000LL;
            goto LABEL_50;
          }
          if ( (unsigned __int64)(((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                                  * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
                                - v26) >= 0x10 )
            v41 = ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                  * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
                - v26;
          else
            v41 = 16;
          v27 = -10000LL * v41;
          if ( v27 <= Timeout->QuadPart )
          {
            v31 = 1;
            v7 = 258;
            v9 = v45;
LABEL_53:
            if ( v22 )
            {
              gfMITWaitingForLLHook = 0;
              if ( gfAppWaitingForLLHookSignal )
              {
                WakeDIT(2LL);
                if ( !v31 )
                  KeClearEvent(gpkeComputeInputSinkInfo);
              }
            }
            if ( (*(_DWORD *)(gptiCurrent + 488LL) & 0x1000) != 0 )
            {
              if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 616LL) + 24LL) )
              {
                EtwTraceSleepInputIdle(0LL, gptiCurrent);
                v42 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 616LL) + 24LL);
                v34 = *(struct _KEVENT **)(v42 + 32);
                if ( v34 == (struct _KEVENT *)-1LL )
                {
                  *(_QWORD *)(v42 + 32) = 0LL;
                }
                else if ( v34 )
                {
                  goto LABEL_119;
                }
              }
LABEL_60:
              v8 = v48;
              v5 = a3;
              a4 = v59;
            }
            else
            {
              v32 = *(_QWORD *)(gptiCurrent + 424LL);
              if ( !*(_QWORD *)(v32 + 336) )
              {
                *(_QWORD *)(v32 + 336) = gptiCurrent;
                v32 = *(_QWORD *)(gptiCurrent + 424LL);
              }
              if ( *(_QWORD *)(v32 + 336) != gptiCurrent )
                goto LABEL_60;
              v33 = PsGetCurrentProcessWin32Process(v27);
              EtwTraceSleepInputIdle(0LL, gptiCurrent);
              v34 = *(struct _KEVENT **)(v33 + 16);
              if ( v34 != (struct _KEVENT *)-1LL )
              {
                if ( !v34 )
                  goto LABEL_60;
LABEL_119:
                KeClearEvent(v34);
                goto LABEL_60;
              }
              *(_QWORD *)(v33 + 16) = 0LL;
              v8 = v48;
              v5 = a3;
              a4 = v59;
            }
            goto LABEL_8;
          }
          Timeout->QuadPart -= v27;
          gfAppWaitingForLLHookSignal = 0;
          xxxComputeInputSinkInfo();
        }
        v9 = v45;
LABEL_50:
        if ( v7 != 1 && !v30 )
        {
          v31 = v47;
          goto LABEL_53;
        }
        v20 = v60;
      }
      v26 = v49;
LABEL_47:
      v30 = 0;
      goto LABEL_48;
    }
    EtwTraceWakeInputIdle(0LL, gptiCurrent);
    v35 = *(struct _KEVENT **)(CurrentProcessWin32Process + 16);
    if ( v35 )
    {
      if ( v35 == (struct _KEVENT *)-1LL )
        goto LABEL_32;
      KeSetEvent(v35, 1, 0);
      ObfDereferenceObject(*(PVOID *)(CurrentProcessWin32Process + 16));
    }
    *(_QWORD *)(CurrentProcessWin32Process + 16) = -1LL;
    goto LABEL_32;
  }
LABEL_11:
  *(_WORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 10LL) = v57;
  if ( v6 )
    _InterlockedExchange(
      (volatile __int32 *)(*(_QWORD *)(gptiCurrent + 448LL) + 12LL),
      (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  return v6;
}
