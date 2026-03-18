/*
 * XREFs of MiGetWorkingSetInfo @ 0x1402D8630
 * Callers:
 *     MmQueryVirtualMemory @ 0x140604960 (MmQueryVirtualMemory.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x14002FA50 (MmMapLockedPagesSpecifyCache.c)
 *     MmUnlockPages @ 0x14006A390 (MmUnlockPages.c)
 *     MiProbeAndLockPages @ 0x14008E9A0 (MiProbeAndLockPages.c)
 *     MiGetWorkingSetInfoEx @ 0x1402D87D8 (MiGetWorkingSetInfoEx.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiGetWorkingSetInfo(__int64 a1, int a2, __int64 a3, unsigned __int64 a4, _QWORD *P)
{
  struct _MDL *PoolWithTag; // rax
  struct _MDL *v11; // rbx
  _QWORD *MappedSystemVa; // rsi
  int WorkingSetInfo; // edi

  *P = 0LL;
  if ( a4 > 0xFFFFFFFF )
    return 3221225990LL;
  PoolWithTag = (struct _MDL *)ExAllocatePoolWithTag(
                                 NonPagedPoolNx,
                                 8 * ((a4 >> 12) + 7 - ((unsigned __int128)-(__int128)(a4 & 0xFFF) >> 64)),
                                 0x20206D4Du);
  v11 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  PoolWithTag->Next = 0LL;
  PoolWithTag->Size = 8 * ((((a3 & 0xFFF) + a4 + 4095) >> 12) + 6);
  PoolWithTag->MdlFlags = 0;
  PoolWithTag->StartVa = (PVOID)(a3 & 0xFFFFFFFFFFFFF000uLL);
  PoolWithTag->ByteOffset = a3 & 0xFFF;
  PoolWithTag->ByteCount = a4;
  MiProbeAndLockPages(PoolWithTag, KeGetCurrentThread()->PreviousMode != 0, 1);
  if ( (v11->MdlFlags & 5) != 0 )
    MappedSystemVa = v11->MappedSystemVa;
  else
    MappedSystemVa = MmMapLockedPagesSpecifyCache(v11, 0, MmCached, 0LL, 0, 0x40000010u);
  if ( MappedSystemVa )
  {
    WorkingSetInfo = MiGetWorkingSetInfoEx(a1 + 1280, a2 | 0x80000000, MappedSystemVa, a4);
    if ( WorkingSetInfo >= 0 )
      *P = *MappedSystemVa;
  }
  else
  {
    WorkingSetInfo = -1073741670;
  }
  MmUnlockPages(v11);
  ExFreePoolWithTag(v11, 0);
  return (unsigned int)WorkingSetInfo;
}
