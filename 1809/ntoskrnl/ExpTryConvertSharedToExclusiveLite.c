/*
 * XREFs of ExpTryConvertSharedToExclusiveLite @ 0x14031BCC8
 * Callers:
 *     ExTryConvertSharedToExclusiveLite @ 0x14031BA08 (ExTryConvertSharedToExclusiveLite.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14001F500 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE90 (KeAcquireInStackQueuedSpinLock.c)
 *     ExpFindCurrentThread @ 0x1401083A0 (ExpFindCurrentThread.c)
 *     ExpTryUpgradeResource @ 0x14031F19C (ExpTryUpgradeResource.c)
 */

char ExpTryConvertSharedToExclusiveLite()
{
  __int64 CurrentThread; // rbx
  char v1; // di
  unsigned int v2; // ecx
  ULONG_PTR *v3; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  CurrentThread = (__int64)KeGetCurrentThread();
  KeAcquireInStackQueuedSpinLock(&CmpRegistryLock + 12, &LockHandle);
  v1 = ExpTryUpgradeResource(&CmpRegistryLock);
  if ( v1 )
  {
    if ( (CurrentThread & 3) != 0 )
      v2 = 0;
    else
      v2 = *(unsigned __int8 *)(CurrentThread + 649);
    v3 = ExpFindCurrentThread((__int64)&CmpRegistryLock, CurrentThread, (__int64)&LockHandle, 0, 0, v2);
    if ( v3 != &CmpRegistryLock + 6 )
    {
      *((_OWORD *)&CmpRegistryLock + 3) = *(_OWORD *)v3;
      *((_DWORD *)&CmpRegistryLock + 14) = _mm_cvtsi128_si32(_mm_srli_si128(*((__m128i *)&CmpRegistryLock + 3), 8)) & 7 | 8;
      *v3 = 0LL;
      v3[1] = 0LL;
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v1;
}
