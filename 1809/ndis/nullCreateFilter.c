/*
 * XREFs of nullCreateFilter @ 0x1C00F3EF0
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C010B314 (ndisMInitializeAdapter.c)
 * Callees:
 *     NdisAllocateRWLock @ 0x1C001C480 (NdisAllocateRWLock.c)
 *     NdisFreeRWLock @ 0x1C00255E0 (NdisFreeRWLock.c)
 *     memset @ 0x1C0027180 (memset.c)
 */

char __fastcall nullCreateFilter(_QWORD *a1)
{
  char v2; // bl
  struct _NDIS_RW_LOCK_EX *RWLock; // rdi
  _QWORD *PoolWithTag; // rax
  _QWORD *v5; // rsi

  v2 = 0;
  RWLock = NdisAllocateRWLock(&ndisDummyObject);
  if ( RWLock )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x198uLL, 0x6670444Eu);
    *a1 = PoolWithTag;
    v5 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x198uLL);
      v5[36] = RWLock;
      return 1;
    }
    else
    {
      NdisFreeRWLock(RWLock);
    }
  }
  return v2;
}
