/*
 * XREFs of VidSchiScheduleCommandToRun @ 0x1C00073F0
 * Callers:
 *     VidSchiRun_PriorityTable @ 0x1C0086990 (VidSchiRun_PriorityTable.c)
 * Callees:
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXXZ @ 0x1C00073A0 (-ProcessHwQueues@HwQueueStagingList@@QEAAXXZ.c)
 *     VidSchiProfilePerformanceTick @ 0x1C0007960 (VidSchiProfilePerformanceTick.c)
 *     VidSchiSwitchContextWithCheck @ 0x1C0008630 (VidSchiSwitchContextWithCheck.c)
 *     ?VidSchiSelectContextFromThisPriority@@YAPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_NODE@@K_N@Z @ 0x1C0008BD0 (-VidSchiSelectContextFromThisPriority@@YAPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_NODE@@K_N@Z.c)
 *     VidSchiUpdateContextStatus @ 0x1C0009350 (VidSchiUpdateContextStatus.c)
 *     ?VidSchiUpdateNodeYieldStatus@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C0013DC8 (-VidSchiUpdateNodeYieldStatus@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     VidSchiStartNodeYield @ 0x1C0013E94 (VidSchiStartNodeYield.c)
 *     VidSchiCheckConditionDeviceCommand @ 0x1C0015098 (VidSchiCheckConditionDeviceCommand.c)
 *     VidSchiProcessFlipPendingContextList @ 0x1C0016884 (VidSchiProcessFlipPendingContextList.c)
 *     ?AddPendingTermination@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0025834 (-AddPendingTermination@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     VidSchiProcessCrossAdapterSignaledSyncObjects @ 0x1C002E404 (VidSchiProcessCrossAdapterSignaledSyncObjects.c)
 *     ?ProcessHwQueue@HwQueueStagingList@@AEAAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C0032FDC (-ProcessHwQueue@HwQueueStagingList@@AEAAXPEAUVIDSCH_HW_QUEUE@@@Z.c)
 *     VidSchiWaitForSchedulerEvents @ 0x1C0069790 (VidSchiWaitForSchedulerEvents.c)
 *     VidSchiCheckHwProgress @ 0x1C0069B20 (VidSchiCheckHwProgress.c)
 *     VidSchiSubmitPreemptionCommand @ 0x1C007A828 (VidSchiSubmitPreemptionCommand.c)
 */

__int64 __fastcall VidSchiScheduleCommandToRun(__int64 a1, _BYTE *a2)
{
  __int64 v3; // r13
  __int64 v5; // rcx
  _QWORD *v6; // r9
  int v7; // r9d
  bool v8; // zf
  struct _VIDSCH_CONTEXT *v9; // rdi
  __int64 v10; // rax
  __int64 SetBits; // rax
  __int64 *v12; // rsi
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rdx
  CCHAR v17; // al
  int v18; // r9d
  unsigned int v19; // eax
  unsigned int v20; // esi
  __int64 v21; // rcx
  __int64 v22; // r14
  struct _VIDSCH_CONTEXT *v23; // rdx
  char *v24; // rdx
  unsigned int v25; // eax
  int v26; // ecx
  unsigned int v27; // ecx
  int v28; // r8d
  unsigned int v29; // r8d
  int v30; // eax
  unsigned int v31; // r8d
  _QWORD *v32; // rdx
  __int64 v33; // rax
  CCHAR MostSignificantBit; // al
  _QWORD *v36; // rsi
  _QWORD *v37; // r9
  __int64 v38; // rcx
  _QWORD *v39; // rax
  __int64 *v40; // rax
  CCHAR v41; // al
  int v42; // r9d
  LARGE_INTEGER v43; // r15
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r14
  __int64 v47; // rcx
  __int64 v48; // r9
  __int64 v49; // rax
  LARGE_INTEGER v50; // r15
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r14
  __int64 v54; // rcx
  __int64 v55; // r9
  __int64 v56; // rax
  _QWORD v57[2]; // [rsp+40h] [rbp-59h] BYREF
  char v58; // [rsp+50h] [rbp-49h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+58h] [rbp-41h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-39h] BYREF
  struct _KLOCK_QUEUE_HANDLE v61; // [rsp+78h] [rbp-21h] BYREF
  __int64 v62[12]; // [rsp+90h] [rbp-9h] BYREF
  char v63; // [rsp+100h] [rbp+67h] BYREF
  char v64; // [rsp+108h] [rbp+6Fh] BYREF
  union _LARGE_INTEGER v65; // [rsp+110h] [rbp+77h] BYREF
  union _LARGE_INTEGER v66; // [rsp+118h] [rbp+7Fh] BYREF

  v3 = 0LL;
  *a2 = 0;
  v63 = 0;
  while ( 1 )
  {
LABEL_2:
    if ( (unsigned int)(*(_DWORD *)(a1 + 2404) - 2) > 1 && !(unsigned int)VidSchiCheckHwProgress(a1, &v63) )
      goto LABEL_47;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1680), &LockHandle);
    v6 = *(_QWORD **)(a1 + 1712);
    if ( v6 != (_QWORD *)(a1 + 1712) )
    {
      do
      {
        v36 = (_QWORD *)*v6;
        if ( (unsigned int)VidSchiCheckConditionDeviceCommand(v5, v6 - 25) )
        {
          v38 = *v37;
          if ( *(_QWORD **)(*v37 + 8LL) != v37 || (v39 = (_QWORD *)v37[1], (_QWORD *)*v39 != v37) )
LABEL_90:
            __fastfail(3u);
          *v39 = v38;
          *(_QWORD *)(v38 + 8) = v39;
          VIDMM_GLOBAL::AddPendingTermination(*(VIDMM_GLOBAL **)*(v37 - 24), (struct VIDMM_ALLOC *)(v37 - 25));
        }
        v6 = v36;
      }
      while ( v36 != (_QWORD *)(a1 + 1712) );
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    *(_QWORD *)(a1 + 1216) = MEMORY[0xFFFFF78000000320];
    if ( KeReadStateEvent((PRKEVENT)(a1 + 1168)) <= 0 )
      break;
LABEL_52:
    if ( (unsigned int)VidSchiWaitForSchedulerEvents(a1) == 258 )
      goto LABEL_47;
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1648), &v61);
  v8 = *(_DWORD *)(a1 + 2568) == 0;
  v57[1] = v57;
  v57[0] = v57;
  v58 = 0;
  if ( !v8 )
    VidSchiProcessCrossAdapterSignaledSyncObjects((struct HwQueueStagingList *)v57);
  if ( *(_BYTE *)(a1 + 51) )
    VidSchiProcessFlipPendingContextList(a1);
  while ( 1 )
  {
    v9 = 0LL;
    if ( !*(_DWORD *)(a1 + 704) )
      goto LABEL_26;
    v10 = *(_QWORD *)(a1 + 232);
    if ( v10 && (*(_DWORD *)(v10 + 184) & 1) != 0 )
    {
      v9 = *(struct _VIDSCH_CONTEXT **)(a1 + 232);
      goto LABEL_26;
    }
    if ( *(_DWORD *)(a1 + 68) == 1 )
    {
      v40 = *(__int64 **)(a1 + 616);
      v13 = *v40;
      if ( !*(_DWORD *)(*v40 + 1752) )
        goto LABEL_26;
      goto LABEL_20;
    }
    RtlCopyBitMapEx(a1 + 424, a1 + 520, 0LL);
    RtlIntersectBitMapsEx(a1 + 520, a1 + 472);
    if ( (unsigned __int8)RtlAreBitsClearEx(a1 + 520, 0LL, *(_QWORD *)(a1 + 520)) )
      RtlCopyBitMapEx(a1 + 424, a1 + 520, 0LL);
    SetBits = RtlFindSetBitsEx(a1 + 520, 1LL, (unsigned int)(*(_DWORD *)(a1 + 696) + 1));
    if ( SetBits != -1 )
    {
      v12 = *(__int64 **)(a1 + 616);
      if ( (unsigned int)SetBits < *(_DWORD *)(a1 + 688) )
        v12 += (unsigned int)SetBits;
      v13 = *v12;
      *(_DWORD *)(a1 + 696) = SetBits;
LABEL_20:
      if ( v13 )
      {
        if ( *(_DWORD *)(v13 + 1756) )
        {
          v14 = *(_QWORD *)(v13 + 24);
          v64 = 0;
          v62[0] = v13;
          DpSynchronizeExecution(
            *(_QWORD *)(v14 + 24),
            VidSchiUpdateNodeRunningTimeAtISR,
            v62,
            *(unsigned int *)(v14 + 32),
            &v64);
        }
        v15 = *(_QWORD *)(v13 + 24);
        KeQueryPerformanceCounter(&PerformanceFrequency);
        v16 = *(unsigned int *)(v13 + 1752);
        if ( *(_BYTE *)(v13 + 2008)
          && (v16 & 0xC0000000) == 0
          && (v16 & (0xFFFFFFFFuLL >> (31 - *(_BYTE *)(v15 + 184)))) != 0 )
        {
          MostSignificantBit = RtlFindMostSignificantBit(v16 & (0xFFFFFFFFuLL >> (31 - *(_BYTE *)(v15 + 184))));
          v9 = VidSchiSelectContextFromThisPriority((struct _VIDSCH_NODE *)v13, MostSignificantBit, 1);
          if ( v9 )
          {
            VidSchiUpdateNodeYieldStatus((struct _VIDSCH_NODE *)v13);
          }
          else
          {
            v41 = RtlFindMostSignificantBit(*(unsigned int *)(v13 + 1752));
            v9 = VidSchiSelectContextFromThisPriority((struct _VIDSCH_NODE *)v13, v41, 0);
            if ( !*(_QWORD *)(v13 + 1984) )
            {
              v43 = KeQueryPerformanceCounter(&v65);
              v44 = *(unsigned int *)(*((_QWORD *)v9 + 13) + 504LL);
              v45 = 0LL;
              if ( (unsigned int)v44 <= *(_DWORD *)(a1 + 40) )
                v45 = (unsigned int)v44;
              v46 = (unsigned int)v45;
              v47 = *(_QWORD *)(a1 + 8 * v45 + 2576);
              v48 = *(unsigned int *)(v47 + 70564);
              if ( !(_DWORD)v48 )
              {
                v49 = WdLogNewEntry5_WdWarning(v47, v44);
                *(_QWORD *)(v49 + 24) = v46;
                WdLogEvent5_WdWarning(v49);
                v48 = 16LL;
              }
              ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))VidSchiStartNodeYield)(
                v13,
                (LARGE_INTEGER)v43.QuadPart,
                (union _LARGE_INTEGER)v65.QuadPart,
                v48);
            }
            VidSchiProfilePerformanceTick(20, a1, v13, v42, (__int64)v9, 0LL, 0LL, 1LL);
          }
        }
        else
        {
          v17 = RtlFindMostSignificantBit(*(unsigned int *)(v13 + 1752));
          v9 = VidSchiSelectContextFromThisPriority((struct _VIDSCH_NODE *)v13, v17, 0);
          if ( (*(_DWORD *)(a1 + 1936) & 4) != 0 && *(_BYTE *)(v13 + 2008) && !*(_QWORD *)(v13 + 1984) )
          {
            v50 = KeQueryPerformanceCounter(&v66);
            v51 = *(unsigned int *)(*((_QWORD *)v9 + 13) + 504LL);
            v52 = 0LL;
            if ( (unsigned int)v51 <= *(_DWORD *)(a1 + 40) )
              v52 = (unsigned int)v51;
            v53 = (unsigned int)v52;
            v54 = *(_QWORD *)(a1 + 8 * v52 + 2576);
            v55 = *(unsigned int *)(v54 + 70564);
            if ( !(_DWORD)v55 )
            {
              v56 = WdLogNewEntry5_WdWarning(v54, v51);
              *(_QWORD *)(v56 + 24) = v53;
              WdLogEvent5_WdWarning(v56);
              v55 = 16LL;
            }
            ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))VidSchiStartNodeYield)(
              v13,
              (LARGE_INTEGER)v50.QuadPart,
              (union _LARGE_INTEGER)v66.QuadPart,
              v55);
          }
          VidSchiProfilePerformanceTick(20, a1, v13, v18, (__int64)v9, 0LL, 0LL, 0LL);
        }
      }
    }
LABEL_26:
    VidSchiProfilePerformanceTick(2, a1, 0, v7, (__int64)v9, 0LL, 0LL, 0LL);
    if ( !v9 )
    {
      v20 = 0;
      goto LABEL_41;
    }
    v19 = VidSchiSwitchContextWithCheck(v9);
    v20 = v19;
    if ( v19 == 1 )
      break;
    if ( v19 != 3 )
      goto LABEL_41;
  }
  v21 = *((_QWORD *)v9 + 12);
  v3 = *((_QWORD *)v9 + 80);
  v22 = *(_QWORD *)(v21 + 24);
  if ( v3 )
  {
    --*((_DWORD *)v9 + 193);
    --*(_DWORD *)(v21 + 2848);
    --*(_DWORD *)(v22 + 704);
    v23 = *(struct _VIDSCH_CONTEXT **)(v3 + 32);
    if ( v23 == (struct _VIDSCH_CONTEXT *)((char *)v9 + 656) )
    {
      *((_DWORD *)v9 + 159) &= 0xFFFFFFF0;
      *((_QWORD *)v9 + 80) = 0LL;
      VidSchiUpdateContextStatus(v9, 1LL, 17136LL);
    }
    else
    {
      v8 = v23 == (struct _VIDSCH_CONTEXT *)32;
      v24 = (char *)v23 - 32;
      *((_QWORD *)v9 + 80) = v24;
      if ( v8 )
      {
        *((_DWORD *)v9 + 159) &= 0xFFFFFFF8;
        v31 = *((_DWORD *)v9 + 159) & 0xFFFFFFF7;
      }
      else
      {
        v25 = (*((_DWORD *)v24 + 12) - 4 <= v19) | *((_DWORD *)v9 + 159) & 0xFFFFFFFE;
        v26 = 0;
        *((_DWORD *)v9 + 159) = v25;
        if ( *((_DWORD *)v24 + 12) == 3 )
          v26 = 2;
        v27 = v25 & 0xFFFFFFFD | v26;
        v28 = 0;
        *((_DWORD *)v9 + 159) = v27;
        if ( *((_DWORD *)v24 + 12) == 7 )
          v28 = 4;
        v29 = v27 & 0xFFFFFFFB | v28;
        v30 = 0;
        *((_DWORD *)v9 + 159) = v29;
        if ( *((_DWORD *)v24 + 12) == 6 )
          v30 = 8;
        v31 = v30 | v29 & 0xFFFFFFF7;
      }
      *((_DWORD *)v9 + 159) = v31;
    }
    VidSchiProfilePerformanceTick(5, v22, 0, v7, 0LL, v3, 0LL, 0LL);
  }
  *((_DWORD *)v9 + 46) |= 0x400u;
  while ( 1 )
  {
LABEL_41:
    v32 = (_QWORD *)v57[0];
    if ( *(_QWORD **)(v57[0] + 8LL) != v57 )
      goto LABEL_90;
    v33 = *(_QWORD *)v57[0];
    if ( *(_QWORD *)(*(_QWORD *)v57[0] + 8LL) != v57[0] )
      goto LABEL_90;
    v57[0] = *(_QWORD *)v57[0];
    *(_QWORD *)(v33 + 8) = v57;
    if ( v32 == v57 )
      break;
    *v32 = 0LL;
    v32[1] = 0LL;
    HwQueueStagingList::ProcessHwQueue((HwQueueStagingList *)v57, (struct VIDSCH_HW_QUEUE *)(v32 - 19));
  }
  v58 = 1;
  KeReleaseInStackQueuedSpinLock(&v61);
  if ( !v58 )
    HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)v57);
  if ( v20 != 1 )
  {
    if ( v20 == 4 )
    {
      *(_QWORD *)(*((_QWORD *)v9 + 12) + 232LL) = 0LL;
      VidSchiSubmitPreemptionCommand(*((_QWORD *)v9 + 12));
      goto LABEL_2;
    }
    if ( !v20 || v20 == 2 )
      goto LABEL_52;
    goto LABEL_2;
  }
LABEL_47:
  if ( *(_DWORD *)(a1 + 2404) )
    *a2 = 1;
  return v3;
}
