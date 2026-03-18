/*
 * XREFs of CcCanIWriteStream @ 0x14007BAA4
 * Callers:
 *     CcMapAndCopyInToCache @ 0x14006D870 (CcMapAndCopyInToCache.c)
 *     CcNotifyOfMappedWrite @ 0x14007B6BC (CcNotifyOfMappedWrite.c)
 *     CcShouldLazyWriteCacheMap @ 0x14007F504 (CcShouldLazyWriteCacheMap.c)
 *     CcScheduleReadAheadEx @ 0x1400A9CA0 (CcScheduleReadAheadEx.c)
 *     CcCopyWriteWontFlush @ 0x14010A1E0 (CcCopyWriteWontFlush.c)
 *     CcForceWriteThrough @ 0x140136740 (CcForceWriteThrough.c)
 *     CcPostDeferredWrites @ 0x14027D3F0 (CcPostDeferredWrites.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     MmEnoughMemoryForWrite @ 0x14007BCC0 (MmEnoughMemoryForWrite.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

bool __fastcall CcCanIWriteStream(KSPIN_LOCK *a1, __int64 a2, unsigned int a3, unsigned int a4, char a5)
{
  char v6; // r13
  bool v7; // r12
  int v8; // edi
  unsigned int v10; // ebx
  unsigned int v11; // eax
  unsigned int v12; // edi
  int v13; // edx
  KSPIN_LOCK v14; // r8
  KSPIN_LOCK v15; // rsi
  bool v16; // bp
  __int64 v17; // rdi
  bool v18; // bl
  __int64 v19; // rcx
  unsigned int v20; // edx
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  int v24; // eax
  unsigned __int8 v25; // si
  struct _KPRCB *v26; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  KSPIN_LOCK v28; // [rsp+80h] [rbp+8h]
  unsigned int v30; // [rsp+90h] [rbp+18h]
  int v31; // [rsp+A0h] [rbp+28h]

  v6 = 0;
  v7 = 0;
  v8 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v10 = (a4 >> 12) + ((a4 & 0xFFF) != 0);
  v11 = 0x1000000;
  if ( a3 <= 0x1000000 )
    v11 = a3;
  LOBYTE(v8) = (v11 & 0xFFF) != 0;
  v12 = (v11 >> 12) + v8;
  v13 = a5 & 8;
  v30 = v12;
  v31 = v13;
  if ( !v13 )
  {
    KeAcquireInStackQueuedSpinLock(a1 + 16, &LockHandle);
    v13 = 0;
  }
  v14 = a1[78];
  v28 = v14;
  v15 = v10 + v12 + a1[75];
  v16 = v15 >= v14;
  if ( !v13 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(OldIrql);
    v13 = v31;
    v14 = v28;
  }
  v17 = 0LL;
  v18 = v16;
  if ( a2 )
  {
    if ( (a5 & 0xA) == 0 && (*(_BYTE *)(*(_QWORD *)(a2 + 24) + 4LL) & 4) == 0 && v15 < v14 )
    {
LABEL_26:
      v6 = MmEnoughMemoryForWrite(0LL);
      return v6 != 0;
    }
    if ( !v13 )
      KeAcquireInStackQueuedSpinLock(a1 + 16, &LockHandle);
    v18 = v16;
    v17 = *(_QWORD *)(a2 + 40);
    if ( v17 )
    {
      v19 = *(_QWORD *)(v17 + 8);
      if ( v19 )
      {
        v20 = *(_DWORD *)(v19 + 264);
        if ( v20 )
        {
          v24 = *(_DWORD *)(v19 + 112);
          if ( v24 )
            v7 = v30 + v24 > v20;
        }
        v18 = v16;
        if ( *(_QWORD *)(*(_QWORD *)(v19 + 504) + 32LL) <= (unsigned __int64)(unsigned int)CcMaxLazyWritePages )
          v18 = (a5 & 4) != 0 && v16;
      }
      v6 = MmEnoughMemoryForWrite(*(_QWORD *)(a2 + 40));
    }
    if ( !v31 )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v25 = LockHandle.OldIrql;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
      {
        v26 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v26->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v26);
      }
      __writecr8(v25);
    }
    if ( v7 )
      return 0;
  }
  if ( v18 )
    return 0;
  if ( !v17 )
    goto LABEL_26;
  return v6 != 0;
}
