/*
 * XREFs of MiInsertVadCharges @ 0x14060BC90
 * Callers:
 *     MiDeletePartialVad @ 0x1400E74B8 (MiDeletePartialVad.c)
 *     MiMapViewOfImageSection @ 0x1405EAA40 (MiMapViewOfImageSection.c)
 *     MiReserveUserMemory @ 0x140609670 (MiReserveUserMemory.c)
 *     MiMapViewOfDataSection @ 0x14060AE10 (MiMapViewOfDataSection.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x14067F064 (MiAllocateNewSubAllocatedRegion.c)
 *     MiInsertProcessVads @ 0x14068598C (MiInsertProcessVads.c)
 *     MiMapLockedPagesInUserSpace @ 0x140713B18 (MiMapLockedPagesInUserSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x14077D4A4 (MiMapViewOfPhysicalSection.c)
 *     MiAllocateEnclaveVad @ 0x14089286C (MiAllocateEnclaveVad.c)
 *     MiInsertChildVads @ 0x14089ADD0 (MiInsertChildVads.c)
 * Callees:
 *     PspChargeQuota @ 0x14003A840 (PspChargeQuota.c)
 *     MiGetProcessPartition @ 0x1400524D8 (MiGetProcessPartition.c)
 *     MiVadPureReserve @ 0x140052AE0 (MiVadPureReserve.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x140059100 (PsReturnProcessNonPagedPoolQuota.c)
 *     PsReturnProcessPagedPoolQuota @ 0x14005B130 (PsReturnProcessPagedPoolQuota.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x14007326C (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x14007347C (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x1400734A0 (PsChargeProcessNonPagedPoolQuota.c)
 *     RtlSetBitsEx @ 0x140073620 (RtlSetBitsEx.c)
 *     MiChargeResident @ 0x1400CACB0 (MiChargeResident.c)
 *     MiReturnResidentAvailable @ 0x1400CEF50 (MiReturnResidentAvailable.c)
 *     MiReturnPartitionResidentAvailable @ 0x1402D96CC (MiReturnPartitionResidentAvailable.c)
 *     MiCommitPageTablesForVad @ 0x140605760 (MiCommitPageTablesForVad.c)
 *     MiResidentPagesForSpan @ 0x1406E43E0 (MiResidentPagesForSpan.c)
 *     MiComputeAweCharges @ 0x1408959F0 (MiComputeAweCharges.c)
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
  int v17; // ebp
  unsigned int v18; // ebp
  unsigned __int64 v19; // rsi
  unsigned __int64 v20; // rbx
  _KPROCESS *Process; // rcx
  __int64 v22; // rdi
  __int64 v23; // rax
  _QWORD *v24; // r9
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // r10
  int v27; // r14d
  __int64 v28; // rdx
  unsigned __int64 v29; // r8
  __int64 v30; // rax
  ULONG_PTR *ProcessPartition; // rax
  __int64 v32; // rcx
  ULONG_PTR *v33; // rax

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
    if ( (*(_DWORD *)(a1 + 48) & 0x100000) == 0 && !(unsigned int)MiVadPureReserve(a1) )
    {
      v3 = 8
         * ((*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32))
          - (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)))
         + 8;
      if ( a2 != PsInitialSystemProcess )
      {
        v12 = PspChargeQuota(a2[1].ActiveProcessors.Bitmap[3], (__int64)a2, 1, v3);
        if ( v12 < 0 )
        {
          PsReturnProcessNonPagedPoolQuota(a2, 136LL);
          return (unsigned int)v12;
        }
      }
    }
    v13 = *(_DWORD *)(a1 + 48) & 0x70;
    if ( v13 == 48 )
    {
      v30 = MiComputeAweCharges(a1, *(_QWORD *)(a1 + 8));
    }
    else
    {
      if ( v13 != 64 && v13 != 16 )
        goto LABEL_10;
      v30 = MiResidentPagesForSpan(v10, v8, 0LL);
    }
    v4 = v30;
    if ( v30 )
    {
      ProcessPartition = (ULONG_PTR *)MiGetProcessPartition((__int64)a2);
      if ( !(unsigned int)MiChargeResident(ProcessPartition, v4, 128LL) )
      {
        v4 = 0LL;
        v17 = -1073741670;
        goto LABEL_37;
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
        v17 = MiCommitPageTablesForVad(a1, v10, v8),
        UNLOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, (__int64)a2),
        v17 >= 0) )
  {
    v18 = 0;
    v19 = ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 28) | ((unsigned __int64)*(unsigned int *)(a1 + 24) >> 4);
    v20 = ((unsigned __int64)*(unsigned int *)(a1 + 28) >> 4) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 28);
    Process = KeGetCurrentThread()->ApcState.Process;
    v22 = *(_QWORD *)&Process[1].IdealNode[14] + 48LL;
    if ( *(_QWORD *)(*(_QWORD *)&Process[1].IdealNode[14] + 264LL) )
    {
      v23 = 0LL;
      do
      {
        v24 = (_QWORD *)(v22 + 72 * v23);
        v25 = 8 * (v24[1] - qword_140465BD8);
        if ( v20 >= v25 )
        {
          v26 = v25 + *v24;
          if ( v19 < v26 )
          {
            v27 = 0;
            v28 = v19;
            if ( v19 < v25 )
            {
              v28 = 8 * (v24[1] - qword_140465BD8);
              v27 = 1;
            }
            if ( v20 >= v26 )
              v27 = 1;
            v29 = v26 - 1;
            if ( v20 < v26 )
              v29 = v20;
            RtlSetBitsEx((__int64)v24, v28 - v25, v29 - v28 + 1);
            if ( !v27 )
              break;
          }
        }
        v23 = ++v18;
      }
      while ( (unsigned __int64)v18 < *(_QWORD *)(v22 + 216) );
    }
    return 0LL;
  }
LABEL_37:
  v32 = *(unsigned int *)(a1 + 52);
  LODWORD(v32) = v32 & 0x7FFFFFFF;
  if ( (v32 | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31)) < 0x7FFFFFFFDLL )
    PsReturnProcessNonPagedPoolQuota(a2, 136LL);
  if ( v3 )
    PsReturnProcessPagedPoolQuota(a2, v3);
  if ( v4 )
  {
    v33 = (ULONG_PTR *)MiGetProcessPartition((__int64)a2);
    if ( v33 == &MiSystemPartition )
      MiReturnResidentAvailable(v4);
    else
      MiReturnPartitionResidentAvailable((__int64)v33, v4);
  }
  return (unsigned int)v17;
}
