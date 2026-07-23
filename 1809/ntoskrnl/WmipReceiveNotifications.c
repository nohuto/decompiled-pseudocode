/*
 * XREFs of WmipReceiveNotifications @ 0x140124AD8
 * Callers:
 *     WmipIoControl @ 0x1406AB080 (WmipIoControl.c)
 * Callees:
 *     KeReleaseMutex @ 0x140006340 (KeReleaseMutex.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     IofCompleteRequest @ 0x1400C1000 (IofCompleteRequest.c)
 *     WmipCompleteGuidIrpWithError @ 0x14010BD38 (WmipCompleteGuidIrpWithError.c)
 *     WmipClearIrpObjectList @ 0x14010C2EC (WmipClearIrpObjectList.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     WmipCopyFromEventQueues @ 0x1406AB7DC (WmipCopyFromEventQueues.c)
 */

__int64 __fastcall WmipReceiveNotifications(unsigned int *a1, int *a2, __int64 a3)
{
  __int64 v3; // r12
  unsigned int v4; // r14d
  _DWORD *v6; // r15
  int v7; // r13d
  PVOID *PoolWithTag; // rdi
  int v9; // r8d
  __int64 v10; // rsi
  int v11; // edx
  int v12; // r9d
  HANDLE *v13; // rcx
  _DWORD *v14; // rcx
  unsigned int v15; // edx
  PVOID *v16; // rax
  __int64 v17; // rax
  int v18; // eax
  unsigned int v19; // ecx
  char v20; // r12
  __int64 v21; // rdx
  unsigned int v22; // r8d
  _QWORD *v23; // rcx
  __int64 *v24; // rcx
  __int64 **v25; // rax
  __int64 v26; // rax
  bool v27; // r14
  unsigned __int8 OldIrql; // r15
  PVOID *v29; // rbx
  int v31; // eax
  __int64 v32; // rax
  unsigned int v33; // ebx
  int v34; // r14d
  __int64 *v35; // r12
  __int64 v36; // r13
  struct _KPRCB *CurrentPrcb; // rcx
  int v38; // [rsp+40h] [rbp-C0h] BYREF
  NTSTATUS v39; // [rsp+44h] [rbp-BCh]
  unsigned int v40; // [rsp+48h] [rbp-B8h]
  int v41; // [rsp+4Ch] [rbp-B4h]
  int v42; // [rsp+50h] [rbp-B0h]
  int v43; // [rsp+54h] [rbp-ACh]
  __int64 v44; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int *v45; // [rsp+60h] [rbp-A0h]
  int *v46; // [rsp+68h] [rbp-98h]
  PVOID Object; // [rsp+70h] [rbp-90h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+78h] [rbp-88h] BYREF
  _BYTE P[256]; // [rsp+90h] [rbp-70h] BYREF

  v3 = *a1;
  v4 = *a2;
  v46 = a2;
  v6 = a1;
  v39 = -1073741811;
  v7 = 1;
  v45 = a1 + 2;
  if ( (unsigned int)v3 > 0x10 )
  {
    PoolWithTag = (PVOID *)ExAllocatePoolWithTag(PagedPool, 16 * v3, 0x70696D57u);
    if ( !PoolWithTag )
      return 3221225626LL;
  }
  else
  {
    PoolWithTag = (PVOID *)P;
  }
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  v9 = 0;
  LOBYTE(v43) = 0;
  v10 = 0LL;
  v41 = 0;
  v40 = 0;
  LOBYTE(v7) = 0;
  LOBYTE(v11) = 0;
  LODWORD(v44) = v7;
  v12 = 0;
  v38 = v11;
  v42 = 0;
  if ( (_DWORD)v3 )
  {
    v13 = (HANDLE *)(v6 + 2);
    while ( 1 )
    {
      v39 = ObReferenceObjectByHandle(*v13, 4u, WmipGuidObjectType, 1, &Object, 0LL);
      if ( v39 < 0 )
        break;
      v14 = Object;
      v15 = 0;
      if ( (_DWORD)v10 )
      {
        v16 = PoolWithTag;
        while ( Object != *v16 )
        {
          ++v15;
          v16 += 2;
          if ( v15 >= (unsigned int)v10 )
            goto LABEL_10;
        }
        ObfDereferenceObjectWithTag(Object, 0x746C6644u);
        LOBYTE(v11) = v38;
        v9 = v41;
        v12 = v42;
      }
      else
      {
LABEL_10:
        v11 = (unsigned __int8)v38;
        if ( *((_QWORD *)Object + 9) )
          v11 = 1;
        v17 = 2LL * (unsigned int)v10;
        v10 = (unsigned int)(v10 + 1);
        v38 = v11;
        PoolWithTag[v17] = Object;
        if ( *((_QWORD *)v14 + 12) )
        {
          v7 = (unsigned __int8)v7;
          if ( v14[29] )
            v7 = 1;
          LODWORD(v44) = v7;
        }
        if ( *((_QWORD *)v14 + 16) )
        {
          v31 = (unsigned __int8)v43;
          if ( v14[37] )
            v31 = 1;
          v43 = v31;
        }
        v9 = ((v14[29] + 7) & 0xFFFFFFF8) + v41;
        v18 = v14[37] + 7;
        v41 = v9;
        v12 = (v18 & 0xFFFFFFF8) + v42;
        v42 = v12;
      }
      v13 = (HANDLE *)(v45 + 2);
      ++v40;
      v45 += 2;
      if ( v40 >= (unsigned int)v3 )
        goto LABEL_16;
    }
  }
  else
  {
LABEL_16:
    v19 = v12 + v9;
    v40 = v12 + v9;
    if ( (_BYTE)v11 == 1 && (_DWORD)v10 )
    {
      v35 = (__int64 *)PoolWithTag;
      v36 = (unsigned int)v10;
      do
      {
        if ( *(_QWORD *)(*v35 + 72) )
          WmipCompleteGuidIrpWithError(*v35);
        v35 += 2;
        --v36;
      }
      while ( v36 );
      v19 = v40;
      LOBYTE(v7) = v44;
    }
    v20 = v43;
    if ( (unsigned __int8)v43 | (unsigned __int8)v7 )
    {
      if ( v19 > v4 )
      {
        v34 = 56;
        v6[11] = 32;
        *v6 = 56;
        v6[12] = v19;
      }
      else
      {
        v32 = 0LL;
        v33 = v4;
        v44 = 0LL;
        if ( (_BYTE)v7 )
        {
          WmipCopyFromEventQueues((_DWORD)PoolWithTag, v10, (_DWORD)v6, v12, (__int64)&v38, (__int64)&v44, 1);
          LODWORD(v6) = v38 + (_DWORD)v6;
          v32 = v44;
          v33 = v4 - v38;
        }
        if ( v20 )
        {
          WmipCopyFromEventQueues((_DWORD)PoolWithTag, v10, (_DWORD)v6, v12, (__int64)&v38, (__int64)&v44, 0);
          v33 -= v38;
          v32 = v44;
        }
        if ( v32 )
          *(_DWORD *)(v32 + 12) = 0;
        v34 = v4 - v33;
      }
      *v46 = v34;
    }
    else
    {
      v21 = a3 + 120;
      v22 = 0;
      *(_QWORD *)(a3 + 128) = a3 + 120;
      for ( *(_QWORD *)(a3 + 120) = a3 + 120; v22 < (unsigned int)v10; *(_QWORD *)(a3 + 128) = v24 )
      {
        v23 = PoolWithTag[2 * v22];
        v23[9] = a3;
        v24 = v23 + 10;
        v25 = *(__int64 ***)(a3 + 128);
        if ( *v25 != (__int64 *)v21 )
          __fastfail(3u);
        *v24 = v21;
        ++v22;
        v24[1] = (__int64)v25;
        *v25 = v24;
      }
      v26 = *(_QWORD *)(a3 + 184);
      v39 = 259;
      v27 = 0;
      *(_BYTE *)(v26 + 3) |= 1u;
      KeAcquireInStackQueuedSpinLock(&WmipCancelSpinLock, &LockHandle);
      _InterlockedExchange64((volatile __int64 *)(a3 + 104), (__int64)WmipNotificationIrpCancel);
      if ( *(_BYTE *)(a3 + 68) )
      {
        WmipClearIrpObjectList(a3);
        v39 = -1073741536;
        v27 = _InterlockedExchange64((volatile __int64 *)(a3 + 104), 0LL) != 0;
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
      if ( v27 )
      {
        *(_QWORD *)(a3 + 56) = 0LL;
        *(_DWORD *)(a3 + 48) = -1073741536;
        IofCompleteRequest((PIRP)a3, 0);
      }
      *v46 = 0;
    }
  }
  KeReleaseMutex(&WmipSMMutex, 0);
  if ( (_DWORD)v10 )
  {
    v29 = PoolWithTag;
    do
    {
      ObfDereferenceObjectWithTag(*v29, 0x746C6644u);
      v29 += 2;
      --v10;
    }
    while ( v10 );
  }
  if ( PoolWithTag != (PVOID *)P )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)v39;
}
