/*
 * XREFs of SepRmCallLsa @ 0x14012FC10
 * Callers:
 *     <none>
 * Callees:
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     SepRmDispatchDataToLsa @ 0x14012FE34 (SepRmDispatchDataToLsa.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     NtClose @ 0x1405E99E0 (NtClose.c)
 *     NtWaitForSingleObject @ 0x1405EAAA0 (NtWaitForSingleObject.c)
 *     SepAdtOpenEtwReadyEvent @ 0x14073835C (SepAdtOpenEtwReadyEvent.c)
 *     AdtpWriteToEtw @ 0x14074E754 (AdtpWriteToEtw.c)
 *     SepAuditFailed @ 0x1408A59E0 (SepAuditFailed.c)
 */

__int64 __fastcall SepRmCallLsa(__int64 **a1)
{
  int v2; // ebp
  char v3; // r14
  __int64 *v4; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v6; // rcx
  __int64 *v7; // rax
  signed __int32 v8; // ebp
  void *v9; // rcx
  __int64 result; // rax
  struct _KTHREAD *v11; // rax
  struct _LIST_ENTRY *v12; // rcx
  struct _LIST_ENTRY *Blink; // rbx
  int v14; // eax
  NTSTATUS v15; // ebx
  struct _KEVENT *v16; // rcx
  _QWORD *v17; // rdx
  __int64 *v18; // rcx
  struct _KEVENT *v19; // rcx
  __int64 v20; // rax
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  _BYTE v23[8]; // [rsp+20h] [rbp-78h] BYREF
  HANDLE Object; // [rsp+28h] [rbp-70h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v26[48]; // [rsp+48h] [rbp-50h] BYREF

  Object = 0LL;
  v2 = 1;
  v3 = SepRmAuditingEnabled;
  if ( !AdtpRegisteredWithEtw )
  {
    result = SepAdtOpenEtwReadyEvent(&Object);
    if ( (int)result < 0 )
      return result;
    v15 = NtWaitForSingleObject(Object, 1u, 0LL);
    NtClose(Object);
    if ( v15 < 0 )
      return (unsigned int)v15;
  }
  if ( v3 )
    KiStackAttachProcess((_KPROCESS *)SepRmLsaCallProcess, 0LL, (__int64)v26);
  do
  {
    v4 = 0LL;
    if ( ((_BYTE)a1[28] & 1) == 0 )
      goto LABEL_51;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 4), 1u);
    v6 = *a1;
    if ( *a1 == (__int64 *)a1 )
    {
      v16 = (struct _KEVENT *)a1[24];
      if ( v16 )
        KeSetEvent(v16, 0, 0);
    }
    else if ( *((_DWORD *)v6 + 13) == *((_DWORD *)a1 + 46) + 1 )
    {
      v4 = *a1;
      v7 = (__int64 *)*v6;
      if ( (__int64 **)v6[1] != a1 || (__int64 *)v7[1] != v6 )
LABEL_48:
        __fastfail(3u);
      *a1 = v7;
      v7[1] = (__int64)a1;
    }
    ExReleaseResourceLite((PERESOURCE)(a1 + 4));
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    if ( !v4 )
    {
LABEL_51:
      if ( ((_BYTE)a1[28] & 2) == 0 )
        continue;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 17, &LockHandle);
      v17 = a1 + 2;
      v18 = a1[2];
      if ( v18 == (__int64 *)(a1 + 2) )
      {
        v19 = (struct _KEVENT *)a1[25];
        if ( v19 )
          KeSetEvent(v19, 0, 0);
      }
      else if ( *((_DWORD *)v18 + 13) == *((_DWORD *)a1 + 46) + 1 )
      {
        v4 = a1[2];
        v20 = *v18;
        if ( (_QWORD *)v18[1] != v17 || *(__int64 **)(v20 + 8) != v18 )
          goto LABEL_48;
        *v17 = v20;
        *(_QWORD *)(v20 + 8) = v17;
      }
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8(OldIrql);
      if ( !v4 )
        continue;
    }
    if ( *((_DWORD *)v4 + 8) != 1 || (*(_DWORD *)(v4[3] + 20) & 2) != 0 )
    {
      if ( v3 )
        SepRmDispatchDataToLsa(v4);
    }
    else
    {
      v11 = KeGetCurrentThread();
      v12 = (struct _LIST_ENTRY *)v4[7];
      v23[0] = 0;
      Blink = v11[1].WaitBlock[3].WaitListEntry.Blink;
      v11[1].WaitBlock[3].WaitListEntry.Blink = v12;
      v14 = AdtpWriteToEtw(v4[3], v23);
      KeGetCurrentThread()[1].WaitBlock[3].WaitListEntry.Blink = Blink;
      if ( v14 < 0 )
      {
        SepAdtLastAuditFailStatus = v14;
        _InterlockedIncrement(&SepAdtAuditFailureCount);
        if ( !v23[0] )
          SepAuditFailed((unsigned int)v14);
      }
      if ( (unsigned int)(*((_DWORD *)v4 + 4) - 4) <= 1 )
        ExFreePoolWithTag((PVOID)v4[3], 0);
    }
    _InterlockedIncrement((volatile signed __int32 *)a1 + 46);
    v8 = _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 44, 0xFFFFFFFF);
    v9 = (void *)v4[7];
    v2 = v8 - 1;
    if ( v9 )
    {
      ObfDereferenceObjectWithTag(v9, 0x69416553u);
      v4[7] = 0LL;
    }
    ((void (__fastcall *)(__int64 *))a1[27])(v4);
  }
  while ( v2 );
  if ( v3 )
    KiUnstackDetachProcess((__int64)v26, 0LL);
  return 0LL;
}
