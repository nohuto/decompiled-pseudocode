/*
 * XREFs of EtwpDeleteRegistrationObject @ 0x1405D4330
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14003EF80 (ExReleasePushLockEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     KeRundownQueueEx @ 0x1400E34CC (KeRundownQueueEx.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     EtwpUnreferenceGuidEntry @ 0x1405D458C (EtwpUnreferenceGuidEntry.c)
 *     EtwpReleaseProviderTraitsReference @ 0x1405D4B70 (EtwpReleaseProviderTraitsReference.c)
 *     EtwpRundownNotifications @ 0x1405D4C04 (EtwpRundownNotifications.c)
 *     EtwpReleaseQueueEntry @ 0x1406942E8 (EtwpReleaseQueueEntry.c)
 *     EtwpUnreferenceDataBlock @ 0x14069434C (EtwpUnreferenceDataBlock.c)
 *     EtwpQueueReply @ 0x1406AA9DC (EtwpQueueReply.c)
 */

__int64 __fastcall EtwpDeleteRegistrationObject(__int64 *BugCheckParameter2)
{
  ULONG_PTR v1; // r13
  __int64 v2; // r14
  ULONG_PTR v4; // rsi
  struct _KTHREAD *v5; // rax
  __int64 *v6; // rcx
  __int64 **v7; // rax
  __int64 *v8; // r8
  __int64 **v9; // rdx
  unsigned __int16 v10; // ax
  volatile __int64 *v11; // rbp
  _QWORD *v12; // rbx
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v15; // rdx
  __int64 **v16; // rax
  void *v17; // r14
  __int64 v18; // rax
  _QWORD *v19; // rbp
  _QWORD *v20; // rdi
  __int64 v21; // r15
  struct _KQUEUE *v22; // rcx
  _QWORD *v23; // rbx
  _QWORD v24[9]; // [rsp+30h] [rbp-68h] BYREF

  v1 = BugCheckParameter2[4];
  v2 = 4LL;
  v4 = BugCheckParameter2[5];
  if ( (*((_BYTE *)BugCheckParameter2 + 98) & 4) == 0 )
  {
    if ( v4 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(v4 + 408, 0LL);
      *(_QWORD *)(v4 + 416) = KeGetCurrentThread();
    }
    v5 = KeGetCurrentThread();
    --v5->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v1 + 408, 0LL);
    *(_QWORD *)(v1 + 416) = KeGetCurrentThread();
    v6 = (__int64 *)*BugCheckParameter2;
    if ( *(__int64 **)(*BugCheckParameter2 + 8) == BugCheckParameter2 )
    {
      v7 = (__int64 **)BugCheckParameter2[1];
      if ( *v7 == BugCheckParameter2 )
      {
        *v7 = v6;
        v6[1] = (__int64)v7;
        v8 = (__int64 *)BugCheckParameter2[2];
        if ( (__int64 *)v8[1] == BugCheckParameter2 + 2 )
        {
          v9 = (__int64 **)BugCheckParameter2[3];
          if ( *v9 == BugCheckParameter2 + 2 )
          {
            *v9 = v8;
            v8[1] = (__int64)v9;
            *(_QWORD *)(v1 + 416) = 0LL;
            ExReleasePushLockEx(v1 + 408, 0LL);
            KeLeaveCriticalRegion();
            if ( v4 )
            {
              *(_QWORD *)(v4 + 416) = 0LL;
              ExReleasePushLockEx(v4 + 408, 0LL);
              KeLeaveCriticalRegion();
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
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpReplyListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EtwpReplyListLock);
  KeAbPostRelease((ULONG_PTR)&EtwpReplyListLock);
LABEL_10:
  _InterlockedAnd16((volatile signed __int16 *)BugCheckParameter2 + 49, 0xFF7Fu);
  v10 = *((_WORD *)BugCheckParameter2 + 49);
  if ( (v10 & 2) != 0 )
  {
    v11 = BugCheckParameter2 + 6;
    do
    {
      v12 = (_QWORD *)_InterlockedExchange64(v11, 0LL);
      if ( v12 )
      {
        v21 = v12[4];
        memset(v24, 0, sizeof(v24));
        if ( (*(_BYTE *)(v21 + 98) & 0x40) == 0 )
        {
          v22 = *(struct _KQUEUE **)(v21 + 48);
          *(_OWORD *)&v24[7] = *(_OWORD *)(v1 + 40);
          v24[0] = 0x4800000001LL;
          EtwpQueueReply(v22);
        }
        EtwpReleaseQueueEntry(v12);
      }
      ++v11;
      --v2;
    }
    while ( v2 );
    EtwpRundownNotifications(BugCheckParameter2[10], BugCheckParameter2);
    ObfDereferenceObjectWithTag((PVOID)BugCheckParameter2[10], 0x52777445u);
    EtwpReleaseProviderTraitsReference(BugCheckParameter2);
  }
  else
  {
    if ( (v10 & 4) == 0 )
      KeBugCheckEx(0x11Du, 3uLL, (ULONG_PTR)BugCheckParameter2, v10, 0LL);
    v17 = (void *)BugCheckParameter2[6];
    v18 = KeRundownQueueEx((__int64)v17, 1);
    v19 = (_QWORD *)v18;
    if ( v18 )
    {
      v20 = (_QWORD *)v18;
      do
      {
        v23 = v20;
        v20 = (_QWORD *)*v20;
        EtwpUnreferenceDataBlock(v23[2]);
        ExFreePoolWithTag(v23, 0);
      }
      while ( v19 != v20 );
    }
    ExFreePoolWithTag(v17, 0);
  }
  result = EtwpUnreferenceGuidEntry(v1);
  if ( v4 )
    return EtwpUnreferenceGuidEntry(v4);
  return result;
}
