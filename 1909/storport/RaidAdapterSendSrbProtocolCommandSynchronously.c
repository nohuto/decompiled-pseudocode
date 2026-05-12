/*
 * XREFs of RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C0036EE8
 * Callers:
 *     RaAdapterProtocolCommandIoctl @ 0x1C0033DAC (RaAdapterProtocolCommandIoctl.c)
 * Callees:
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1C0003484 (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterExecuteXrb @ 0x1C00034E0 (RaidAdapterExecuteXrb.c)
 *     RaidBuildMdlForXrb @ 0x1C0005F88 (RaidBuildMdlForXrb.c)
 *     RaSrbSetMiniportContext @ 0x1C0006130 (RaSrbSetMiniportContext.c)
 *     StorFreeContiguousIoResources @ 0x1C00064F0 (StorFreeContiguousIoResources.c)
 *     StorAllocateContiguousIoResources @ 0x1C000651C (StorAllocateContiguousIoResources.c)
 *     RaidAllocateSrb @ 0x1C00066F0 (RaidAllocateSrb.c)
 *     RaidXrbDeallocateResources @ 0x1C0007AE4 (RaidXrbDeallocateResources.c)
 *     RaidZeroXrb @ 0x1C000B624 (RaidZeroXrb.c)
 *     RaidSrbStatusToNtStatus @ 0x1C000B9D8 (RaidSrbStatusToNtStatus.c)
 *     RaidPauseAdapterQueue @ 0x1C0017260 (RaidPauseAdapterQueue.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C001FB94 (RaidAdapterPoFxIdleComponent.c)
 *     RaidAdapterPoFxActivateComponent @ 0x1C001FBD0 (RaidAdapterPoFxActivateComponent.c)
 *     RaidResumeAndRestartAdapterQueues @ 0x1C00386A4 (RaidResumeAndRestartAdapterQueues.c)
 *     WPP_SF_qqq @ 0x1C0038FCC (WPP_SF_qqq.c)
 *     StorSetIoGatewayEmptyEvent @ 0x1C004AB54 (StorSetIoGatewayEmptyEvent.c)
 *     StorEtwProtocolCommandCompletion @ 0x1C004C658 (StorEtwProtocolCommandCompletion.c)
 */

__int64 __fastcall RaidAdapterSendSrbProtocolCommandSynchronously(__int64 a1, IRP *a2, char a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IRP *MasterIrp; // r14
  _BYTE *v6; // r15
  _QWORD *v8; // r12
  char v9; // r8
  int v10; // ebx
  unsigned int Options; // ecx
  unsigned int v12; // ebx
  unsigned int Length; // eax
  _BYTE *Srb; // rdi
  int v15; // edx
  __int64 ContiguousIoResources; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rbp
  unsigned int LowPart; // ebx
  int v21; // r14d
  _IRP *v22; // r14
  int v23; // ecx
  bool v24; // zf
  int v25; // edx
  unsigned int v26; // eax
  __int64 v27; // rbx
  int Blink; // eax
  IRP *v29; // rax
  int v30; // eax
  char v31; // r14
  int v32; // eax
  KIRQL v33; // bl
  unsigned __int64 v34; // rax
  struct _KEVENT Event; // [rsp+30h] [rbp-58h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+90h] [rbp+8h] BYREF
  _IRP *v38; // [rsp+98h] [rbp+10h]
  char v39; // [rsp+A0h] [rbp+18h]

  v39 = a3;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  memset(&Event, 0, sizeof(Event));
  v6 = 0LL;
  v8 = 0LL;
  v9 = *(_BYTE *)(a1 + 402);
  v10 = *(_DWORD *)(a1 + 444) + 7;
  Options = CurrentStackLocation->Parameters.Create.Options;
  v12 = v10 & 0xFFFFFFF8;
  Length = CurrentStackLocation->Parameters.Read.Length;
  v38 = MasterIrp;
  if ( Options <= Length )
    Options = Length;
  Timeout.LowPart = Options;
  Srb = RaidAllocateSrb(*(_QWORD *)(a1 + 8), 9u, v9, 0);
  ContiguousIoResources = StorAllocateContiguousIoResources(v12 + 1088, v15, a1);
  v19 = ContiguousIoResources;
  if ( Srb && ContiguousIoResources )
  {
    v8 = (_QWORD *)(ContiguousIoResources + 32);
    RaidZeroXrb(ContiguousIoResources + 32, v17, 0, 0LL);
    LowPart = Timeout.LowPart;
    v21 = RaidBuildMdlForXrb((__int64)v8, MasterIrp, Timeout.LowPart);
    if ( v21 >= 0 )
    {
      v22 = v38;
      v23 = 129;
      v24 = LODWORD(v38->ThreadListEntry.Flink) == 0;
      v38->Flags = 255;
      if ( v24 )
        v23 = 1;
      v25 = v23 | 0x40;
      if ( !HIDWORD(v22->ThreadListEntry.Flink) )
        v25 = v23;
      if ( !v39 )
      {
        v25 |= 0x102u;
        if ( Srb[2] == 40 )
          *((_WORD *)Srb + 19) = 32;
        else
          Srb[9] = 32;
      }
      if ( *(_BYTE *)(a1 + 402) == 1 )
      {
        v26 = Timeout.LowPart;
        v27 = *((unsigned int *)Srb + 13);
        v6 = Srb;
        *((_DWORD *)Srb + 8) = -1;
        *((_DWORD *)Srb + 15) = v26;
        *((_DWORD *)Srb + 5) = 9;
        *((_DWORD *)Srb + 6) = v25;
        *((_QWORD *)Srb + 8) = v22;
        *((_WORD *)Srb + 18) = IoGetIoPriorityHint(a2);
        Blink = (int)v22->ThreadListEntry.Blink;
        if ( !Blink )
          Blink = *(_DWORD *)(a1 + 4204);
        *((_DWORD *)Srb + 10) = Blink;
        *((_QWORD *)Srb + 12) = v8;
        *((_QWORD *)Srb + 10) = a2;
        *(_WORD *)&Srb[v27 + 8] = 0;
        Srb[v27 + 10] = 0;
        *(_QWORD *)(v19 + 200) = Srb;
        *(_QWORD *)(v19 + 216) = *((_QWORD *)Srb + 8);
        v29 = (IRP *)*((_QWORD *)Srb + 12);
      }
      else
      {
        Srb[2] = 9;
        *(_WORD *)Srb = 88;
        *((_DWORD *)Srb + 3) = v25;
        Srb[8] = -1;
        *((_QWORD *)Srb + 3) = v22;
        *((_DWORD *)Srb + 4) = LowPart;
        v30 = (int)v22->ThreadListEntry.Blink;
        if ( !v30 )
          v30 = *(_DWORD *)(a1 + 4204);
        *((_DWORD *)Srb + 5) = v30;
        *((_QWORD *)Srb + 6) = v8;
        *(_WORD *)(Srb + 5) = 0;
        Srb[7] = 0;
        *(_QWORD *)(v19 + 200) = Srb;
        *(_QWORD *)(v19 + 216) = *((_QWORD *)Srb + 3);
        v29 = a2;
      }
      *(_QWORD *)(v19 + 208) = v29;
      RaSrbSetMiniportContext(a1, (__int64)Srb, v19 + 1088);
      v31 = v39;
      if ( v39 )
        *(_BYTE *)(v19 + 49) |= 8u;
      KeInitializeEvent((PRKEVENT)(v19 + 696), NotificationEvent, 0);
      *(_QWORD *)(v19 + 688) = RaidXrbSignalCompletion;
      if ( v31
        && (Timeout.QuadPart = 0LL,
            RaidPauseAdapterQueue(a1),
            KeInitializeEvent(&Event, NotificationEvent, 0),
            StorSetIoGatewayEmptyEvent(a1 + 768, &Event),
            Timeout.QuadPart = -1200000000LL,
            KeWaitForSingleObject(&Event, Executive, 0, 0, &Timeout)) )
      {
        a2->IoStatus.Information = 0LL;
        v21 = -1073741823;
      }
      else
      {
        if ( *(_QWORD *)(a1 + 5024) )
          RaidAdapterPoFxActivateComponent(a1, 0LL, 1LL);
        if ( *(_BYTE *)(a1 + 402) == 1 )
        {
          if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
          {
            WPP_SF_qqq(
              WPP_GLOBAL_Control->AttachedDevice,
              65LL,
              &WPP_a09e26a5f087304ee2330933c6b86cea_Traceguids,
              v8,
              v6,
              *((_QWORD *)v6 + 13));
          }
        }
        else if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        {
          WPP_SF_qqq(
            WPP_GLOBAL_Control->AttachedDevice,
            66LL,
            &WPP_a09e26a5f087304ee2330933c6b86cea_Traceguids,
            v8,
            Srb,
            *((_QWORD *)Srb + 7));
        }
        if ( *(_BYTE *)(a1 + 4450) )
          v32 = RaidAdapterRaiseIrqlAndExecuteXrb(a1, (__int64)v8);
        else
          v32 = RaidAdapterExecuteXrb(a1, v8, v18);
        v21 = v32;
        if ( v32 >= 0 )
        {
          KeWaitForSingleObject((PVOID)(v19 + 696), Executive, 0, 0, 0LL);
          v21 = RaidSrbStatusToNtStatus(Srb[3]);
        }
        if ( v39 )
        {
          v33 = KfRaiseIrql(2u);
          RaidResumeAndRestartAdapterQueues(a1);
          KeLowerIrql(v33);
        }
        if ( (*(_BYTE *)(v19 + 49) & 1) != 0 )
        {
          RaidAdapterPoFxIdleComponent(a1, *(unsigned int *)(v19 + 780), 0LL);
          *(_BYTE *)(v19 + 49) &= ~1u;
        }
        if ( *(_QWORD *)(a1 + 5024) )
          RaidAdapterPoFxIdleComponent(a1, 0LL, 0LL);
        if ( v21 >= 0 )
        {
          if ( v38->Flags == 255 )
            v21 = -1073741637;
          if ( v21 >= 0 )
          {
            if ( *(_BYTE *)(a1 + 402) == 1 )
              v34 = *((unsigned int *)v6 + 15);
            else
              v34 = *((unsigned int *)Srb + 4);
            a2->IoStatus.Information = v34;
          }
        }
      }
    }
  }
  else
  {
    v21 = -1073741801;
  }
  if ( StorEtwLoggingEnabled )
  {
    LOBYTE(v18) = v39;
    StorEtwProtocolCommandCompletion(*(_QWORD *)(a1 + 8), a2, v18);
  }
  if ( v19 )
  {
    RaidXrbDeallocateResources((__int64)v8, 0);
    StorFreeContiguousIoResources(a1, v19);
  }
  if ( Srb )
  {
    if ( *(_BYTE *)(a1 + 402) == 1 )
    {
      if ( !v6 )
        v6 = Srb;
      *((_QWORD *)v6 + 10) = 0LL;
      *((_QWORD *)v6 + 13) = 0LL;
    }
    else
    {
      *((_QWORD *)Srb + 6) = 0LL;
      *((_QWORD *)Srb + 7) = 0LL;
    }
    ExFreePoolWithTag(Srb, 0x72536152u);
  }
  return (unsigned int)v21;
}
