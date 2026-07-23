/*
 * XREFs of MiFreeInitializationCode @ 0x1406C8ABC
 * Callers:
 *     MiFreeDriverInitialization @ 0x1406C8A2C (MiFreeDriverInitialization.c)
 *     MmDiscardDriverSection @ 0x1409F8A3C (MmDiscardDriverSection.c)
 * Callees:
 *     RtlClearBits @ 0x140017890 (RtlClearBits.c)
 *     MiReturnResidentAvailable @ 0x140022D18 (MiReturnResidentAvailable.c)
 *     MiGetAnyMultiplexedVm @ 0x140028884 (MiGetAnyMultiplexedVm.c)
 *     MiReturnCommit @ 0x140065D30 (MiReturnCommit.c)
 *     MiGetPteAddress @ 0x140065DD8 (MiGetPteAddress.c)
 *     MiSectionControlArea @ 0x140075E60 (MiSectionControlArea.c)
 *     MiDeleteSystemPagableVm @ 0x140079F00 (MiDeleteSystemPagableVm.c)
 *     MiGetControlAreaPartition @ 0x1400937E8 (MiGetControlAreaPartition.c)
 *     MiVaToPfn @ 0x140098F50 (MiVaToPfn.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14009D850 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiUnlockLoaderEntry @ 0x1400DBBAC (MiUnlockLoaderEntry.c)
 *     MiLockLoaderEntry @ 0x1400DBDE4 (MiLockLoaderEntry.c)
 *     MiAddExpansionNonPagedPool @ 0x14017FB0C (MiAddExpansionNonPagedPool.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     MiBadRefCount @ 0x1402BFA88 (MiBadRefCount.c)
 *     MiReturnPartitionResidentAvailable @ 0x1402C0230 (MiReturnPartitionResidentAvailable.c)
 */

unsigned __int64 __fastcall MiFreeInitializationCode(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v6; // r15
  unsigned __int64 v7; // rdi
  __int64 v8; // rbx
  ULONG_PTR *ControlAreaPartition; // r14
  __int64 v10; // rcx
  unsigned __int64 v11; // rax
  char *AnyMultiplexedVm; // rax
  __int64 v13; // r10
  unsigned __int64 result; // rax
  PVOID v15; // rcx
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rbx
  _QWORD v20[6]; // [rsp+30h] [rbp-58h] BYREF

  memset(v20, 0, 0x28uLL);
  v6 = (__int64)(a2 << 25) >> 16;
  v7 = (__int64)(a3 - a2 + 8) >> 3;
  v8 = (__int64)(a2 - MiGetPteAddress(*(_QWORD *)(a1 + 48))) >> 3;
  MiLockLoaderEntry(a1 + 160, 0LL);
  RtlClearBits(*(PRTL_BITMAP *)(a1 + 272), v8, v7);
  MiUnlockLoaderEntry(a1 + 160, 0);
  ControlAreaPartition = &MiSystemPartition;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(v6) )
  {
    for ( ; v7; v7 -= v19 )
    {
      v17 = MiVaToPfn(v6);
      v18 = 48 * v17 - 0x58000000000LL;
      if ( *(_WORD *)(v18 + 32) != 1 )
        MiBadRefCount(v18);
      v19 = v7;
      if ( 512 - (v17 & 0x1FF) <= v7 )
        v19 = 512 - (v17 & 0x1FF);
      MiAddExpansionNonPagedPool(v17, v19);
      v6 += v19 << 12;
    }
  }
  else
  {
    v10 = *(_QWORD *)(a1 + 112);
    if ( v10 )
    {
      v11 = MiSectionControlArea(v10);
      ControlAreaPartition = (ULONG_PTR *)MiGetControlAreaPartition(v11);
    }
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
    MiDeleteSystemPagableVm((__int64)AnyMultiplexedVm, v13, a2, v7, 1, v20);
  }
  result = v20[3];
  if ( v20[3] )
  {
    *(_QWORD *)(a1 + 200) -= v20[3];
    *(_QWORD *)(a1 + 208) -= result;
    v15 = *(PVOID *)(a1 + 48);
    if ( v15 == PsNtosImageBase || v15 == PsHalImageBase )
    {
      v16 = v20[3];
      qword_14043C0D0 -= v20[3];
    }
    else
    {
      _InterlockedExchangeAdd(&dword_14043C0F8, -(int)result);
      v16 = v20[3];
    }
    if ( ControlAreaPartition == &MiSystemPartition )
      MiReturnResidentAvailable(v16);
    else
      MiReturnPartitionResidentAvailable((__int64)ControlAreaPartition, v16);
    return MiReturnCommit((__int64)ControlAreaPartition, v16 - v20[1]);
  }
  return result;
}
