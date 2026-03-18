/*
 * XREFs of ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C00467C0
 * Callers:
 *     xxxInterSendMsgEx @ 0x1C0044BF0 (xxxInterSendMsgEx.c)
 *     xxxSleepThread2 @ 0x1C0046670 (xxxSleepThread2.c)
 *     xxxRealInternalGetMessage @ 0x1C0047090 (xxxRealInternalGetMessage.c)
 * Callees:
 *     xxxComputeInputSinkInfo @ 0x1C00060E8 (xxxComputeInputSinkInfo.c)
 *     xxxDesktopThreadWaiter @ 0x1C000DA70 (xxxDesktopThreadWaiter.c)
 *     zzzCalcStartCursorHide @ 0x1C001DF00 (zzzCalcStartCursorHide.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     ?xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATION@@W4tagQUEUE_COMPLETION_DRAINER@@@Z @ 0x1C003D780 (-xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATIO.c)
 *     IsMulDestroyBrushInternalSupported @ 0x1C0046E70 (IsMulDestroyBrushInternalSupported.c)
 *     xxxReceiveMessage @ 0x1C0049610 (xxxReceiveMessage.c)
 *     ?CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z @ 0x1C005FD6C (-CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z.c)
 *     WakeDIT @ 0x1C00BAAD8 (WakeDIT.c)
 *     xxxDoSysExpunge @ 0x1C00D7298 (xxxDoSysExpunge.c)
 *     ClientDeliverUserApc @ 0x1C0105234 (ClientDeliverUserApc.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C013B040 (-xxxCallHook@@YAHH_K_JH@Z.c)
 */

__int64 __fastcall xxxRealSleepThread(unsigned int a1, int a2, int a3, __int64 a4, enum SLEEP_STATUS *a5)
{
  int v5; // r13d
  unsigned int v6; // edi
  int v7; // r12d
  int v8; // esi
  enum SLEEP_STATUS *v9; // r14
  unsigned int v10; // r15d
  unsigned __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int16 v14; // dx
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  __int64 *v18; // rax
  __int64 CurrentProcessWin32Process; // rsi
  __int64 v20; // rax
  int v21; // eax
  ULONG v22; // esi
  __int64 v23; // r9
  char v24; // r13
  void *v25; // rcx
  unsigned __int64 v26; // rcx
  unsigned __int128 v27; // rax
  __int64 v28; // r14
  __int64 v29; // rcx
  int v30; // eax
  int v31; // r14d
  int v32; // esi
  int v33; // esi
  __int64 v34; // rax
  __int64 v35; // rsi
  struct _KEVENT *v36; // rcx
  __int64 v38; // rcx
  __int16 v39; // dx
  int v40; // edx
  __int64 v41; // rdx
  BOOLEAN Alertable[4]; // [rsp+28h] [rbp-E0h]
  union _LARGE_INTEGER *Timeout; // [rsp+40h] [rbp-C8h]
  enum SLEEP_STATUS *v44; // [rsp+48h] [rbp-C0h]
  _DWORD v45[5]; // [rsp+50h] [rbp-B8h] BYREF
  int v46; // [rsp+64h] [rbp-A4h]
  int v47; // [rsp+68h] [rbp-A0h]
  __int64 v48; // [rsp+70h] [rbp-98h]
  __int64 v49; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v50[4]; // [rsp+84h] [rbp-84h] BYREF
  __int64 v51; // [rsp+88h] [rbp-80h]
  __int64 v52; // [rsp+90h] [rbp-78h] BYREF
  PVOID Object[3]; // [rsp+98h] [rbp-70h] BYREF
  ULONG64 v54; // [rsp+B0h] [rbp-58h] BYREF
  int v55; // [rsp+B8h] [rbp-50h]
  __int16 v56; // [rsp+110h] [rbp+8h]
  unsigned int v58; // [rsp+128h] [rbp+20h]
  int v59; // [rsp+130h] [rbp+28h]

  v58 = a4;
  v5 = a3;
  v6 = 0;
  v7 = 0;
  v8 = a1 & 0x8000;
  v47 = v8;
  v45[4] = 0;
  v45[0] = 0;
  v9 = (enum SLEEP_STATUS *)v45;
  if ( a5 )
    v9 = a5;
  v44 = v9;
  *(_DWORD *)v9 = 0;
  v10 = a1 & 0xFFFF7FFF;
  if ( (a1 & 0x8000) == 0 )
    v10 = a1;
  if ( a2 )
  {
    v49 = -10000LL * a2;
    Timeout = (union _LARGE_INTEGER *)&v49;
  }
  else
  {
    Timeout = 0LL;
  }
  v51 = gptiCurrent;
  v56 = *(_WORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 10LL);
LABEL_8:
  v11 = 0xFFFFF78000000004uLL;
  while ( 1 )
  {
    do
    {
      v12 = *(_QWORD *)(gptiCurrent + 440LL);
      if ( (*(_WORD *)(v12 + 4) & (unsigned __int16)v10) != 0
        || (_DWORD)a4 && (*(_WORD *)(v12 + 6) & (unsigned __int16)v10) != 0 )
      {
        v6 = 1;
        goto LABEL_60;
      }
      if ( *(_DWORD *)v9 == 2 )
        goto LABEL_60;
      if ( !v8 && (*(_BYTE *)(v12 + 6) & 0x40) != 0 )
      {
        while ( 1 )
        {
          v38 = *(_QWORD *)(gptiCurrent + 440LL);
          v39 = *(_WORD *)(v38 + 6);
          if ( (v39 & 0x40) == 0 )
            break;
          xxxReceiveMessage(gptiCurrent);
        }
        *(_WORD *)(v38 + 4) |= v39 & *(_WORD *)(gptiCurrent + 864LL);
        *(_WORD *)(gptiCurrent + 864LL) = 0;
      }
      v13 = *(_QWORD *)(gptiCurrent + 416LL);
      if ( *(_DWORD *)(v13 + 400) != gcSysExpunge )
      {
        *(_DWORD *)(v13 + 400) = gcSysExpunge;
        if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 404LL) & gdwSysExpungeMask) != 0 )
          xxxDoSysExpunge(gptiCurrent, gcSysExpunge, v11);
      }
      v14 = 0;
      if ( !v8 )
        v14 = 64;
      *(_WORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 10LL) = v10 | v14;
      KeClearEvent(*(PRKEVENT *)(gptiCurrent + 720LL));
      if ( v7 == 258 )
      {
        UserSetLastError(1460LL, v15);
        *(_DWORD *)v9 = 1;
        goto LABEL_60;
      }
      if ( v7 == 192 )
      {
        ClientDeliverUserApc();
        goto LABEL_60;
      }
      v16 = *(_QWORD *)(gptiCurrent + 440LL);
      v17 = 0xFFFFF78000000320uLL;
      v11 = 0xFFFFF78000000004uLL;
      a4 = v58;
    }
    while ( (*(_WORD *)(v16 + 10) & *(_WORD *)(v16 + 4)) != 0 );
    if ( gptiCurrent != *((_QWORD *)&gTermIO + 2) || (v10 & 0x200) == 0 || Timeout )
      break;
    v7 = xxxDesktopThreadWaiter(0, v10);
    v11 = 0xFFFFF78000000004uLL;
    if ( v7 == -1073741790 )
      goto LABEL_60;
    LODWORD(a4) = v58;
  }
  if ( !v5 )
    goto LABEL_32;
  if ( (*(_DWORD *)(gptiCurrent + 480LL) & 0x400) == 0 || (int)CheckProcessForeground(gptiCurrent) >= 0 )
  {
    *(_QWORD *)(*(_QWORD *)(gptiCurrent + 472LL) + 8LL) = 0LL;
    if ( gptiCurrent == gptiForeground )
    {
      v18 = *(__int64 **)(gptiCurrent + 456LL);
      v16 = *v18;
      if ( ((*(_DWORD *)(gptiCurrent + 672LL) | *(_DWORD *)(*v18 + 16)) & 0x1000) != 0 )
        xxxCallHook(0, 0LL, 0LL, 11);
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v16);
    *(_DWORD *)(gptiCurrent + 480LL) &= ~0x2000u;
    if ( (*(_DWORD *)(gptiCurrent + 480LL) & 0x1000) != 0 )
    {
      if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 608LL) + 24LL) )
      {
        EtwTraceWakeInputIdle(0LL, gptiCurrent);
        v17 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 608LL) + 24LL);
        v16 = *(_QWORD *)(v17 + 32);
        if ( v16 )
        {
          if ( v16 != -1 )
          {
            KeSetEvent((PRKEVENT)v16, 1, 0);
            ObfDereferenceObject(*(PVOID *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 608LL) + 24LL) + 32LL));
            v16 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 608LL) + 24LL);
            *(_QWORD *)(v16 + 32) = -1LL;
          }
        }
        else
        {
          *(_QWORD *)(v17 + 32) = -1LL;
        }
      }
      goto LABEL_30;
    }
    v20 = *(_QWORD *)(gptiCurrent + 416LL);
    if ( !*(_QWORD *)(v20 + 328) )
    {
      *(_QWORD *)(v20 + 328) = gptiCurrent;
      v20 = *(_QWORD *)(gptiCurrent + 416LL);
    }
    if ( *(_QWORD *)(v20 + 328) != gptiCurrent )
    {
LABEL_30:
      v21 = *(_DWORD *)(CurrentProcessWin32Process + 12);
      if ( (v21 & 4) != 0 )
      {
        *(_DWORD *)(CurrentProcessWin32Process + 12) = v21 & 0xFFFFFFFB;
        zzzCalcStartCursorHide(0LL, 0LL);
      }
LABEL_32:
      IsMulDestroyBrushInternalSupported(v16, v17, v11, a4);
      Object[0] = *(PVOID *)(gptiCurrent + 1400LL);
      v22 = 1;
      v59 = 1;
      if ( (unsigned __int8)IsInputThread() && (v10 & 0x200) != 0 )
      {
        v24 = 1;
        Object[1] = gpkeComputeInputSinkInfo;
        v22 = 2;
        v59 = 2;
      }
      else
      {
        v24 = 0;
      }
      v25 = *(void **)(gptiCurrent + 1368LL);
      if ( v25 && (v10 & 0xFFFF7DFF) != 0 )
      {
        Object[v22++] = v25;
        v59 = v22;
      }
      if ( v24 )
        gfMITWaitingForLLHook = 1;
      v46 = 0;
      while ( 1 )
      {
        v26 = (unsigned __int64)MEMORY[0xFFFFF78000000004] << 32;
        v27 = v26 * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8);
        v28 = *((_QWORD *)&v27 + 1);
        v48 = *((_QWORD *)&v27 + 1);
        if ( gdwInAtomicOperation )
        {
          v26 = gdwExtraInstrumentations;
          if ( (gdwExtraInstrumentations & 1) != 0 )
            KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
        }
        UserSessionSwitchLeaveCrit(v26, *((_QWORD *)&v27 + 1), gdwInAtomicOperation, v23);
        v7 = KeWaitForMultipleObjects(v22, Object, WaitAny, WrUserRequest, 1, 0, Timeout, 0LL);
        EnterCrit(0LL, 1LL);
        if ( v7 )
          goto LABEL_45;
        v52 = 0LL;
        Alertable[0] = 0;
        v30 = ZwRemoveIoCompletionEx(*(_QWORD *)(gptiCurrent + 1408LL), &v54, 1LL, v50, &v52, *(_DWORD *)Alertable);
        v31 = 0;
        if ( v30 )
        {
          if ( v30 == 258 )
            break;
        }
        else if ( v55 == 1 )
        {
          v31 = 3;
          ZwAssociateWaitCompletionPacket(
            *(_QWORD *)(gptiCurrent + 1432LL),
            *(_QWORD *)(gptiCurrent + 1408LL),
            *(_QWORD *)(gptiCurrent + 1424LL),
            0LL,
            1LL,
            0,
            0LL,
            0LL);
        }
        else
        {
          if ( v55 == 2 )
            break;
          if ( !v55 && *(_QWORD *)(gptiCurrent + 1448LL) )
          {
            v31 = v55 + 4;
            xxxHandleCoreMessagingQueueCompletion(gptiCurrent, &v54, (unsigned int)(v55 + 1), v23);
          }
        }
        if ( v31 != 4 )
          break;
        v29 = 3LL;
        LOBYTE(v29) = (*(_WORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 6LL) & 8) != 0;
        if ( ((unsigned __int8)v29 & ((v10 & 8) != 0)) != 0 )
          break;
        v32 = 1;
        v28 = v48;
LABEL_46:
        if ( v7 == 1 )
        {
          if ( !v24 )
          {
            v9 = v44;
            *(_DWORD *)v44 = 2;
            v49 = -100000LL;
            goto LABEL_48;
          }
          if ( (unsigned __int64)(((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                                  * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
                                - v28) >= 0x10 )
            v40 = ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                  * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
                - v28;
          else
            v40 = 16;
          v29 = -10000LL * v40;
          if ( v29 <= Timeout->QuadPart )
          {
            v33 = 1;
            v7 = 258;
            v9 = v44;
LABEL_51:
            if ( v24 )
            {
              gfMITWaitingForLLHook = 0;
              if ( gfAppWaitingForLLHookSignal )
              {
                WakeDIT(2LL);
                if ( !v33 )
                  KeClearEvent(gpkeComputeInputSinkInfo);
              }
            }
            if ( (*(_DWORD *)(gptiCurrent + 480LL) & 0x1000) != 0 )
            {
              if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 608LL) + 24LL) )
              {
                EtwTraceSleepInputIdle(0LL, gptiCurrent);
                v41 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 608LL) + 24LL);
                v36 = *(struct _KEVENT **)(v41 + 32);
                if ( v36 == (struct _KEVENT *)-1LL )
                {
                  *(_QWORD *)(v41 + 32) = 0LL;
                }
                else if ( v36 )
                {
                  goto LABEL_120;
                }
              }
            }
            else
            {
              v34 = *(_QWORD *)(gptiCurrent + 416LL);
              if ( !*(_QWORD *)(v34 + 328) )
              {
                *(_QWORD *)(v34 + 328) = gptiCurrent;
                v34 = *(_QWORD *)(gptiCurrent + 416LL);
              }
              if ( *(_QWORD *)(v34 + 328) == gptiCurrent )
              {
                v35 = PsGetCurrentProcessWin32Process(v29);
                EtwTraceSleepInputIdle(0LL, gptiCurrent);
                v36 = *(struct _KEVENT **)(v35 + 16);
                if ( v36 == (struct _KEVENT *)-1LL )
                {
                  *(_QWORD *)(v35 + 16) = 0LL;
                  goto LABEL_58;
                }
                if ( v36 )
LABEL_120:
                  KeClearEvent(v36);
              }
            }
LABEL_58:
            v8 = v47;
            v5 = a3;
            LODWORD(a4) = v58;
            goto LABEL_8;
          }
          Timeout->QuadPart -= v29;
          gfAppWaitingForLLHookSignal = 0;
          xxxComputeInputSinkInfo();
        }
        v9 = v44;
LABEL_48:
        if ( v7 != 1 && !v32 )
        {
          v33 = v46;
          goto LABEL_51;
        }
        v22 = v59;
      }
      v28 = v48;
LABEL_45:
      v32 = 0;
      goto LABEL_46;
    }
    EtwTraceWakeInputIdle(0LL, gptiCurrent);
    v16 = *(_QWORD *)(CurrentProcessWin32Process + 16);
    if ( v16 )
    {
      if ( v16 == -1 )
        goto LABEL_30;
      KeSetEvent((PRKEVENT)v16, 1, 0);
      ObfDereferenceObject(*(PVOID *)(CurrentProcessWin32Process + 16));
    }
    *(_QWORD *)(CurrentProcessWin32Process + 16) = -1LL;
    goto LABEL_30;
  }
LABEL_60:
  *(_WORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 10LL) = v56;
  if ( v6 )
    _InterlockedExchange(
      (volatile __int32 *)(*(_QWORD *)(gptiCurrent + 440LL) + 12LL),
      (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  return v6;
}
