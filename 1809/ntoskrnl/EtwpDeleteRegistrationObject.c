/*
 * XREFs of EtwpDeleteRegistrationObject @ 0x1405C4E20
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeRundownQueueEx @ 0x1400FAA3C (KeRundownQueueEx.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     EtwpUnreferenceDataBlock @ 0x1405C1D74 (EtwpUnreferenceDataBlock.c)
 *     EtwpReleaseQueueEntry @ 0x1405C1D9C (EtwpReleaseQueueEntry.c)
 *     EtwpUnreferenceGuidEntry @ 0x1405C5098 (EtwpUnreferenceGuidEntry.c)
 *     EtwpReleaseProviderTraitsReference @ 0x1405C5680 (EtwpReleaseProviderTraitsReference.c)
 *     EtwpRundownNotifications @ 0x1405C5714 (EtwpRundownNotifications.c)
 *     EtwpQueueReply @ 0x140659FE4 (EtwpQueueReply.c)
 */

__int64 __fastcall EtwpDeleteRegistrationObject(__int64 *BugCheckParameter2)
{
  _QWORD *v1; // r15
  _QWORD *v3; // r14
  struct _KTHREAD *v4; // rax
  __int64 *v5; // rcx
  __int64 **v6; // rax
  __int64 *v7; // r8
  __int64 **v8; // rdx
  unsigned __int16 v9; // ax
  volatile __int64 *v10; // rdi
  __int64 v11; // rbp
  __int64 v12; // rsi
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v15; // rcx
  __int64 **v16; // rax
  char v17; // al
  void *v18; // rbp
  __int64 v19; // rax
  volatile signed __int32 *v20; // rsi
  volatile signed __int32 *v21; // rdi
  __int64 v22; // rcx
  volatile signed __int32 **v23; // rbx

  v1 = (_QWORD *)BugCheckParameter2[4];
  v3 = (_QWORD *)BugCheckParameter2[5];
  if ( (*((_BYTE *)BugCheckParameter2 + 98) & 4) == 0 )
  {
    if ( v3 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(v3 + 51), 0LL);
      v3[52] = KeGetCurrentThread();
    }
    v4 = KeGetCurrentThread();
    --v4->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(v1 + 51), 0LL);
    v1[52] = KeGetCurrentThread();
    v5 = (__int64 *)*BugCheckParameter2;
    if ( *(__int64 **)(*BugCheckParameter2 + 8) == BugCheckParameter2 )
    {
      v6 = (__int64 **)BugCheckParameter2[1];
      if ( *v6 == BugCheckParameter2 )
      {
        *v6 = v5;
        v5[1] = (__int64)v6;
        v7 = (__int64 *)BugCheckParameter2[2];
        if ( (__int64 *)v7[1] == BugCheckParameter2 + 2 )
        {
          v8 = (__int64 **)BugCheckParameter2[3];
          if ( *v8 == BugCheckParameter2 + 2 )
          {
            *v8 = v7;
            v7[1] = (__int64)v8;
            v1[52] = 0LL;
            ExReleasePushLockEx((ULONG_PTR)(v1 + 51), 0LL);
            KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
            if ( v3 )
            {
              v3[52] = 0LL;
              ExReleasePushLockEx((ULONG_PTR)(v3 + 51), 0LL);
              KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
            }
            goto LABEL_10;
          }
        }
      }
    }
LABEL_26:
    __fastfail(3u);
  }
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&EtwpReplyListLock, 0LL);
  v15 = (__int64 *)*BugCheckParameter2;
  if ( *(__int64 **)(*BugCheckParameter2 + 8) != BugCheckParameter2 )
    goto LABEL_26;
  v16 = (__int64 **)BugCheckParameter2[1];
  if ( *v16 != BugCheckParameter2 )
    goto LABEL_26;
  *v16 = v15;
  v15[1] = (__int64)v16;
  v17 = _InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpReplyListLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v17 & 2) != 0 && (v17 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EtwpReplyListLock);
  KeAbPostRelease((ULONG_PTR)&EtwpReplyListLock);
LABEL_10:
  _InterlockedAnd16((volatile signed __int16 *)BugCheckParameter2 + 49, 0xFF7Fu);
  v9 = *((_WORD *)BugCheckParameter2 + 49);
  if ( (v9 & 2) != 0 )
  {
    v10 = BugCheckParameter2 + 6;
    v11 = 4LL;
    do
    {
      v12 = _InterlockedExchange64(v10, 0LL);
      if ( v12 )
      {
        v22 = *(_QWORD *)(v12 + 32);
        if ( (*(_BYTE *)(v22 + 98) & 0x40) == 0 )
          EtwpQueueReply(*(PRKQUEUE *)(v22 + 48));
        EtwpReleaseQueueEntry((PVOID *)v12, 2);
      }
      ++v10;
      --v11;
    }
    while ( v11 );
    EtwpRundownNotifications(BugCheckParameter2[10], BugCheckParameter2);
    ObfDereferenceObjectWithTag((PVOID)BugCheckParameter2[10], 0x52777445u);
    EtwpReleaseProviderTraitsReference(BugCheckParameter2);
  }
  else
  {
    if ( (v9 & 4) == 0 )
      KeBugCheckEx(0x11Du, 3uLL, (ULONG_PTR)BugCheckParameter2, v9, 0LL);
    v18 = (void *)BugCheckParameter2[6];
    v19 = KeRundownQueueEx((__int64)v18, 1);
    v20 = (volatile signed __int32 *)v19;
    if ( v19 )
    {
      v21 = (volatile signed __int32 *)v19;
      do
      {
        v23 = (volatile signed __int32 **)v21;
        v21 = *(volatile signed __int32 **)v21;
        EtwpUnreferenceDataBlock(v23[2]);
        ExFreePoolWithTag(v23, 0);
      }
      while ( v20 != v21 );
    }
    ExFreePoolWithTag(v18, 0);
  }
  result = EtwpUnreferenceGuidEntry(v1);
  if ( v3 )
    return EtwpUnreferenceGuidEntry(v3);
  return result;
}
