/*
 * XREFs of ?ndisBindInitialize@@YAJXZ @ 0x1C01292D8
 * Callers:
 *     DriverEntry @ 0x1C0127870 (DriverEntry.c)
 * Callees:
 *     memset @ 0x1C0027180 (memset.c)
 *     ??0KPushLock@@QEAA@XZ @ 0x1C0103B6C (--0KPushLock@@QEAA@XZ.c)
 *     ?ndisBindBuilderCleanup@@YAXXZ @ 0x1C01059DC (-ndisBindBuilderCleanup@@YAXXZ.c)
 *     ?ndisBindBuilderInitialize@@YAJXZ @ 0x1C012936C (-ndisBindBuilderInitialize@@YAJXZ.c)
 */

__int64 ndisBindInitialize(void)
{
  __int64 result; // rax
  PVOID PoolWithTag; // rax
  __int64 v2; // rbx

  result = ndisBindBuilderInitialize();
  if ( !(_DWORD)result )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x38uLL, 0x6762444Eu);
    v2 = (__int64)PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x38uLL);
      KPushLock::KPushLock((KPushLock *)v2);
      KPushLock::KPushLock((KPushLock *)(v2 + 8));
      KPushLock::KPushLock((KPushLock *)(v2 + 16));
      *(_DWORD *)(v2 + 24) = 0;
      *(_DWORD *)(v2 + 28) = 0;
      *(_QWORD *)(v2 + 32) = 0LL;
      *(_DWORD *)(v2 + 40) = 0;
      *(_DWORD *)(v2 + 44) = 0;
      *(_QWORD *)(v2 + 48) = 0LL;
    }
    else
    {
      v2 = 0LL;
    }
    qword_1C00A07D8 = v2;
    if ( v2 )
    {
      return 0LL;
    }
    else
    {
      ndisBindBuilderCleanup();
      return 3221225626LL;
    }
  }
  return result;
}
