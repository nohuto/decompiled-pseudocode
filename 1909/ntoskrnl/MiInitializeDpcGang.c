/*
 * XREFs of MiInitializeDpcGang @ 0x1402E8574
 * Callers:
 *     MiDeletePagablePteRange @ 0x1400E8030 (MiDeletePagablePteRange.c)
 *     MiInitializeDynamicPfns @ 0x1402BDC3C (MiInitializeDynamicPfns.c)
 *     MiHugePageOperation @ 0x1402C1F30 (MiHugePageOperation.c)
 *     MiDecommitRegion @ 0x1406083A0 (MiDecommitRegion.c)
 *     MiMapUserLargePages @ 0x140899CBC (MiMapUserLargePages.c)
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiComputeIdealDpcGang @ 0x1402E810C (MiComputeIdealDpcGang.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

void *__fastcall MiInitializeDpcGang(__int64 a1, unsigned int a2, char a3)
{
  void *result; // rax
  __int64 v7; // rbx

  memset((void *)a1, 0, 0x130uLL);
  result = (void *)MiComputeIdealDpcGang(a1, a2);
  v7 = (unsigned int)result;
  if ( (a3 & 1) != 0 )
  {
    *(_DWORD *)(a1 + 108) |= 1u;
  }
  else
  {
    if ( (unsigned int)result > 8 )
    {
      result = ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * (unsigned int)result, 0x6544694Du);
      *(_QWORD *)(a1 + 16) = result;
      if ( result )
        result = memset(result, 0, 8 * v7);
    }
    if ( !*(_QWORD *)(a1 + 16) )
    {
      result = (void *)(a1 + 24);
      *(_QWORD *)(a1 + 16) = a1 + 24;
      if ( (unsigned int)v7 > 8 )
        LODWORD(v7) = 8;
    }
  }
  *(_DWORD *)(a1 + 112) = v7;
  return result;
}
