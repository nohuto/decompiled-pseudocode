/*
 * XREFs of InternalSetTimer @ 0x1C0017750
 * Callers:
 *     SetDeepDelayableVisRITTimer @ 0x1C0017558 (SetDeepDelayableVisRITTimer.c)
 *     NtUserSetTimer @ 0x1C00175B0 (NtUserSetTimer.c)
 *     ?xxxGetNextSysMsg@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@1@Z @ 0x1C0037170 (-xxxGetNextSysMsg@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@1@Z.c)
 *     _SetSystemTimer @ 0x1C00DC7D4 (_SetSystemTimer.c)
 *     ?AdjustRITDelayableTimers@@YAXH@Z @ 0x1C010FF6C (-AdjustRITDelayableTimers@@YAXH@Z.c)
 *     SetRITTimer @ 0x1C01153C0 (SetRITTimer.c)
 *     xxxSoundSentry @ 0x1C0154BE0 (xxxSoundSentry.c)
 *     _SetTimer @ 0x1C01D6914 (_SetTimer.c)
 *     ?MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z @ 0x1C020A1C0 (-MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z.c)
 *     ?MNSetTimerToOpenHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1C020A21C (-MNSetTimerToOpenHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@@Z.c)
 *     MNSetTimerToCloseHierarchy @ 0x1C020B400 (MNSetTimerToCloseHierarchy.c)
 *     UserSetTimer @ 0x1C022BCFC (UserSetTimer.c)
 * Callees:
 *     ?DecTimerCount@@YAXPEAUtagTIMER@@@Z @ 0x1C00EB774 (-DecTimerCount@@YAXPEAUtagTIMER@@@Z.c)
 *     IsThreadCrossSessionAttached @ 0x1C015BC14 (IsThreadCrossSessionAttached.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall InternalSetTimer(unsigned __int64 a1, __int64 a2, unsigned int a3, __int64 a4, int a5, int a6)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int v9; // r12d
  __int64 v10; // rdi
  __int64 v11; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v13; // r13
  unsigned int v14; // esi
  _QWORD **v15; // r14
  _QWORD *v16; // rdi
  _QWORD *v17; // rbx
  __int64 v18; // rcx
  _QWORD *v19; // rax
  signed int v20; // ecx
  int v21; // r8d
  int v22; // edx
  __int64 result; // rax
  _QWORD *v24; // rdx
  char *v25; // rdx
  char *v26; // rcx
  char **v27; // rax
  _QWORD *v28; // rdi
  _DWORD *v29; // r14
  _QWORD *v30; // rsi
  int v31; // ecx
  unsigned int v32; // ecx
  int v33; // eax
  unsigned int v34; // edx
  unsigned int v35; // r8d
  unsigned int v36; // ecx
  unsigned int v37; // eax
  int v38; // r9d
  unsigned int v39; // r10d
  int v40; // eax
  unsigned int v41; // eax
  unsigned int v42; // r8d
  unsigned int v43; // r9d
  unsigned int v44; // eax
  unsigned int v45; // ecx
  signed int v46; // r8d
  unsigned int v47; // r9d
  __int64 v48; // rdx
  _QWORD *v49; // [rsp+30h] [rbp-48h]
  __int64 v50; // [rsp+38h] [rbp-40h]
  _QWORD v51[2]; // [rsp+40h] [rbp-38h] BYREF

  if ( gbCleanupInitiated )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  v9 = 10;
  if ( a3 >= 0xA )
    v9 = a3;
  if ( v9 > 0x7FFFFFFF )
    v9 = 0x7FFFFFFF;
  v10 = 0LL;
  v50 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached() )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
    {
      v10 = *ThreadWin32Thread;
      v50 = *ThreadWin32Thread;
    }
  }
  v13 = v10;
  if ( !v10 || (a6 & 4) != 0 )
  {
    v13 = gptiRit;
  }
  else if ( a1 )
  {
    v13 = *(_QWORD *)(a1 + 16);
  }
  if ( a5 == -1 || !a5 && v13 && (*(_QWORD *)(v13 + 648) & 0x800000000LL) != 0 )
    v14 = a6 & 0xFFFFFDFF;
  else
    v14 = a6 | 0x200;
  v51[0] = a1 >> 8;
  v15 = (_QWORD **)((char *)&gTimerHashTable + 16 * ((BYTE1(a1) + (unsigned __int8)a2) & 0x3F));
  v16 = *v15;
  if ( *v15 == v15 )
  {
LABEL_29:
    LOBYTE(v11) = 16;
    v19 = (_QWORD *)HMAllocObject(v13, 0LL, v11, 136LL);
    v49 = v19;
    v17 = v19;
    if ( v19 )
    {
      v19[11] = 0LL;
      if ( a1 )
      {
        v19[12] = a2;
      }
      else
      {
        v20 = g_cTimerId;
        v21 = g_cTimerId;
        while ( 1 )
        {
          g_cTimerId = --v20;
          v22 = v20;
          if ( v20 < 0 )
          {
            v20 = 32511;
            g_cTimerId = 32511;
            v22 = 32511;
          }
          if ( !_bittestandset(gTimerId, v20) )
            break;
          if ( v22 == v21 )
          {
            HMFreeObject(v19);
            return 0LL;
          }
        }
        v19[12] = v22 + 256;
      }
      v24 = v19 + 9;
      if ( *(_QWORD *)(gtmrListHead + 8LL) != gtmrListHead
        || (*v24 = gtmrListHead,
            v19[10] = gtmrListHead,
            *(_QWORD *)(gtmrListHead + 8LL) = v24,
            gtmrListHead = v19 + 9,
            v25 = (char *)(v19 + 14),
            v26 = (char *)&gTimerHashTable + 16 * ((*((_DWORD *)v19 + 24) + LODWORD(v51[0])) & 0x3F),
            v27 = (char **)*((_QWORD *)v26 + 1),
            *v27 != v26) )
      {
        __fastfail(3u);
      }
      *(_QWORD *)v25 = v26;
      v17[15] = v27;
      *v27 = v25;
      *((_QWORD *)v26 + 1) = v25;
      goto LABEL_45;
    }
    return 0LL;
  }
  while ( 1 )
  {
    v17 = v16 - 14;
    if ( *(v16 - 3) == a1 && v17[12] == a2 )
    {
      v18 = *((unsigned int *)v17 + 12);
      if ( (((unsigned __int8)v14 ^ *((_BYTE *)v17 + 48)) & 6) == 0
        && ((v18 & 0x40) != 0
         || PsGetCurrentProcessWin32Process(v18) == *(_QWORD *)(v17[3] + 424LL)
         || !a1 && (((unsigned __int8)v14 ^ *((_BYTE *)v17 + 48)) & 4) == 0) )
      {
        break;
      }
    }
    v16 = (_QWORD *)*v16;
    if ( v16 == v15 )
      goto LABEL_29;
  }
  v49 = v16 - 14;
  if ( (v17[6] & 1) != 0 )
    DecTimerCount((struct tagTIMER *)(v16 - 14));
LABEL_45:
  v51[1] = a1;
  v51[0] = v17 + 11;
  HMAssignmentLock(v51);
  *((_DWORD *)v17 + 10) = v9;
  *((_DWORD *)v17 + 13) = v9;
  v17[4] = a4;
  v17[13] = 0LL;
  if ( (v14 & 0x200) != 0 )
    *((_DWORD *)v17 + 11) = a5;
  v28 = v49;
  *((_DWORD *)v49 + 32) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( (v14 & 0x80u) == 0 )
  {
    if ( (v14 & 0x100) != 0 )
      v17[13] = v50;
  }
  else
  {
    v14 &= ~0x80u;
  }
  v29 = v49 + 6;
  *((_DWORD *)v49 + 12) = v14 | 8;
  v49[3] = v13;
  v30 = v49 + 3;
  v31 = *(_DWORD *)(*(_QWORD *)(v13 + 424) + 1036LL);
  if ( v31 )
  {
    v32 = *((_DWORD *)v17 + 13) + v31;
    v33 = 0x7FFFFFFF;
    if ( v32 < 0x7FFFFFFF )
      v33 = v32;
    *((_DWORD *)v17 + 13) = v33;
  }
  EtwTraceInternalSetTimer(v49);
  if ( gbRITAlerted )
    goto LABEL_86;
  if ( !gbTimersProcActive )
  {
    v28 = v49;
    v34 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - gcmsLastTimer;
    if ( (*v29 & 0x200) != 0 )
    {
      v35 = *((_DWORD *)v49 + 11);
      v36 = gCurrentTimerCoalescingTolerance;
      v37 = gCurrentTimerCoalescingTolerance;
      v38 = *((_DWORD *)v17 + 13);
      if ( v35 > gCurrentTimerCoalescingTolerance )
        v37 = *((_DWORD *)v49 + 11);
      if ( v38 + v37 >= 0x7FFFFFFF )
      {
        v39 = 0x7FFFFFFF;
      }
      else
      {
        if ( v35 > gCurrentTimerCoalescingTolerance )
          v36 = *((_DWORD *)v49 + 11);
        v39 = v38 + v36;
      }
      v40 = *(_DWORD *)(*(_QWORD *)(*v30 + 424LL) + 1040LL);
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
      v39 = *((_DWORD *)v17 + 13);
    }
    v42 = gdmsNextTimer;
    if ( v34 > gdmsNextTimer )
      goto LABEL_83;
    v43 = guNextCoalescableTimerDue;
    if ( v34 > guNextCoalescableTimerDue )
      goto LABEL_83;
    if ( *(_DWORD *)(*(_QWORD *)(*v30 + 424LL) + 1044LL) )
      goto LABEL_83;
    v44 = v39 + v34;
    if ( v39 + v34 < v39 )
      goto LABEL_83;
    *v29 &= ~8u;
    *((_DWORD *)v17 + 13) += v34;
    v45 = *((_DWORD *)v17 + 13);
    if ( v42 > v45 )
      goto LABEL_77;
    if ( v43 <= v44 )
    {
LABEL_83:
      if ( (*v29 & 8) != 0 )
      {
        gbRITAlerted = 1;
        KeAlertThread(gpkthreadRIT, 0LL);
      }
      goto LABEL_86;
    }
    if ( v45 < v42 )
    {
LABEL_77:
      v42 = *((_DWORD *)v17 + 13);
      gdmsNextTimer = v42;
    }
    if ( v43 >= v44 )
    {
      v43 = v39 + v34;
      guNextCoalescableTimerDue = v39 + v34;
    }
    v46 = v42 - v34;
    v47 = v43 - v34;
    v48 = -10000LL * v46;
    if ( v46 == v47 )
      KeSetTimer(gptmrMaster, (LARGE_INTEGER)v48, 0LL);
    else
      KeSetCoalescableTimer(gptmrMaster, (LARGE_INTEGER)v48, 0, v47 - v46, 0LL);
    goto LABEL_83;
  }
  gbRITRescan = 1;
LABEL_86:
  result = v28[12];
  if ( !result )
    return 1LL;
  return result;
}
