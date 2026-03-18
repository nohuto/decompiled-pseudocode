/*
 * XREFs of InternalSetTimer @ 0x1C00AB650
 * Callers:
 *     _SetSystemTimer @ 0x1C008C7D4 (_SetSystemTimer.c)
 *     ?zzzAnimateCursor@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C00AB280 (-zzzAnimateCursor@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     NtUserSetTimer @ 0x1C00AB4A0 (NtUserSetTimer.c)
 *     ?xxxGetNextSysMsg@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@1PEAVCMultiPerObjectLockExclusivePpiPtiQ@@@Z @ 0x1C00D0ADC (-xxxGetNextSysMsg@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@1PEAVCMultiPerObjectLockExclusivePpiP.c)
 *     ?AdjustRITDelayableTimers@@YAXH@Z @ 0x1C011AF04 (-AdjustRITDelayableTimers@@YAXH@Z.c)
 *     SetRITTimer @ 0x1C011E2C0 (SetRITTimer.c)
 *     xxxSoundSentry @ 0x1C015AB30 (xxxSoundSentry.c)
 *     _SetTimer @ 0x1C01EC104 (_SetTimer.c)
 *     ?MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z @ 0x1C0221C60 (-MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z.c)
 *     ?MNSetTimerToOpenHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1C0221CBC (-MNSetTimerToOpenHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@@Z.c)
 *     MNSetTimerToCloseHierarchy @ 0x1C0222F30 (MNSetTimerToCloseHierarchy.c)
 *     UserSetTimer @ 0x1C0244D30 (UserSetTimer.c)
 * Callees:
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     ?SetDelayableTimer@@YAXKK@Z @ 0x1C00AD838 (-SetDelayableTimer@@YAXKK@Z.c)
 *     ?DecTimerCount@@YAXPEAUtagTIMER@@@Z @ 0x1C00DAF1C (-DecTimerCount@@YAXPEAUtagTIMER@@@Z.c)
 *     ??0CAutoPushLockSh@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C01205FC (--0CAutoPushLockSh@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 *     ??1CAutoPushLockSh@@QEAA@XZ @ 0x1C01DB0F4 (--1CAutoPushLockSh@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02D4E10 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall InternalSetTimer(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int v10; // r12d
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v15; // r13
  unsigned int v16; // edi
  _QWORD **v17; // r14
  _QWORD *v18; // rsi
  _QWORD *v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // r9
  signed int v23; // ecx
  __int64 v24; // r8
  __int64 v25; // rdx
  struct _LIST_ENTRY *v26; // rdx
  char *v27; // rdx
  char *v28; // rcx
  char **v29; // rax
  _QWORD *v30; // rsi
  _DWORD *v31; // r14
  _QWORD *v32; // rdi
  int v33; // ecx
  unsigned int v34; // ecx
  int v35; // eax
  unsigned int v36; // r9d
  unsigned int v37; // edx
  unsigned int v38; // ecx
  unsigned int v39; // eax
  int v40; // r8d
  unsigned int v41; // r10d
  int v42; // eax
  unsigned int v43; // eax
  unsigned int v44; // r8d
  unsigned int v45; // edx
  unsigned int v46; // eax
  unsigned int v47; // ecx
  char v48; // bl
  __int64 v49; // rcx
  _QWORD *v50; // [rsp+20h] [rbp-68h]
  __int64 v51; // [rsp+28h] [rbp-60h]
  __int128 v52; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v53[16]; // [rsp+40h] [rbp-48h] BYREF
  __int128 v54; // [rsp+50h] [rbp-38h]

  if ( gbCleanupInitiated )
  {
    UserSetLastError(641LL, a2, a3, a4);
    return 0LL;
  }
  CurrentThread = KeGetCurrentThread();
  v10 = 10;
  if ( (unsigned int)a3 >= 0xA )
    v10 = a3;
  if ( v10 > 0x7FFFFFFF )
    v10 = 0x7FFFFFFF;
  v11 = 0LL;
  v51 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, a3, a4) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
    {
      v11 = *ThreadWin32Thread;
      v51 = *ThreadWin32Thread;
    }
  }
  v15 = v11;
  if ( !v11 || (a6 & 4) != 0 )
  {
    v15 = gptiRit;
  }
  else if ( a1 )
  {
    v15 = *(_QWORD *)(a1 + 16);
  }
  if ( a5 == -1 || !a5 && v15 && (*(_QWORD *)(v15 + 640) & 0x800000000LL) != 0 )
    v16 = a6 & 0xFFFFFDFF;
  else
    v16 = a6 | 0x200;
  *(_QWORD *)&v52 = a1 >> 8;
  v17 = (_QWORD **)((char *)&gTimerHashTable + 16 * ((BYTE1(a1) + (unsigned __int8)a2) & 0x3F));
  v18 = *v17;
  if ( *v17 == v17 )
  {
LABEL_30:
    LOBYTE(v13) = 16;
    v21 = HMAllocObject(v15, 0LL, v13);
    v50 = (_QWORD *)v21;
    v19 = (_QWORD *)v21;
    if ( !v21 )
      return 0LL;
    *(_QWORD *)(v21 + 88) = 0LL;
    if ( a1 )
    {
      *(_QWORD *)(v21 + 96) = a2;
    }
    else
    {
      v23 = g_cTimerId;
      v24 = (unsigned int)g_cTimerId;
      while ( 1 )
      {
        g_cTimerId = --v23;
        v25 = (unsigned int)v23;
        if ( v23 < 0 )
        {
          v23 = 32511;
          g_cTimerId = 32511;
          v25 = 32511LL;
        }
        if ( !_bittestandset(gTimerId, v23) )
          break;
        if ( (_DWORD)v25 == (_DWORD)v24 )
        {
          UserSetLastError(8LL, v25, v24, v22);
          HMFreeObject(v19);
          return 0LL;
        }
      }
      *(_QWORD *)(v21 + 96) = (int)v25 + 256;
    }
    v26 = (struct _LIST_ENTRY *)(v21 + 72);
    if ( gtmrListHead->Blink != gtmrListHead
      || (v26->Flink = gtmrListHead,
          *(_QWORD *)(v21 + 80) = gtmrListHead,
          gtmrListHead->Blink = v26,
          gtmrListHead = (struct _LIST_ENTRY *const)(v21 + 72),
          v27 = (char *)(v21 + 112),
          v28 = (char *)&gTimerHashTable + 16 * ((*(_DWORD *)(v21 + 96) + (int)v52) & 0x3F),
          v29 = (char **)*((_QWORD *)v28 + 1),
          *v29 != v28) )
    {
      __fastfail(3u);
    }
    *(_QWORD *)v27 = v28;
    v19[15] = v29;
    *v29 = v27;
    *((_QWORD *)v28 + 1) = v27;
  }
  else
  {
    while ( 1 )
    {
      v19 = v18 - 14;
      if ( *(v18 - 3) == a1 && v19[12] == a2 )
      {
        v20 = *((unsigned int *)v19 + 12);
        if ( (((unsigned __int8)v16 ^ *((_BYTE *)v19 + 48)) & 6) == 0
          && ((v20 & 0x40) != 0
           || PsGetCurrentProcessWin32Process(v20, v12) == *(_QWORD *)(v19[3] + 416LL)
           || !a1 && (((unsigned __int8)v16 ^ *((_BYTE *)v19 + 48)) & 4) == 0) )
        {
          break;
        }
      }
      v18 = (_QWORD *)*v18;
      if ( v18 == v17 )
        goto LABEL_30;
    }
    v50 = v18 - 14;
    if ( (v19[6] & 1) != 0 )
      DecTimerCount((struct tagTIMER *)(v18 - 14));
  }
  *((_QWORD *)&v54 + 1) = a1;
  *(_QWORD *)&v54 = v19 + 11;
  v52 = v54;
  HMAssignmentLock(&v52);
  *((_DWORD *)v19 + 10) = v10;
  *((_DWORD *)v19 + 13) = v10;
  v19[4] = a4;
  v19[13] = 0LL;
  if ( (v16 & 0x200) != 0 )
    *((_DWORD *)v19 + 11) = a5;
  v30 = v50;
  *((_DWORD *)v50 + 32) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( (v16 & 0x80u) == 0 )
  {
    if ( (v16 & 0x100) != 0 )
      v19[13] = v51;
  }
  else
  {
    v16 &= ~0x80u;
  }
  v31 = v50 + 6;
  *((_DWORD *)v50 + 12) = v16 | 8;
  v32 = v50 + 3;
  v50[3] = v15;
  v33 = *(_DWORD *)(*(_QWORD *)(v15 + 416) + 1028LL);
  if ( v33 )
  {
    v34 = *((_DWORD *)v19 + 13) + v33;
    v35 = 0x7FFFFFFF;
    if ( v34 < 0x7FFFFFFF )
      v35 = v34;
    *((_DWORD *)v19 + 13) = v35;
  }
  EtwTraceInternalSetTimer(v50);
  if ( gbRITAlerted )
    goto LABEL_92;
  if ( gbTimersProcActive )
  {
    gbRITRescan = 1;
    goto LABEL_92;
  }
  v30 = v50;
  v36 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - gcmsLastTimer;
  if ( (*v31 & 0x200) != 0 )
  {
    v37 = *((_DWORD *)v50 + 11);
    v38 = gCurrentTimerCoalescingTolerance;
    v39 = gCurrentTimerCoalescingTolerance;
    v40 = *((_DWORD *)v19 + 13);
    if ( v37 > gCurrentTimerCoalescingTolerance )
      v39 = *((_DWORD *)v50 + 11);
    if ( v40 + v39 >= 0x7FFFFFFF )
    {
      v41 = 0x7FFFFFFF;
    }
    else
    {
      if ( v37 > gCurrentTimerCoalescingTolerance )
        v38 = *((_DWORD *)v50 + 11);
      v41 = v40 + v38;
    }
    v42 = *(_DWORD *)(*(_QWORD *)(*v32 + 416LL) + 1032LL);
    if ( v42 )
    {
      v43 = v41 + v42;
      v41 = 0x7FFFFFFF;
      if ( v43 < 0x7FFFFFFF )
        v41 = v43;
    }
  }
  else
  {
    v41 = *((_DWORD *)v19 + 13);
  }
  v44 = gdmsNextTimer;
  if ( v36 <= gdmsNextTimer )
  {
    v45 = guNextCoalescableTimerDue;
    if ( v36 <= guNextCoalescableTimerDue && !*(_DWORD *)(*(_QWORD *)(*v32 + 416LL) + 1036LL) )
    {
      v46 = v41 + v36;
      if ( v41 + v36 >= v41 )
      {
        *v31 &= ~8u;
        *((_DWORD *)v19 + 13) += v36;
        v47 = *((_DWORD *)v19 + 13);
        if ( v44 > v47 )
          goto LABEL_79;
        if ( v45 <= v46 )
          goto LABEL_83;
        if ( v47 < v44 )
        {
LABEL_79:
          v44 = *((_DWORD *)v19 + 13);
          gdmsNextTimer = v44;
        }
        if ( v45 >= v46 )
        {
          v45 = v41 + v36;
          guNextCoalescableTimerDue = v41 + v36;
        }
        SetDelayableTimer(v44 - v36, v45 - v36);
      }
    }
  }
LABEL_83:
  if ( (*v31 & 8) != 0 )
  {
    CAutoPushLockSh::CAutoPushLockSh(
      (CAutoPushLockSh *)v53,
      (struct _EX_PUSH_LOCK *)&CRitTimerScanWakeSystem::ritTimerScanWakeSystemLock);
    if ( CRitTimerScanWakeSystem::ritTimerScanWakeEvent )
    {
      KeSetEvent(CRitTimerScanWakeSystem::ritTimerScanWakeEvent, 1, 0);
      v48 = 1;
    }
    else
    {
      v48 = 0;
    }
    CAutoPushLockSh::~CAutoPushLockSh((CAutoPushLockSh *)v53);
    gbRITAlerted = v48;
    if ( v48 != 1 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v49);
      result = v50[12];
      if ( !result )
        return 1LL;
      return result;
    }
  }
LABEL_92:
  result = v30[12];
  if ( !result )
    return 1LL;
  return result;
}
