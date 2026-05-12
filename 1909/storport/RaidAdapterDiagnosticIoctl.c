/*
 * XREFs of RaidAdapterDiagnosticIoctl @ 0x1C0073120
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x1C0006DB4 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1C0003484 (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterExecuteXrb @ 0x1C00034E0 (RaidAdapterExecuteXrb.c)
 *     RaSrbSetMiniportContext @ 0x1C0006130 (RaSrbSetMiniportContext.c)
 *     StorFreeContiguousIoResources @ 0x1C00064F0 (StorFreeContiguousIoResources.c)
 *     StorAllocateContiguousIoResources @ 0x1C000651C (StorAllocateContiguousIoResources.c)
 *     RaidAllocateSrb @ 0x1C00066F0 (RaidAllocateSrb.c)
 *     RaidAllocatePool @ 0x1C0006850 (RaidAllocatePool.c)
 *     RaidXrbDeallocateResources @ 0x1C0007AE4 (RaidXrbDeallocateResources.c)
 *     RaidCompleteRequestEx @ 0x1C000A880 (RaidCompleteRequestEx.c)
 *     RaidZeroXrb @ 0x1C000B624 (RaidZeroXrb.c)
 *     RaidSrbStatusToNtStatus @ 0x1C000B9D8 (RaidSrbStatusToNtStatus.c)
 *     RaidXrbSetCompletionRoutine @ 0x1C00101F4 (RaidXrbSetCompletionRoutine.c)
 *     RaidFreeSrb @ 0x1C001744C (RaidFreeSrb.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C001FB94 (RaidAdapterPoFxIdleComponent.c)
 *     RaidAdapterPoFxActivateComponent @ 0x1C001FBD0 (RaidAdapterPoFxActivateComponent.c)
 *     memmove @ 0x1C0024A80 (memmove.c)
 *     memset @ 0x1C0024DC0 (memset.c)
 *     WPP_SF_DD @ 0x1C0038C9C (WPP_SF_DD.c)
 *     WPP_SF_qq @ 0x1C0038EB0 (WPP_SF_qq.c)
 */

__int64 __fastcall RaidAdapterDiagnosticIoctl(__int64 a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IRP *MasterIrp; // rdi
  int v4; // ebx
  _BYTE *Srb; // rsi
  unsigned int *v6; // r12
  __int64 v7; // r14
  size_t Length; // r13
  int MdlAddress_high; // eax
  int v12; // esi
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rcx
  int v15; // ebx
  unsigned int *Pool; // rax
  char *v17; // r13
  int v18; // edx
  __int64 ContiguousIoResources; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // r8
  int v23; // eax
  int v24; // ecx
  unsigned int v25; // eax
  __int128 v26; // xmm0
  unsigned __int64 v27; // rcx
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-48h]
  unsigned int Size; // [rsp+78h] [rbp+10h]
  __int64 v31; // [rsp+80h] [rbp+18h]

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v4 = 0;
  Srb = 0LL;
  v31 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  Length = CurrentStackLocation->Parameters.Read.Length;
  Size = CurrentStackLocation->Parameters.Read.Length;
  if ( !MasterIrp )
    goto LABEL_2;
  if ( CurrentStackLocation->Parameters.Create.Options < 0x14 || (unsigned int)Length < 0x24 )
  {
    v4 = -1073741811;
LABEL_62:
    if ( v31 )
    {
      RaidXrbDeallocateResources(v7, 0);
      StorFreeContiguousIoResources(a1, v31);
    }
    goto LABEL_64;
  }
  if ( *(_DWORD *)&MasterIrp->Type != 20
    || *(_DWORD *)(&MasterIrp->Size + 1) != 20
    || (MdlAddress_high = HIDWORD(MasterIrp->MdlAddress)) == 0
    || MdlAddress_high >= 4
    || (int)MasterIrp->Flags >= 1 )
  {
LABEL_2:
    v4 = -1073741811;
    return RaidCompleteRequestEx(a2, 0, v4);
  }
  if ( MdlAddress_high == 1 )
  {
    memset(MasterIrp, 0, Length);
    *(_DWORD *)&MasterIrp->Type = 36;
    *(GUID *)&MasterIrp->MdlAddress = GUID_DIAGNOSTIC_PROVIDER_STORPORT;
    if ( (unsigned int)Length >= 0x1200038 )
    {
      LODWORD(MasterIrp->ThreadListEntry.Flink) = 18874392;
      HIDWORD(MasterIrp->ThreadListEntry.Flink) = 2;
      LODWORD(MasterIrp->ThreadListEntry.Blink) = *(_DWORD *)(a1 + 4996);
      HIDWORD(MasterIrp->ThreadListEntry.Blink) = *(_DWORD *)(a1 + 4992);
      memmove(&MasterIrp->IoStatus, *(const void **)(a1 + 5000), 48LL * *(unsigned int *)(a1 + 4996));
      LODWORD(MasterIrp[90742].UserEvent) = *(_DWORD *)(a1 + 5664);
      HIDWORD(MasterIrp[90742].UserEvent) = *(_DWORD *)(a1 + 5668);
      MasterIrp->AssociatedIrp.IrpCount = 18874392;
      *(_DWORD *)(&MasterIrp->Size + 1) = 18874424;
      a2->IoStatus.Information = 18874424LL;
    }
    else
    {
      MasterIrp->AssociatedIrp.IrpCount = 18874392;
      v4 = -2147483643;
      *(_DWORD *)(&MasterIrp->Size + 1) = 36;
      a2->IoStatus.Information = 36LL;
    }
    return RaidCompleteRequestEx(a2, 0, v4);
  }
  if ( (unsigned int)(MdlAddress_high - 2) > 1 )
    return RaidCompleteRequestEx(a2, 0, v4);
  v12 = Length - 32;
  v13 = ((unsigned int)(Length - 32) + 47LL) & 0xFFFFFFFFFFFFFFF8uLL;
  v14 = v13 + 28;
  if ( v13 > 0xFFFFFFFF || v14 > 0xFFFFFFFF )
    goto LABEL_2;
  v15 = v13 + 28;
  Pool = (unsigned int *)RaidAllocatePool(NonPagedPoolNx, (unsigned int)v14, 0x72536152u, *(_QWORD *)(a1 + 8));
  v6 = Pool;
  if ( !Pool )
  {
    v4 = -1073741670;
    return RaidCompleteRequestEx(a2, 0, v4);
  }
  Pool[5] = 0;
  Pool[4] = 1771776;
  *Pool = 28;
  Pool[3] = 10;
  Pool[6] = v15 - 28;
  memmove(Pool + 1, "STORDIAG", 8uLL);
  v17 = (char *)v6 + *v6;
  *(_DWORD *)v17 = 44;
  *((_DWORD *)v17 + 3) = MasterIrp->Flags;
  *((_DWORD *)v17 + 2) = HIDWORD(MasterIrp->MdlAddress);
  *((_DWORD *)v17 + 1) = v12 + 40;
  *((_DWORD *)v17 + 8) = v12;
  Srb = RaidAllocateSrb(*(_QWORD *)(a1 + 8), 2u, *(_BYTE *)(a1 + 402), 0);
  if ( Srb )
  {
    ContiguousIoResources = StorAllocateContiguousIoResources(
                              ((*(_DWORD *)(a1 + 444) + 7) & 0xFFFFFFF8) + 1088,
                              v18,
                              a1);
    v31 = ContiguousIoResources;
    if ( ContiguousIoResources )
    {
      v7 = ContiguousIoResources + 32;
      RaidZeroXrb(ContiguousIoResources + 32, v20, 0, 0LL);
      *(_QWORD *)(v7 + 176) = a2;
      *(_QWORD *)(v7 + 184) = v6;
      *(_QWORD *)(v7 + 168) = Srb;
      if ( *(_BYTE *)(a1 + 402) == 1 )
      {
        *((_DWORD *)Srb + 15) = v15;
        *((_QWORD *)Srb + 12) = v7;
        *((_QWORD *)Srb + 10) = a2;
        *((_DWORD *)Srb + 5) = 2;
        *((_QWORD *)Srb + 8) = v6;
        *((_DWORD *)Srb + 6) = 256;
        *((_DWORD *)Srb + 10) = *(_DWORD *)(a1 + 4204);
        v21 = *((unsigned int *)Srb + 13);
        *(_WORD *)&Srb[v21 + 8] = 0;
        Srb[v21 + 10] = 0;
      }
      else
      {
        *((_DWORD *)Srb + 4) = v15;
        *(_WORD *)Srb = 88;
        *((_QWORD *)Srb + 6) = v7;
        Srb[2] = 2;
        *((_QWORD *)Srb + 3) = v6;
        *((_DWORD *)Srb + 3) = 256;
        *((_DWORD *)Srb + 5) = *(_DWORD *)(a1 + 4204);
        *(_WORD *)(Srb + 5) = 0;
        Srb[7] = 0;
      }
      RaSrbSetMiniportContext(a1, (__int64)Srb, v31 + 1088);
      KeInitializeEvent((PRKEVENT)(v7 + 664), NotificationEvent, 0);
      RaidXrbSetCompletionRoutine(v7, (__int64)RaidXrbSignalCompletion);
      if ( HIDWORD(MasterIrp->MdlAddress) == 3 && *(_QWORD *)(a1 + 5024) )
        RaidAdapterPoFxActivateComponent(a1, 0LL, 1LL);
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) )
      {
        WPP_SF_qq(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x4Du,
          (__int64)&WPP_a09e26a5f087304ee2330933c6b86cea_Traceguids,
          v7,
          Srb);
      }
      if ( *(_BYTE *)(a1 + 4450) )
        v23 = RaidAdapterRaiseIrqlAndExecuteXrb(a1, v7);
      else
        v23 = RaidAdapterExecuteXrb(a1, (_QWORD *)v7, v22);
      v4 = v23;
      if ( v23 >= 0 )
      {
        KeWaitForSingleObject((PVOID)(v7 + 664), Executive, 0, 0, 0LL);
        v4 = RaidSrbStatusToNtStatus(Srb[3]);
      }
      if ( HIDWORD(MasterIrp->MdlAddress) == 3 )
      {
        if ( (*(_BYTE *)(v7 + 17) & 1) != 0 )
        {
          RaidAdapterPoFxIdleComponent(a1, *(unsigned int *)(v7 + 748), 0LL);
          *(_BYTE *)(v7 + 17) &= ~1u;
        }
        if ( *(_QWORD *)(a1 + 5024) )
          RaidAdapterPoFxIdleComponent(a1, 0LL, 0LL);
      }
      if ( v4 < 0 )
      {
        v27 = 0LL;
      }
      else
      {
        memset(MasterIrp, 0, Size);
        *(_DWORD *)&MasterIrp->Type = 36;
        v24 = *((_DWORD *)v17 + 8);
        MasterIrp->AssociatedIrp.IrpCount = v24;
        v25 = v6[5];
        if ( v25 == 6 )
        {
          v26 = *((_OWORD *)v17 + 1);
          *(_DWORD *)(&MasterIrp->Size + 1) = 36;
          v4 = -2147483643;
          *(_OWORD *)&MasterIrp->MdlAddress = v26;
          a2->IoStatus.Information = 36LL;
          goto LABEL_62;
        }
        if ( v25 )
        {
          if ( v25 == 1 )
          {
            v4 = -1073741789;
            goto LABEL_54;
          }
          if ( v25 > 3 )
          {
            if ( v25 == 4 )
            {
              v4 = -1073700864;
              goto LABEL_54;
            }
            if ( v25 != 5 )
            {
              v4 = -1073741823;
LABEL_54:
              a2->IoStatus.Information = 0LL;
              goto LABEL_62;
            }
          }
          v4 = -1073741811;
          goto LABEL_54;
        }
        *(_DWORD *)(&MasterIrp->Size + 1) = v24 + 32;
        *(_OWORD *)&MasterIrp->MdlAddress = *((_OWORD *)v17 + 1);
        memmove(&MasterIrp->ThreadListEntry, v17 + 40, *((unsigned int *)v17 + 8));
        v27 = (unsigned int)(*((_DWORD *)v17 + 8) + 32);
      }
      a2->IoStatus.Information = v27;
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) )
      {
        LODWORD(Timeout) = (unsigned __int8)Srb[3];
        WPP_SF_DD(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x4Eu,
          (__int64)&WPP_a09e26a5f087304ee2330933c6b86cea_Traceguids,
          v4,
          Timeout);
      }
      goto LABEL_62;
    }
  }
  v4 = -1073741670;
LABEL_64:
  if ( v6 )
    ExFreePoolWithTag(v6, 0x72536152u);
  if ( Srb )
  {
    if ( *(_BYTE *)(a1 + 402) == 1 )
    {
      *((_QWORD *)Srb + 10) = 0LL;
      *((_QWORD *)Srb + 13) = 0LL;
    }
    else
    {
      *((_QWORD *)Srb + 6) = 0LL;
      *((_QWORD *)Srb + 7) = 0LL;
    }
    RaidFreeSrb(Srb);
  }
  return RaidCompleteRequestEx(a2, 0, v4);
}
