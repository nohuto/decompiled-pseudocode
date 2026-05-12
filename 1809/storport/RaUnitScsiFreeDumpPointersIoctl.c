/*
 * XREFs of RaUnitScsiFreeDumpPointersIoctl @ 0x1C0015ACC
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C0008FE4 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1C0002EFC (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterExecuteXrb @ 0x1C0002F58 (RaidAdapterExecuteXrb.c)
 *     StorFreeContiguousIoResources @ 0x1C0007F20 (StorFreeContiguousIoResources.c)
 *     StorAllocateContiguousIoResources @ 0x1C0007F4C (StorAllocateContiguousIoResources.c)
 *     RaidAllocateSrb @ 0x1C0008054 (RaidAllocateSrb.c)
 *     RaidAllocatePool @ 0x1C00081B4 (RaidAllocatePool.c)
 *     RaidXrbDeallocateResources @ 0x1C0008CA8 (RaidXrbDeallocateResources.c)
 *     RaidCompleteRequestEx @ 0x1C000CF10 (RaidCompleteRequestEx.c)
 *     RaidZeroXrb @ 0x1C000D868 (RaidZeroXrb.c)
 *     RaidSrbStatusToNtStatus @ 0x1C000DC5C (RaidSrbStatusToNtStatus.c)
 *     StorPortReleaseAdditionalCrashDumpArea @ 0x1C0015E9C (StorPortReleaseAdditionalCrashDumpArea.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C060 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002C3C0 (memset.c)
 *     WPP_SF_DD @ 0x1C003B9E4 (WPP_SF_DD.c)
 *     WPP_SF_qq @ 0x1C003BBF8 (WPP_SF_qq.c)
 */

__int64 __fastcall RaUnitScsiFreeDumpPointersIoctl(__int64 a1, IRP *a2)
{
  __int64 v2; // rbp
  _DWORD *v5; // r14
  __int64 v6; // r13
  __int64 v7; // rsi
  _BYTE *Srb; // rbx
  _BYTE *v9; // r12
  _IRP *MasterIrp; // rax
  __int64 v11; // rcx
  _MDL *MdlAddress; // r12
  _DWORD *Pool; // rax
  int v14; // edx
  __int64 ContiguousIoResources; // rax
  __int64 v16; // rdx
  int v17; // eax
  bool v18; // zf
  __int64 v19; // r8
  int v20; // eax
  __int64 v21; // r9
  __int64 v22; // rax
  void (__fastcall *v23)(_QWORD); // rdx
  unsigned int v24; // edi
  int v26; // eax
  __int64 v27; // rcx
  _BYTE *v28; // rax
  char v29; // [rsp+70h] [rbp+8h]
  _BYTE *v30; // [rsp+78h] [rbp+10h]
  _IRP *v31; // [rsp+80h] [rbp+18h]

  v2 = *(_QWORD *)(a1 + 24);
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  Srb = 0LL;
  v9 = 0LL;
  v30 = 0LL;
  v29 = 0;
  if ( a2->RequestorMode )
  {
    v24 = -1073741790;
    goto LABEL_26;
  }
  if ( a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options < 0x68 )
  {
    v24 = -1073741811;
    goto LABEL_26;
  }
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v31 = MasterIrp;
  if ( *(_DWORD *)&MasterIrp->Type != 4 )
  {
    v24 = -1073741735;
    goto LABEL_26;
  }
  v11 = *(_QWORD *)(a1 + 24);
  MdlAddress = MasterIrp->MdlAddress;
  if ( *(_BYTE *)(a1 + 1733) == 1 && v2 )
  {
    Pool = RaidAllocatePool(NonPagedPoolNx, 0x70uLL, 0x44436152u, *(_QWORD *)(a1 + 8));
    v5 = Pool;
    if ( !Pool )
    {
      v24 = -1073741670;
      v9 = 0LL;
      goto LABEL_26;
    }
    memset(Pool, 0, 0x70uLL);
    *v5 = 7340288;
    v5[14] = v31->AssociatedIrp.IrpCount;
    v5[18] = HIDWORD(MdlAddress->Process);
    v5[19] = MdlAddress->MappedSystemVa;
    v5[20] = MdlAddress->ByteCount;
    v5[21] = MdlAddress->ByteOffset;
    v5[22] = MdlAddress[1].Process;
    v5[23] = HIDWORD(MdlAddress[1].Process);
    *((_QWORD *)v5 + 12) = MdlAddress[1].MappedSystemVa;
    *((_BYTE *)v5 + 104) = MdlAddress[1].ByteCount;
    *((_BYTE *)v5 + 105) = BYTE2(MdlAddress[2].Next);
    *((_BYTE *)v5 + 106) = HIBYTE(MdlAddress[2].Size);
    *((_BYTE *)v5 + 107) = BYTE1(MdlAddress[2].Process);
    *((_QWORD *)v5 + 8) = MdlAddress[1].StartVa;
    Srb = RaidAllocateSrb(*(_QWORD *)(a1 + 8), 0x27u, BYTE2(MdlAddress[2].Process), 0);
    if ( !Srb
      || (ContiguousIoResources = StorAllocateContiguousIoResources(
                                    ((*(_DWORD *)(v2 + 460) + 7) & 0xFFFFFFF8) + 1088,
                                    v14,
                                    v2),
          (v6 = ContiguousIoResources) == 0) )
    {
      v24 = -1073741670;
      v9 = 0LL;
      goto LABEL_26;
    }
    v7 = ContiguousIoResources + 32;
    RaidZeroXrb(ContiguousIoResources + 32, v16, 0, 0LL);
    *(_QWORD *)(v7 + 176) = a2;
    *(_QWORD *)(v7 + 184) = v5;
    *(_QWORD *)(v7 + 168) = Srb;
    if ( BYTE2(MdlAddress[2].Process) == 1 )
    {
      *((_DWORD *)Srb + 6) = 256;
      v26 = *((_DWORD *)Srb + 6);
      *((_DWORD *)Srb + 5) = 39;
      *((_QWORD *)Srb + 8) = v5;
      *((_DWORD *)Srb + 15) = 112;
      v18 = *(_BYTE *)(v2 + 4514) == 0;
      *((_DWORD *)Srb + 10) = 10;
      if ( v18 )
        v26 = 128;
      *((_QWORD *)Srb + 10) = a2;
      v27 = *((unsigned int *)Srb + 13);
      *((_DWORD *)Srb + 6) = v26;
      *((_QWORD *)Srb + 13) = v6 + 1088;
      *((_QWORD *)Srb + 12) = v7;
      Srb[v27 + 8] = *(_BYTE *)(a1 + 96);
      Srb[v27 + 9] = *(_BYTE *)(a1 + 97);
      Srb[v27 + 10] = *(_BYTE *)(a1 + 98);
      v29 = 1;
      v30 = Srb;
    }
    else
    {
      *((_DWORD *)Srb + 3) = 256;
      *(_WORD *)Srb = 88;
      v17 = *((_DWORD *)Srb + 3);
      Srb[2] = 39;
      *((_QWORD *)Srb + 3) = v5;
      *((_DWORD *)Srb + 4) = 112;
      v18 = *(_BYTE *)(v2 + 4514) == 0;
      *((_DWORD *)Srb + 5) = 10;
      if ( v18 )
        v17 = 128;
      *((_DWORD *)Srb + 3) = v17;
      Srb[5] = *(_BYTE *)(a1 + 96);
      Srb[6] = *(_BYTE *)(a1 + 97);
      Srb[7] = *(_BYTE *)(a1 + 98);
      *((_QWORD *)Srb + 7) = v6 + 1088;
      *((_QWORD *)Srb + 6) = v7;
    }
    KeInitializeEvent((PRKEVENT)(v7 + 664), NotificationEvent, 0);
    *(_QWORD *)(v7 + 656) = RaidXrbSignalCompletion;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) )
    {
      WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 38LL, &WPP_d11a79b88e3f3e003d260997dd6ff069_Traceguids, v7, Srb);
    }
    if ( *(_BYTE *)(v2 + 4514) )
      v20 = RaidAdapterRaiseIrqlAndExecuteXrb(v2, v7);
    else
      v20 = RaidAdapterExecuteXrb(v2, (_QWORD *)v7, v19);
    v21 = (unsigned int)v20;
    if ( v20 >= 0 )
    {
      KeWaitForSingleObject((PVOID)(v7 + 664), Executive, 0, 0, 0LL);
      v21 = (unsigned int)RaidSrbStatusToNtStatus(Srb[3]);
    }
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) )
    {
      WPP_SF_DD(
        WPP_GLOBAL_Control->AttachedDevice,
        39LL,
        &WPP_d11a79b88e3f3e003d260997dd6ff069_Traceguids,
        v21,
        (unsigned __int8)Srb[3]);
    }
    v11 = *(_QWORD *)(a1 + 24);
  }
  v22 = v11;
  if ( *(_WORD *)(v11 + 5218) )
  {
    v23 = *(void (__fastcall **)(_QWORD))(v11 + 5240);
    if ( v23 )
    {
      v23(*(_QWORD *)(v11 + 5224));
      v22 = *(_QWORD *)(a1 + 24);
    }
  }
  StorPortReleaseAdditionalCrashDumpArea(v22 + 720, &MdlAddress->Process);
  ExFreePoolWithTag(v31->MdlAddress, 0x44436152u);
  memset(v31, 0, 0x68uLL);
  v9 = v30;
  a2->IoStatus.Information = 0LL;
  v24 = 0;
LABEL_26:
  if ( v6 )
  {
    RaidXrbDeallocateResources(v7, 0);
    StorFreeContiguousIoResources(v2, v6);
  }
  if ( Srb )
  {
    if ( v29 == 1 )
    {
      v28 = Srb;
      if ( v9 )
        v28 = v9;
      *((_QWORD *)v28 + 10) = 0LL;
      *((_QWORD *)v28 + 13) = 0LL;
    }
    else
    {
      *((_QWORD *)Srb + 6) = 0LL;
      *((_QWORD *)Srb + 7) = 0LL;
    }
    ExFreePoolWithTag(Srb, 0x72536152u);
  }
  if ( v5 )
    ExFreePoolWithTag(v5, 0x44436152u);
  return RaidCompleteRequestEx(a2, 0, v24);
}
