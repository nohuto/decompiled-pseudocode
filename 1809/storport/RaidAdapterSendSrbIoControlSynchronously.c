/*
 * XREFs of RaidAdapterSendSrbIoControlSynchronously @ 0x1C000DE48
 * Callers:
 *     RaidGetStorageAdapterPhysicalTopologyProperty @ 0x1C000E1FC (RaidGetStorageAdapterPhysicalTopologyProperty.c)
 *     RaAdapterSetTemperatureThresholdIoctl @ 0x1C0036E7C (RaAdapterSetTemperatureThresholdIoctl.c)
 *     RaGetProtocolCommandEffects @ 0x1C0036FA0 (RaGetProtocolCommandEffects.c)
 *     RaidAdapterHwFirmwareActivateIoctl @ 0x1C0037F70 (RaidAdapterHwFirmwareActivateIoctl.c)
 *     RaidAdapterHwFirmwareDownloadIoctl @ 0x1C0038068 (RaidAdapterHwFirmwareDownloadIoctl.c)
 *     RaidAdapterHwFirmwareGetInfoFromMiniport @ 0x1C00381B4 (RaidAdapterHwFirmwareGetInfoFromMiniport.c)
 *     RaidAdapterQueryBootLunsIoctl @ 0x1C00388CC (RaidAdapterQueryBootLunsIoctl.c)
 *     RaidAdapterSetBootLunIoctl @ 0x1C003A35C (RaidAdapterSetBootLunIoctl.c)
 *     RaidGetStorageAdapterProtocolSpecificProperty @ 0x1C003AECC (RaidGetStorageAdapterProtocolSpecificProperty.c)
 *     RaidGetStorageAdapterTemperatureProperty @ 0x1C003B0D8 (RaidGetStorageAdapterTemperatureProperty.c)
 * Callees:
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1C0002EFC (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterExecuteXrb @ 0x1C0002F58 (RaidAdapterExecuteXrb.c)
 *     RaidBuildMdlForXrb @ 0x1C0007904 (RaidBuildMdlForXrb.c)
 *     RaSrbSetMiniportContext @ 0x1C0007AA0 (RaSrbSetMiniportContext.c)
 *     StorFreeContiguousIoResources @ 0x1C0007F20 (StorFreeContiguousIoResources.c)
 *     StorAllocateContiguousIoResources @ 0x1C0007F4C (StorAllocateContiguousIoResources.c)
 *     RaidAllocateSrb @ 0x1C0008054 (RaidAllocateSrb.c)
 *     RaidXrbDeallocateResources @ 0x1C0008CA8 (RaidXrbDeallocateResources.c)
 *     RaidZeroXrb @ 0x1C000D868 (RaidZeroXrb.c)
 *     PortSrbTranslateSrbToNtStatus @ 0x1C000E1BC (PortSrbTranslateSrbToNtStatus.c)
 *     RaidPauseAdapterQueue @ 0x1C00142F8 (RaidPauseAdapterQueue.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C002255C (RaidAdapterPoFxIdleComponent.c)
 *     RaidAdapterPoFxActivateComponent @ 0x1C0022598 (RaidAdapterPoFxActivateComponent.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C060 (_guard_dispatch_icall_nop.c)
 *     RaidResumeAndRestartAdapterQueues @ 0x1C003B438 (RaidResumeAndRestartAdapterQueues.c)
 *     WPP_SF_qqq @ 0x1C003BD14 (WPP_SF_qqq.c)
 *     StorSetIoGatewayEmptyEvent @ 0x1C004C148 (StorSetIoGatewayEmptyEvent.c)
 */

__int64 __fastcall RaidAdapterSendSrbIoControlSynchronously(
        __int64 a1,
        IRP *a2,
        unsigned int *a3,
        ULONG a4,
        __int64 (__fastcall *a5)(_QWORD),
        char a6,
        int a7)
{
  _BYTE *v9; // r15
  _QWORD *v11; // r12
  unsigned int v12; // ebx
  _BYTE *Srb; // rdi
  int v14; // edx
  __int64 ContiguousIoResources; // rax
  __int64 v16; // rdx
  __int64 v17; // rbp
  int v18; // r14d
  char v19; // r13
  int v20; // eax
  int v21; // eax
  PIRP v22; // rbx
  PIRP v23; // rax
  __int64 v24; // r8
  int v25; // eax
  __int64 v26; // rcx
  PIRP v28; // r14
  __int64 v29; // rbx
  IRP *v30; // rcx
  KIRQL v31; // bl
  struct _KEVENT Event; // [rsp+30h] [rbp-68h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+A0h] [rbp+8h] BYREF
  PIRP Irp; // [rsp+A8h] [rbp+10h]
  unsigned int *v35; // [rsp+B0h] [rbp+18h]
  ULONG v36; // [rsp+B8h] [rbp+20h]

  v36 = a4;
  v35 = a3;
  Irp = a2;
  v9 = 0LL;
  v11 = 0LL;
  v12 = (*(_DWORD *)(a1 + 460) + 7) & 0xFFFFFFF8;
  Srb = RaidAllocateSrb(*(_QWORD *)(a1 + 8), 2u, *(_BYTE *)(a1 + 418), 0);
  ContiguousIoResources = StorAllocateContiguousIoResources(v12 + 1088, v14, a1);
  v17 = ContiguousIoResources;
  if ( Srb && ContiguousIoResources )
  {
    v11 = (_QWORD *)(ContiguousIoResources + 32);
    RaidZeroXrb(ContiguousIoResources + 32, v16, 0, 0LL);
    v18 = RaidBuildMdlForXrb((__int64)v11, a3, a4);
    if ( v18 >= 0 )
    {
      v19 = a6;
      v20 = a7;
      if ( !a6 )
      {
        v20 = a7 | 0x102;
        if ( Srb[2] == 40 )
          *((_WORD *)Srb + 19) = 32;
        else
          Srb[9] = 32;
      }
      v21 = v20 | 1;
      if ( *(_BYTE *)(a1 + 418) == 1 )
      {
        v28 = Irp;
        v9 = Srb;
        v29 = *((unsigned int *)Srb + 13);
        v30 = Irp;
        *((_DWORD *)Srb + 8) = -1;
        *((_DWORD *)Srb + 6) = v21;
        *((_QWORD *)Srb + 8) = v35;
        *((_DWORD *)Srb + 15) = v36;
        *((_DWORD *)Srb + 5) = 2;
        *((_WORD *)Srb + 18) = IoGetIoPriorityHint(v30);
        *((_DWORD *)Srb + 10) = *(_DWORD *)(a1 + 4268);
        *((_QWORD *)Srb + 12) = v11;
        *((_QWORD *)Srb + 10) = v28;
        *(_WORD *)&Srb[v29 + 8] = 0;
        Srb[v29 + 10] = 0;
        v22 = v28;
        *(_QWORD *)(v17 + 200) = Srb;
        *(_QWORD *)(v17 + 216) = *((_QWORD *)Srb + 8);
        v23 = (PIRP)*((_QWORD *)Srb + 12);
      }
      else
      {
        *((_DWORD *)Srb + 3) = v21;
        *((_QWORD *)Srb + 3) = v35;
        *((_DWORD *)Srb + 4) = v36;
        *(_WORD *)Srb = 88;
        Srb[2] = 2;
        Srb[8] = -1;
        *((_DWORD *)Srb + 5) = *(_DWORD *)(a1 + 4268);
        *(_WORD *)(Srb + 5) = 0;
        Srb[7] = 0;
        v22 = Irp;
        *((_QWORD *)Srb + 6) = v11;
        *(_QWORD *)(v17 + 200) = Srb;
        *(_QWORD *)(v17 + 216) = *((_QWORD *)Srb + 3);
        v23 = v22;
      }
      *(_QWORD *)(v17 + 208) = v23;
      RaSrbSetMiniportContext(a1, (__int64)Srb, v17 + 1088);
      if ( v19 )
        *(_BYTE *)(v17 + 49) |= 8u;
      KeInitializeEvent((PRKEVENT)(v17 + 696), NotificationEvent, 0);
      *(_QWORD *)(v17 + 688) = RaidXrbSignalCompletion;
      if ( v19
        && (Timeout.QuadPart = 0LL,
            RaidPauseAdapterQueue(a1),
            KeInitializeEvent(&Event, NotificationEvent, 0),
            StorSetIoGatewayEmptyEvent(a1 + 832, &Event),
            Timeout.QuadPart = -1200000000LL,
            KeWaitForSingleObject(&Event, Executive, 0, 0, &Timeout)) )
      {
        v22->IoStatus.Information = 0LL;
        v18 = -1073741823;
      }
      else
      {
        if ( *(_QWORD *)(a1 + 5152) )
          RaidAdapterPoFxActivateComponent(a1, 0LL);
        if ( *(_BYTE *)(a1 + 418) == 1 )
        {
          if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
          {
            WPP_SF_qqq(
              WPP_GLOBAL_Control->AttachedDevice,
              63LL,
              &WPP_2427d071e20036a288b852fd33055616_Traceguids,
              v11,
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
            64LL,
            &WPP_2427d071e20036a288b852fd33055616_Traceguids,
            v11,
            Srb,
            *((_QWORD *)Srb + 7));
        }
        if ( *(_BYTE *)(a1 + 4514) )
          v25 = RaidAdapterRaiseIrqlAndExecuteXrb(a1, (__int64)v11);
        else
          v25 = RaidAdapterExecuteXrb(a1, v11, v24);
        v18 = v25;
        KeWaitForSingleObject((PVOID)(v17 + 696), Executive, 0, 0, 0LL);
        if ( v19 )
        {
          v31 = KfRaiseIrql(2u);
          RaidResumeAndRestartAdapterQueues(a1);
          KeLowerIrql(v31);
        }
        if ( (*(_BYTE *)(v17 + 49) & 1) != 0 )
        {
          RaidAdapterPoFxIdleComponent(a1, *(unsigned int *)(v17 + 780), 0LL);
          *(_BYTE *)(v17 + 49) &= ~1u;
        }
        if ( *(_QWORD *)(a1 + 5152) )
          RaidAdapterPoFxIdleComponent(a1, 0LL, 0LL);
        if ( v18 >= 0 )
        {
          if ( a5 )
            v18 = a5(v35[5]);
          if ( v18 >= 0 )
          {
            LOBYTE(v26) = Srb[3];
            v18 = PortSrbTranslateSrbToNtStatus(v26);
          }
        }
      }
    }
  }
  else
  {
    v18 = -1073741801;
  }
  if ( v17 )
  {
    RaidXrbDeallocateResources((__int64)v11, 0);
    StorFreeContiguousIoResources(a1, v17);
  }
  if ( Srb )
  {
    if ( *(_BYTE *)(a1 + 418) == 1 )
    {
      if ( !v9 )
        v9 = Srb;
      *((_QWORD *)v9 + 10) = 0LL;
      *((_QWORD *)v9 + 13) = 0LL;
    }
    else
    {
      *((_QWORD *)Srb + 6) = 0LL;
      *((_QWORD *)Srb + 7) = 0LL;
    }
    ExFreePoolWithTag(Srb, 0x72536152u);
  }
  return (unsigned int)v18;
}
