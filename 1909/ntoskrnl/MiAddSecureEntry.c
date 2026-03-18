/*
 * XREFs of MiAddSecureEntry @ 0x14060B8C0
 * Callers:
 *     MiMapViewOfImageSection @ 0x1405EAA40 (MiMapViewOfImageSection.c)
 *     MiReserveUserMemory @ 0x140609670 (MiReserveUserMemory.c)
 *     MiMapViewOfDataSection @ 0x14060AE10 (MiMapViewOfDataSection.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x14065FA38 (MmSecureVirtualMemoryAgainstWrites.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x14067F064 (MiAllocateNewSubAllocatedRegion.c)
 *     MiAllocateVad @ 0x1406860F4 (MiAllocateVad.c)
 *     MiSecureVad @ 0x1406BE644 (MiSecureVad.c)
 *     MiCloneNoChange @ 0x14088AB70 (MiCloneNoChange.c)
 * Callees:
 *     MiSetVadFlags @ 0x140072950 (MiSetVadFlags.c)
 *     MiInsertVadEvent @ 0x140072A6C (MiInsertVadEvent.c)
 *     MiLocateExclusiveSecure @ 0x14012B698 (MiLocateExclusiveSecure.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

_DWORD *__fastcall MiAddSecureEntry(__int64 a1, __int64 a2, __int64 a3, int a4, char a5)
{
  _DWORD *PoolWithTag; // rax
  _DWORD *v10; // rbx

  if ( (*(_DWORD *)(a1 + 48) & 8) != 0 && ((a5 & 1) != 0 || MiLocateExclusiveSecure(a1)) )
    return 0LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x48uLL, 0x65536D4Du);
  v10 = PoolWithTag;
  if ( !PoolWithTag )
    return 0LL;
  PoolWithTag[16] = 2;
  *((_QWORD *)PoolWithTag + 1) = a2;
  *((_QWORD *)PoolWithTag + 2) = a3;
  if ( (a4 & 1) != 0 )
  {
    LODWORD(a2) = a2 | 8;
    goto LABEL_8;
  }
  if ( (a4 & 4) != 0 )
  {
    LODWORD(a2) = a2 | 0xA;
    goto LABEL_8;
  }
  if ( (a4 & 2) != 0 )
  {
    LODWORD(a2) = a2 | 9;
LABEL_8:
    PoolWithTag[2] = a2;
  }
  if ( (a5 & 1) != 0 )
  {
    LODWORD(a2) = a2 | 0x20;
    PoolWithTag[2] = a2;
  }
  if ( (a5 & 4) != 0 )
  {
    LODWORD(a2) = a2 | 0x40;
    PoolWithTag[2] = a2;
  }
  if ( (a5 & 8) != 0 )
  {
    LODWORD(a2) = a2 | 0x80;
    PoolWithTag[2] = a2;
  }
  if ( a4 < 0 )
  {
    LODWORD(a2) = a2 | 4;
    PoolWithTag[2] = a2;
  }
  if ( (a4 & 0x40000000) != 0 )
  {
    LODWORD(a2) = a2 | 0x10;
    PoolWithTag[2] = a2;
  }
  if ( (a4 & 0x20000000) != 0 )
    PoolWithTag[2] = a2 | 0x100;
  MiInsertVadEvent(a1, (__int64 *)PoolWithTag, 1);
  MiSetVadFlags(a1, 1, 1);
  return v10;
}
