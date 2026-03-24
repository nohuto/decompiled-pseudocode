/*
 * XREFs of MiAddSecureEntry @ 0x1405F3490
 * Callers:
 *     MiMapViewOfDataSection @ 0x1405F0BB0 (MiMapViewOfDataSection.c)
 *     MiReserveUserMemory @ 0x1405F1600 (MiReserveUserMemory.c)
 *     MiSecureVad @ 0x1405F35BC (MiSecureVad.c)
 *     MiMapViewOfImageSection @ 0x1405F3660 (MiMapViewOfImageSection.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x140618664 (MmSecureVirtualMemoryAgainstWrites.c)
 *     MiAllocateVad @ 0x14067A2C4 (MiAllocateVad.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x140695EA0 (MiAllocateNewSubAllocatedRegion.c)
 *     MiCloneNoChange @ 0x14084F3BC (MiCloneNoChange.c)
 * Callees:
 *     MiSetVadFlags @ 0x1400879E0 (MiSetVadFlags.c)
 *     MiInsertVadEvent @ 0x140087B30 (MiInsertVadEvent.c)
 *     MiLocateExclusiveSecure @ 0x14012AD74 (MiLocateExclusiveSecure.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
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
