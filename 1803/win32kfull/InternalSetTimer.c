/*
 * XREFs of InternalSetTimer @ 0x1C001A1B0
 * Callers:
 *     SetRITTimer @ 0x1C0019A20 (SetRITTimer.c)
 *     NtUserSetTimer @ 0x1C001A040 (NtUserSetTimer.c)
 *     SetDeepDelayableVisRITTimer @ 0x1C001A868 (SetDeepDelayableVisRITTimer.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C004A500 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     _SetSystemTimer @ 0x1C00647F0 (_SetSystemTimer.c)
 *     ?AdjustRITDelayableTimers@@YAXH@Z @ 0x1C00BC52C (-AdjustRITDelayableTimers@@YAXH@Z.c)
 *     xxxSoundSentry @ 0x1C010FD10 (xxxSoundSentry.c)
 *     _SetTimer @ 0x1C01B40A4 (_SetTimer.c)
 *     ?MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z @ 0x1C01E42DC (-MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z.c)
 *     ?MNSetTimerToOpenHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1C01E4338 (-MNSetTimerToOpenHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@@Z.c)
 *     MNSetTimerToCloseHierarchy @ 0x1C01E54D4 (MNSetTimerToCloseHierarchy.c)
 *     UserSetTimer @ 0x1C02032E8 (UserSetTimer.c)
 * Callees:
 *     ?DecTimerCount@@YAXPEAUtagTIMER@@@Z @ 0x1C00186A8 (-DecTimerCount@@YAXPEAUtagTIMER@@@Z.c)
 *     ?SetDelayableTimer@@YAXKK@Z @ 0x1C001A670 (-SetDelayableTimer@@YAXKK@Z.c)
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall InternalSetTimer(unsigned __int64 a1, __int64 a2, unsigned int a3, __int64 a4, int a5, int a6)
{
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int v10; // r12d
  __int64 v11; // rsi
  __int64 v12; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v14; // r13
  unsigned int v15; // edi
  _QWORD **v16; // r14
  _QWORD *v17; // rsi
  _QWORD *v18; // rbx
  __int64 v19; // rcx
  _QWORD *v20; // rax
  signed int v21; // ecx
  int v22; // r8d
  int v23; // edx
  _QWORD *v24; // rdx
  char *v25; // rdx
  char *v26; // rcx
  char **v27; // rax
  _QWORD *v28; // rsi
  _DWORD *v29; // r14
  _QWORD *v30; // rdi
  int v31; // ecx
  unsigned int v32; // ecx
  int v33; // eax
  unsigned int v34; // r8d
  unsigned int v35; // edx
  unsigned int v36; // ecx
  unsigned int v37; // eax
  int v38; // r9d
  unsigned int v39; // r10d
  int v40; // eax
  unsigned int v41; // eax
  unsigned int v42; // r9d
  unsigned int v43; // edx
  unsigned int v44; // eax
  unsigned int v45; // ecx
  _QWORD *v46; // [rsp+20h] [rbp-58h]
  __int64 v47; // [rsp+28h] [rbp-50h]
  __int128 v48; // [rsp+30h] [rbp-48h] BYREF
  __int128 v49; // [rsp+40h] [rbp-38h]

  if ( gbCleanupInitiated )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  v10 = 10;
  if ( a3 >= 0xA )
    v10 = a3;
  if ( v10 > 0x7FFFFFFF )
    v10 = 0x7FFFFFFF;
  v11 = 0LL;
  v47 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached() )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
    {
      v11 = *ThreadWin32Thread;
      v47 = *ThreadWin32Thread;
    }
  }
  v14 = v11;
  if ( !v11 || (a6 & 4) != 0 )
  {
    v14 = gptiRit;
  }
  else if ( a1 )
  {
    v14 = *(_QWORD *)(a1 + 16);
  }
  if ( a5 == -1 || !a5 && v14 && (*(_QWORD *)(v14 + 640) & 0x800000000LL) != 0 )
    v15 = a6 & 0xFFFFFDFF;
  else
    v15 = a6 | 0x200;
  *(_QWORD *)&v48 = a1 >> 8;
  v16 = (_QWORD **)((char *)&gTimerHashTable + 16 * ((BYTE1(a1) + (unsigned __int8)a2) & 0x3F));
  v17 = *v16;
  if ( *v16 == v16 )
  {
LABEL_30:
    LOBYTE(v12) = 16;
    v20 = (_QWORD *)HMAllocObject(v14, 0LL, v12, 136LL);
    v46 = v20;
    v18 = v20;
    if ( !v20 )
      return 0LL;
    v20[11] = 0LL;
    if ( a1 )
    {
      v20[12] = a2;
    }
    else
    {
      v21 = g_cTimerId;
      v22 = g_cTimerId;
      while ( 1 )
      {
        g_cTimerId = --v21;
        v23 = v21;
        if ( v21 < 0 )
        {
          v21 = 32511;
          g_cTimerId = 32511;
          v23 = 32511;
        }
        if ( !_bittestandset(gTimerId, v21) )
          break;
        if ( v23 == v22 )
        {
          HMFreeObject(v20);
          return 0LL;
        }
      }
      v20[12] = v23 + 256;
    }
    v24 = v20 + 9;
    if ( *(_QWORD *)(gtmrListHead + 8LL) != gtmrListHead )
      __fastfail(3u);
    *v24 = gtmrListHead;
    v20[10] = gtmrListHead;
    *(_QWORD *)(gtmrListHead + 8LL) = v24;
    gtmrListHead = v20 + 9;
    v25 = (char *)(v20 + 14);
    v26 = (char *)&gTimerHashTable + 16 * ((*((_DWORD *)v20 + 24) + (int)v48) & 0x3F);
    v27 = (char **)*((_QWORD *)v26 + 1);
    if ( *v27 != v26 )
      __fastfail(3u);
    *(_QWORD *)v25 = v26;
    v18[15] = v27;
    *v27 = v25;
    *((_QWORD *)v26 + 1) = v25;
  }
  else
  {
    while ( 1 )
    {
      v18 = v17 - 14;
      if ( *(v17 - 3) == a1 && v18[12] == a2 )
      {
        v19 = *((unsigned int *)v18 + 12);
        if ( (((unsigned __int8)v15 ^ *((_BYTE *)v18 + 48)) & 6) == 0
          && ((v19 & 0x40) != 0
           || PsGetCurrentProcessWin32Process(v19) == *(_QWORD *)(v18[3] + 416LL)
           || !a1 && (((unsigned __int8)v15 ^ *((_BYTE *)v18 + 48)) & 4) == 0) )
        {
          break;
        }
      }
      v17 = (_QWORD *)*v17;
      if ( v17 == v16 )
        goto LABEL_30;
    }
    v46 = v17 - 14;
    if ( (v18[6] & 1) != 0 )
      DecTimerCount((struct tagTIMER *)(v17 - 14));
  }
  *((_QWORD *)&v49 + 1) = a1;
  *(_QWORD *)&v49 = v18 + 11;
  v48 = v49;
  HMAssignmentLock(&v48);
  *((_DWORD *)v18 + 10) = v10;
  *((_DWORD *)v18 + 13) = v10;
  v18[4] = a4;
  v18[13] = 0LL;
  if ( (v15 & 0x200) != 0 )
    *((_DWORD *)v18 + 11) = a5;
  v28 = v46;
  *((_DWORD *)v46 + 32) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( (v15 & 0x80u) == 0 )
  {
    if ( (v15 & 0x100) != 0 )
      v18[13] = v47;
  }
  else
  {
    v15 &= ~0x80u;
  }
  v29 = v46 + 6;
  *((_DWORD *)v46 + 12) = v15 | 8;
  v46[3] = v14;
  v30 = v46 + 3;
  v31 = *(_DWORD *)(*(_QWORD *)(v14 + 416) + 1028LL);
  if ( v31 )
  {
    v32 = *((_DWORD *)v18 + 13) + v31;
    v33 = 0x7FFFFFFF;
    if ( v32 < 0x7FFFFFFF )
      v33 = v32;
    *((_DWORD *)v18 + 13) = v33;
  }
  EtwTraceInternalSetTimer(v46);
  if ( !gbRITAlerted )
  {
    if ( !gbTimersProcActive )
    {
      v28 = v46;
      v34 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - gcmsLastTimer;
      if ( (*v29 & 0x200) != 0 )
      {
        v35 = *((_DWORD *)v46 + 11);
        v36 = gCurrentTimerCoalescingTolerance;
        v37 = gCurrentTimerCoalescingTolerance;
        v38 = *((_DWORD *)v18 + 13);
        if ( v35 > gCurrentTimerCoalescingTolerance )
          v37 = *((_DWORD *)v46 + 11);
        if ( v38 + v37 >= 0x7FFFFFFF )
        {
          v39 = 0x7FFFFFFF;
        }
        else
        {
          if ( v35 > gCurrentTimerCoalescingTolerance )
            v36 = *((_DWORD *)v46 + 11);
          v39 = v38 + v36;
        }
        v40 = *(_DWORD *)(*(_QWORD *)(*v30 + 416LL) + 1032LL);
        if ( v40 )
        {
          v41 = v39 + v40;
          v39 = 0x7FFFFFFF;
          if ( v41 < 0x7FFFFFFF )
            v39 = v41;
        }
      }
      else
      {
        v39 = *((_DWORD *)v18 + 13);
      }
      v42 = gdmsNextTimer;
      if ( v34 > gdmsNextTimer )
        goto LABEL_84;
      v43 = guNextCoalescableTimerDue;
      if ( v34 > guNextCoalescableTimerDue )
        goto LABEL_84;
      if ( *(_DWORD *)(*(_QWORD *)(*v30 + 416LL) + 1036LL) )
        goto LABEL_84;
      v44 = v39 + v34;
      if ( v39 + v34 < v39 )
        goto LABEL_84;
      *v29 &= ~8u;
      *((_DWORD *)v18 + 13) += v34;
      v45 = *((_DWORD *)v18 + 13);
      if ( v42 > v45 )
        goto LABEL_80;
      if ( v43 <= v44 )
      {
LABEL_84:
        if ( (*v29 & 8) != 0 )
        {
          gbRITAlerted = 1;
          KeAlertThread(gpkthreadRIT, 0LL);
        }
        goto LABEL_87;
      }
      if ( v45 < v42 )
      {
LABEL_80:
        v42 = *((_DWORD *)v18 + 13);
        gdmsNextTimer = v42;
      }
      if ( v43 >= v44 )
      {
        v43 = v39 + v34;
        guNextCoalescableTimerDue = v39 + v34;
      }
      SetDelayableTimer(v42 - v34, v43 - v34);
      goto LABEL_84;
    }
    gbRITRescan = 1;
  }
LABEL_87:
  result = v28[12];
  if ( !result )
    return 1LL;
  return result;
}
