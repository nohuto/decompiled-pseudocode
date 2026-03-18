/*
 * XREFs of EtwpCreateUmReplyObject @ 0x1406CC224
 * Callers:
 *     EtwpEnableGuid @ 0x140691558 (EtwpEnableGuid.c)
 *     EtwpNotifyGuid @ 0x1406A9BCC (EtwpNotifyGuid.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     KeInitializeQueue @ 0x140124310 (KeInitializeQueue.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     EtwpReferenceGuidEntry @ 0x1405D4774 (EtwpReferenceGuidEntry.c)
 *     ObCreateObjectEx @ 0x1405D9B00 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x1405D9D60 (ObInsertObjectEx.c)
 */

__int64 __fastcall EtwpCreateUmReplyObject(ULONG_PTR BugCheckParameter2, _QWORD *a2, _QWORD *a3)
{
  struct _KQUEUE *PoolWithTag; // rax
  struct _KQUEUE *v7; // rdi
  int inserted; // ebx
  PVOID v9; // rbx
  __int64 v10; // rax
  char v11; // al
  _QWORD *v12; // rax
  PVOID v13; // rdi
  __int64 v15; // [rsp+20h] [rbp-39h]
  __int64 v16; // [rsp+50h] [rbp-9h] BYREF
  _DWORD v17[2]; // [rsp+58h] [rbp-1h] BYREF
  __int64 v18; // [rsp+60h] [rbp+7h]
  __int64 v19; // [rsp+68h] [rbp+Fh]
  int v20; // [rsp+70h] [rbp+17h]
  int v21; // [rsp+74h] [rbp+1Bh]
  __int128 v22; // [rsp+78h] [rbp+1Fh]
  PVOID Object; // [rsp+D8h] [rbp+7Fh] BYREF

  v17[1] = 0;
  v21 = 0;
  v18 = 0LL;
  v19 = 0LL;
  v17[0] = 48;
  v20 = 64;
  v22 = 0LL;
  PoolWithTag = (struct _KQUEUE *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x48uLL, 0x71777445u);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x48uLL);
    KeInitializeQueue(v7, 0);
    inserted = ObCreateObjectEx(0, EtwpRegistrationObjectType, (int)v17, 1u, v15, 112, 0, 0, &Object, 0LL);
    if ( inserted < 0 )
    {
      ExFreePoolWithTag(v7, 0);
    }
    else
    {
      v9 = Object;
      memset(Object, 0, 0x70uLL);
      *((_WORD *)v9 + 49) = 4;
      *((_QWORD *)v9 + 6) = v7;
      EtwpReferenceGuidEntry(BugCheckParameter2);
      *((_QWORD *)v9 + 4) = BugCheckParameter2;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&EtwpReplyListLock, 0LL);
      v10 = EtwpReplyListHead;
      if ( *(__int64 **)(EtwpReplyListHead + 8) != &EtwpReplyListHead )
        __fastfail(3u);
      *(_QWORD *)v9 = EtwpReplyListHead;
      *((_QWORD *)v9 + 1) = &EtwpReplyListHead;
      *(_QWORD *)(v10 + 8) = v9;
      EtwpReplyListHead = (__int64)v9;
      v11 = _InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpReplyListLock, 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v11 & 2) != 0 && (v11 & 4) == 0 )
        ExfTryToWakePushLock((volatile signed __int64 *)&EtwpReplyListLock);
      KeAbPostRelease((ULONG_PTR)&EtwpReplyListLock);
      v12 = (char *)Object + 16;
      *((_QWORD *)Object + 3) = (char *)Object + 16;
      *v12 = v12;
      _InterlockedOr16((volatile signed __int16 *)v9 + 49, 0x80u);
      v13 = Object;
      inserted = ObInsertObjectEx(Object, 0LL, 0x804u, 1, 0, (__int64)&v16, a2);
      if ( inserted >= 0 )
        *a3 = v13;
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)inserted;
}
