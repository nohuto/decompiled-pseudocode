/*
 * XREFs of ArbInitializeArbiterInstance @ 0x14073A30C
 * Callers:
 *     IopPortInitialize @ 0x140738B10 (IopPortInitialize.c)
 *     IopMemInitialize @ 0x140738BA8 (IopMemInitialize.c)
 *     IopDmaInitialize @ 0x140738C8C (IopDmaInitialize.c)
 *     IopIrqInitialize @ 0x140738D00 (IopIrqInitialize.c)
 *     IopBusNumberInitialize @ 0x140738D68 (IopBusNumberInitialize.c)
 * Callees:
 *     KeInitializeEvent @ 0x1400B8DB0 (KeInitializeEvent.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ArbBuildAssignmentOrdering @ 0x14073A628 (ArbBuildAssignmentOrdering.c)
 */

__int64 __fastcall ArbInitializeArbiterInstance(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  struct _KEVENT *PoolWithTag; // rax
  PVOID v10; // rax
  PVOID v11; // rax
  PVOID v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  struct _KEVENT *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  int v18; // edi
  void *v20; // rcx
  void *v21; // rcx
  void *v22; // rcx
  void *v23; // rcx
  void *v24; // rcx

  *(_DWORD *)a1 = 1935831617;
  *(_QWORD *)(a1 + 320) = 0LL;
  PoolWithTag = (struct _KEVENT *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x4D627241u);
  *(_QWORD *)(a1 + 8) = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_44;
  KeInitializeEvent(PoolWithTag, SynchronizationEvent, 1u);
  v10 = ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x41627241u);
  *(_QWORD *)(a1 + 112) = v10;
  if ( !v10 )
    goto LABEL_44;
  *(_DWORD *)(a1 + 104) = 4096;
  v11 = ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x52627241u);
  *(_QWORD *)(a1 + 40) = v11;
  if ( !v11 )
    goto LABEL_44;
  v12 = ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x52627241u);
  *(_QWORD *)(a1 + 48) = v12;
  if ( !v12 )
    goto LABEL_44;
  v13 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(v13 + 8) = v13;
  *(_QWORD *)v13 = v13;
  *(_QWORD *)(v13 + 16) = 0LL;
  *(_DWORD *)(v13 + 24) = 0;
  v14 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(v14 + 8) = v14;
  *(_QWORD *)v14 = v14;
  *(_QWORD *)(v14 + 16) = 0LL;
  *(_DWORD *)(v14 + 24) = 0;
  *(_BYTE *)(a1 + 296) = 0;
  v15 = (struct _KEVENT *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x4D627241u);
  *(_QWORD *)(a1 + 304) = v15;
  if ( v15 )
  {
    KeInitializeEvent(v15, NotificationEvent, 1u);
    *(_QWORD *)(a1 + 16) = a4;
    *(_QWORD *)(a1 + 24) = L"Root";
    *(_DWORD *)(a1 + 32) = a3;
    if ( !*(_QWORD *)(a1 + 152) )
      *(_QWORD *)(a1 + 152) = ArbTestAllocation;
    if ( !*(_QWORD *)(a1 + 160) )
      *(_QWORD *)(a1 + 160) = ArbRetestAllocation;
    if ( !*(_QWORD *)(a1 + 168) )
      *(_QWORD *)(a1 + 168) = ArbCommitAllocation;
    if ( !*(_QWORD *)(a1 + 176) )
      *(_QWORD *)(a1 + 176) = ArbRollbackAllocation;
    if ( !*(_QWORD *)(a1 + 208) )
      *(_QWORD *)(a1 + 208) = xHalAllocatePmcCounterSet;
    if ( !*(_QWORD *)(a1 + 224) )
      *(_QWORD *)(a1 + 224) = PopPowerAggregatorValidateModernStandbyCallback;
    if ( !*(_QWORD *)(a1 + 232) )
      *(_QWORD *)(a1 + 232) = ArbAllocateEntry;
    if ( !*(_QWORD *)(a1 + 240) )
      *(_QWORD *)(a1 + 240) = ArbGetNextAllocationRange;
    if ( !*(_QWORD *)(a1 + 248) )
      *(_QWORD *)(a1 + 248) = &ArbFindSuitableRange;
    if ( !*(_QWORD *)(a1 + 256) )
      *(_QWORD *)(a1 + 256) = ArbAddAllocation;
    if ( !*(_QWORD *)(a1 + 264) )
      *(_QWORD *)(a1 + 264) = ArbBacktrackAllocation;
    if ( !*(_QWORD *)(a1 + 272) )
      *(_QWORD *)(a1 + 272) = ArbOverrideConflict;
    if ( !*(_QWORD *)(a1 + 184) )
      *(_QWORD *)(a1 + 184) = ArbBootAllocation;
    if ( !*(_QWORD *)(a1 + 200) )
      *(_QWORD *)(a1 + 200) = ArbQueryConflict;
    if ( !*(_QWORD *)(a1 + 192) )
      *(_QWORD *)(a1 + 192) = PopPowerAggregatorValidateModernStandbyCallback;
    if ( !*(_QWORD *)(a1 + 216) )
      *(_QWORD *)(a1 + 216) = ArbStartArbiter;
    if ( !*(_QWORD *)(a1 + 280) )
      *(_QWORD *)(a1 + 280) = &ArbInitializeRangeList;
    if ( !*(_QWORD *)(a1 + 288) )
      *(_QWORD *)(a1 + 288) = ArbDeleteOwnerRanges;
    v18 = ArbBuildAssignmentOrdering(a1, v16, v17, a6);
    if ( v18 >= 0 )
      return 0LL;
  }
  else
  {
LABEL_44:
    v18 = -1073741670;
  }
  v20 = *(void **)(a1 + 8);
  if ( v20 )
    ExFreePoolWithTag(v20, 0);
  v21 = *(void **)(a1 + 304);
  if ( v21 )
    ExFreePoolWithTag(v21, 0);
  v22 = *(void **)(a1 + 40);
  if ( v22 )
    ExFreePoolWithTag(v22, 0);
  v23 = *(void **)(a1 + 48);
  if ( v23 )
    ExFreePoolWithTag(v23, 0);
  v24 = *(void **)(a1 + 112);
  if ( v24 )
    ExFreePoolWithTag(v24, 0);
  return (unsigned int)v18;
}
