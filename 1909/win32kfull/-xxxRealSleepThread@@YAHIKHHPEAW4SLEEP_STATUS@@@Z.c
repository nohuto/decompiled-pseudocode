/*
 * XREFs of ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C0044820
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C003CAC0 (xxxRealInternalGetMessage.c)
 *     xxxInterSendMsgEx @ 0x1C00412E0 (xxxInterSendMsgEx.c)
 *     xxxSleepThread2 @ 0x1C0045060 (xxxSleepThread2.c)
 * Callees:
 *     xxxComputeInputSinkInfo @ 0x1C0007CA0 (xxxComputeInputSinkInfo.c)
 *     xxxDesktopThreadWaiter @ 0x1C000DC88 (xxxDesktopThreadWaiter.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     xxxReceiveMessage @ 0x1C003F6A0 (xxxReceiveMessage.c)
 *     IsMulDestroyBrushInternalSupported @ 0x1C0044F50 (IsMulDestroyBrushInternalSupported.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C0044F60 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     zzzCalcStartCursorHide @ 0x1C004CA60 (zzzCalcStartCursorHide.c)
 *     WakeDIT @ 0x1C00ECE44 (WakeDIT.c)
 *     xxxDoSysExpunge @ 0x1C01022DC (xxxDoSysExpunge.c)
 *     ClientDeliverUserApc @ 0x1C010B244 (ClientDeliverUserApc.c)
 *     ?CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z @ 0x1C012FDE4 (-CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z.c)
 *     ?xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATION@@W4tagQUEUE_COMPLETION_DRAINER@@@Z @ 0x1C0132088 (-xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATIO.c)
 *     ??0LeaveEnterCrit@@QEAA@XZ @ 0x1C01647DC (--0LeaveEnterCrit@@QEAA@XZ.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1C0164800 (--1LeaveEnterCrit@@QEAA@XZ.c)
 */

__int64 __fastcall xxxRealSleepThread(unsigned int a1, int a2, int a3, __int64 a4, enum SLEEP_STATUS *a5)
{
  int v5; // r13d
  unsigned int v6; // edi
  int v7; // r12d
  int v8; // esi
  enum SLEEP_STATUS *v9; // r15
  unsigned int v10; // r14d
  __int64 v11; // rcx
  __int64 v13; // rcx
  __int16 v14; // dx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // r8
  ULONG v21; // esi
  char v22; // r13
  void *v23; // rcx
  __int64 v24; // r15
  LeaveEnterCrit *v25; // rcx
  union _LARGE_INTEGER *v26; // rdx
  __int64 v27; // rcx
  int v28; // eax
  int v29; // r15d
  int v30; // esi
  int v31; // esi
  __int64 v32; // rax
  __int64 CurrentProcessWin32Process; // rsi
  __int64 v34; // rax
  int v35; // eax
  __int64 v36; // rsi
  struct _KEVENT *v37; // rcx
  __int64 *v38; // rax
  __int64 v39; // rcx
  __int16 v40; // dx
  int v41; // edx
  __int64 v42; // rdx
  BOOLEAN Alertable[4]; // [rsp+28h] [rbp-100h]
  int v44; // [rsp+40h] [rbp-E8h]
  union _LARGE_INTEGER *Timeout; // [rsp+48h] [rbp-E0h]
  enum SLEEP_STATUS *v46; // [rsp+50h] [rbp-D8h]
  _DWORD v47[5]; // [rsp+58h] [rbp-D0h] BYREF
  int v48; // [rsp+6Ch] [rbp-BCh]
  int v49; // [rsp+70h] [rbp-B8h]
  __int64 v50; // [rsp+78h] [rbp-B0h] BYREF
  __int64 v51; // [rsp+80h] [rbp-A8h]
  _BYTE v52[4]; // [rsp+8Ch] [rbp-9Ch] BYREF
  __int64 v53; // [rsp+90h] [rbp-98h]
  __int64 v54; // [rsp+98h] [rbp-90h]
  _QWORD v55[3]; // [rsp+A0h] [rbp-88h] BYREF
  PVOID Object[2]; // [rsp+B8h] [rbp-70h] BYREF
  __int64 v57; // [rsp+C8h] [rbp-60h] BYREF
  __int64 v58; // [rsp+D0h] [rbp-58h]
  __int64 v59; // [rsp+D8h] [rbp-50h]
  __int64 v60; // [rsp+E0h] [rbp-48h]
  char v61; // [rsp+130h] [rbp+8h] BYREF
  __int16 v62; // [rsp+138h] [rbp+10h]
  int v63; // [rsp+140h] [rbp+18h]
  unsigned int v64; // [rsp+148h] [rbp+20h]

  v64 = a4;
  v63 = a3;
  v5 = a3;
  v6 = 0;
  v50 = 0LL;
  v7 = 0;
  v8 = a1 & 0x8000;
  v49 = v8;
  v47[4] = 0;
  v47[0] = 0;
  v9 = (enum SLEEP_STATUS *)v47;
  if ( a5 )
    v9 = a5;
  v46 = v9;
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
  v53 = gptiCurrent;
  v62 = *(_WORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 10LL);
  LOWORD(a5) = v62;
  while ( 1 )
  {
LABEL_8:
    v11 = *(_QWORD *)(gptiCurrent + 440LL);
    if ( (*(_WORD *)(v11 + 4) & (unsigned __int16)v10) != 0
      || (_DWORD)a4 && (*(_WORD *)(v11 + 6) & (unsigned __int16)v10) != 0 )
    {
      v6 = 1;
      goto LABEL_10;
    }
    if ( *(_DWORD *)v9 == 2 )
      goto LABEL_10;
    if ( !v8 && (*(_BYTE *)(v11 + 6) & 0x40) != 0 )
    {
      while ( 1 )
      {
        v39 = *(_QWORD *)(gptiCurrent + 440LL);
        v40 = *(_WORD *)(v39 + 6);
        if ( (v40 & 0x40) == 0 )
          break;
        xxxReceiveMessage(gptiCurrent);
      }
      *(_WORD *)(v39 + 4) |= v40 & *(_WORD *)(gptiCurrent + 872LL);
      *(_WORD *)(gptiCurrent + 872LL) = 0;
    }
    v13 = *(_QWORD *)(gptiCurrent + 416LL);
    if ( *(_DWORD *)(v13 + 400) != gcSysExpunge )
    {
      *(_DWORD *)(v13 + 400) = gcSysExpunge;
      if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 404LL) & WPP_MAIN_CB.Dpc.TargetInfoAsUlong) != 0 )
        xxxDoSysExpunge(gptiCurrent);
    }
    v14 = 0;
    if ( !v8 )
      v14 = 64;
    *(_WORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 10LL) = v10 | v14;
    KeClearEvent(*(PRKEVENT *)(gptiCurrent + 728LL));
    if ( v7 == 258 )
    {
      UserSetLastError(1460LL, v15, v16, v17);
      *(_DWORD *)v9 = 1;
      goto LABEL_10;
    }
    if ( v7 == 192 )
    {
      ClientDeliverUserApc();
      goto LABEL_10;
    }
    v18 = *(_QWORD *)(gptiCurrent + 440LL);
    v19 = 0xFFFFF78000000320uLL;
    v20 = 0xFFFFF78000000004uLL;
    a4 = v64;
    if ( (*(_WORD *)(v18 + 10) & *(_WORD *)(v18 + 4)) != 0 )
      continue;
    if ( gptiCurrent == gTermIO[2] && (v10 & 0x200) != 0 && !Timeout )
      break;
    if ( v5 )
    {
      if ( (*(_DWORD *)(gptiCurrent + 480LL) & 0x400) != 0 && (int)CheckProcessForeground(gptiCurrent) < 0 )
        goto LABEL_10;
      *(_QWORD *)(*(_QWORD *)(gptiCurrent + 472LL) + 8LL) = 0LL;
      if ( gptiCurrent == gptiForeground )
      {
        v38 = *(__int64 **)(gptiCurrent + 456LL);
        v18 = *v38;
        v19 = (unsigned int)(*(_DWORD *)(gptiCurrent + 672LL) | *(_DWORD *)(*v38 + 16));
        if ( ((*(_WORD *)(gptiCurrent + 672LL) | *(_WORD *)(*v38 + 16)) & 0x1000) != 0 )
          xxxCallHook(0, 0LL, 0LL, 11);
      }
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v18, v19);
      *(_DWORD *)(gptiCurrent + 480LL) &= ~0x2000u;
      if ( (*(_DWORD *)(gptiCurrent + 480LL) & 0x1000) != 0 )
      {
        if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 608LL) + 24LL) )
        {
          EtwTraceWakeInputIdle(0LL, gptiCurrent);
          v19 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 608LL) + 24LL);
          v18 = *(_QWORD *)(v19 + 32);
          if ( v18 )
          {
            if ( v18 != -1 )
            {
              KeSetEvent((PRKEVENT)v18, 1, 0);
              ObfDereferenceObject(*(PVOID *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 608LL) + 24LL) + 32LL));
              v18 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 608LL) + 24LL);
              *(_QWORD *)(v18 + 32) = -1LL;
            }
          }
          else
          {
            *(_QWORD *)(v19 + 32) = -1LL;
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
          EtwTraceWakeInputIdle(0LL, gptiCurrent);
          v18 = *(_QWORD *)(CurrentProcessWin32Process + 16);
          if ( !v18 )
            goto LABEL_57;
          if ( v18 != -1 )
          {
            KeSetEvent((PRKEVENT)v18, 1, 0);
            ObfDereferenceObject(*(PVOID *)(CurrentProcessWin32Process + 16));
LABEL_57:
            *(_QWORD *)(CurrentProcessWin32Process + 16) = -1LL;
          }
        }
      }
      v35 = *(_DWORD *)(CurrentProcessWin32Process + 12);
      if ( (v35 & 4) != 0 )
      {
        *(_DWORD *)(CurrentProcessWin32Process + 12) = v35 & 0xFFFFFFFB;
        zzzCalcStartCursorHide(0LL, 0LL);
      }
    }
    IsMulDestroyBrushInternalSupported(v18, v19, v20, a4);
    Object[0] = *(PVOID *)(gptiCurrent + 1416LL);
    v21 = 1;
    v44 = 1;
    if ( (unsigned __int8)IsInputThread() && (v10 & 0x200) != 0 )
    {
      v22 = 1;
      Object[1] = (PVOID)WPP_MAIN_CB.DeviceQueue.32;
      v21 = 2;
      v44 = 2;
    }
    else
    {
      v22 = 0;
    }
    v23 = *(void **)(gptiCurrent + 1384LL);
    if ( v23 && (v10 & 0xFFFF7DFF) != 0 )
    {
      Object[v21++] = v23;
      v44 = v21;
    }
    if ( v22 )
      gfMITWaitingForLLHook = 1;
    v48 = 0;
    while ( 1 )
    {
      v54 = MEMORY[0xFFFFF78000000320];
      v24 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
           * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
      v51 = v24;
      if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
      LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v61);
      v7 = KeWaitForMultipleObjects(v21, Object, WaitAny, WrUserRequest, 1, 0, Timeout, 0LL);
      LeaveEnterCrit::~LeaveEnterCrit(v25);
      if ( v7 )
        goto LABEL_38;
      v57 = 0LL;
      v58 = 0LL;
      v59 = 0LL;
      v60 = 0LL;
      v55[0] = 0LL;
      Alertable[0] = 0;
      v28 = ZwRemoveIoCompletionEx(*(_QWORD *)(gptiCurrent + 1424LL), &v57, 1LL, v52, v55, *(_DWORD *)Alertable);
      v29 = 0;
      if ( v28 )
      {
        if ( v28 == 258 )
          goto LABEL_37;
      }
      else if ( (_DWORD)v58 == 1 )
      {
        v29 = 3;
        ZwAssociateWaitCompletionPacket(
          *(_QWORD *)(gptiCurrent + 1448LL),
          *(_QWORD *)(gptiCurrent + 1424LL),
          *(_QWORD *)(gptiCurrent + 1440LL),
          0LL,
          1LL,
          0,
          0LL,
          0LL);
      }
      else
      {
        if ( (_DWORD)v58 == 2 )
          goto LABEL_37;
        if ( !(_DWORD)v58 && *(_QWORD *)(gptiCurrent + 1464LL) )
        {
          v29 = v58 + 4;
          xxxHandleCoreMessagingQueueCompletion(gptiCurrent, &v57, (unsigned int)(v58 + 1));
        }
      }
      if ( v29 != 4
        || (v27 = 3LL,
            LOBYTE(v27) = (*(_WORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 6LL) & 8) != 0,
            ((unsigned __int8)v27 & ((v10 & 8) != 0)) != 0) )
      {
LABEL_37:
        v24 = v51;
LABEL_38:
        v30 = 0;
        goto LABEL_39;
      }
      v30 = 1;
      v24 = v51;
LABEL_39:
      if ( v7 == 1 )
        break;
LABEL_40:
      v9 = v46;
LABEL_41:
      if ( v7 != 1 && !v30 )
      {
        v31 = v48;
        goto LABEL_44;
      }
      v21 = v44;
    }
    if ( !v22 )
    {
      v9 = v46;
      *(_DWORD *)v46 = 2;
      v50 = -100000LL;
      goto LABEL_41;
    }
    v55[1] = MEMORY[0xFFFFF78000000320];
    if ( (unsigned __int64)(((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                            * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
                          - v24) >= 0x10 )
    {
      v55[2] = MEMORY[0xFFFFF78000000320];
      v41 = ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
            * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
          - v24;
    }
    else
    {
      v41 = 16;
    }
    v27 = -10000LL * v41;
    v26 = Timeout;
    if ( v27 > Timeout->QuadPart )
    {
      Timeout->QuadPart -= v27;
      HIDWORD(WPP_MAIN_CB.DeviceQueue.Lock) = 0;
      xxxComputeInputSinkInfo();
      goto LABEL_40;
    }
    v31 = 1;
    v7 = 258;
    v9 = v46;
LABEL_44:
    if ( v22 )
    {
      gfMITWaitingForLLHook = 0;
      if ( HIDWORD(WPP_MAIN_CB.DeviceQueue.Lock) )
      {
        WakeDIT(2LL);
        if ( !v31 )
          KeClearEvent(*(PRKEVENT *)&WPP_MAIN_CB.DeviceQueue.32);
      }
    }
    if ( (*(_DWORD *)(gptiCurrent + 480LL) & 0x1000) == 0 )
    {
      v32 = *(_QWORD *)(gptiCurrent + 416LL);
      if ( !*(_QWORD *)(v32 + 328) )
      {
        *(_QWORD *)(v32 + 328) = gptiCurrent;
        v32 = *(_QWORD *)(gptiCurrent + 416LL);
      }
      if ( *(_QWORD *)(v32 + 328) != gptiCurrent )
        goto LABEL_49;
      v36 = PsGetCurrentProcessWin32Process(v27, v26);
      EtwTraceSleepInputIdle(0LL, gptiCurrent);
      v37 = *(struct _KEVENT **)(v36 + 16);
      if ( v37 == (struct _KEVENT *)-1LL )
      {
        *(_QWORD *)(v36 + 16) = 0LL;
        v8 = v49;
        v5 = v63;
        LODWORD(a4) = v64;
        continue;
      }
      if ( !v37 )
        goto LABEL_49;
LABEL_119:
      KeClearEvent(v37);
      goto LABEL_49;
    }
    if ( !*(_QWORD *)(*(_QWORD *)(gptiCurrent + 608LL) + 24LL) )
      goto LABEL_49;
    EtwTraceSleepInputIdle(0LL, gptiCurrent);
    v42 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 608LL) + 24LL);
    v37 = *(struct _KEVENT **)(v42 + 32);
    if ( v37 == (struct _KEVENT *)-1LL )
    {
      *(_QWORD *)(v42 + 32) = 0LL;
      goto LABEL_49;
    }
    if ( v37 )
      goto LABEL_119;
LABEL_49:
    v8 = v49;
    v5 = v63;
    LODWORD(a4) = v64;
  }
  v7 = xxxDesktopThreadWaiter(0, v10);
  if ( v7 != -1073741790 )
  {
    LODWORD(a4) = v64;
    goto LABEL_8;
  }
LABEL_10:
  *(_WORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 10LL) = v62;
  if ( v6 )
    _InterlockedExchange(
      (volatile __int32 *)(*(_QWORD *)(gptiCurrent + 440LL) + 12LL),
      (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  return v6;
}
