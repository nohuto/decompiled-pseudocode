/*
 * XREFs of EtwTelemetryCoverageReport @ 0x14015C790
 * Callers:
 *     EtwpCoverageRecordAtHighIrql @ 0x14032CCF8 (EtwpCoverageRecordAtHighIrql.c)
 *     PsSetProcessFaultInformation @ 0x14071E780 (PsSetProcessFaultInformation.c)
 *     EtwpCoverageProvEnableCallback @ 0x14072DBD0 (EtwpCoverageProvEnableCallback.c)
 *     PopTransitionTelemetryOsState @ 0x14075B0D8 (PopTransitionTelemetryOsState.c)
 *     EtwpCoverageEnsureContext @ 0x140782228 (EtwpCoverageEnsureContext.c)
 *     EtwpCoverageReset @ 0x1408F3374 (EtwpCoverageReset.c)
 *     EtwpCoverageResetCP @ 0x1408F3554 (EtwpCoverageResetCP.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008500 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExQueueWorkItem @ 0x14005B100 (ExQueueWorkItem.c)
 *     _TlgKeywordOn @ 0x14008A6D4 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x14008A700 (_TlgWrite.c)
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     KeGetEffectiveIrql @ 0x1400C1830 (KeGetEffectiveIrql.c)
 *     _TlgCreateSz @ 0x1400ED314 (_TlgCreateSz.c)
 *     EtwpCoverageValidateCP @ 0x14012B108 (EtwpCoverageValidateCP.c)
 *     EtwpCoverageAddToStringBuffer @ 0x14012B204 (EtwpCoverageAddToStringBuffer.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     EtwpCoverageRecord @ 0x1406D6714 (EtwpCoverageRecord.c)
 *     EtwpCoverageEnsureContext @ 0x140782228 (EtwpCoverageEnsureContext.c)
 */

__int64 __fastcall EtwTelemetryCoverageReport(__int64 a1)
{
  int v1; // r13d
  int v2; // r12d
  _QWORD *v4; // r14
  BOOL v5; // edi
  __int64 v6; // r15
  __int64 v7; // rbx
  unsigned int v8; // ebx
  unsigned int v10; // r12d
  KIRQL v11; // al
  __int64 v12; // rcx
  KIRQL v13; // di
  __int64 v14; // r13
  struct _KPRCB *v15; // rcx
  int v16; // edi
  struct _KPRCB *CurrentPrcb; // rcx
  _QWORD *PoolWithTag; // rax
  KIRQL v19; // di
  __int64 v20; // rax
  _QWORD *v21; // rcx
  _QWORD *v22; // r8
  struct _KPRCB *v23; // rcx
  int v24; // r9d
  int v25; // eax
  int v26; // eax
  int v27; // r9d
  const CHAR *v28; // rdx
  int v29; // [rsp+38h] [rbp-99h]
  int v30; // [rsp+3Ch] [rbp-95h] BYREF
  int v31; // [rsp+40h] [rbp-91h]
  int v32; // [rsp+44h] [rbp-8Dh]
  int v33; // [rsp+48h] [rbp-89h] BYREF
  int v34; // [rsp+4Ch] [rbp-85h] BYREF
  int v35; // [rsp+50h] [rbp-81h] BYREF
  int v36; // [rsp+54h] [rbp-7Dh] BYREF
  int v37; // [rsp+58h] [rbp-79h] BYREF
  int v38; // [rsp+5Ch] [rbp-75h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-69h] BYREF
  int *v40; // [rsp+88h] [rbp-49h]
  int v41; // [rsp+90h] [rbp-41h]
  int v42; // [rsp+94h] [rbp-3Dh]
  int *v43; // [rsp+98h] [rbp-39h]
  int v44; // [rsp+A0h] [rbp-31h]
  int v45; // [rsp+A4h] [rbp-2Dh]
  int *v46; // [rsp+A8h] [rbp-29h]
  int v47; // [rsp+B0h] [rbp-21h]
  int v48; // [rsp+B4h] [rbp-1Dh]
  int *v49; // [rsp+B8h] [rbp-19h]
  int v50; // [rsp+C0h] [rbp-11h]
  int v51; // [rsp+C4h] [rbp-Dh]
  int *v52; // [rsp+C8h] [rbp-9h]
  int v53; // [rsp+D0h] [rbp-1h]
  int v54; // [rsp+D4h] [rbp+3h]
  int *v55; // [rsp+D8h] [rbp+7h]
  int v56; // [rsp+E0h] [rbp+Fh]
  int v57; // [rsp+E4h] [rbp+13h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+E8h] [rbp+17h] BYREF

  v1 = 0;
  v2 = 0;
  v32 = 0;
  v29 = 0;
  v4 = 0LL;
  v5 = KeGetEffectiveIrql() < 2u && (*(_DWORD *)(a1 + 16) & 1) == 0;
  if ( !EtwpCoverageNonPagedContext )
  {
    if ( !v5 )
      return (unsigned int)-1073741641;
    v8 = EtwpCoverageEnsureContext();
    if ( (v8 & 0x80000000) != 0 )
      return v8;
  }
  v6 = EtwpCoverageNonPagedContext;
  v7 = EtwpCoverageNonPagedContext + 24;
  if ( *(_DWORD *)(a1 + 12) >= 0xFFFFFF00 )
    return (unsigned int)-1073741637;
  if ( v5 )
  {
    EtwpCoverageRecord(EtwpCoverageContext, a1);
    return 0;
  }
  v31 = 1;
  if ( !(unsigned int)EtwpCoverageValidateCP((_QWORD *)a1, &v30) )
  {
    v8 = -1073741811;
LABEL_54:
    if ( EtwpCoverageCoreTracingEnabled && stru_140426688.LevelPlus1 > 5 && TlgKeywordOn(&stru_140426688, 1uLL) )
    {
      v25 = *(_DWORD *)v6;
      v42 = 0;
      v45 = 0;
      v48 = 0;
      v51 = 0;
      v54 = 0;
      v57 = 0;
      v33 = v25;
      v34 = *(_DWORD *)(v6 + 4);
      v26 = v24 - *(_DWORD *)(v6 + 16);
      v27 = v24 - *(_DWORD *)(v6 + 20);
      v35 = v26;
      v40 = &v33;
      v43 = &v34;
      v46 = &v35;
      v49 = &v36;
      v52 = &v37;
      v41 = 4;
      v44 = 4;
      v47 = 4;
      v50 = 4;
      v53 = 4;
      v56 = 4;
      v28 = *(const CHAR **)a1;
      v55 = &v38;
      v36 = v27;
      v37 = v2;
      v38 = v1;
      TlgCreateSz(&pDesc, v28);
      TlgWrite(&stru_140426688, &unk_14039350A, 0LL, 0LL, 9u, &pData);
    }
    return v8;
  }
  v10 = *(_DWORD *)(a1 + 12);
  if ( v10 >= *(_DWORD *)v6 )
  {
    v8 = 0;
    v2 = 1;
    v1 = 1;
    goto LABEL_54;
  }
  *(_DWORD *)(a1 + 12) = *(_DWORD *)v6;
  while ( 1 )
  {
    v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v7);
    v12 = *(_QWORD *)(v7 + 8);
    v13 = v11;
    v14 = *(_QWORD *)(v7 + 64);
    if ( v12 )
    {
      v29 = EtwpCoverageAddToStringBuffer(v12, *(const char **)a1, v30);
      if ( v29 == 1 )
        break;
    }
    KxReleaseSpinLock((PKSPIN_LOCK)v7);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v13 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v13);
    if ( !v4 )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x400uLL, 0x56777445u);
      v4 = PoolWithTag;
      if ( !PoolWithTag )
      {
        *(_DWORD *)(a1 + 12) = v10;
        _InterlockedIncrement((volatile signed __int32 *)(v6 + 4));
        v16 = v31;
        v8 = -1073741670;
        goto LABEL_50;
      }
      memset(PoolWithTag, 0, 0x400uLL);
      v4[2] = v4 + 128;
      v4[3] = v4 + 5;
      v4[4] = v4 + 5;
    }
    v19 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v7);
    v20 = *(_QWORD *)(v7 + 64);
    if ( v14 == v20 )
    {
      v21 = *(_QWORD **)(v7 + 8);
      if ( v21 )
      {
        v22 = *(_QWORD **)(v7 + 24);
        if ( *v22 != v7 + 16 )
          __fastfail(3u);
        *v21 = v7 + 16;
        v21[1] = v22;
        *v22 = v21;
        *(_QWORD *)(v7 + 24) = v21;
        v20 = *(_QWORD *)(v7 + 64);
      }
      *(_QWORD *)(v7 + 8) = v4;
      *(_QWORD *)(v7 + 64) = v20 + 1;
      v4 = 0LL;
    }
    KxReleaseSpinLock((PKSPIN_LOCK)v7);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v19 < 2u )
    {
      v23 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v23->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v23);
    }
    __writecr8(v19);
  }
  if ( !*(_DWORD *)(v7 + 72) )
  {
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(v7 + 32), DelayedWorkQueue);
    *(_DWORD *)(v7 + 72) = 1;
  }
  KxReleaseSpinLock((PKSPIN_LOCK)v7);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v13 < 2u )
  {
    v15 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v15->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v15);
  }
  __writecr8(v13);
  v16 = 0;
  v8 = 0;
LABEL_50:
  if ( v4 )
    ExFreePoolWithTag(v4, 0x56777445u);
  if ( v16 )
  {
    v2 = v29;
    v1 = v32;
    goto LABEL_54;
  }
  return v8;
}
