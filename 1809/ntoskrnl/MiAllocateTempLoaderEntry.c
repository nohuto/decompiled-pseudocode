/*
 * XREFs of MiAllocateTempLoaderEntry @ 0x14068434C
 * Callers:
 *     MiObtainSectionForDriver @ 0x140682AB0 (MiObtainSectionForDriver.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

_QWORD *__fastcall MiAllocateTempLoaderEntry(__int64 a1)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v3; // rbx

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0xA0uLL, 0x644C6D4Du);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0xA0uLL);
    v3[14] = a1;
    *((_WORD *)v3 + 54) = 1;
    *((_DWORD *)v3 + 26) = 0x1000000;
    v3[17] = -2LL;
  }
  return v3;
}
