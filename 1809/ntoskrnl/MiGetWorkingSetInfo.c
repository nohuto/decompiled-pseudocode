/*
 * XREFs of MiGetWorkingSetInfo @ 0x1402BEEB4
 * Callers:
 *     MmQueryVirtualMemory @ 0x1405EF910 (MmQueryVirtualMemory.c)
 * Callees:
 *     MmUnlockPages @ 0x140033580 (MmUnlockPages.c)
 *     MiProbeAndLockPages @ 0x140040CF0 (MiProbeAndLockPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14005C0C0 (MmMapLockedPagesSpecifyCache.c)
 *     MiGetWorkingSetInfoEx @ 0x1402BF044 (MiGetWorkingSetInfoEx.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiGetWorkingSetInfo(__int64 a1, _QWORD *a2, unsigned __int64 a3, __int64 a4)
{
  struct _MDL *PoolWithTag; // rax
  struct _MDL *v10; // rbx
  _QWORD *MappedSystemVa; // rsi
  int WorkingSetInfo; // edi

  *a2 = 0LL;
  if ( a3 > 0xFFFFFFFF )
    return 3221225990LL;
  PoolWithTag = (struct _MDL *)ExAllocatePoolWithTag(
                                 NonPagedPoolNx,
                                 8 * ((a3 >> 12) + 7 - ((unsigned __int128)-(__int128)(a3 & 0xFFF) >> 64)),
                                 0x20206D4Du);
  v10 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  PoolWithTag->Next = 0LL;
  PoolWithTag->Size = 8 * ((((a1 & 0xFFF) + a3 + 4095) >> 12) + 6);
  PoolWithTag->MdlFlags = 0;
  PoolWithTag->StartVa = (PVOID)(a1 & 0xFFFFFFFFFFFFF000uLL);
  PoolWithTag->ByteOffset = a1 & 0xFFF;
  PoolWithTag->ByteCount = a3;
  MiProbeAndLockPages((__int64)PoolWithTag, KeGetCurrentThread()->PreviousMode != 0, 1);
  if ( (v10->MdlFlags & 5) != 0 )
    MappedSystemVa = v10->MappedSystemVa;
  else
    MappedSystemVa = MmMapLockedPagesSpecifyCache(v10, 0, MmCached, 0LL, 0, 0x40000010u);
  if ( MappedSystemVa )
  {
    WorkingSetInfo = MiGetWorkingSetInfoEx(a4 + 1280, MappedSystemVa, a3, 1LL);
    if ( WorkingSetInfo >= 0 )
      *a2 = *MappedSystemVa;
  }
  else
  {
    WorkingSetInfo = -1073741670;
  }
  MmUnlockPages(v10);
  ExFreePoolWithTag(v10, 0);
  return (unsigned int)WorkingSetInfo;
}
