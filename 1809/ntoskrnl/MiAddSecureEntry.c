/*
 * XREFs of MiAddSecureEntry @ 0x1405F4490
 * Callers:
 *     MiMapViewOfDataSection @ 0x1405F1BB0 (MiMapViewOfDataSection.c)
 *     MiReserveUserMemory @ 0x1405F2600 (MiReserveUserMemory.c)
 *     MiSecureVad @ 0x1405F45BC (MiSecureVad.c)
 *     MiMapViewOfImageSection @ 0x1405F4660 (MiMapViewOfImageSection.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x140619664 (MmSecureVirtualMemoryAgainstWrites.c)
 *     MiAllocateVad @ 0x14067B484 (MiAllocateVad.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x140697060 (MiAllocateNewSubAllocatedRegion.c)
 *     MiCloneNoChange @ 0x14085061C (MiCloneNoChange.c)
 * Callees:
 *     MiSetVadFlags @ 0x1400879D0 (MiSetVadFlags.c)
 *     MiInsertVadEvent @ 0x140087B20 (MiInsertVadEvent.c)
 *     MiLocateExclusiveSecure @ 0x14012AE44 (MiLocateExclusiveSecure.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

_DWORD *__fastcall MiAddSecureEntry(__int64 a1, __int64 a2, __int64 a3, int a4, char a5)
{
  _DWORD *PoolWithTag; // rax
  __int64 v10; // r9
  _DWORD *v11; // rdi

  if ( (*(_DWORD *)(a1 + 48) & 0x8000000) != 0 && ((a5 & 1) != 0 || MiLocateExclusiveSecure(a1)) )
    return 0LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x48uLL, 0x65536D4Du);
  v11 = PoolWithTag;
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
  MiInsertVadEvent(a1, PoolWithTag, 1LL, v10);
  MiSetVadFlags(a1, 1, 1);
  return v11;
}
