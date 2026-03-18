/*
 * XREFs of ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C00A3A50
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C009BCF0 (xxxRealInternalGetMessage.c)
 *     xxxInterSendMsgEx @ 0x1C00A0510 (xxxInterSendMsgEx.c)
 *     xxxSleepThread2 @ 0x1C00A4280 (xxxSleepThread2.c)
 * Callees:
 *     xxxComputeInputSinkInfo @ 0x1C0007CA0 (xxxComputeInputSinkInfo.c)
 *     IsMulDestroyBrushInternalSupported @ 0x1C0009C10 (IsMulDestroyBrushInternalSupported.c)
 *     xxxDesktopThreadWaiter @ 0x1C000E508 (xxxDesktopThreadWaiter.c)
 *     ?xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATION@@W4tagQUEUE_COMPLETION_DRAINER@@@Z @ 0x1C0016108 (-xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATIO.c)
 *     ?CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z @ 0x1C0016A74 (-CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     xxxReceiveMessage @ 0x1C009E8D0 (xxxReceiveMessage.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C00A4180 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     zzzCalcStartCursorHide @ 0x1C00ABC40 (zzzCalcStartCursorHide.c)
 *     WakeDIT @ 0x1C0111F94 (WakeDIT.c)
 *     xxxDoSysExpunge @ 0x1C0126BAC (xxxDoSysExpunge.c)
 *     ClientDeliverUserApc @ 0x1C01306F4 (ClientDeliverUserApc.c)
 *     ??0LeaveEnterCrit@@QEAA@XZ @ 0x1C016380C (--0LeaveEnterCrit@@QEAA@XZ.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1C0163830 (--1LeaveEnterCrit@@QEAA@XZ.c)
 */

__int64 __fastcall xxxRealSleepThread(unsigned int a1, int a2, int a3, int a4, enum SLEEP_STATUS *a5)
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
  ULONG v20; // esi
  char v21; // r13
  void *v22; // rcx
  __int64 v23; // r15
  LeaveEnterCrit *v24; // rcx
  union _LARGE_INTEGER *v25; // rdx
  __int64 v26; // rcx
  int v27; // eax
  int v28; // r15d
  int v29; // esi
  int v30; // esi
  __int64 v31; // rax
  __int64 CurrentProcessWin32Process; // rsi
  __int64 v33; // rax
  struct _KEVENT *v34; // rcx
  int v35; // eax
  __int64 v36; // rsi
  struct _KEVENT *v37; // rcx
  __int64 *v38; // rax
  __int64 v39; // rcx
  __int16 v40; // dx
  __int64 v41; // rdx
  struct _KEVENT *v42; // rcx
  int v43; // edx
  __int64 v44; // rdx
  BOOLEAN Alertable[4]; // [rsp+28h] [rbp-100h]
  int v46; // [rsp+40h] [rbp-E8h]
  union _LARGE_INTEGER *Timeout; // [rsp+48h] [rbp-E0h]
  enum SLEEP_STATUS *v48; // [rsp+50h] [rbp-D8h]
  _DWORD v49[5]; // [rsp+58h] [rbp-D0h] BYREF
  int v50; // [rsp+6Ch] [rbp-BCh]
  int v51; // [rsp+70h] [rbp-B8h]
  __int64 v52; // [rsp+78h] [rbp-B0h] BYREF
  __int64 v53; // [rsp+80h] [rbp-A8h]
  _BYTE v54[4]; // [rsp+8Ch] [rbp-9Ch] BYREF
  __int64 v55; // [rsp+90h] [rbp-98h]
  __int64 v56; // [rsp+98h] [rbp-90h]
  _QWORD v57[3]; // [rsp+A0h] [rbp-88h] BYREF
  PVOID Object[2]; // [rsp+B8h] [rbp-70h] BYREF
  ULONG64 v59; // [rsp+C8h] [rbp-60h] BYREF
  __int64 v60; // [rsp+D0h] [rbp-58h]
  __int64 v61; // [rsp+D8h] [rbp-50h]
  __int64 v62; // [rsp+E0h] [rbp-48h]
  char v63; // [rsp+130h] [rbp+8h] BYREF
  __int16 v64; // [rsp+138h] [rbp+10h]
  int v65; // [rsp+140h] [rbp+18h]
  int v66; // [rsp+148h] [rbp+20h]

  v66 = a4;
  v65 = a3;
  v5 = a3;
  v6 = 0;
  v52 = 0LL;
  v7 = 0;
  v8 = a1 & 0x8000;
  v51 = v8;
  v49[4] = 0;
  v49[0] = 0;
  v9 = (enum SLEEP_STATUS *)v49;
  if ( a5 )
    v9 = a5;
  v48 = v9;
  *(_DWORD *)v9 = 0;
  v10 = a1 & 0xFFFF7FFF;
  if ( (a1 & 0x8000) == 0 )
    v10 = a1;
  if ( a2 )
  {
    v52 = -10000LL * a2;
    Timeout = (union _LARGE_INTEGER *)&v52;
  }
  else
  {
    Timeout = 0LL;
  }
  v55 = gptiCurrent;
  v64 = *(_WORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 10LL);
  LOWORD(a5) = v64;
  while ( 1 )
  {
LABEL_8:
    v11 = *(_QWORD *)(gptiCurrent + 440LL);
    if ( (*(_WORD *)(v11 + 4) & (unsigned __int16)v10) != 0 || a4 && (*(_WORD *)(v11 + 6) & (unsigned __int16)v10) != 0 )
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
    a4 = v66;
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
          v41 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 608LL) + 24LL);
          v42 = *(struct _KEVENT **)(v41 + 32);
          if ( v42 )
          {
            if ( v42 != (struct _KEVENT *)-1LL )
            {
              KeSetEvent(v42, 1, 0);
              ObfDereferenceObject(*(PVOID *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 608LL) + 24LL) + 32LL));
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 608LL) + 24LL) + 32LL) = -1LL;
            }
          }
          else
          {
            *(_QWORD *)(v41 + 32) = -1LL;
          }
        }
      }
      else
      {
        v33 = *(_QWORD *)(gptiCurrent + 416LL);
        if ( !*(_QWORD *)(v33 + 328) )
        {
          *(_QWORD *)(v33 + 328) = gptiCurrent;
          v33 = *(_QWORD *)(gptiCurrent + 416LL);
        }
        if ( *(_QWORD *)(v33 + 328) == gptiCurrent )
        {
          EtwTraceWakeInputIdle(0LL, gptiCurrent);
          v34 = *(struct _KEVENT **)(CurrentProcessWin32Process + 16);
          if ( !v34 )
            goto LABEL_57;
          if ( v34 != (struct _KEVENT *)-1LL )
          {
            KeSetEvent(v34, 1, 0);
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
    IsMulDestroyBrushInternalSupported();
    Object[0] = *(PVOID *)(gptiCurrent + 1416LL);
    v20 = 1;
    v46 = 1;
    if ( (unsigned __int8)IsInputThread() && (v10 & 0x200) != 0 )
    {
      v21 = 1;
      Object[1] = (PVOID)WPP_MAIN_CB.DeviceQueue.32;
      v20 = 2;
      v46 = 2;
    }
    else
    {
      v21 = 0;
    }
    v22 = *(void **)(gptiCurrent + 1384LL);
    if ( v22 && (v10 & 0xFFFF7DFF) != 0 )
    {
      Object[v20++] = v22;
      v46 = v20;
    }
    if ( v21 )
      gfMITWaitingForLLHook = 1;
    v50 = 0;
    while ( 1 )
    {
      v56 = MEMORY[0xFFFFF78000000320];
      v23 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
           * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
      v53 = v23;
      if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
      LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v63);
      v7 = KeWaitForMultipleObjects(v20, Object, WaitAny, WrUserRequest, 1, 0, Timeout, 0LL);
      LeaveEnterCrit::~LeaveEnterCrit(v24);
      if ( v7 )
        goto LABEL_38;
      v59 = 0LL;
      v60 = 0LL;
      v61 = 0LL;
      v62 = 0LL;
      v57[0] = 0LL;
      Alertable[0] = 0;
      v27 = ZwRemoveIoCompletionEx(*(_QWORD *)(gptiCurrent + 1424LL), &v59, 1LL, v54, v57, *(_DWORD *)Alertable);
      v28 = 0;
      if ( v27 )
      {
        if ( v27 == 258 )
          goto LABEL_37;
      }
      else if ( (_DWORD)v60 == 1 )
      {
        v28 = 3;
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
        if ( (_DWORD)v60 == 2 )
          goto LABEL_37;
        if ( !(_DWORD)v60 && *(_QWORD *)(gptiCurrent + 1464LL) )
        {
          v28 = v60 + 4;
          xxxHandleCoreMessagingQueueCompletion(gptiCurrent, &v59, v60 + 1);
        }
      }
      if ( v28 != 4
        || (v26 = 3LL,
            LOBYTE(v26) = (*(_WORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 6LL) & 8) != 0,
            ((unsigned __int8)v26 & ((v10 & 8) != 0)) != 0) )
      {
LABEL_37:
        v23 = v53;
LABEL_38:
        v29 = 0;
        goto LABEL_39;
      }
      v29 = 1;
      v23 = v53;
LABEL_39:
      if ( v7 == 1 )
        break;
LABEL_40:
      v9 = v48;
LABEL_41:
      if ( v7 != 1 && !v29 )
      {
        v30 = v50;
        goto LABEL_44;
      }
      v20 = v46;
    }
    if ( !v21 )
    {
      v9 = v48;
      *(_DWORD *)v48 = 2;
      v52 = -100000LL;
      goto LABEL_41;
    }
    v57[1] = MEMORY[0xFFFFF78000000320];
    if ( (unsigned __int64)(((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                            * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
                          - v23) >= 0x10 )
    {
      v57[2] = MEMORY[0xFFFFF78000000320];
      v43 = ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
            * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
          - v23;
    }
    else
    {
      v43 = 16;
    }
    v26 = -10000LL * v43;
    v25 = Timeout;
    if ( v26 > Timeout->QuadPart )
    {
      Timeout->QuadPart -= v26;
      HIDWORD(WPP_MAIN_CB.DeviceQueue.Lock) = 0;
      xxxComputeInputSinkInfo();
      goto LABEL_40;
    }
    v30 = 1;
    v7 = 258;
    v9 = v48;
LABEL_44:
    if ( v21 )
    {
      gfMITWaitingForLLHook = 0;
      if ( HIDWORD(WPP_MAIN_CB.DeviceQueue.Lock) )
      {
        WakeDIT(2LL);
        if ( !v30 )
          KeClearEvent(*(PRKEVENT *)&WPP_MAIN_CB.DeviceQueue.32);
      }
    }
    if ( (*(_DWORD *)(gptiCurrent + 480LL) & 0x1000) == 0 )
    {
      v31 = *(_QWORD *)(gptiCurrent + 416LL);
      if ( !*(_QWORD *)(v31 + 328) )
      {
        *(_QWORD *)(v31 + 328) = gptiCurrent;
        v31 = *(_QWORD *)(gptiCurrent + 416LL);
      }
      if ( *(_QWORD *)(v31 + 328) != gptiCurrent )
        goto LABEL_49;
      v36 = PsGetCurrentProcessWin32Process(v26, v25);
      EtwTraceSleepInputIdle(0LL, gptiCurrent);
      v37 = *(struct _KEVENT **)(v36 + 16);
      if ( v37 == (struct _KEVENT *)-1LL )
      {
        *(_QWORD *)(v36 + 16) = 0LL;
        v8 = v51;
        v5 = v65;
        a4 = v66;
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
    v44 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 608LL) + 24LL);
    v37 = *(struct _KEVENT **)(v44 + 32);
    if ( v37 == (struct _KEVENT *)-1LL )
    {
      *(_QWORD *)(v44 + 32) = 0LL;
      goto LABEL_49;
    }
    if ( v37 )
      goto LABEL_119;
LABEL_49:
    v8 = v51;
    v5 = v65;
    a4 = v66;
  }
  v7 = xxxDesktopThreadWaiter(0, v10);
  if ( v7 != -1073741790 )
  {
    a4 = v66;
    goto LABEL_8;
  }
LABEL_10:
  *(_WORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 10LL) = v64;
  if ( v6 )
    _InterlockedExchange(
      (volatile __int32 *)(*(_QWORD *)(gptiCurrent + 440LL) + 12LL),
      (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  return v6;
}
