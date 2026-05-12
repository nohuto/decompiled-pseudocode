/*
 * XREFs of RaUnitScsiFreeDumpPointersIoctl @ 0x1C0010EBC
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C0007604 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1C0003494 (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterExecuteXrb @ 0x1C00034F0 (RaidAdapterExecuteXrb.c)
 *     StorFreeContiguousIoResources @ 0x1C00064A0 (StorFreeContiguousIoResources.c)
 *     StorAllocateContiguousIoResources @ 0x1C00064CC (StorAllocateContiguousIoResources.c)
 *     RaidAllocateSrb @ 0x1C00066A0 (RaidAllocateSrb.c)
 *     RaidAllocatePool @ 0x1C0006800 (RaidAllocatePool.c)
 *     RaidXrbDeallocateResources @ 0x1C0007A94 (RaidXrbDeallocateResources.c)
 *     RaidCompleteRequestEx @ 0x1C000A830 (RaidCompleteRequestEx.c)
 *     RaidZeroXrb @ 0x1C000B5D4 (RaidZeroXrb.c)
 *     RaidSrbStatusToNtStatus @ 0x1C000B988 (RaidSrbStatusToNtStatus.c)
 *     StorPortReleaseAdditionalCrashDumpArea @ 0x1C00112A0 (StorPortReleaseAdditionalCrashDumpArea.c)
 *     _guard_dispatch_icall_nop @ 0x1C00234D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0023840 (memset.c)
 *     WPP_SF_DD @ 0x1C00378AC (WPP_SF_DD.c)
 *     WPP_SF_qq @ 0x1C0037AC0 (WPP_SF_qq.c)
 */

__int64 __fastcall RaUnitScsiFreeDumpPointersIoctl(__int64 a1, IRP *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  __int64 v5; // r8
  _DWORD *v8; // r15
  __int64 v9; // r12
  __int64 v10; // rsi
  _BYTE *Srb; // rbx
  _BYTE *v12; // r14
  _IRP *MasterIrp; // rcx
  _LIST_ENTRY *Blink; // r14
  char *Pool; // rax
  __int64 v16; // r14
  int v17; // edx
  __int64 ContiguousIoResources; // rax
  __int64 v19; // rdx
  int v20; // eax
  bool v21; // zf
  __int64 v22; // r8
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rax
  void (__fastcall *v26)(_QWORD, _QWORD, _QWORD, __int64); // rdx
  unsigned int v27; // edi
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *v30; // rcx
  int v31; // eax
  __int64 v32; // rcx
  _BYTE *v33; // rax
  char v34; // [rsp+80h] [rbp+8h]
  _BYTE *v35; // [rsp+88h] [rbp+10h]
  __int64 p_Process; // [rsp+90h] [rbp+18h]
  _IRP *v37; // [rsp+98h] [rbp+20h]

  v4 = *(_QWORD *)(a1 + 24);
  v5 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  Srb = 0LL;
  v12 = 0LL;
  v35 = 0LL;
  v34 = 0;
  if ( a2->RequestorMode )
  {
    v27 = -1073741790;
    goto LABEL_26;
  }
  if ( a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options < 0x68 )
  {
    v27 = -1073741811;
    goto LABEL_26;
  }
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v37 = MasterIrp;
  if ( *(_DWORD *)&MasterIrp->Type != 4 )
  {
    v27 = -1073741735;
    goto LABEL_26;
  }
  Blink = MasterIrp->ThreadListEntry.Blink;
  p_Process = (__int64)&MasterIrp->MdlAddress->Process;
  if ( Blink )
  {
    do
    {
      Flink = Blink->Flink;
      if ( !Blink->Flink )
      {
        v30 = Blink[5].Flink;
        Flink = 0LL;
        if ( v30 )
        {
          ExFreePoolWithTag(v30, 0);
          Blink[4].Blink = 0LL;
          v5 = 0LL;
          Blink[5].Flink = 0LL;
          Flink = Blink->Flink;
        }
      }
      Blink = Flink;
    }
    while ( Flink );
  }
  if ( *(_BYTE *)(a1 + 1477) == 1 && v4 )
  {
    Pool = (char *)RaidAllocatePool(NonPagedPoolNx, 0x70uLL, 0x44436152u, *(_QWORD *)(a1 + 8));
    v8 = Pool;
    if ( !Pool )
    {
      v27 = -1073741670;
      v12 = 0LL;
      goto LABEL_26;
    }
    memset(Pool + 4, 0, 0x6CuLL);
    v16 = p_Process;
    *v8 = 7340288;
    v8[14] = v37->AssociatedIrp.IrpCount;
    v8[18] = *(_DWORD *)(p_Process + 4);
    v8[19] = *(_DWORD *)(p_Process + 8);
    v8[20] = *(_DWORD *)(p_Process + 24);
    v8[21] = *(_DWORD *)(p_Process + 28);
    v8[22] = *(_DWORD *)(p_Process + 48);
    v8[23] = *(_DWORD *)(p_Process + 52);
    *((_QWORD *)v8 + 12) = *(_QWORD *)(p_Process + 56);
    *((_BYTE *)v8 + 104) = *(_BYTE *)(p_Process + 72);
    *((_BYTE *)v8 + 105) = *(_BYTE *)(p_Process + 82);
    *((_BYTE *)v8 + 106) = *(_BYTE *)(p_Process + 89);
    *((_BYTE *)v8 + 107) = *(_BYTE *)(p_Process + 97);
    *((_QWORD *)v8 + 8) = *(_QWORD *)(p_Process + 64);
    Srb = RaidAllocateSrb(*(_QWORD *)(a1 + 8), 0x27u, *(_BYTE *)(p_Process + 98), 0);
    if ( !Srb
      || (ContiguousIoResources = StorAllocateContiguousIoResources(
                                    ((*(_DWORD *)(v4 + 444) + 7) & 0xFFFFFFF8) + 1088,
                                    v17,
                                    v4),
          (v9 = ContiguousIoResources) == 0) )
    {
      v27 = -1073741670;
      v12 = 0LL;
      goto LABEL_26;
    }
    v10 = ContiguousIoResources + 32;
    RaidZeroXrb(ContiguousIoResources + 32, v19, 0, 0LL);
    *(_QWORD *)(v10 + 176) = a2;
    *(_QWORD *)(v10 + 184) = v8;
    *(_QWORD *)(v10 + 168) = Srb;
    if ( *(_BYTE *)(p_Process + 98) == 1 )
    {
      *((_DWORD *)Srb + 6) = 256;
      v31 = *((_DWORD *)Srb + 6);
      *((_DWORD *)Srb + 5) = 39;
      *((_QWORD *)Srb + 8) = v8;
      *((_DWORD *)Srb + 15) = 112;
      v21 = *(_BYTE *)(v4 + 4450) == 0;
      *((_DWORD *)Srb + 10) = 10;
      if ( v21 )
        v31 = 128;
      *((_QWORD *)Srb + 10) = a2;
      v32 = *((unsigned int *)Srb + 13);
      *((_DWORD *)Srb + 6) = v31;
      *((_QWORD *)Srb + 13) = v9 + 1088;
      *((_QWORD *)Srb + 12) = v10;
      Srb[v32 + 8] = *(_BYTE *)(a1 + 96);
      Srb[v32 + 9] = *(_BYTE *)(a1 + 97);
      Srb[v32 + 10] = *(_BYTE *)(a1 + 98);
      v34 = 1;
      v35 = Srb;
    }
    else
    {
      *((_DWORD *)Srb + 3) = 256;
      *(_WORD *)Srb = 88;
      v20 = *((_DWORD *)Srb + 3);
      Srb[2] = 39;
      *((_QWORD *)Srb + 3) = v8;
      *((_DWORD *)Srb + 4) = 112;
      v21 = *(_BYTE *)(v4 + 4450) == 0;
      *((_DWORD *)Srb + 5) = 10;
      if ( v21 )
        v20 = 128;
      *((_DWORD *)Srb + 3) = v20;
      Srb[5] = *(_BYTE *)(a1 + 96);
      Srb[6] = *(_BYTE *)(a1 + 97);
      Srb[7] = *(_BYTE *)(a1 + 98);
      *((_QWORD *)Srb + 7) = v9 + 1088;
      *((_QWORD *)Srb + 6) = v10;
    }
    KeInitializeEvent((PRKEVENT)(v10 + 664), NotificationEvent, 0);
    *(_QWORD *)(v10 + 656) = RaidXrbSignalCompletion;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) )
    {
      WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 35LL, &WPP_a32982da72aa344f3768c69018313f42_Traceguids, v10, Srb);
    }
    if ( *(_BYTE *)(v4 + 4450) )
      v23 = RaidAdapterRaiseIrqlAndExecuteXrb(v4, v10);
    else
      v23 = RaidAdapterExecuteXrb(v4, (_QWORD *)v10, v22);
    v5 = 0LL;
    a4 = (unsigned int)v23;
    if ( v23 >= 0 )
    {
      KeWaitForSingleObject((PVOID)(v10 + 664), Executive, 0, 0, 0LL);
      a4 = (unsigned int)RaidSrbStatusToNtStatus(Srb[3]);
      v5 = 0LL;
    }
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) )
    {
      WPP_SF_DD(
        WPP_GLOBAL_Control->AttachedDevice,
        36LL,
        &WPP_a32982da72aa344f3768c69018313f42_Traceguids,
        a4,
        (unsigned __int8)Srb[3]);
      v5 = 0LL;
    }
  }
  else
  {
    v16 = p_Process;
  }
  v24 = *(_QWORD *)(a1 + 24);
  v25 = v24;
  if ( *(_WORD *)(v24 + 5090) )
  {
    v26 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v24 + 5112);
    if ( v26 )
    {
      v26(*(_QWORD *)(v24 + 5096), v26, 0LL, a4);
      v25 = *(_QWORD *)(a1 + 24);
    }
  }
  StorPortReleaseAdditionalCrashDumpArea(v25 + 696, v16, v5, a4);
  ExFreePoolWithTag(v37->MdlAddress, 0x44436152u);
  memset(v37, 0, 0x68uLL);
  v12 = v35;
  a2->IoStatus.Information = 0LL;
  v27 = 0;
LABEL_26:
  if ( v9 )
  {
    RaidXrbDeallocateResources(v10, 0);
    StorFreeContiguousIoResources(v4, v9);
  }
  if ( Srb )
  {
    if ( v34 == 1 )
    {
      v33 = Srb;
      if ( v12 )
        v33 = v12;
      *((_QWORD *)v33 + 10) = 0LL;
      *((_QWORD *)v33 + 13) = 0LL;
    }
    else
    {
      *((_QWORD *)Srb + 6) = 0LL;
      *((_QWORD *)Srb + 7) = 0LL;
    }
    ExFreePoolWithTag(Srb, 0x72536152u);
  }
  if ( v8 )
    ExFreePoolWithTag(v8, 0x44436152u);
  return RaidCompleteRequestEx(a2, 0, v27);
}
