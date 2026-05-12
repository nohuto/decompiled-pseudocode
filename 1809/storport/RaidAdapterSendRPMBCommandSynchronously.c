/*
 * XREFs of RaidAdapterSendRPMBCommandSynchronously @ 0x1C00399A4
 * Callers:
 *     RaidAdapterRpmbRequest @ 0x1C003928C (RaidAdapterRpmbRequest.c)
 * Callees:
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1C0002EFC (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterExecuteXrb @ 0x1C0002F58 (RaidAdapterExecuteXrb.c)
 *     RaidBuildMdlForXrb @ 0x1C0007904 (RaidBuildMdlForXrb.c)
 *     RaSrbSetMiniportContext @ 0x1C0007AA0 (RaSrbSetMiniportContext.c)
 *     StorFreeContiguousIoResources @ 0x1C0007F20 (StorFreeContiguousIoResources.c)
 *     StorAllocateContiguousIoResources @ 0x1C0007F4C (StorAllocateContiguousIoResources.c)
 *     RaidAllocateSrb @ 0x1C0008054 (RaidAllocateSrb.c)
 *     RaidAllocatePool @ 0x1C00081B4 (RaidAllocatePool.c)
 *     RaidXrbDeallocateResources @ 0x1C0008CA8 (RaidXrbDeallocateResources.c)
 *     RaidZeroXrb @ 0x1C000D868 (RaidZeroXrb.c)
 *     RaidSrbStatusToNtStatus @ 0x1C000DC5C (RaidSrbStatusToNtStatus.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C002255C (RaidAdapterPoFxIdleComponent.c)
 *     RaidAdapterPoFxActivateComponent @ 0x1C0022598 (RaidAdapterPoFxActivateComponent.c)
 *     memset @ 0x1C002C3C0 (memset.c)
 *     WPP_SF_qqq @ 0x1C003BD14 (WPP_SF_qqq.c)
 */

__int64 __fastcall RaidAdapterSendRPMBCommandSynchronously(__int64 a1, IRP *a2, char a3, void *a4, int a5)
{
  ULONG v7; // r13d
  unsigned int v8; // ebx
  _BYTE *v9; // r15
  __int64 v10; // rbp
  void *v11; // r12
  _BYTE *Srb; // rdi
  int v13; // edx
  __int64 ContiguousIoResources; // rax
  __int64 v15; // rdx
  int v16; // r14d
  char v17; // r14
  int v18; // ebx
  int v19; // ebx
  PVOID Pool; // rax
  __int64 v21; // r13
  _BYTE *v22; // r14
  IRP *v23; // rbx
  $4E55D33D032DE1F993C1B4560CF7AA38 *p_AssociatedIrp; // rcx
  __int64 v25; // rax
  __int16 v26; // ax
  __int64 v27; // r8
  int v28; // eax
  __int64 v30; // [rsp+80h] [rbp+8h]

  v7 = a5 << 9;
  v8 = (*(_DWORD *)(a1 + 460) + 7) & 0xFFFFFFF8;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  Srb = RaidAllocateSrb(*(_QWORD *)(a1 + 8), 0, *(_BYTE *)(a1 + 418), 0);
  ContiguousIoResources = StorAllocateContiguousIoResources(v8 + 1088, v13, a1);
  v30 = ContiguousIoResources;
  if ( !Srb || !ContiguousIoResources )
  {
    v21 = ContiguousIoResources;
    goto LABEL_42;
  }
  v10 = ContiguousIoResources + 32;
  RaidZeroXrb(ContiguousIoResources + 32, v15, 0, 0LL);
  v16 = RaidBuildMdlForXrb(v10, a4, v7);
  if ( v16 < 0 )
  {
    v21 = v30;
LABEL_43:
    v23 = a2;
    goto LABEL_44;
  }
  v17 = a3;
  if ( a3 == -94 )
  {
    v18 = 64;
  }
  else
  {
    v18 = 0;
    if ( a3 == -75 )
      v18 = 128;
  }
  v19 = v18 | 0x102;
  Pool = RaidAllocatePool(NonPagedPoolNx, 0xFFuLL, 0x4E536152u, *(_QWORD *)(a1 + 8));
  v11 = Pool;
  if ( !Pool )
  {
    v21 = v30;
LABEL_42:
    v16 = -1073741801;
    goto LABEL_43;
  }
  memset(Pool, 0, 0xFFuLL);
  if ( *(_BYTE *)(a1 + 418) == 1 )
  {
    v9 = Srb;
    v22 = &Srb[*((unsigned int *)Srb + 13)];
    *((_DWORD *)Srb + 5) = 0;
    *((_DWORD *)Srb + 8) = -1;
    *((_DWORD *)Srb + 6) = v19;
    *((_QWORD *)Srb + 8) = a4;
    *((_DWORD *)Srb + 15) = v7;
    *((_WORD *)Srb + 18) = IoGetIoPriorityHint(a2);
    *((_DWORD *)Srb + 10) = *(_DWORD *)(a1 + 4268);
    *((_QWORD *)Srb + 10) = a2;
    *((_QWORD *)Srb + 12) = v10;
    if ( *(_WORD *)(a1 + 5728) == 1 )
    {
      v22[8] = *(_BYTE *)(a1 + 5736);
      v22[9] = *(_BYTE *)(a1 + 5737);
      v22[10] = *(_BYTE *)(a1 + 5738);
    }
    v17 = a3;
    *(_QWORD *)(v10 + 168) = Srb;
    *(_QWORD *)(v10 + 184) = *((_QWORD *)Srb + 8);
    *(_QWORD *)(v10 + 176) = *((_QWORD *)Srb + 12);
    v23 = (IRP *)&Srb[*((unsigned int *)Srb + 30)];
    *(_DWORD *)&v23->Type = 64;
    p_AssociatedIrp = &v23->AssociatedIrp;
    *(_DWORD *)(&v23->Size + 1) = 32;
    *(_WORD *)((char *)&v23->MdlAddress + 1) = 3327;
    *(_QWORD *)&v23->Flags = v11;
  }
  else
  {
    Srb[2] = 0;
    *(_WORD *)Srb = 88;
    *((_QWORD *)Srb + 3) = a4;
    *((_DWORD *)Srb + 3) = v19;
    Srb[8] = -1;
    *((_DWORD *)Srb + 4) = v7;
    *((_DWORD *)Srb + 5) = *(_DWORD *)(a1 + 4268);
    Srb[11] = -1;
    *((_QWORD *)Srb + 4) = v11;
    *((_QWORD *)Srb + 6) = v10;
    if ( *(_WORD *)(a1 + 5728) == 1 )
    {
      Srb[5] = *(_BYTE *)(a1 + 5736);
      Srb[6] = *(_BYTE *)(a1 + 5737);
      Srb[7] = *(_BYTE *)(a1 + 5738);
    }
    p_AssociatedIrp = ($4E55D33D032DE1F993C1B4560CF7AA38 *)(Srb + 72);
    *(_QWORD *)(v10 + 168) = Srb;
    v25 = *((_QWORD *)Srb + 3);
    *(_QWORD *)(v10 + 176) = a2;
    v23 = a2;
    *(_QWORD *)(v10 + 184) = v25;
    Srb[10] = 12;
  }
  if ( Srb[2] == 40 )
    *((_WORD *)Srb + 19) = 32;
  else
    Srb[9] = 32;
  LOBYTE(p_AssociatedIrp->MasterIrp) = v17;
  BYTE1(p_AssociatedIrp->MasterIrp) = *(_BYTE *)(a1 + 5720);
  v26 = *(_WORD *)(a1 + 5722);
  *(_DWORD *)((char *)&p_AssociatedIrp->SystemBuffer + 6) = _byteswap_ulong(v7);
  v21 = v30;
  HIWORD(p_AssociatedIrp->IrpCount) = __ROR2__(v26, 8);
  RaSrbSetMiniportContext(a1, (__int64)Srb, v30 + 1088);
  KeInitializeEvent((PRKEVENT)(v10 + 664), NotificationEvent, 0);
  *(_QWORD *)(v10 + 656) = RaidXrbSignalCompletion;
  if ( *(_QWORD *)(a1 + 5152) )
    RaidAdapterPoFxActivateComponent(a1, 0LL, 1LL);
  if ( *(_BYTE *)(a1 + 418) == 1 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      WPP_SF_qqq(
        WPP_GLOBAL_Control->AttachedDevice,
        68LL,
        &WPP_2427d071e20036a288b852fd33055616_Traceguids,
        v10,
        v9,
        *((_QWORD *)v9 + 13));
    }
  }
  else if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqq(
      WPP_GLOBAL_Control->AttachedDevice,
      69LL,
      &WPP_2427d071e20036a288b852fd33055616_Traceguids,
      v10,
      Srb,
      *((_QWORD *)Srb + 7));
  }
  if ( *(_BYTE *)(a1 + 4514) )
    v28 = RaidAdapterRaiseIrqlAndExecuteXrb(a1, v10);
  else
    v28 = RaidAdapterExecuteXrb(a1, (_QWORD *)v10, v27);
  v16 = v28;
  if ( v28 >= 0 )
  {
    KeWaitForSingleObject((PVOID)(v10 + 664), Executive, 0, 0, 0LL);
    v16 = RaidSrbStatusToNtStatus(Srb[3]);
  }
  if ( (*(_BYTE *)(v10 + 17) & 1) != 0 )
  {
    RaidAdapterPoFxIdleComponent(a1, *(unsigned int *)(v10 + 748), 0LL);
    *(_BYTE *)(v10 + 17) &= ~1u;
  }
  if ( *(_QWORD *)(a1 + 5152) )
    RaidAdapterPoFxIdleComponent(a1, 0LL, 0LL);
LABEL_44:
  if ( v21 )
  {
    RaidXrbDeallocateResources(v10, 0);
    StorFreeContiguousIoResources(a1, v21);
  }
  if ( v11 )
    ExFreePoolWithTag(v11, 0x4E536152u);
  if ( Srb )
  {
    if ( *(_BYTE *)(a1 + 418) == 1 )
    {
      if ( !v9 )
        v9 = Srb;
      *((_QWORD *)v9 + 10) = 0LL;
      *((_QWORD *)v9 + 13) = 0LL;
      if ( v23 )
        *(_QWORD *)&v23->Flags = 0LL;
    }
    else
    {
      *((_QWORD *)Srb + 6) = 0LL;
      *((_QWORD *)Srb + 7) = 0LL;
      *((_QWORD *)Srb + 4) = 0LL;
    }
    ExFreePoolWithTag(Srb, 0x72536152u);
  }
  return (unsigned int)v16;
}
