/*
 * XREFs of PspAllocateRateControl @ 0x140699BC0
 * Callers:
 *     NtSetInformationJobObject @ 0x140601B10 (NtSetInformationJobObject.c)
 *     PspAddSchedulingGroupToJobChain @ 0x140699C74 (PspAddSchedulingGroupToJobChain.c)
 *     PspSetJobRateControl @ 0x14088B750 (PspSetJobRateControl.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PsChargeSharedPoolQuota @ 0x1405CAB24 (PsChargeSharedPoolQuota.c)
 *     PspGetRateControlSize @ 0x140699C54 (PspGetRateControlSize.c)
 */

_QWORD *__fastcall PspAllocateRateControl(__int64 a1)
{
  SIZE_T RateControlSize; // rdi
  POOL_TYPE v2; // r9d
  int v3; // ecx
  _QWORD *PoolWithTag; // rbx
  __int64 v5; // rsi

  RateControlSize = PspGetRateControlSize(a1);
  v2 = NonPagedPoolNx;
  if ( v3 != 2 )
    v2 = PagedPool;
  PoolWithTag = ExAllocatePoolWithTag(v2, RateControlSize, 0x624A7350u);
  if ( PoolWithTag )
  {
    v5 = PsChargeSharedPoolQuota(KeGetCurrentThread()->ApcState.Process, RateControlSize, 0LL);
    if ( v5 )
    {
      memset(PoolWithTag, 0, RateControlSize);
      *PoolWithTag = v5;
    }
    else
    {
      ExFreePoolWithTag(PoolWithTag, 0x624A7350u);
      return 0LL;
    }
  }
  return PoolWithTag;
}
