/*
 * XREFs of MiRemoveVadCharges @ 0x1405ED820
 * Callers:
 *     MiFinishVadDeletion @ 0x140067760 (MiFinishVadDeletion.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x140022D18 (MiReturnResidentAvailable.c)
 *     MiGetProcessPartition @ 0x14004D19C (MiGetProcessPartition.c)
 *     MiGetSharedVm @ 0x140064D20 (MiGetSharedVm.c)
 *     MiReturnCommit @ 0x140065D30 (MiReturnCommit.c)
 *     MiGetVadWakeList @ 0x140068260 (MiGetVadWakeList.c)
 *     MiFreePhysicalView @ 0x1400684D8 (MiFreePhysicalView.c)
 *     MiFillCommitReturnInfo @ 0x140068540 (MiFillCommitReturnInfo.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x140068560 (PsReturnProcessNonPagedPoolQuota.c)
 *     MiIsVadLarge @ 0x140070D80 (MiIsVadLarge.c)
 *     MiReturnFullProcessCharges @ 0x14007FF00 (MiReturnFullProcessCharges.c)
 *     MiDereferenceControlArea @ 0x14013B67C (MiDereferenceControlArea.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     MiReturnPartitionResidentAvailable @ 0x1402C0230 (MiReturnPartitionResidentAvailable.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     MiResidentPagesForSpan @ 0x1406C45D0 (MiResidentPagesForSpan.c)
 *     MiComputeAweCharges @ 0x140850AB0 (MiComputeAweCharges.c)
 */

void __fastcall MiRemoveVadCharges(__int64 a1, struct _KPROCESS *a2, __int64 a3)
{
  __int64 v6; // r14
  BOOL v7; // ebp
  ULONG_PTR *ProcessPartition; // r15
  __int64 v9; // r8
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  LONG *SharedVm; // rax
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  __int64 *v15; // rdx
  __int64 *v16; // rax
  __int64 v17; // r8
  __int64 *v18; // rdi
  __int64 *v19; // rax
  __int64 v20; // r8
  __int64 *v21; // rdi
  __int64 *v22; // rax
  __int64 v23; // r8
  __int64 *v24; // rdi
  __int64 *v25; // rax
  __int64 *v26; // rdi
  int v27; // eax
  __int64 *VadWakeList; // rax
  __int64 *v29; // rdi
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rdx
  __int64 v32; // rcx
  unsigned __int64 v33; // rbx
  void *v34; // rcx
  void *v35; // rcx
  __int64 v36; // r14
  __int64 v37; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v38; // [rsp+28h] [rbp-50h]
  _QWORD v39[6]; // [rsp+30h] [rbp-48h] BYREF

  memset(v39, 0, 0x28uLL);
  v6 = 0LL;
  v7 = 0;
  ProcessPartition = (ULONG_PTR *)MiGetProcessPartition((__int64)a2);
  if ( (unsigned int)MiIsVadLarge(a1) )
    v7 = (*(_BYTE *)(a1 + 48) & 7) != 7;
  v10 = *(unsigned int *)(a1 + 52);
  LODWORD(v10) = v10 & 0x7FFFFFFF;
  v11 = v10 | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31);
  if ( v11 < 0x7FFFFFFFDLL )
  {
    v39[1] = *(_QWORD *)(a1 + 8);
    v39[2] = *(_QWORD *)a1;
    MiFillCommitReturnInfo(v11, (__int64)v39, &v37);
    if ( v37 )
      MiReturnFullProcessCharges((__int64)a2, v37);
    if ( v38 )
    {
      SharedVm = MiGetSharedVm((__int64)&a2[1].IdealNode[12]);
      v14 = *((_QWORD *)SharedVm + 1);
      if ( v14 )
      {
        if ( v13 <= v14 )
        {
          *((_QWORD *)SharedVm + 1) = v14 - v13;
          goto LABEL_10;
        }
        v13 -= v14;
        *((_QWORD *)SharedVm + 1) = 0LL;
        v38 = v13;
      }
      if ( v13 )
        MiReturnCommit((__int64)ProcessPartition, v13);
    }
  }
LABEL_10:
  v15 = (__int64 *)((*(_DWORD *)(a1 + 48) >> 26) & 2);
  if ( v7 )
    v15 = (__int64 *)((unsigned int)v15 | 0x10);
  if ( (_DWORD)v15 )
  {
    VadWakeList = MiGetVadWakeList(a1, v15, v9);
    if ( VadWakeList )
    {
      do
      {
        v29 = (__int64 *)*VadWakeList;
        ExFreePoolWithTag(VadWakeList, 0);
        VadWakeList = v29;
      }
      while ( v29 );
    }
  }
  v16 = MiGetVadWakeList(a1, (__int64 *)8, v9);
  v18 = v16;
  if ( v16 )
  {
    v34 = (void *)v16[1];
    if ( v34 )
      ExFreePoolWithTag(v34, 0);
    ExFreePoolWithTag(v18, 0);
    PsReturnProcessNonPagedPoolQuota(KeGetCurrentThread()->ApcState.Process, 520LL);
  }
  v19 = MiGetVadWakeList(a1, (__int64 *)4, v17);
  v21 = v19;
  if ( v19 )
  {
    v30 = v19[1];
    LOBYTE(v6) = (v30 & 0x3F) != 0;
    PsReturnProcessNonPagedPoolQuota(a2, 8 * ((v30 >> 6) + v6 + 9));
    ExFreePoolWithTag(v21, 0);
  }
  v22 = MiGetVadWakeList(a1, (__int64 *)0x40, v20);
  v24 = v22;
  if ( v22 )
  {
    v31 = v22[1];
    v32 = 9LL;
    if ( (v31 & 0x3F) != 0 )
      v32 = 10LL;
    PsReturnProcessNonPagedPoolQuota(a2, 8 * (v32 + (v31 >> 6)));
    ExFreePoolWithTag(v24, 0);
  }
  v25 = MiGetVadWakeList(a1, (__int64 *)0x80, v23);
  v26 = v25;
  if ( v25 )
  {
    v35 = (void *)v25[1];
    v36 = 72LL;
    if ( v35 )
    {
      v36 = 136LL;
      ExFreePoolWithTag(v35, 0);
    }
    ExFreePoolWithTag(v26, 0);
    PsReturnProcessNonPagedPoolQuota(KeGetCurrentThread()->ApcState.Process, v36);
  }
  MiFreePhysicalView((__int64)a2, a1);
  if ( v7 )
    _InterlockedExchangeAdd64(
      (volatile signed __int64 *)&a2[2].Affinity.Bitmap[7],
      (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32))
    - (*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32))
    - 1);
  v27 = *(_DWORD *)(a1 + 48) & 7;
  if ( v27 == 3 )
  {
    v33 = MiComputeAweCharges(a1, a3);
    if ( a3 && (*(_DWORD *)a3 & 1) == 0 )
      MiDereferenceControlArea(*(_QWORD *)(a3 + 32));
  }
  else
  {
    if ( v27 != 6 && v27 != 1 )
      return;
    v33 = MiResidentPagesForSpan(
            (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) << 12,
            ((*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) << 12) | 0xFFF,
            0LL);
  }
  if ( v33 )
  {
    if ( ProcessPartition == &MiSystemPartition )
      MiReturnResidentAvailable(v33);
    else
      MiReturnPartitionResidentAvailable((__int64)ProcessPartition, v33);
  }
}
