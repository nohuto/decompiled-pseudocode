/*
 * XREFs of IoDiskIoAttributionAllocate @ 0x140697774
 * Callers:
 *     PspIoRateEntryActivate @ 0x1405B32E4 (PspIoRateEntryActivate.c)
 *     PspSetJobIoAttribution @ 0x14069751C (PspSetJobIoAttribution.c)
 * Callees:
 *     ExInitializePushLock @ 0x140082020 (ExInitializePushLock.c)
 *     ExWaitForRundownProtectionRelease @ 0x140082850 (ExWaitForRundownProtectionRelease.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     IoDiskIoAttributionReference @ 0x140298414 (IoDiskIoAttributionReference.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

struct _EX_RUNDOWN_REF *__fastcall IoDiskIoAttributionAllocate(unsigned __int64 a1, __int64 a2)
{
  struct _EX_RUNDOWN_REF *result; // rax
  struct _EX_RUNDOWN_REF *v5; // rbx
  signed __int64 v6; // rax

  result = (struct _EX_RUNDOWN_REF *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xB8uLL, 0x41446F49u);
  v5 = result;
  if ( result )
  {
    memset(result, 0, 0xB8uLL);
    v5[2].Count = -1LL;
    v5[4].Count = 1LL;
    do
    {
      v6 = _InterlockedExchangeAdd64(&IopDiskIoAttributionKey, 1uLL);
      v5[3].Count = v6 + 1;
    }
    while ( v6 == -1 );
    ExInitializePushLock(&v5[21].Count);
    if ( a1 )
      v5[20].Count = a1;
    else
      ExWaitForRundownProtectionRelease(v5 + 21);
    if ( a2 )
    {
      IoDiskIoAttributionReference(a2);
      v5[22].Count = a2;
    }
    return v5;
  }
  return result;
}
