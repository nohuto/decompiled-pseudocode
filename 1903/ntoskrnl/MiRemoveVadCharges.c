/*
 * XREFs of MiRemoveVadCharges @ 0x140605D80
 * Callers:
 *     MiFinishVadDeletion @ 0x140056B50 (MiFinishVadDeletion.c)
 * Callees:
 *     MiReturnFullProcessCharges @ 0x14001F9A0 (MiReturnFullProcessCharges.c)
 *     MiGetProcessPartition @ 0x140052438 (MiGetProcessPartition.c)
 *     MiGetVadWakeList @ 0x1400573D0 (MiGetVadWakeList.c)
 *     MiFreePhysicalView @ 0x140057630 (MiFreePhysicalView.c)
 *     MiFillCommitReturnInfo @ 0x1400576C0 (MiFillCommitReturnInfo.c)
 *     MiVadCommitCrossPartition @ 0x1400576D8 (MiVadCommitCrossPartition.c)
 *     MiIsVadLarge @ 0x140057700 (MiIsVadLarge.c)
 *     MiReturnCommit @ 0x140058F90 (MiReturnCommit.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x140059060 (PsReturnProcessNonPagedPoolQuota.c)
 *     MiGetSharedVm @ 0x140072C10 (MiGetSharedVm.c)
 *     MiReturnResidentAvailable @ 0x140091BF0 (MiReturnResidentAvailable.c)
 *     MiDereferenceControlArea @ 0x14013D0CC (MiDereferenceControlArea.c)
 *     MiReturnPartitionResidentAvailable @ 0x1402D996C (MiReturnPartitionResidentAvailable.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MiResidentPagesForSpan @ 0x1406E2F40 (MiResidentPagesForSpan.c)
 *     MiComputeAweCharges @ 0x1408961D0 (MiComputeAweCharges.c)
 */

void __fastcall MiRemoveVadCharges(__int64 a1, struct _KPROCESS *a2, __int64 a3)
{
  __int64 v3; // rsi
  ULONG_PTR *ProcessPartition; // r15
  int v8; // r14d
  int v9; // edx
  __int64 v10; // r8
  __int64 v11; // rcx
  unsigned __int64 v12; // r9
  __int64 *v13; // rdx
  __int64 *v14; // rax
  __int64 v15; // r8
  __int64 *v16; // rdi
  __int64 *v17; // rax
  __int64 v18; // r8
  __int64 *v19; // rdi
  __int64 *v20; // rax
  __int64 v21; // r8
  __int64 *v22; // rdi
  __int64 *v23; // rax
  __int64 *v24; // rdi
  int v25; // eax
  LONG *SharedVm; // rax
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rcx
  __int64 *VadWakeList; // rax
  __int64 *v30; // rdi
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // rdx
  __int64 v33; // rcx
  unsigned __int64 v34; // rbx
  void *v35; // rcx
  void *v36; // rcx
  __int64 v37; // rsi
  __int64 v38; // rax
  __int64 v39; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v40; // [rsp+28h] [rbp-50h]
  _QWORD v41[3]; // [rsp+30h] [rbp-48h] BYREF
  __int128 v42; // [rsp+48h] [rbp-30h]
  __int64 v43; // [rsp+58h] [rbp-20h]

  v3 = 0LL;
  v41[0] = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  ProcessPartition = (ULONG_PTR *)MiGetProcessPartition((__int64)a2);
  v8 = 0;
  if ( (unsigned int)MiIsVadLarge(a1) && (*(_BYTE *)(a1 + 48) & 0x70) != 0x50 )
  {
    v8 = 1;
    v9 = MiVadCommitCrossPartition(a1);
  }
  v11 = *(unsigned int *)(a1 + 52);
  LODWORD(v11) = v11 & 0x7FFFFFFF;
  v12 = v11 | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31);
  if ( v12 < 0x7FFFFFFFDLL && !v9 )
  {
    v41[1] = *(_QWORD *)(a1 + 8);
    v41[2] = *(_QWORD *)a1;
    MiFillCommitReturnInfo(v12, (__int64)v41, &v39);
    if ( v39 )
      MiReturnFullProcessCharges((__int64)a2, v39);
    if ( v40 )
    {
      SharedVm = MiGetSharedVm((__int64)&a2[1].IdealNode[6]);
      v28 = *((_QWORD *)SharedVm + 1);
      if ( v28 )
      {
        if ( v27 <= v28 )
        {
          *((_QWORD *)SharedVm + 1) = v28 - v27;
          goto LABEL_7;
        }
        v27 -= v28;
        *((_QWORD *)SharedVm + 1) = 0LL;
        v40 = v27;
      }
      if ( v27 )
        MiReturnCommit((__int64)ProcessPartition, v27);
    }
  }
LABEL_7:
  v13 = (__int64 *)((*(_DWORD *)(a1 + 48) >> 2) & 2);
  if ( v8 )
    v13 = (__int64 *)((unsigned int)v13 | 0x10);
  if ( (_DWORD)v13 )
  {
    VadWakeList = MiGetVadWakeList(a1, v13, v10);
    if ( VadWakeList )
    {
      do
      {
        v30 = (__int64 *)*VadWakeList;
        ExFreePoolWithTag(VadWakeList, 0);
        VadWakeList = v30;
      }
      while ( v30 );
    }
  }
  v14 = MiGetVadWakeList(a1, (__int64 *)8, v10);
  v16 = v14;
  if ( v14 )
  {
    v35 = (void *)v14[1];
    if ( v35 )
      ExFreePoolWithTag(v35, 0);
    ExFreePoolWithTag(v16, 0);
    PsReturnProcessNonPagedPoolQuota(KeGetCurrentThread()->ApcState.Process, 520LL);
  }
  v17 = MiGetVadWakeList(a1, (__int64 *)4, v15);
  v19 = v17;
  if ( v17 )
  {
    v31 = v17[1];
    LOBYTE(v3) = (v31 & 0x3F) != 0;
    PsReturnProcessNonPagedPoolQuota(a2, 8 * ((v31 >> 6) + v3 + 9));
    ExFreePoolWithTag(v19, 0);
  }
  v20 = MiGetVadWakeList(a1, (__int64 *)0x40, v18);
  v22 = v20;
  if ( v20 )
  {
    v32 = v20[1];
    v33 = 9LL;
    if ( (v32 & 0x3F) != 0 )
      v33 = 10LL;
    PsReturnProcessNonPagedPoolQuota(a2, 8 * (v33 + (v32 >> 6)));
    ExFreePoolWithTag(v22, 0);
  }
  v23 = MiGetVadWakeList(a1, (__int64 *)0x80, v21);
  v24 = v23;
  if ( v23 )
  {
    v36 = (void *)v23[1];
    v37 = 72LL;
    if ( v36 )
    {
      v37 = 136LL;
      ExFreePoolWithTag(v36, 0);
    }
    ExFreePoolWithTag(v24, 0);
    PsReturnProcessNonPagedPoolQuota(KeGetCurrentThread()->ApcState.Process, v37);
  }
  MiFreePhysicalView((__int64)a2, a1);
  if ( v8 )
  {
    v38 = *(unsigned int *)(a1 + 52);
    LODWORD(v38) = v38 & 0x7FFFFFFF;
    _InterlockedExchangeAdd64((volatile signed __int64 *)&a2[2].Affinity.Bitmap[11], -v38);
  }
  v25 = *(_DWORD *)(a1 + 48) & 0x70;
  if ( v25 == 48 )
  {
    v34 = MiComputeAweCharges(a1, a3);
    if ( a3 && (*(_DWORD *)a3 & 1) == 0 )
      MiDereferenceControlArea(*(_QWORD *)(a3 + 32));
  }
  else
  {
    if ( v25 != 64 && v25 != 16 )
      return;
    v34 = MiResidentPagesForSpan(
            (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) << 12,
            ((*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) << 12) | 0xFFF,
            0LL);
  }
  if ( v34 )
  {
    if ( ProcessPartition == &MiSystemPartition )
      MiReturnResidentAvailable(v34);
    else
      MiReturnPartitionResidentAvailable((__int64)ProcessPartition, v34);
  }
}
