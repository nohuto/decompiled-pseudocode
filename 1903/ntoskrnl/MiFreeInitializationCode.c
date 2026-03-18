/*
 * XREFs of MiFreeInitializationCode @ 0x140710B2C
 * Callers:
 *     MiFreeDriverInitialization @ 0x140710A98 (MiFreeDriverInitialization.c)
 *     MiInitializeDriverImages @ 0x1409EE68C (MiInitializeDriverImages.c)
 *     MmDiscardDriverSection @ 0x140A3D50C (MmDiscardDriverSection.c)
 * Callees:
 *     MiDeleteSystemPagableVm @ 0x14002D400 (MiDeleteSystemPagableVm.c)
 *     MiGetPteAddress @ 0x140057698 (MiGetPteAddress.c)
 *     MiReturnCommit @ 0x140058F90 (MiReturnCommit.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14005EF80 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiSectionControlArea @ 0x1400717E0 (MiSectionControlArea.c)
 *     MiGetAnyMultiplexedVm @ 0x14008D9C0 (MiGetAnyMultiplexedVm.c)
 *     MiReturnResidentAvailable @ 0x140091BF0 (MiReturnResidentAvailable.c)
 *     RtlClearBits @ 0x140091EF0 (RtlClearBits.c)
 *     MiGetControlAreaPartition @ 0x1400A9178 (MiGetControlAreaPartition.c)
 *     MiUnlockLoaderEntry @ 0x1400F7668 (MiUnlockLoaderEntry.c)
 *     MiLockLoaderEntry @ 0x1400F78A4 (MiLockLoaderEntry.c)
 *     MiVaToPfn @ 0x140124120 (MiVaToPfn.c)
 *     MiFreeLargeInitializationCodePages @ 0x1401886DC (MiFreeLargeInitializationCodePages.c)
 *     MiBadRefCount @ 0x1401BE9E4 (MiBadRefCount.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MiReturnPartitionResidentAvailable @ 0x1402D996C (MiReturnPartitionResidentAvailable.c)
 *     MiFreeBootDriverPages @ 0x1409EFB3C (MiFreeBootDriverPages.c)
 */

unsigned __int64 __fastcall MiFreeInitializationCode(_QWORD *a1, unsigned __int64 a2, __int64 a3, int a4)
{
  _QWORD *v8; // r13
  __int64 v9; // rbp
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // rdi
  __int64 PteAddress; // rax
  ULONG_PTR *ControlAreaPartition; // r12
  __int64 v14; // rcx
  unsigned __int64 v15; // rax
  char *AnyMultiplexedVm; // rax
  __int64 v17; // r10
  unsigned __int64 result; // rax
  unsigned __int64 v19; // r10
  __int64 v20; // r10
  unsigned __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rbx
  _QWORD v24[6]; // [rsp+30h] [rbp-58h] BYREF

  memset(v24, 0, sizeof(v24));
  if ( a4 )
  {
    v8 = 0LL;
    v9 = 0LL;
  }
  else
  {
    v8 = a1;
    v9 = (__int64)(a1 + 20);
    a1 = (_QWORD *)a1[6];
  }
  v10 = (__int64)(a2 << 25) >> 16;
  v11 = (__int64)(a3 - a2 + 8) >> 3;
  if ( !a4 )
  {
    MiLockLoaderEntry(v9, 0LL);
    PteAddress = MiGetPteAddress((unsigned __int64)a1);
    RtlClearBits(*(PRTL_BITMAP *)(v9 + 112), (__int64)(a2 - PteAddress) >> 3, v11);
    MiUnlockLoaderEntry(v9, 0);
  }
  ControlAreaPartition = &MiSystemPartition;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS((__int64)(a2 << 25) >> 16) )
  {
    for ( ; v11; v11 -= v23 )
    {
      v21 = MiVaToPfn(v10);
      v22 = 48 * v21 - 0x58000000000LL;
      if ( *(_WORD *)(v22 + 32) != 1 )
        MiBadRefCount(v22);
      v23 = v11;
      if ( 512 - (v21 & 0x1FF) <= v11 )
        v23 = 512 - (v21 & 0x1FF);
      MiFreeLargeInitializationCodePages(v22, v21, v23);
      v10 += v23 << 12;
    }
  }
  else if ( a4 )
  {
    MiFreeBootDriverPages((_DWORD)a1, a2, v11, 1, 0LL);
    if ( a1 == PsNtosImageBase )
      MxKernelFreedGapCharges += v11;
    else
      MxHalFreedGapCharges += v11;
  }
  else
  {
    v14 = v8[14];
    if ( v14 )
    {
      v15 = MiSectionControlArea(v14);
      ControlAreaPartition = (ULONG_PTR *)MiGetControlAreaPartition(v15);
    }
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
    MiDeleteSystemPagableVm((__int64)AnyMultiplexedVm, v17, a2, v11, 1, v24);
  }
  result = v24[3];
  if ( v24[3] )
  {
    *(_QWORD *)(v9 + 40) -= v24[3];
    *(_QWORD *)(v9 + 48) -= result;
    if ( a1 == PsNtosImageBase || a1 == PsHalImageBase )
    {
      v19 = v24[3];
      qword_140466A30 -= v24[3];
    }
    else
    {
      _InterlockedExchangeAdd(&dword_140466A50, -(int)result);
      v19 = v24[3];
    }
    if ( ControlAreaPartition == &MiSystemPartition )
      MiReturnResidentAvailable(v19);
    else
      MiReturnPartitionResidentAvailable((__int64)ControlAreaPartition, v19);
    return MiReturnCommit((__int64)ControlAreaPartition, v20 - v24[1]);
  }
  return result;
}
