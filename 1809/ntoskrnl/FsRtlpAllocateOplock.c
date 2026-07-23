/*
 * XREFs of FsRtlpAllocateOplock @ 0x1405DDDA0
 * Callers:
 *     FsRtlpRequestShareableOplock @ 0x140017E60 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpOplockStoreKeyForDeleteOperation @ 0x1400B8670 (FsRtlpOplockStoreKeyForDeleteOperation.c)
 *     FsRtlpRequestExclusiveOplock @ 0x14015E20C (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpOplockFsctrlInternal @ 0x1405DD640 (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     KeInitializeEvent @ 0x1400B8DB0 (KeInitializeEvent.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

char *FsRtlpAllocateOplock()
{
  struct _KEVENT *v0; // rax
  char *PoolWithTag; // [rsp+20h] [rbp-18h]

  PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)17, 0xA0uLL, 0x6F725346u);
  memset(PoolWithTag, 0, 0xA0uLL);
  v0 = (struct _KEVENT *)ExAllocatePoolWithTag((POOL_TYPE)528, 0x38uLL, 0x6F725346u);
  *((_QWORD *)PoolWithTag + 19) = v0;
  v0->Header.LockNV = 1;
  v0->Header.WaitListHead.Flink = 0LL;
  LODWORD(v0->Header.WaitListHead.Blink) = 0;
  KeInitializeEvent(v0 + 1, SynchronizationEvent, 0);
  *((_QWORD *)PoolWithTag + 6) = PoolWithTag + 40;
  *((_QWORD *)PoolWithTag + 5) = PoolWithTag + 40;
  *((_QWORD *)PoolWithTag + 8) = PoolWithTag + 56;
  *((_QWORD *)PoolWithTag + 7) = PoolWithTag + 56;
  *((_QWORD *)PoolWithTag + 10) = PoolWithTag + 72;
  *((_QWORD *)PoolWithTag + 9) = PoolWithTag + 72;
  *((_QWORD *)PoolWithTag + 12) = PoolWithTag + 88;
  *((_QWORD *)PoolWithTag + 11) = PoolWithTag + 88;
  *((_QWORD *)PoolWithTag + 14) = PoolWithTag + 104;
  *((_QWORD *)PoolWithTag + 13) = PoolWithTag + 104;
  *((_QWORD *)PoolWithTag + 16) = PoolWithTag + 120;
  *((_QWORD *)PoolWithTag + 15) = PoolWithTag + 120;
  *((_DWORD *)PoolWithTag + 36) = 1;
  return PoolWithTag;
}
