/*
 * XREFs of EtwpCreateUmReplyObject @ 0x1406A7578
 * Callers:
 *     EtwpEnableGuid @ 0x1406570F8 (EtwpEnableGuid.c)
 *     EtwpNotifyGuid @ 0x140659A48 (EtwpNotifyGuid.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     KeInitializeQueue @ 0x140121AA0 (KeInitializeQueue.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     EtwpReferenceGuidEntry @ 0x1405C5288 (EtwpReferenceGuidEntry.c)
 *     ObCreateObjectEx @ 0x1405E15E0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14062E0A0 (ObInsertObjectEx.c)
 */

__int64 __fastcall EtwpCreateUmReplyObject(ULONG_PTR BugCheckParameter2, unsigned __int64 *a2, _QWORD *a3)
{
  struct _KQUEUE *PoolWithTag; // rax
  struct _KQUEUE *v7; // rdi
  int inserted; // ebx
  PVOID v9; // rbx
  __int64 v10; // rax
  char v11; // al
  _QWORD *v12; // rax
  PVOID v13; // rdi
  __int64 v15; // [rsp+20h] [rbp-88h]
  __int64 v16; // [rsp+50h] [rbp-58h] BYREF
  int v17; // [rsp+58h] [rbp-50h] BYREF
  __int64 v18; // [rsp+60h] [rbp-48h]
  __int64 v19; // [rsp+68h] [rbp-40h]
  int v20; // [rsp+70h] [rbp-38h]
  __int128 v21; // [rsp+78h] [rbp-30h]
  PVOID Object; // [rsp+C8h] [rbp+20h] BYREF

  v18 = 0LL;
  v19 = 0LL;
  v17 = 48;
  v20 = 64;
  v21 = 0LL;
  PoolWithTag = (struct _KQUEUE *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x48uLL, 0x71777445u);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x48uLL);
    KeInitializeQueue(v7, 0);
    inserted = ObCreateObjectEx(0, EtwpRegistrationObjectType, (int)&v17, 1u, v15, 112, 0, 0, &Object, 0LL);
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
      inserted = ObInsertObjectEx(Object, 0LL, 2052LL, 1, 0, (PVOID *)&v16, a2);
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
