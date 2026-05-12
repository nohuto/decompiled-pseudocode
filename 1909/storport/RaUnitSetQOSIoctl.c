/*
 * XREFs of RaUnitSetQOSIoctl @ 0x1C0045E78
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C0007654 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C000A880 (RaidCompleteRequestEx.c)
 *     RaidAdapterEnableQosWaitTimeoutCheck @ 0x1C0034BD8 (RaidAdapterEnableQosWaitTimeoutCheck.c)
 *     WPP_SF_q @ 0x1C0038D48 (WPP_SF_q.c)
 *     McTemplateK0quuujq @ 0x1C0044D64 (McTemplateK0quuujq.c)
 *     RaidUnitDisableWaitCheckTimer @ 0x1C0048824 (RaidUnitDisableWaitCheckTimer.c)
 *     StorpTelemetryMarkUnitResponsive @ 0x1C004FD0C (StorpTelemetryMarkUnitResponsive.c)
 */

__int64 __fastcall RaUnitSetQOSIoctl(__int64 a1, IRP *a2)
{
  _IRP *MasterIrp; // rcx
  unsigned int v5; // edi
  _BYTE *v6; // rax
  char v7; // al
  PDEVICE_OBJECT v8; // rcx
  unsigned __int16 v9; // dx
  unsigned int *v10; // rcx
  unsigned int v11; // eax
  bool v12; // zf
  unsigned int v13; // r8d
  unsigned int IrpCount; // r8d
  unsigned int Flags; // r8d
  PDEVICE_OBJECT v16; // rcx
  unsigned __int16 v17; // dx
  unsigned int SystemBuffer_high; // r8d
  unsigned int v19; // edx
  unsigned int v20; // edx
  unsigned int v21; // edx
  unsigned int v22; // edx
  __int64 v23; // rax

  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v5 = 0;
  if ( *(_DWORD *)(a1 + 940) || *(_DWORD *)(a1 + 948) || *(_DWORD *)(a1 + 944) || (*(_BYTE *)(a1 + 450) & 1) != 0 )
  {
    v8 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      goto LABEL_85;
    }
    v9 = 40;
    goto LABEL_84;
  }
  v6 = *(_BYTE **)(a1 + 104);
  if ( v6 )
  {
    v7 = *v6 & 0x1F;
    if ( v7 )
    {
      if ( v7 != 20 )
      {
        v8 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
        {
          goto LABEL_85;
        }
        v9 = 41;
LABEL_84:
        WPP_SF_q((__int64)v8->AttachedDevice, v9, (__int64)&WPP_bda341a9323f32b668d48d296e0ff956_Traceguids, a1);
LABEL_85:
        v5 = -1073741637;
        goto LABEL_86;
      }
    }
  }
  if ( a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options < 0x24 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_q(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x2Au,
        (__int64)&WPP_bda341a9323f32b668d48d296e0ff956_Traceguids,
        a1);
    }
    v5 = -1073741820;
    goto LABEL_86;
  }
  if ( *(_DWORD *)&MasterIrp->Type != 36 || *(_DWORD *)(&MasterIrp->Size + 1) != 36 )
  {
    v16 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      goto LABEL_79;
    }
    v17 = 43;
    goto LABEL_78;
  }
  if ( !LOBYTE(MasterIrp->MdlAddress) )
  {
    if ( !*(_BYTE *)(a1 + 2976) )
    {
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      {
        WPP_SF_q(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x2Cu,
          (__int64)&WPP_bda341a9323f32b668d48d296e0ff956_Traceguids,
          a1);
      }
      goto LABEL_86;
    }
    v10 = *(unsigned int **)(a1 + 504);
    v11 = *v10 & 0xFFFFFFFD;
    *v10 = v11;
    if ( (v11 & 4) == 0 )
      *v10 = v11 & 0xFFFFFFFE;
    *(_QWORD *)(a1 + 3016) = -1LL;
    v12 = (*(_BYTE *)(a1 + 450) & 2) == 0;
    *(_BYTE *)(a1 + 2976) = 0;
    *(_QWORD *)(a1 + 2988) = 0LL;
    *(_QWORD *)(a1 + 2996) = 0LL;
    *(_DWORD *)(a1 + 2984) = 0;
    if ( !v12 )
    {
      if ( (byte_1C0062744 & 1) != 0 )
        McTemplateK0quuujq(
          (struct _MCGEN_TRACE_CONTEXT *)(*(_DWORD *)(a1 + 96) >> 8),
          &EventUnitResponsive,
          a1 + 1976,
          *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
          *(_DWORD *)(a1 + 96),
          BYTE1(*(_DWORD *)(a1 + 96)),
          BYTE2(*(_DWORD *)(a1 + 96)),
          a1 + 1976,
          3);
      StorpTelemetryMarkUnitResponsive(a1);
      *(_BYTE *)(a1 + 450) &= ~2u;
    }
    RaidUnitDisableWaitCheckTimer(a1);
LABEL_33:
    *(_BYTE *)(a1 + 3004) = 1;
    goto LABEL_86;
  }
  v13 = *(&MasterIrp->Flags + 1);
  if ( v13 < 0x3E8 || v13 != 1000 * (v13 / 0x3E8) )
  {
    v16 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      goto LABEL_79;
    }
    v17 = 45;
    goto LABEL_78;
  }
  IrpCount = MasterIrp->AssociatedIrp.IrpCount;
  if ( IrpCount < 0x3E8 || IrpCount != 1000 * (IrpCount / 0x3E8) )
  {
    v16 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      goto LABEL_79;
    }
    v17 = 46;
    goto LABEL_78;
  }
  Flags = MasterIrp->Flags;
  if ( Flags != -1 && Flags != 500 * (Flags / 0x1F4) )
  {
    v16 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      goto LABEL_79;
    }
    v17 = 47;
LABEL_78:
    WPP_SF_q((__int64)v16->AttachedDevice, v17, (__int64)&WPP_bda341a9323f32b668d48d296e0ff956_Traceguids, a1);
LABEL_79:
    v5 = -1073741811;
    goto LABEL_86;
  }
  SystemBuffer_high = HIDWORD(MasterIrp->AssociatedIrp.SystemBuffer);
  if ( SystemBuffer_high != -1 && SystemBuffer_high != 500 * (SystemBuffer_high / 0x1F4) )
  {
    v16 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      goto LABEL_79;
    }
    v17 = 48;
    goto LABEL_78;
  }
  *(_DWORD *)(a1 + 2980) = HIDWORD(MasterIrp->MdlAddress);
  *(_DWORD *)(a1 + 2992) = *(&MasterIrp->Flags + 1) / 0x3E8;
  v19 = MasterIrp->Flags;
  if ( v19 == -1 )
    v20 = -1;
  else
    v20 = v19 / 0x1F4;
  *(_DWORD *)(a1 + 3000) = v20;
  *(_DWORD *)(a1 + 2996) = MasterIrp->AssociatedIrp.IrpCount / 0x3E8u;
  *(_DWORD *)(a1 + 2988) = MasterIrp->ThreadListEntry.Flink;
  v21 = HIDWORD(MasterIrp->AssociatedIrp.SystemBuffer);
  if ( v21 == -1 )
    v22 = -1;
  else
    v22 = v21 / 0x1F4;
  *(_DWORD *)(a1 + 2984) = v22;
  if ( *(_DWORD *)(a1 + 3000) == -1 && !*(_DWORD *)(a1 + 2988) && v22 == -1 )
  {
    RaidUnitDisableWaitCheckTimer(a1);
  }
  else if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 3008), 1, 0) )
  {
    RaidAdapterEnableQosWaitTimeoutCheck(*(_QWORD *)(a1 + 24));
  }
  v23 = 10000000 * (*(_DWORD *)(a1 + 2992) + 1 + ((unsigned int)(*(_DWORD *)(a1 + 2984) + *(_DWORD *)(a1 + 3000)) >> 1));
  if ( (unsigned int)v23 > 0x11E1A300 )
    v23 = 300000000LL;
  *(_QWORD *)(a1 + 3016) = v23;
  if ( !*(_BYTE *)(a1 + 2976) )
  {
    **(_DWORD **)(a1 + 504) |= 3u;
    *(_BYTE *)(a1 + 2976) = 1;
    goto LABEL_33;
  }
LABEL_86:
  a2->IoStatus.Information = 0LL;
  return RaidCompleteRequestEx(a2, 0, v5);
}
