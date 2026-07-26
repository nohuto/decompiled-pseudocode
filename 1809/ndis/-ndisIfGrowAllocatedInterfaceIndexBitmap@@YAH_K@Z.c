/*
 * XREFs of ?ndisIfGrowAllocatedInterfaceIndexBitmap@@YAH_K@Z @ 0x1C0025BCC
 * Callers:
 *     ndisIfAllocateIfIndex @ 0x1C001C260 (ndisIfAllocateIfIndex.c)
 * Callees:
 *     memmove @ 0x1C0026E40 (memmove.c)
 *     memset @ 0x1C0027180 (memset.c)
 */

__int64 __fastcall ndisIfGrowAllocatedInterfaceIndexBitmap(ULONG64 a1)
{
  __int64 v1; // rbx
  SIZE_T v2; // rbx
  unsigned __int64 *PoolWithTag; // rax
  unsigned __int64 *v4; // rsi
  ULONG64 v5; // rdi
  ULONG64 v6; // r8

  if ( a1 <= ndisIfAllocatedInterfaceIndexes.SizeOfBitMap )
    return 0LL;
  if ( ndisIfAllocatedInterfaceIndexes.SizeOfBitMap < 0xFFFF )
  {
    v1 = 8LL;
    if ( a1 >= 8 )
      v1 = a1;
    v2 = (((unsigned __int64)(v1 + 7) >> 3) + 15) & 0xFFFFFFFFFFFFFFF0uLL;
    PoolWithTag = (unsigned __int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, v2, 0x6669444Eu);
    v4 = PoolWithTag;
    if ( PoolWithTag )
    {
      v5 = ndisIfAllocatedInterfaceIndexes.SizeOfBitMap >> 3;
      if ( ndisIfAllocatedInterfaceIndexes.Buffer )
      {
        memmove(PoolWithTag, ndisIfAllocatedInterfaceIndexes.Buffer, ndisIfAllocatedInterfaceIndexes.SizeOfBitMap >> 3);
        ExFreePoolWithTag(ndisIfAllocatedInterfaceIndexes.Buffer, 0x6669444Eu);
      }
      memset((char *)v4 + v5, 0, v2 - v5);
      v6 = 8 * v2;
      if ( 8 * v2 >= 0xFFFF )
        v6 = 0xFFFFLL;
      RtlInitializeBitMapEx(&ndisIfAllocatedInterfaceIndexes, v4, v6);
      RtlSetBitEx(&ndisIfAllocatedInterfaceIndexes, 0LL);
      return 0LL;
    }
  }
  return 3221225626LL;
}
