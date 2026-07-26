/*
 * XREFs of ndisSetDevicePower @ 0x1C00134B4
 * Callers:
 *     ndisSetPower @ 0x1C0013948 (ndisSetPower.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     ?ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C0012910 (-ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     ?ndisQuerySetMiniportDeviceState@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@KE@Z @ 0x1C00137C0 (-ndisQuerySetMiniportDeviceState@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@KE@Z.c)
 *     ndisWaitForResetCompletion @ 0x1C00146C8 (ndisWaitForResetCompletion.c)
 *     ndisCancelWakeUpDpcTimer @ 0x1C0014778 (ndisCancelWakeUpDpcTimer.c)
 *     WPP_RECORDER_SF_LqZ @ 0x1C0015150 (WPP_RECORDER_SF_LqZ.c)
 *     WPP_RECORDER_SF_qdL @ 0x1C00158A0 (WPP_RECORDER_SF_qdL.c)
 *     ndisIsMiniportStarted @ 0x1C001B528 (ndisIsMiniportStarted.c)
 *     McTemplateK0jqxq @ 0x1C0061938 (McTemplateK0jqxq.c)
 *     McTemplateK0jqxqd @ 0x1C00619C8 (McTemplateK0jqxqd.c)
 *     McTemplateK0jqxqqq @ 0x1C0068DD0 (McTemplateK0jqxqqq.c)
 *     ?Acquire@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1C00FC530 (-Acquire@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 *     ?Release@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1C00FD0B0 (-Release@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 *     ndisSetDeviceInterfaceState @ 0x1C00FF708 (ndisSetDeviceInterfaceState.c)
 *     ndisSetPowerResume @ 0x1C011C25C (ndisSetPowerResume.c)
 *     ndisSetPowerSuspend @ 0x1C011C2E4 (ndisSetPowerSuspend.c)
 *     ndisPmHaltMiniport @ 0x1C013B334 (ndisPmHaltMiniport.c)
 */

__int64 __fastcall ndisSetDevicePower(PIRP Irp, char a2, enum _DEVICE_POWER_STATE a3, __int64 a4)
{
  const struct _GUID *v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rdx
  int v10; // ecx
  __int64 v11; // r8
  int v12; // eax
  unsigned int SetMiniportDeviceState; // eax
  __int64 v14; // rdx
  int v15; // ecx
  __int64 v16; // r8
  unsigned int v17; // ebx
  _IO_STACK_LOCATION *v18; // rax
  _IO_STACK_LOCATION *v19; // rax
  __int64 v21; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_STACK_LOCATION *v23; // rax
  KIRQL v24; // al
  __int64 v26; // rdx
  signed __int32 v27; // eax
  signed __int32 v28; // ett
  KIRQL v29; // al

  v7 = &WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_LqZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      a3,
      106,
      (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
      a3,
      a4,
      *(_QWORD *)(a4 + 3856));
  if ( (byte_1C00E8081 & 8) != 0 )
    McTemplateK0jqxqd(
      (_DWORD)v7,
      (unsigned int)&MiniportPowerDeviceState,
      a4 + 4008,
      a4 + 4008,
      *(_DWORD *)(a4 + 4056),
      *(_QWORD *)(a4 + 4024),
      1,
      a3);
  if ( a3 == PowerDeviceD0 )
  {
    if ( *(_QWORD *)(a4 + 4456) )
      *(_QWORD *)(*(_QWORD *)(a4 + 4456) + 1112LL) = KeQueryUnbiasedInterruptTime();
    _m_prefetchw((const void *)(a4 + 4424));
    if ( (_InterlockedAnd((volatile signed __int32 *)(a4 + 4424), 0xFFFFFFFD) & 2) != 0 )
    {
      v21 = *(_QWORD *)(a4 + 4448);
      if ( v21 )
      {
        v29 = KeAcquireSpinLockRaiseToDpc(*(PKSPIN_LOCK *)(a4 + 4448));
        if ( (*(_DWORD *)(v21 + 504) & 0x120) == 0x20 )
        {
          KeReleaseSpinLock((PKSPIN_LOCK)v21, v29);
          return (unsigned int)ndisSetPowerResume(Irp);
        }
        KeReleaseSpinLock((PKSPIN_LOCK)v21, v29);
      }
      CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
      *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
      *(_OWORD *)&CurrentStackLocation[-1].Parameters.ReadWriteConfig.Length = *(_OWORD *)&CurrentStackLocation->Parameters.ReadWriteConfig.Length;
      CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
      CurrentStackLocation[-1].Control = 0;
      v23 = Irp->Tail.Overlay.CurrentStackLocation;
      v23[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))ndisSetDevicePowerOnComplete;
      v23[-1].Context = (void *)a4;
      v23[-1].Control = -32;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4,
          14,
          107,
          (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
          a4);
      goto LABEL_22;
    }
    goto LABEL_52;
  }
  if ( (unsigned int)(a3 - 2) > 2 )
  {
    v17 = -1073741811;
LABEL_43:
    Irp->IoStatus.Status = v17;
    IofCompleteRequest(Irp, 0);
    return v17;
  }
  _m_prefetchw((const void *)(a4 + 4424));
  if ( (_InterlockedAnd((volatile signed __int32 *)(a4 + 4424), 0xFFFFFFFB) & 4) == 0 )
  {
LABEL_52:
    _InterlockedOr((volatile signed __int32 *)(a4 + 4424), 8u);
    Irp->IoStatus.Status = 0;
    ++Irp->CurrentLocation;
    ++Irp->Tail.Overlay.CurrentStackLocation;
    return (unsigned int)IofCallDriver(*(PDEVICE_OBJECT *)(a4 + 3840), Irp);
  }
  v8 = *(_QWORD *)(a4 + 4448);
  if ( !v8 )
    goto LABEL_9;
  v24 = KeAcquireSpinLockRaiseToDpc(*(PKSPIN_LOCK *)(a4 + 4448));
  if ( (*(_DWORD *)(v8 + 504) & 0x108) == 8 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)v8, v24);
    return (unsigned int)ndisSetPowerSuspend(Irp);
  }
  KeReleaseSpinLock((PKSPIN_LOCK)v8, v24);
LABEL_9:
  if ( (unsigned __int8)ndisIsMiniportStarted(a4) && *(_DWORD *)(a4 + 1520) == 1 )
  {
    v12 = *(_DWORD *)(a4 + 124);
    if ( (v12 & 0x800) == 0 )
    {
      KeClearEvent((PRKEVENT)(a4 + 3728));
      ndisPrepForLowPower((struct _NDIS_MINIPORT_BLOCK *)a4, (enum _NDIS_DEVICE_POWER_STATE)a3);
      v12 = *(_DWORD *)(a4 + 124);
    }
    if ( (v12 & 0x20) == 0 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(a4 + 3760) + 26LL) & 1) == 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4,
            14,
            110,
            (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
            a4);
        if ( (byte_1C00E8083 & 4) != 0 )
          McTemplateK0jqxq(
            v10,
            (unsigned int)&PowerHaltMiniport,
            a4 + 4008,
            a4 + 4008,
            *(_DWORD *)(a4 + 4056),
            *(_QWORD *)(a4 + 4024),
            1);
        if ( (*(_DWORD *)(a4 + 124) & 0x100) == 0 )
        {
          Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release(a4 + 5224, v9, v11);
          ndisPmHaltMiniport(a4);
          Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Acquire(a4 + 5224, 1LL);
        }
      }
      goto LABEL_19;
    }
    ndisCancelWakeUpDpcTimer(a4);
    ndisWaitForResetCompletion(a4);
    if ( (*(_DWORD *)(a4 + 124) & 0x800) != 0 )
    {
      ndisSetDeviceInterfaceState(a4, 0LL);
      _InterlockedOr((volatile signed __int32 *)(a4 + 4424), 0x10u);
    }
    SetMiniportDeviceState = ndisQuerySetMiniportDeviceState((struct _NDIS_MINIPORT_BLOCK *)a4, a3, 0xFD010101, 1u);
    v17 = SetMiniportDeviceState;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qdL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v14,
        14,
        108,
        (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
        a4,
        a3,
        SetMiniportDeviceState);
    if ( v17 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2,
          14,
          109,
          (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
          a4);
      if ( (byte_1C00E8083 & 0x40) != 0 )
        McTemplateK0jqxqqq(
          v15,
          (unsigned int)&PowerDownFailed,
          a4 + 4008,
          a4 + 4008,
          *(_DWORD *)(a4 + 4056),
          *(_QWORD *)(a4 + 4024),
          v17,
          1,
          0);
      Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release(a4 + 5224, v14, v16);
      _m_prefetchw((const void *)(a4 + 4424));
      v27 = *(_DWORD *)(a4 + 4424);
      do
      {
        v28 = v27;
        v27 = _InterlockedCompareExchange((volatile signed __int32 *)(a4 + 4424), v27, v27);
      }
      while ( v28 != v27 );
      if ( (v27 & 0x10) != 0 )
      {
        LOBYTE(v26) = 1;
        ndisSetDeviceInterfaceState(a4, v26);
        _InterlockedAnd((volatile signed __int32 *)(a4 + 4424), 0xFFFFFFEF);
      }
      goto LABEL_43;
    }
  }
LABEL_19:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      14,
      111,
      (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
      a4);
  v18 = Irp->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&v18[-1].MajorFunction = *(_OWORD *)&v18->MajorFunction;
  *(_OWORD *)&v18[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v18->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)&v18[-1].Parameters.ReadWriteConfig.Length = *(_OWORD *)&v18->Parameters.ReadWriteConfig.Length;
  v18[-1].FileObject = v18->FileObject;
  v18[-1].Control = 0;
  v19 = Irp->Tail.Overlay.CurrentStackLocation;
  v19[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))ndisSetDevicePowerDownComplete;
  v19[-1].Context = (void *)a4;
  v19[-1].Control = -32;
LABEL_22:
  Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  IofCallDriver(*(PDEVICE_OBJECT *)(a4 + 3840), Irp);
  return 259;
}
