/*
 * XREFs of ?ndisAllocateAndInitializeTimestampForFilter@@YAPEAU_NDIS_TIMESTAMP_CAPABILITIES@@PEAU1@@Z @ 0x1C0059A70
 * Callers:
 *     ndisIndicateInitialStateToFilter @ 0x1C0017CAC (ndisIndicateInitialStateToFilter.c)
 * Callees:
 *     memset @ 0x1C0027180 (memset.c)
 */

struct _NDIS_TIMESTAMP_CAPABILITIES *__fastcall ndisAllocateAndInitializeTimestampForFilter(
        struct _NDIS_TIMESTAMP_CAPABILITIES *a1)
{
  _OWORD *PoolWithTag; // rax
  _OWORD *v3; // rbx

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x7374444Eu);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x38uLL);
    if ( a1 )
    {
      *v3 = *(_OWORD *)&a1->Header.Type;
      v3[1] = *(_OWORD *)&a1->CrossTimestamp;
      v3[2] = *(_OWORD *)&a1->Reserved2;
      *((_QWORD *)v3 + 6) = *(_QWORD *)&a1->TimestampFlags.AllReceiveHw;
    }
  }
  return (struct _NDIS_TIMESTAMP_CAPABILITIES *)v3;
}
