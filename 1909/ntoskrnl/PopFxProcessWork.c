/*
 * XREFs of PopFxProcessWork @ 0x1400E0D10
 * Callers:
 *     PopFxActivateComponentWorker @ 0x1400E0BAC (PopFxActivateComponentWorker.c)
 *     PopFxIdleWorkerTail @ 0x1400E1388 (PopFxIdleWorkerTail.c)
 *     PoFxCompleteIdleState @ 0x1401815D0 (PoFxCompleteIdleState.c)
 *     PopFxDispatchPluginWorkOnce @ 0x1405B1C74 (PopFxDispatchPluginWorkOnce.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008590 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     PopFxCompleteDevicePowerRequired @ 0x1400E0654 (PopFxCompleteDevicePowerRequired.c)
 *     IoAcquireRemoveLockEx @ 0x1400E0C90 (IoAcquireRemoveLockEx.c)
 *     PopDiagTraceFxDevicePowerRequirement @ 0x1400E10E4 (PopDiagTraceFxDevicePowerRequirement.c)
 *     PopFxAddLogEntry @ 0x1400E1184 (PopFxAddLogEntry.c)
 *     PopDiagTraceFxComponentLogicalCondition @ 0x1400E1544 (PopDiagTraceFxComponentLogicalCondition.c)
 *     PopFxCompleteComponentActivation @ 0x1400E15C0 (PopFxCompleteComponentActivation.c)
 *     PopPluginDevicePower @ 0x1400E1CEC (PopPluginDevicePower.c)
 *     PopPepProcessEvent @ 0x1400E1F6C (PopPepProcessEvent.c)
 *     PopFxScheduleDeviceIdleTimer @ 0x1400E27F4 (PopFxScheduleDeviceIdleTimer.c)
 *     KeCancelTimer @ 0x1400E2D90 (KeCancelTimer.c)
 *     PopPluginComponentIdleState @ 0x14017F2F0 (PopPluginComponentIdleState.c)
 *     PopDiagTraceFxComponentIdleState @ 0x1401814D0 (PopDiagTraceFxComponentIdleState.c)
 *     PopFxDeliverDevicePowerRequired @ 0x140181BC0 (PopFxDeliverDevicePowerRequired.c)
 *     PopFxUpdateDeviceIdleTimer @ 0x1401989D8 (PopFxUpdateDeviceIdleTimer.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     PopFxBugCheck @ 0x1402F1DB0 (PopFxBugCheck.c)
 *     PopFxCompleteComponentPerfState @ 0x1402F2968 (PopFxCompleteComponentPerfState.c)
 *     PopPepCompleteComponentIdleState @ 0x1402F8B5C (PopPepCompleteComponentIdleState.c)
 *     PopDiagTraceFxPerfRequestProgress @ 0x1402FDF08 (PopDiagTraceFxPerfRequestProgress.c)
 *     PopFxAcpiForwardPepAcpiNotifyRequest @ 0x140304498 (PopFxAcpiForwardPepAcpiNotifyRequest.c)
 *     PopFxAcpiForwardPepWorkRequest @ 0x140304540 (PopFxAcpiForwardPepWorkRequest.c)
 */

__int64 __fastcall PopFxProcessWork(ULONG_PTR BugCheckParameter2, int *a2, __int64 a3)
{
  __int64 result; // rax
  ULONG_PTR v6; // rdx
  ULONG_PTR v7; // rbx
  __int64 v8; // rcx
  char v9; // si
  KSPIN_LOCK *v10; // r15
  KIRQL v11; // bp
  char v12; // bl
  ULONG_PTR v13; // rbp
  __int64 v14; // rsi
  __int64 v15; // rbx
  KIRQL v16; // r12
  __int64 v17; // r8
  void (__fastcall *v18)(_QWORD, _QWORD); // rax
  signed __int32 v19; // eax
  signed __int32 v20; // ett
  BOOLEAN v21; // al
  char v22; // al
  __int64 v23; // rsi
  __int64 v24; // rbp
  __int64 v25; // rbx
  int v26; // ecx
  signed __int32 v27; // eax
  __int64 v28; // rcx
  __int64 v29; // r8
  struct _KPRCB *v30; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v32; // rsi
  __int64 v33; // rdx
  __int64 v34; // r14
  __int64 v35; // rbp
  signed __int32 v36; // ebx
  __int64 v37; // r9
  __int64 v38; // rsi
  unsigned int v39; // ebx
  __int64 v40; // rbx
  KIRQL v41; // si
  struct _KPRCB *v42; // rcx
  __int64 v43; // rbx
  NTSTATUS v44; // esi
  __int64 v45; // rax
  __int64 v46; // rcx
  int RemlockSize; // [rsp+20h] [rbp-88h]
  _QWORD v48[4]; // [rsp+40h] [rbp-68h] BYREF
  NTSTATUS v49; // [rsp+60h] [rbp-48h]
  int v50; // [rsp+64h] [rbp-44h]
  __int64 v51; // [rsp+C0h] [rbp+18h] BYREF

  result = *a2;
  if ( (unsigned int)result > 8 )
    PopFxBugCheck(0x603uLL, BugCheckParameter2, *a2, 0LL);
  while ( 1 )
  {
    v6 = *a2;
    if ( !(_DWORD)v6 )
    {
      v13 = *((_QWORD *)a2 + 1);
      if ( BugCheckParameter2 )
        goto LABEL_106;
      v14 = (unsigned int)a2[4];
      if ( (unsigned int)v14 >= *(_DWORD *)(v13 + 820) )
        PopFxBugCheck(0x611uLL, 0LL, *((_QWORD *)a2 + 1), (unsigned int)a2[4]);
      _mm_lfence();
      v15 = *(_QWORD *)(*(_QWORD *)(v13 + 824) + 8 * v14);
      if ( *(_DWORD *)(v15 + 152) )
        PopFxBugCheck(0x615uLL, 0LL, (unsigned int)a2[4], 0LL);
      if ( *(int *)(v15 + 88) < 0 )
        PopFxBugCheck(0x615uLL, 0LL, *(_QWORD *)(*(_QWORD *)(v13 + 824) + 8 * v14), 1uLL);
      if ( (*(_DWORD *)(v15 + 88) & 0x3FFFFFFF) == 0 )
        PopFxBugCheck(0x615uLL, 0LL, *(_QWORD *)(*(_QWORD *)(v13 + 824) + 8 * v14), 2uLL);
      if ( *(_DWORD *)(v15 + 140) )
        PopFxBugCheck(0x615uLL, 0LL, *(_QWORD *)(*(_QWORD *)(v13 + 824) + 8 * v14), 3uLL);
      v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v15 + 200));
      if ( *(int *)(v15 + 216) > 0 )
      {
        *(_QWORD *)(v15 + 224) = MEMORY[0xFFFFF78000000008];
        *(_BYTE *)(v15 + 208) = 1;
      }
      KxReleaseSpinLock((PKSPIN_LOCK)(v15 + 200));
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v16 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8(v16);
      LOBYTE(v17) = 1;
      PopDiagTraceFxComponentLogicalCondition(*(_QWORD *)(v13 + 48), (unsigned int)v14, v17);
      v18 = *(void (__fastcall **)(_QWORD, _QWORD))(v13 + 112);
      if ( v18 )
        v18(*(_QWORD *)(v13 + 192), (unsigned int)v14);
      PopPepProcessEvent(*(_QWORD *)(v13 + 56), 200 * v14 + *(_QWORD *)(v13 + 56) + 184, 2, 3, RemlockSize, 0LL);
      result = PopFxCompleteComponentActivation(v13);
      v12 = 0;
      goto LABEL_18;
    }
    if ( (_DWORD)v6 != 1 )
      break;
    v23 = *((_QWORD *)a2 + 1);
    if ( BugCheckParameter2 )
LABEL_106:
      PopFxBugCheck(0x603uLL, BugCheckParameter2, v6, 0LL);
    v24 = (unsigned int)a2[4];
    if ( (unsigned int)v24 >= *(_DWORD *)(v23 + 820) )
      PopFxBugCheck(0x611uLL, 0LL, *((_QWORD *)a2 + 1), (unsigned int)a2[4]);
    _mm_lfence();
    v25 = *(_QWORD *)(*(_QWORD *)(v23 + 824) + 8 * v24);
    if ( (unsigned int)a2[5] >= *(_DWORD *)(v25 + 156) )
      PopFxBugCheck(0x616uLL, 0LL, *(_QWORD *)(*(_QWORD *)(v23 + 824) + 8 * v24), 0LL);
    v26 = a2[5];
    if ( v26 == *(_DWORD *)(v25 + 152) )
      PopFxBugCheck(0x616uLL, 0LL, *(_QWORD *)(*(_QWORD *)(v23 + 824) + 8 * v24), 1uLL);
    if ( v26 && *(_DWORD *)(v25 + 152) )
      PopFxBugCheck(0x616uLL, 0LL, *(_QWORD *)(*(_QWORD *)(v23 + 824) + 8 * v24), 2uLL);
    *(_DWORD *)(v25 + 152) = a2[5];
    *(_DWORD *)(v25 + 140) = 2;
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(v23 + 128))(
      *(_QWORD *)(v23 + 192),
      (unsigned int)v24,
      (unsigned int)a2[5]);
    v27 = _InterlockedExchangeAdd((volatile signed __int32 *)(v25 + 140), 0xFFFFFFFF);
    v28 = *(_QWORD *)(v23 + 48);
    if ( v27 == 1 )
    {
      PopDiagTraceFxComponentIdleState(v28, (unsigned int)v24, (unsigned int)a2[5]);
      result = PopPluginComponentIdleState(v23, (unsigned int)v24, v29, a2);
      v12 = result;
    }
    else
    {
      result = PopFxAddLogEntry(v28, (unsigned int)v24, 14LL);
      v12 = 0;
    }
LABEL_18:
    if ( !v12 )
      return result;
  }
  switch ( (_DWORD)v6 )
  {
    case 2:
      v7 = *((_QWORD *)a2 + 1);
      if ( BugCheckParameter2 )
        goto LABEL_106;
      v8 = *(_QWORD *)(v7 + 48);
      v9 = *((_BYTE *)a2 + 16);
      if ( v8 )
      {
        LOBYTE(a3) = *((_BYTE *)a2 + 16);
        LOBYTE(v6) = 1;
        PopDiagTraceFxDevicePowerRequirement(v8, v6, a3);
      }
      v10 = (KSPIN_LOCK *)(v7 + 352);
      v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + 352));
      if ( v9 )
      {
        *(_DWORD *)(v7 + 36) = 2;
        _m_prefetchw((const void *)(v7 + 32));
        v19 = *(_DWORD *)(v7 + 32);
        do
        {
          v20 = v19;
          v19 = _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 32), v19 & 0xFFFFFF7F, v19);
        }
        while ( v20 != v19 );
        if ( (v19 & 0x80u) == 0 )
          PopFxBugCheck(0x609uLL, 0LL, v7, 0LL);
        _m_prefetchw((const void *)(v7 + 32));
        if ( (_InterlockedOr((volatile signed __int32 *)(v7 + 32), 0) & 4) != 0 )
        {
          _InterlockedAnd((volatile signed __int32 *)(v7 + 32), 0xFFFFFFFB);
          *(_DWORD *)(v7 + 40) = 0;
          v21 = KeCancelTimer((PKTIMER)(v7 + 360));
          _InterlockedDecrement((volatile signed __int32 *)(v7 + 36));
          if ( !v21 )
            goto LABEL_15;
          v22 = PopFxCompleteDevicePowerRequired(v7, (__int64)a2);
        }
        else
        {
          if ( *(_DWORD *)(v7 + 40) )
            goto LABEL_15;
          v22 = PopFxDeliverDevicePowerRequired(v7);
        }
        v12 = v22;
      }
      else
      {
        _m_prefetchw((const void *)(v7 + 32));
        if ( (_InterlockedOr((volatile signed __int32 *)(v7 + 32), 0) & 0x80u) != 0 )
          PopFxBugCheck(0x609uLL, 0LL, v7, 1uLL);
        PopPluginDevicePower(v7, 0LL, 0LL);
        _InterlockedOr((volatile signed __int32 *)(v7 + 32), 0x80u);
        if ( *(_QWORD *)(v7 + 144) )
        {
          if ( *(_DWORD *)(v7 + 36) || *(_DWORD *)(v7 + 40) || (*(_DWORD *)(v7 + 32) & 4) != 0 )
            PopFxBugCheck(0x610uLL, 0LL, v7, 0LL);
          *(_DWORD *)(v7 + 40) = 2;
          if ( !(unsigned __int8)PopFxScheduleDeviceIdleTimer(v7) )
          {
            PopDiagTraceFxDevicePowerRequirement(*(_QWORD *)(v7 + 48), 0LL, 0LL);
            (*(void (__fastcall **)(_QWORD))(v7 + 144))(*(_QWORD *)(v7 + 192));
            _InterlockedOr((volatile signed __int32 *)(v7 + 32), 0x40u);
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 40), 0xFFFFFFFF) != 1 )
              PopFxAddLogEntry(*(_QWORD *)(v7 + 48), 0LL, 17LL);
          }
        }
        else
        {
          PopDiagTraceFxDevicePowerRequirement(*(_QWORD *)(v7 + 48), 0LL, 0LL);
          _InterlockedOr((volatile signed __int32 *)(v7 + 32), 0x40u);
        }
LABEL_15:
        v12 = 0;
      }
      KxReleaseSpinLock(v10);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v11 < 2u )
      {
        v30 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v30->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v30);
      }
      result = v11;
      __writecr8(v11);
      goto LABEL_18;
    case 3:
      v43 = *((_QWORD *)a2 + 1);
      v44 = -1073741822;
      v51 = 0LL;
      if ( *(_QWORD *)(v43 + 152) )
      {
        v44 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v43 + 232), 0LL, &Src, 1u, 0x20u);
        if ( v44 >= 0 )
        {
          v44 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, __int64 *))(v43 + 152))(
                  *(_QWORD *)(v43 + 192),
                  *((_QWORD *)a2 + 2),
                  *((_QWORD *)a2 + 4),
                  *((_QWORD *)a2 + 5),
                  *((_QWORD *)a2 + 6),
                  *((_QWORD *)a2 + 7),
                  &v51);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v43 + 236), 0xFFFFFFFF) == 1 )
            KeSetEvent((PRKEVENT)(v43 + 240), 0, 0);
        }
      }
      v45 = *(_QWORD *)(v43 + 56);
      v50 = 0;
      v49 = v44;
      v46 = *(_QWORD *)(v45 + 32);
      v48[0] = *(_QWORD *)(v46 + 72);
      v48[1] = *((_QWORD *)a2 + 2);
      v48[2] = *((_QWORD *)a2 + 3);
      v48[3] = v51;
      return (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)(v46 + 64) + 96LL))(15LL, v48);
    case 4:
      v40 = *((_QWORD *)a2 + 1);
      v41 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v40 + 352));
      if ( *((_BYTE *)a2 + 16) )
        _InterlockedOr((volatile signed __int32 *)(v40 + 32), 8u);
      else
        _InterlockedAnd((volatile signed __int32 *)(v40 + 32), 0xFFFFFFF7);
      PopFxUpdateDeviceIdleTimer(v40);
      KxReleaseSpinLock((PKSPIN_LOCK)(v40 + 352));
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v41 < 2u )
      {
        v42 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v42->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v42);
      }
      result = v41;
      __writecr8(v41);
      break;
    case 5:
      v38 = *((_QWORD *)a2 + 1);
      if ( !BugCheckParameter2 )
        goto LABEL_82;
      v39 = a2[4];
      if ( v39 >= *(_DWORD *)(v38 + 820) )
        PopFxBugCheck(0x611uLL, BugCheckParameter2, *((_QWORD *)a2 + 1), (unsigned int)a2[4]);
      PopFxAddLogEntry(*(_QWORD *)(v38 + 48), v39, 18LL);
      return PopPepCompleteComponentIdleState(*(_QWORD *)(v38 + 56), v39);
    case 6:
      v32 = *((_QWORD *)a2 + 1);
      if ( BugCheckParameter2 )
      {
        v33 = (unsigned int)a2[4];
        if ( (unsigned int)v33 >= *(_DWORD *)(v32 + 820) )
          PopFxBugCheck(0x611uLL, BugCheckParameter2, *((_QWORD *)a2 + 1), (unsigned int)a2[4]);
        _mm_lfence();
        v34 = *(_QWORD *)(*(_QWORD *)(v32 + 824) + 8 * v33);
        v35 = *(_QWORD *)(v34 + 424);
        v36 = _InterlockedDecrement((volatile signed __int32 *)(v35 + 40));
        _InterlockedOr((volatile signed __int32 *)(v35 + 40), 0x20000000u);
        if ( (v36 & 0x8000000) == 0 )
          PopFxAddLogEntry(*(_QWORD *)(v32 + 48), v33, 20LL);
        PopDiagTraceFxPerfRequestProgress(v35, v36 & 7);
        LOBYTE(v37) = *((_BYTE *)a2 + 20);
        return PopFxCompleteComponentPerfState(v32, *(unsigned int *)(v34 + 16), *(_QWORD *)(v34 + 424), v37);
      }
LABEL_82:
      PopFxBugCheck(0x603uLL, 0LL, v6, 0LL);
    case 7:
      return PopFxAcpiForwardPepAcpiNotifyRequest(*((_QWORD *)a2 + 1));
    case 8:
      return PopFxAcpiForwardPepWorkRequest(*((_QWORD *)a2 + 1));
    default:
      return result;
  }
  return result;
}
