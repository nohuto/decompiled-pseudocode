/*
 * XREFs of MiInsertVadCharges @ 0x1405F2E60
 * Callers:
 *     MiDeletePartialVad @ 0x140025850 (MiDeletePartialVad.c)
 *     MiMapViewOfDataSection @ 0x1405F1BB0 (MiMapViewOfDataSection.c)
 *     MiReserveUserMemory @ 0x1405F2600 (MiReserveUserMemory.c)
 *     MiMapViewOfImageSection @ 0x1405F4660 (MiMapViewOfImageSection.c)
 *     MiInsertProcessVads @ 0x14067AD24 (MiInsertProcessVads.c)
 *     MiMapLockedPagesInUserSpace @ 0x140696CE4 (MiMapLockedPagesInUserSpace.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x140697060 (MiAllocateNewSubAllocatedRegion.c)
 *     MiMapViewOfPhysicalSection @ 0x140755690 (MiMapViewOfPhysicalSection.c)
 *     MiAllocateEnclaveVad @ 0x14085A3B8 (MiAllocateEnclaveVad.c)
 *     MiInsertChildVads @ 0x14085F950 (MiInsertChildVads.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x140022D18 (MiReturnResidentAvailable.c)
 *     MiChargeResident @ 0x14002DF50 (MiChargeResident.c)
 *     MiGetProcessPartition @ 0x14004D19C (MiGetProcessPartition.c)
 *     PspChargeQuota @ 0x14004D3A0 (PspChargeQuota.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x140068560 (PsReturnProcessNonPagedPoolQuota.c)
 *     MiVadPureReserve @ 0x140070D20 (MiVadPureReserve.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x1400769C4 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x140076BD8 (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x140076C00 (PsChargeProcessNonPagedPoolQuota.c)
 *     RtlSetBits @ 0x140076D70 (RtlSetBits.c)
 *     PsReturnProcessPagedPoolQuota @ 0x1400901D0 (PsReturnProcessPagedPoolQuota.c)
 *     MiReturnPartitionResidentAvailable @ 0x1402C0230 (MiReturnPartitionResidentAvailable.c)
 *     MiCommitPageTablesForVad @ 0x1405EDBB0 (MiCommitPageTablesForVad.c)
 *     MiResidentPagesForSpan @ 0x1406C45D0 (MiResidentPagesForSpan.c)
 *     MiComputeAweCharges @ 0x140850AB0 (MiComputeAweCharges.c)
 */

__int64 __fastcall MiInsertVadCharges(__int64 a1, struct _KPROCESS *a2)
{
  unsigned __int64 v3; // r12
  unsigned __int64 v4; // r14
  unsigned __int64 v6; // r15
  __int64 v7; // rax
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // r15
  __int64 result; // rax
  int v12; // ebx
  int v13; // eax
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v17; // r9
  int v18; // ebp
  unsigned int v19; // ebp
  unsigned int v20; // edi
  __int64 v21; // rbx
  unsigned int i; // esi
  unsigned int v23; // eax
  unsigned int v24; // r9d
  int v25; // r14d
  unsigned int v26; // edx
  unsigned int v27; // r8d
  __int64 v28; // rax
  ULONG_PTR *ProcessPartition; // rax
  __int64 v30; // rcx
  ULONG_PTR *v31; // rax

  v3 = 0LL;
  v4 = 0LL;
  v6 = *(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32);
  v7 = *(unsigned int *)(a1 + 52);
  LODWORD(v7) = v7 & 0x7FFFFFFF;
  v8 = ((*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) << 12) | 0xFFF;
  v9 = v7 | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31);
  v10 = v6 << 12;
  if ( v9 >= 0x7FFFFFFFDLL )
  {
    if ( v9 == 0x7FFFFFFFDLL )
    {
      result = PsChargeProcessNonPagedPoolQuota((__int64)a2, 0x40uLL);
      if ( (int)result < 0 )
        return result;
    }
  }
  else
  {
    result = PsChargeProcessNonPagedPoolQuota((__int64)a2, 0x88uLL);
    if ( (int)result < 0 )
      return result;
    if ( (*(_DWORD *)(a1 + 48) & 0x4000) == 0 && !(unsigned int)MiVadPureReserve(a1) )
    {
      v3 = 8
         * ((*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32))
          - (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)))
         + 8;
      if ( a2 != PsInitialSystemProcess )
      {
        v12 = PspChargeQuota(a2[1].ActiveProcessors.Bitmap[4], (__int64)a2, 1, v3);
        if ( v12 < 0 )
        {
          PsReturnProcessNonPagedPoolQuota(a2, 136LL);
          return (unsigned int)v12;
        }
      }
    }
    v13 = *(_DWORD *)(a1 + 48) & 7;
    if ( v13 == 3 )
    {
      v28 = MiComputeAweCharges(a1, *(_QWORD *)(a1 + 8));
    }
    else
    {
      if ( v13 != 6 && v13 != 1 )
        goto LABEL_10;
      v28 = MiResidentPagesForSpan(v10, v8, 0LL);
    }
    v4 = v28;
    if ( v28 )
    {
      ProcessPartition = (ULONG_PTR *)MiGetProcessPartition((__int64)a2);
      if ( !(unsigned int)MiChargeResident(ProcessPartition, v4, 128LL) )
      {
        v4 = 0LL;
        v18 = -1073741670;
        goto LABEL_36;
      }
    }
  }
LABEL_10:
  v14 = *(unsigned int *)(a1 + 52);
  LODWORD(v14) = v14 & 0x7FFFFFFF;
  v15 = v14 | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31);
  if ( v15 >= 0x7FFFFFFFDLL && v15 != 0x7FFFFFFFELL
    || (CurrentThread = KeGetCurrentThread(),
        LOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, (__int64)a2),
        v18 = MiCommitPageTablesForVad(a1, v10, v8, v17),
        UNLOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, (__int64)a2),
        v18 >= 0) )
  {
    v19 = (*(_DWORD *)(a1 + 24) >> 4) | (*(unsigned __int8 *)(a1 + 32) << 28);
    v20 = (*(_DWORD *)(a1 + 28) >> 4) | (*(unsigned __int8 *)(a1 + 33) << 28);
    v21 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealGlobalNode + 48LL;
    for ( i = 0; i < 3; ++i )
    {
      v23 = 8 * (*(_DWORD *)(v21 + 8) - qword_14043B5E8);
      if ( v20 >= v23 )
      {
        v24 = v23 + *(_DWORD *)v21;
        if ( v19 < v24 )
        {
          v25 = 0;
          v26 = v19;
          if ( v19 < v23 )
          {
            v26 = 8 * (*(_DWORD *)(v21 + 8) - qword_14043B5E8);
            v25 = 1;
          }
          if ( v20 >= v24 )
            v25 = 1;
          v27 = v24 - 1;
          if ( v20 < v24 )
            v27 = v20;
          RtlSetBits((PRTL_BITMAP)v21, v26 - v23, v27 - v26 + 1);
          if ( !v25 )
            break;
        }
      }
      v21 += 56LL;
    }
    return 0LL;
  }
LABEL_36:
  v30 = *(unsigned int *)(a1 + 52);
  LODWORD(v30) = v30 & 0x7FFFFFFF;
  if ( (v30 | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31)) < 0x7FFFFFFFDLL )
    PsReturnProcessNonPagedPoolQuota(a2, 136LL);
  if ( v3 )
    PsReturnProcessPagedPoolQuota(a2, v3);
  if ( v4 )
  {
    v31 = (ULONG_PTR *)MiGetProcessPartition((__int64)a2);
    if ( v31 == &MiSystemPartition )
      MiReturnResidentAvailable(v4);
    else
      MiReturnPartitionResidentAvailable((__int64)v31, v4);
  }
  return (unsigned int)v18;
}
