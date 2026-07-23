/*
 * XREFs of PopPepWork @ 0x1400FF084
 * Callers:
 *     PopFxPluginWork @ 0x1401006F0 (PopFxPluginWork.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14007B710 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     EtwWriteEx @ 0x1400CAE40 (EtwWriteEx.c)
 *     PopPepStartActivity @ 0x1400FF4DC (PopPepStartActivity.c)
 *     PopPepGetReadyActivityType @ 0x1400FFE80 (PopPepGetReadyActivityType.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140100280 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     PopDiagTraceFxDefaultPepWorkerEnd @ 0x1401005A4 (PopDiagTraceFxDefaultPepWorkerEnd.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall PopPepWork(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v2; // r12d
  int v3; // r13d
  __int64 *v4; // rdi
  __int64 v5; // rbx
  REGHANDLE v6; // rsi
  unsigned __int8 CurrentIrql; // r15
  int v8; // esi
  __int64 v9; // rbx
  volatile LONG *v10; // rcx
  int v11; // ebp
  int v12; // r10d
  int ReadyActivityType; // r9d
  unsigned int v14; // eax
  __int64 v15; // r11
  int v16; // eax
  char started; // bp
  int v18; // r14d
  int v20; // eax
  __int64 v21; // r11
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v24; // [rsp+50h] [rbp-58h] BYREF
  __int64 v25; // [rsp+58h] [rbp-50h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-48h] BYREF

  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  v3 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopPepDeviceListLock, 0LL);
  v4 = PopPepLastCheckedDevice;
  if ( PopPepLastCheckedDevice == &PopPepDeviceList )
  {
    _InterlockedCompareExchange64(
      (volatile signed __int64 *)&PopPepLastCheckedDevice,
      *PopPepLastCheckedDevice,
      (signed __int64)PopPepLastCheckedDevice);
    v4 = PopPepLastCheckedDevice;
  }
  v5 = v4[4];
  if ( PopDiagHandleRegistered )
  {
    v6 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DEFAULT_PEP_WORKER_START) )
    {
      v24 = 0LL;
      if ( v5 )
        v24 = *(_QWORD *)(v5 + 48);
      *(_QWORD *)&UserData.Size = 8LL;
      UserData.Ptr = (ULONGLONG)&v24;
      EtwWriteEx(v6, &POP_ETW_EVENT_DEFAULT_PEP_WORKER_START, 0LL, 1u, 0LL, 0LL, 1u, &UserData);
    }
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  v8 = 0;
  while ( 2 )
  {
    v9 = (__int64)v4;
    do
    {
      v25 = v9;
      v10 = (volatile LONG *)(v9 + 64);
      v11 = v3;
      if ( v8 )
      {
        ExAcquireSpinLockExclusiveAtDpcLevel(v10);
        ++v3;
        if ( v8 != 2 )
          v3 = v11;
      }
      else if ( !(unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(v10) )
      {
        goto LABEL_25;
      }
      v12 = *(_DWORD *)(v9 + 120);
      if ( v12 )
      {
        ReadyActivityType = PopPepGetReadyActivityType(v9 + 72, 0LL, 0LL);
        if ( ReadyActivityType != 6 )
        {
          started = PopPepStartActivity(v9, 0, (int)v9 + 72, ReadyActivityType, v9 + 120, a1);
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v9 + 64));
          v18 = 1;
          goto LABEL_18;
        }
      }
      v14 = *(_DWORD *)(v9 + 180);
      v2 = 0;
      if ( v14 )
      {
        v15 = v9 + 184;
        while ( !*(_DWORD *)(v15 + 104) )
        {
          ++v2;
          v15 += 200LL;
          if ( v2 >= v14 )
            goto LABEL_16;
        }
        v20 = PopPepGetReadyActivityType(v15 + 56, 1LL, 3LL);
        started = PopPepStartActivity(v9, v21, (int)v21 + 56, v20, v21 + 104, a1);
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v9 + 64));
        v18 = 2;
        goto LABEL_18;
      }
LABEL_16:
      if ( v12 )
      {
        v16 = PopPepGetReadyActivityType(v9 + 72, 4LL, 5LL);
        started = PopPepStartActivity(v9, 0, (int)v9 + 72, v16, v9 + 120, a1);
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v9 + 64));
        v18 = 3;
        goto LABEL_18;
      }
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v9 + 64));
LABEL_25:
      v9 = *(_QWORD *)v9;
      if ( (__int64 *)v9 == &PopPepDeviceList )
        v9 = *(_QWORD *)v9;
    }
    while ( (__int64 *)v9 != v4 );
    if ( (unsigned int)++v8 < 3 )
      continue;
    break;
  }
  started = 0;
  v18 = 0;
LABEL_18:
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(CurrentIrql);
  if ( (__int64 *)v9 != v4 )
    _InterlockedExchange64((volatile __int64 *)&PopPepLastCheckedDevice, v9);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopPepDeviceListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopPepDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopPepDeviceListLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  PopDiagTraceFxDefaultPepWorkerEnd(*(_QWORD *)(v25 + 32), v18, v2, v8, v3);
  return started;
}
