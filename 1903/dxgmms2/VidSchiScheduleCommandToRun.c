/*
 * XREFs of VidSchiScheduleCommandToRun @ 0x1C00084C0
 * Callers:
 *     VidSchiRun_PriorityTable @ 0x1C008A1A0 (VidSchiRun_PriorityTable.c)
 * Callees:
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXXZ @ 0x1C0008470 (-ProcessHwQueues@HwQueueStagingList@@QEAAXXZ.c)
 *     VidSchiSelectContext @ 0x1C0008800 (VidSchiSelectContext.c)
 *     VidSchiProfilePerformanceTick @ 0x1C0008AF0 (VidSchiProfilePerformanceTick.c)
 *     VidSchiSwitchContextWithCheck @ 0x1C0009750 (VidSchiSwitchContextWithCheck.c)
 *     VidSchiUpdateContextStatus @ 0x1C000A930 (VidSchiUpdateContextStatus.c)
 *     VidSchiCheckConditionDeviceCommand @ 0x1C001401C (VidSchiCheckConditionDeviceCommand.c)
 *     VidSchiProcessFlipPendingContextList @ 0x1C0015D24 (VidSchiProcessFlipPendingContextList.c)
 *     ?AddPendingTermination@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00250B8 (-AddPendingTermination@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     VidSchiProcessCrossAdapterSignaledSyncObjects @ 0x1C002EBA0 (VidSchiProcessCrossAdapterSignaledSyncObjects.c)
 *     ?ProcessHwQueue@HwQueueStagingList@@AEAAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C00339FC (-ProcessHwQueue@HwQueueStagingList@@AEAAXPEAUVIDSCH_HW_QUEUE@@@Z.c)
 *     VidSchiWaitForSchedulerEvents @ 0x1C007A690 (VidSchiWaitForSchedulerEvents.c)
 *     VidSchiCheckHwProgress @ 0x1C007AA10 (VidSchiCheckHwProgress.c)
 *     VidSchiSubmitPreemptionCommand @ 0x1C007C258 (VidSchiSubmitPreemptionCommand.c)
 */

__int64 __fastcall VidSchiScheduleCommandToRun(__int64 a1, _BYTE *a2)
{
  __int64 v2; // r15
  __int64 v5; // rcx
  __int64 v6; // r8
  _QWORD *v7; // r9
  __int64 v8; // rax
  __int64 v9; // rdi
  unsigned int v10; // eax
  int v11; // r9d
  unsigned int v12; // esi
  __int64 v13; // rcx
  __int64 v14; // r14
  __int64 v15; // rdx
  bool v16; // zf
  __int64 v17; // rdx
  unsigned int v18; // eax
  int v19; // ecx
  unsigned int v20; // ecx
  int v21; // r8d
  unsigned int v22; // r8d
  int v23; // eax
  unsigned int v24; // r8d
  _QWORD *v25; // rdx
  __int64 v26; // rax
  _QWORD *v28; // rsi
  _QWORD *v29; // r9
  __int64 v30; // rcx
  _QWORD *v31; // rax
  _QWORD v32[2]; // [rsp+48h] [rbp-19h] BYREF
  char v33; // [rsp+58h] [rbp-9h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-1h] BYREF
  struct _KLOCK_QUEUE_HANDLE v35; // [rsp+78h] [rbp+17h] BYREF
  char v36; // [rsp+C8h] [rbp+67h] BYREF

  v2 = 0LL;
  *a2 = 0;
  v36 = 0;
  while ( (unsigned int)(*(_DWORD *)(a1 + 2404) - 2) <= 1 || (unsigned int)VidSchiCheckHwProgress(a1, &v36) )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1680), &LockHandle);
    v7 = *(_QWORD **)(a1 + 1712);
    if ( v7 != (_QWORD *)(a1 + 1712) )
    {
      do
      {
        v28 = (_QWORD *)*v7;
        if ( (unsigned int)VidSchiCheckConditionDeviceCommand(v5, v7 - 25, v6, v7) )
        {
          v30 = *v29;
          if ( *(_QWORD **)(*v29 + 8LL) != v29 || (v31 = (_QWORD *)v29[1], (_QWORD *)*v31 != v29) )
LABEL_53:
            __fastfail(3u);
          *v31 = v30;
          *(_QWORD *)(v30 + 8) = v31;
          VIDMM_GLOBAL::AddPendingTermination(*(VIDMM_GLOBAL **)*(v29 - 24), (struct VIDMM_ALLOC *)(v29 - 25));
        }
        v7 = v28;
      }
      while ( v28 != (_QWORD *)(a1 + 1712) );
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    *(_QWORD *)(a1 + 1216) = MEMORY[0xFFFFF78000000320];
    if ( KeReadStateEvent((PRKEVENT)(a1 + 1168)) > 0 )
      goto LABEL_36;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1648), &v35);
    v33 = 0;
    v32[1] = v32;
    v32[0] = v32;
    if ( *(_DWORD *)(a1 + 2568) )
      VidSchiProcessCrossAdapterSignaledSyncObjects((struct HwQueueStagingList *)v32);
    if ( *(_BYTE *)(a1 + 51) )
      VidSchiProcessFlipPendingContextList(a1);
    while ( 1 )
    {
      v8 = VidSchiSelectContext(a1, 1LL);
      v9 = v8;
      if ( !v8 )
      {
        v12 = 0;
        goto LABEL_25;
      }
      v10 = VidSchiSwitchContextWithCheck(v8);
      v12 = v10;
      if ( v10 == 1 )
        break;
      if ( v10 != 3 )
        goto LABEL_25;
    }
    v13 = *(_QWORD *)(v9 + 96);
    v2 = *(_QWORD *)(v9 + 640);
    v14 = *(_QWORD *)(v13 + 24);
    if ( v2 )
    {
      --*(_DWORD *)(v9 + 772);
      --*(_DWORD *)(v13 + 2848);
      --*(_DWORD *)(v14 + 704);
      v15 = *(_QWORD *)(v2 + 32);
      if ( v15 == v9 + 656 )
      {
        *(_DWORD *)(v9 + 636) &= 0xFFFFFFF0;
        *(_QWORD *)(v9 + 640) = 0LL;
        VidSchiUpdateContextStatus(v9, 1LL, 17259LL);
      }
      else
      {
        v16 = v15 == 32;
        v17 = v15 - 32;
        *(_QWORD *)(v9 + 640) = v17;
        if ( v16 )
        {
          *(_DWORD *)(v9 + 636) &= 0xFFFFFFF8;
          v24 = *(_DWORD *)(v9 + 636) & 0xFFFFFFF7;
        }
        else
        {
          v18 = (*(_DWORD *)(v17 + 48) - 4 <= v10) | *(_DWORD *)(v9 + 636) & 0xFFFFFFFE;
          v19 = 0;
          *(_DWORD *)(v9 + 636) = v18;
          if ( *(_DWORD *)(v17 + 48) == 3 )
            v19 = 2;
          v20 = v18 & 0xFFFFFFFD | v19;
          v21 = 0;
          *(_DWORD *)(v9 + 636) = v20;
          if ( *(_DWORD *)(v17 + 48) == 7 )
            v21 = 4;
          v22 = v20 & 0xFFFFFFFB | v21;
          v23 = 0;
          *(_DWORD *)(v9 + 636) = v22;
          if ( *(_DWORD *)(v17 + 48) == 6 )
            v23 = 8;
          v24 = v23 | v22 & 0xFFFFFFF7;
        }
        *(_DWORD *)(v9 + 636) = v24;
      }
      VidSchiProfilePerformanceTick(5, v14, 0, v11, 0LL, v2, 0LL, 0LL);
    }
    *(_DWORD *)(v9 + 184) |= 0x400u;
    while ( 1 )
    {
LABEL_25:
      v25 = (_QWORD *)v32[0];
      if ( *(_QWORD **)(v32[0] + 8LL) != v32 )
        goto LABEL_53;
      v26 = *(_QWORD *)v32[0];
      if ( *(_QWORD *)(*(_QWORD *)v32[0] + 8LL) != v32[0] )
        goto LABEL_53;
      v32[0] = *(_QWORD *)v32[0];
      *(_QWORD *)(v26 + 8) = v32;
      if ( v25 == v32 )
        break;
      *v25 = 0LL;
      v25[1] = 0LL;
      HwQueueStagingList::ProcessHwQueue((HwQueueStagingList *)v32, (struct VIDSCH_HW_QUEUE *)(v25 - 19));
    }
    v33 = 1;
    KeReleaseInStackQueuedSpinLock(&v35);
    if ( !v33 )
      HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)v32);
    switch ( v12 )
    {
      case 1u:
        goto LABEL_31;
      case 4u:
        *(_QWORD *)(*(_QWORD *)(v9 + 96) + 232LL) = 0LL;
        VidSchiSubmitPreemptionCommand(*(_QWORD *)(v9 + 96));
        break;
      case 0u:
      case 2u:
LABEL_36:
        if ( (unsigned int)VidSchiWaitForSchedulerEvents(a1) == 258 )
          goto LABEL_31;
        break;
    }
  }
LABEL_31:
  if ( *(_DWORD *)(a1 + 2404) )
    *a2 = 1;
  return v2;
}
