/*
 * XREFs of RaUnitSetQOSIoctl @ 0x1C0047670
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C0008FE4 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C000CF10 (RaidCompleteRequestEx.c)
 *     McTemplateK0zqjuuujsssq @ 0x1C0027594 (McTemplateK0zqjuuujsssq.c)
 *     RaidAdapterEnableQosWaitTimeoutCheck @ 0x1C0037C3C (RaidAdapterEnableQosWaitTimeoutCheck.c)
 *     WPP_SF_q @ 0x1C003BA90 (WPP_SF_q.c)
 *     RaidUnitDisableWaitCheckTimer @ 0x1C0049CF4 (RaidUnitDisableWaitCheckTimer.c)
 *     StorpTelemetryMarkUnitResponsive @ 0x1C0050824 (StorpTelemetryMarkUnitResponsive.c)
 */

__int64 __fastcall RaUnitSetQOSIoctl(__int64 a1, IRP *a2)
{
  _IRP *MasterIrp; // rcx
  unsigned int v5; // ebx
  _BYTE *v6; // rax
  char v7; // al
  PDEVICE_OBJECT v8; // rcx
  unsigned __int16 v9; // dx
  unsigned int *v10; // rcx
  unsigned int v11; // eax
  bool v12; // zf
  unsigned int v13; // eax
  unsigned int v14; // r8d
  unsigned int IrpCount; // r8d
  unsigned int Flags; // r8d
  PDEVICE_OBJECT v17; // rcx
  unsigned __int16 v18; // dx
  unsigned int SystemBuffer_high; // r8d
  unsigned int v20; // edx
  unsigned int v21; // edx
  unsigned int v22; // edx
  unsigned int v23; // edx
  __int64 v24; // rax

  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v5 = 0;
  if ( *(_DWORD *)(a1 + 916) || *(_DWORD *)(a1 + 924) || *(_DWORD *)(a1 + 920) || (*(_BYTE *)(a1 + 450) & 1) != 0 )
  {
    v8 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      goto LABEL_84;
    }
    v9 = 43;
    goto LABEL_83;
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
          goto LABEL_84;
        }
        v9 = 44;
LABEL_83:
        WPP_SF_q((__int64)v8->AttachedDevice, v9, (__int64)&WPP_d11a79b88e3f3e003d260997dd6ff069_Traceguids, a1);
LABEL_84:
        v5 = -1073741637;
        goto LABEL_85;
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
        0x2Du,
        (__int64)&WPP_d11a79b88e3f3e003d260997dd6ff069_Traceguids,
        a1);
    }
    v5 = -1073741820;
    goto LABEL_85;
  }
  if ( *(_DWORD *)&MasterIrp->Type != 36 || *(_DWORD *)(&MasterIrp->Size + 1) != 36 )
  {
    v17 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      goto LABEL_78;
    }
    v18 = 46;
    goto LABEL_77;
  }
  if ( !LOBYTE(MasterIrp->MdlAddress) )
  {
    if ( *(_BYTE *)(a1 + 3192) )
    {
      v10 = *(unsigned int **)(a1 + 504);
      v11 = *v10 & 0xFFFFFFFD;
      *v10 = v11;
      if ( (v11 & 4) == 0 )
        *v10 = v11 & 0xFFFFFFFE;
      *(_QWORD *)(a1 + 3232) = -1LL;
      v12 = (*(_BYTE *)(a1 + 450) & 2) == 0;
      *(_BYTE *)(a1 + 3192) = 0;
      *(_QWORD *)(a1 + 3204) = 0LL;
      *(_QWORD *)(a1 + 3212) = 0LL;
      *(_DWORD *)(a1 + 3200) = 0;
      if ( !v12 )
      {
        if ( (byte_1C00617E4 & 1) != 0 )
        {
          v13 = *(_DWORD *)(a1 + 96);
          McTemplateK0zqjuuujsssq(
            v13 >> 8,
            &EventUnitResponsive,
            a1 + 186,
            *(const struct _MCGEN_TRACE_CONTEXT **)(*(_QWORD *)(a1 + 24) + 4864LL),
            *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
            *(_QWORD *)(a1 + 24) + 5256LL,
            v13,
            SBYTE1(v13),
            SBYTE2(v13),
            a1 + 1976,
            (const struct _MCGEN_TRACE_CONTEXT *)(a1 + 160),
            (const struct _MCGEN_TRACE_CONTEXT *)(a1 + 169),
            (const struct _MCGEN_TRACE_CONTEXT *)(a1 + 186),
            3);
        }
        StorpTelemetryMarkUnitResponsive(a1);
        *(_BYTE *)(a1 + 450) &= ~2u;
      }
      RaidUnitDisableWaitCheckTimer(a1);
      *(_BYTE *)(a1 + 3220) = 1;
      v5 = 0;
    }
    else if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
           && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
           && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_q(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x2Fu,
        (__int64)&WPP_d11a79b88e3f3e003d260997dd6ff069_Traceguids,
        a1);
    }
    goto LABEL_85;
  }
  v14 = *(&MasterIrp->Flags + 1);
  if ( v14 < 0x3E8 || v14 != 1000 * (v14 / 0x3E8) )
  {
    v17 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      goto LABEL_78;
    }
    v18 = 48;
    goto LABEL_77;
  }
  IrpCount = MasterIrp->AssociatedIrp.IrpCount;
  if ( IrpCount < 0x3E8 || IrpCount != 1000 * (IrpCount / 0x3E8) )
  {
    v17 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      goto LABEL_78;
    }
    v18 = 49;
    goto LABEL_77;
  }
  Flags = MasterIrp->Flags;
  if ( Flags != -1 && Flags != 500 * (Flags / 0x1F4) )
  {
    v17 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      goto LABEL_78;
    }
    v18 = 50;
LABEL_77:
    WPP_SF_q((__int64)v17->AttachedDevice, v18, (__int64)&WPP_d11a79b88e3f3e003d260997dd6ff069_Traceguids, a1);
LABEL_78:
    v5 = -1073741811;
    goto LABEL_85;
  }
  SystemBuffer_high = HIDWORD(MasterIrp->AssociatedIrp.SystemBuffer);
  if ( SystemBuffer_high != -1 && SystemBuffer_high != 500 * (SystemBuffer_high / 0x1F4) )
  {
    v17 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      goto LABEL_78;
    }
    v18 = 51;
    goto LABEL_77;
  }
  *(_DWORD *)(a1 + 3196) = HIDWORD(MasterIrp->MdlAddress);
  *(_DWORD *)(a1 + 3208) = *(&MasterIrp->Flags + 1) / 0x3E8;
  v20 = MasterIrp->Flags;
  if ( v20 == -1 )
    v21 = -1;
  else
    v21 = v20 / 0x1F4;
  *(_DWORD *)(a1 + 3216) = v21;
  *(_DWORD *)(a1 + 3212) = MasterIrp->AssociatedIrp.IrpCount / 0x3E8u;
  *(_DWORD *)(a1 + 3204) = MasterIrp->ThreadListEntry.Flink;
  v22 = HIDWORD(MasterIrp->AssociatedIrp.SystemBuffer);
  if ( v22 == -1 )
    v23 = -1;
  else
    v23 = v22 / 0x1F4;
  *(_DWORD *)(a1 + 3200) = v23;
  if ( *(_DWORD *)(a1 + 3216) == -1 && !*(_DWORD *)(a1 + 3204) && v23 == -1 )
  {
    RaidUnitDisableWaitCheckTimer(a1);
  }
  else if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 3224), 1, 0) )
  {
    RaidAdapterEnableQosWaitTimeoutCheck(*(_QWORD *)(a1 + 24));
  }
  v24 = 10000000 * (*(_DWORD *)(a1 + 3208) + 1 + ((unsigned int)(*(_DWORD *)(a1 + 3200) + *(_DWORD *)(a1 + 3216)) >> 1));
  if ( (unsigned int)v24 > 0x11E1A300 )
    v24 = 300000000LL;
  *(_QWORD *)(a1 + 3232) = v24;
  if ( !*(_BYTE *)(a1 + 3192) )
  {
    **(_DWORD **)(a1 + 504) |= 3u;
    *(_BYTE *)(a1 + 3192) = 1;
    *(_BYTE *)(a1 + 3220) = 1;
  }
LABEL_85:
  a2->IoStatus.Information = 0LL;
  return RaidCompleteRequestEx(a2, 0, v5);
}
