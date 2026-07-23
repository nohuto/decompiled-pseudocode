/*
 * XREFs of CcScanLogHandleList @ 0x14007EBD8
 * Callers:
 *     CcLazyWriteScan @ 0x1400D57DC (CcLazyWriteScan.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     CcCalculatePagesToWrite @ 0x1400D7774 (CcCalculatePagesToWrite.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CcScanLogHandleList(__int64 a1, _DWORD *a2, int a3, __int64 *a4)
{
  __int64 *v7; // rsi
  __int64 *v8; // rbx
  unsigned __int8 OldIrql; // di
  __int64 v10; // rcx
  unsigned __int64 *v11; // rdi
  unsigned __int64 v12; // rax
  unsigned int *v13; // r8
  unsigned int v14; // eax
  unsigned int v15; // eax
  int v16; // edx
  unsigned int v17; // eax
  unsigned __int64 v18; // rdx
  unsigned __int8 v19; // di
  int v20; // eax
  int v21; // eax
  __int64 v22; // rax
  unsigned __int8 v23; // bl
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v26; // rcx
  __int64 v27; // rdx
  __int64 **v28; // rcx
  void *v29; // rcx
  struct _KPRCB *v30; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE v32; // [rsp+48h] [rbp-18h] BYREF
  unsigned __int16 v33; // [rsp+A8h] [rbp+48h] BYREF
  int v34; // [rsp+B0h] [rbp+50h]

  v34 = a3;
  *a2 = 0;
  v33 = 0;
  *a4 = 0x7FFFFFFFFFFFFFFFLL;
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
  v7 = (__int64 *)CcVolumeCacheMapList;
  while ( v7 != &CcVolumeCacheMapList )
  {
    v8 = v7 - 2;
    ++*((_DWORD *)v7 - 3);
    KxReleaseQueuedSpinLock(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(OldIrql);
    v10 = v8[5];
    if ( v10 )
      ((void (__fastcall *)(__int64, unsigned __int16 *))v8[7])(v10, &v33);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 128), &v32);
    if ( v8[5] )
    {
      v11 = (unsigned __int64 *)(v8 + 8);
      v12 = v8[8];
      v13 = (unsigned int *)(v8 + 14);
      if ( v12 >= 0xFFFFFFFF )
      {
        ++CcDbgForcedLogPercentFull;
        v33 = 0;
      }
      else
      {
        *v13 = v12;
        if ( v33 )
        {
          v14 = 100 * v12;
          *v13 = v14;
          v15 = v14 / v33;
          goto LABEL_10;
        }
      }
      v15 = *((_DWORD *)v8 + 37);
LABEL_10:
      v16 = v34;
      *v13 = (3 * v15) >> 2;
      v8[13] = v15;
      v8[12] = v15;
      v8[11] = v15;
      v17 = CcCalculatePagesToWrite(a1, v16, (int)v8 + 64, (int)v8 + 88, 1);
      v18 = *v11;
      v8[9] = *v11;
      if ( v17 > v18 >> 3 )
      {
        *a2 += v17;
        ++CcDbgAdditionalPagesQueuedCount;
      }
      else
      {
        v17 = 0;
      }
      *((_DWORD *)v8 + 36) = v17;
      *((_DWORD *)v8 + 20) = v17;
      if ( v8[4] )
      {
        v22 = v8[22];
        if ( v22 < *a4 )
          *a4 = v22;
      }
    }
    KxReleaseQueuedSpinLock(&v32);
    v19 = v32.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v32.OldIrql < 2u )
    {
      v26 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v26->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v26);
    }
    __writecr8(v19);
    KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
    v20 = *((_DWORD *)v8 + 1);
    v7 = (__int64 *)*v7;
    if ( !v20 )
      KeBugCheckEx(0x34u, 0x598uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    v21 = v20 - 1;
    *((_DWORD *)v8 + 1) = v21;
    if ( !v21 )
    {
      v27 = v8[2];
      v28 = (__int64 **)v8[3];
      if ( *(__int64 **)(v27 + 8) != v8 + 2 || *v28 != v8 + 2 )
        __fastfail(3u);
      *v28 = (__int64 *)v27;
      *(_QWORD *)(v27 + 8) = v28;
      v29 = (void *)v8[20];
      if ( v29 )
      {
        ObfDereferenceObjectWithTag(v29, 0x746C6644u);
        v8[20] = 0LL;
      }
      ExFreePoolWithTag(v8, 0x6D566343u);
    }
  }
  KxReleaseQueuedSpinLock(&LockHandle);
  v23 = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    v30 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v30->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v30);
  }
  result = v23;
  __writecr8(v23);
  return result;
}
