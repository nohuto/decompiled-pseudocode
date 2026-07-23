/*
 * XREFs of CcForEachPartition @ 0x1401200F0
 * Callers:
 *     CcGetDirtyPages @ 0x1401200B0 (CcGetDirtyPages.c)
 *     CcNotifyWriteBehind @ 0x1401531C8 (CcNotifyWriteBehind.c)
 *     CcWaitForCurrentLazyWriterActivity @ 0x140161050 (CcWaitForCurrentLazyWriterActivity.c)
 *     CcCoalescingCallBack @ 0x1402692F0 (CcCoalescingCallBack.c)
 *     CcIsThereDirtyData @ 0x14026A230 (CcIsThereDirtyData.c)
 *     MiFlushAllFilesystemPages @ 0x1402AB1E0 (MiFlushAllFilesystemPages.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     CcDereferencePartition @ 0x14007C988 (CcDereferencePartition.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     PsGetNextPartitionUnsafe @ 0x1401201EC (PsGetNextPartitionUnsafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

LONG_PTR __fastcall CcForEachPartition(__int64 (__fastcall *a1)(__int64, __int64), __int64 a2, char a3)
{
  char v6; // si
  LONG_PTR result; // rax
  _QWORD *v8; // rbp
  __int64 v9; // rdi
  KIRQL v10; // al
  __int64 v11; // rcx
  KIRQL v12; // bl
  char v13; // bl
  signed __int64 v14; // rax
  unsigned __int64 i; // rcx
  signed __int64 v16; // rtt
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v18; // [rsp+68h] [rbp+20h]

  v6 = 0;
  result = PsGetNextPartitionUnsafe(0LL);
  v8 = (_QWORD *)result;
  if ( result )
  {
    v9 = v18;
    while ( 1 )
    {
      v10 = KeAcquireSpinLockRaiseToDpc(&CcGlobalPartitionLock);
      v11 = v8[1];
      v12 = v10;
      if ( v11 )
      {
        v9 = v8[1];
        if ( *(_BYTE *)(v11 + 902) >= 2u )
        {
          if ( a3 )
          {
            _m_prefetchw((const void *)(v11 + 904));
            v14 = *(_QWORD *)(v11 + 904);
            for ( i = v14 + 1; i > 1; i = v14 + 1 )
            {
              v16 = v14;
              v14 = _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 904), i, v14);
              if ( v16 == v14 )
                goto LABEL_6;
            }
            if ( i != 1 )
              __fastfail(0xEu);
            v6 = 0;
          }
        }
        else
        {
          if ( _InterlockedIncrement64((volatile signed __int64 *)(v11 + 904)) <= 1 )
            __fastfail(0xEu);
LABEL_6:
          v6 = 1;
        }
      }
      KxReleaseSpinLock(&CcGlobalPartitionLock);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v12 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8(v12);
      if ( v6 )
      {
        v13 = a1(v9, a2);
        CcDereferencePartition(v9);
        v6 = 0;
        if ( !v13 )
          return ObfDereferenceObjectWithTag(v8, 0x6E457350u);
      }
      result = PsGetNextPartitionUnsafe(v8);
      v8 = (_QWORD *)result;
      if ( !result )
        return result;
    }
  }
  return result;
}
