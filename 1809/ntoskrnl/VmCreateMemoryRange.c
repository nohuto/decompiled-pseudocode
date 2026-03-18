/*
 * XREFs of VmCreateMemoryRange @ 0x1408B0140
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1401D1780 (memset.c)
 *     VmpInsertMemoryRange @ 0x14030C6A0 (VmpInsertMemoryRange.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     VmpAllocateMemoryRanges @ 0x1408B05F4 (VmpAllocateMemoryRanges.c)
 *     VmpDecodePreallocationRangeHandle @ 0x1408B06E8 (VmpDecodePreallocationRangeHandle.c)
 *     VmpFreeMemoryRanges @ 0x1408B073C (VmpFreeMemoryRanges.c)
 *     VmpProcessContextCleanup @ 0x1408B0B48 (VmpProcessContextCleanup.c)
 *     VmpValidateMemoryRangeParameters @ 0x1408B0B5C (VmpValidateMemoryRangeParameters.c)
 */

__int64 __fastcall VmCreateMemoryRange(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  _QWORD *MemoryRanges; // rdi
  _KPROCESS *Process; // rsi
  signed __int64 v11; // rbx
  PVOID PoolWithTag; // rax
  int inserted; // ebx
  PVOID v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // r15

  MemoryRanges = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( !VmTbFlushEnabled )
    VmTbFlushEnabled = 1;
  v11 = Process[2].ActiveProcessors.Bitmap[15];
  if ( !v11 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x68uLL, 0x63506D56u);
    v11 = (signed __int64)PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    memset(PoolWithTag, 0, 0x68uLL);
    *(_QWORD *)(v11 + 72) = a4;
    *(_QWORD *)(v11 + 8) = 0LL;
    *(_QWORD *)(v11 + 16) = 0LL;
    *(_QWORD *)(v11 + 24) = 0LL;
    *(_QWORD *)(v11 + 32) = 0LL;
    *(_QWORD *)(v11 + 48) = 0LL;
    *(_QWORD *)(v11 + 56) = 0LL;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&Process[2].ActiveProcessors.Bitmap[15], v11, 0LL) )
    {
      VmpProcessContextCleanup(v11);
      ExFreePoolWithTag(v14, 0);
      v11 = Process[2].ActiveProcessors.Bitmap[15];
    }
  }
  if ( a5 )
    MemoryRanges = (_QWORD *)VmpDecodePreallocationRangeHandle(v11);
  if ( (unsigned int)VmpValidateMemoryRangeParameters(a1, a2, a3, a4) )
  {
    inserted = -1073741811;
  }
  else
  {
    v15 = *(_QWORD *)(v11 + 72);
    if ( v15 == -1 || v15 == a4 )
    {
      if ( !MemoryRanges )
      {
        MemoryRanges = (_QWORD *)VmpAllocateMemoryRanges(1LL);
        if ( !MemoryRanges )
          return (unsigned int)-1073741670;
      }
      v16 = MemoryRanges[5];
      v17 = a2 >> 12;
      MemoryRanges[3] = v17;
      MemoryRanges[4] = v17 + a3 - 1;
      v18 = a1 >> 12;
      *(_QWORD *)(v16 + 48) = v18;
      *(_QWORD *)(v16 + 56) = v18 + a3 - 1;
      inserted = VmpInsertMemoryRange((PEX_SPIN_LOCK)v11, MemoryRanges, a4);
      if ( inserted >= 0 )
      {
        MemoryRanges = 0LL;
        inserted = 0;
      }
    }
    else
    {
      inserted = -1073740007;
    }
  }
  if ( MemoryRanges )
    VmpFreeMemoryRanges(MemoryRanges);
  return (unsigned int)inserted;
}
