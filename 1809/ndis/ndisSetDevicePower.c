/*
 * XREFs of ndisSetDevicePower @ 0x1C00108DC
 * Callers:
 *     ndisSetPower @ 0x1C00B887C (ndisSetPower.c)
 *     NdisWdfPnpPowerEventHandler @ 0x1C00F2320 (NdisWdfPnpPowerEventHandler.c)
 * Callees:
 *     ?ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C0010508 (-ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     ndisWaitForResetCompletion @ 0x1C0010CD4 (ndisWaitForResetCompletion.c)
 *     ndisCancelWakeUpDpcTimer @ 0x1C0010DB8 (ndisCancelWakeUpDpcTimer.c)
 *     ndisSetDevicePowerOnComplete @ 0x1C00114C0 (ndisSetDevicePowerOnComplete.c)
 *     ?ndisSetDevicePowerDownComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C0011600 (-ndisSetDevicePowerDownComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ndisIsMiniportStarted @ 0x1C001A37C (ndisIsMiniportStarted.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qdD @ 0x1C003A814 (WPP_SF_qdD.c)
 *     McTemplateK0jqxq @ 0x1C003D24C (McTemplateK0jqxq.c)
 *     McTemplateK0jqxqd @ 0x1C003D2DC (McTemplateK0jqxqd.c)
 *     McTemplateK0jqxqdq @ 0x1C00434F0 (McTemplateK0jqxqdq.c)
 *     WPP_SF_LqZ @ 0x1C0049B34 (WPP_SF_LqZ.c)
 *     ?ndisNicQuietRequestComplete@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1C0078A90 (-ndisNicQuietRequestComplete@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@.c)
 *     ?ndisWdfIsAoAcPowerTransition@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0079848 (-ndisWdfIsAoAcPowerTransition@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisWdfRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@W4_NDIS_TMP_REF_REASON@@@Z @ 0x1C0079894 (-ndisWdfRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@W4_NDIS_TMP_REF_REASON@@@Z.c)
 *     ?Acquire@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1C00B8340 (-Acquire@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 *     ndisQuerySetMiniportDeviceState @ 0x1C00B8374 (ndisQuerySetMiniportDeviceState.c)
 *     ndisSetDeviceInterfaceState @ 0x1C00BD718 (ndisSetDeviceInterfaceState.c)
 *     ?Release@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1C00C3658 (-Release@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 *     ndisSetPowerResume @ 0x1C00FC8B0 (ndisSetPowerResume.c)
 *     ndisSetPowerSuspend @ 0x1C00FC938 (ndisSetPowerSuspend.c)
 *     ndisPmHaltMiniport @ 0x1C0119C48 (ndisPmHaltMiniport.c)
 */

__int64 __fastcall ndisSetDevicePower(PIRP Irp, __int64 a2, union _POWER_STATE a3, ULONG_PTR a4, int a5)
{
  int v8; // r15d
  __int64 v9; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_STACK_LOCATION *v11; // rax
  unsigned int v12; // ebx
  __int64 v14; // rbx
  int v15; // ecx
  int v16; // eax
  __int64 v17; // r9
  unsigned int SetMiniportDeviceState; // eax
  int v19; // ecx
  _IO_STACK_LOCATION *v20; // rax
  _IO_STACK_LOCATION *v21; // rax
  KIRQL v23; // al
  int v24; // ecx
  __int64 v25; // rdx
  signed __int32 v26; // eax
  signed __int32 v27; // ett
  KIRQL v28; // al
  int v29; // ecx

  if ( (unsigned __int8)byte_1C00A0258 >= 4u )
    WPP_SF_LqZ(99LL, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids);
  if ( (byte_1C00A2081 & 8) != 0 )
    McTemplateK0jqxqd(
      (_DWORD)Irp,
      (unsigned int)&MiniportPowerDeviceState,
      a4 + 4040,
      a4 + 4040,
      *(_DWORD *)(a4 + 4088),
      *(_QWORD *)(a4 + 4056),
      1,
      a3.SystemState);
  v8 = *(_DWORD *)(a4 + 120) & 0x80;
  if ( a3.SystemState == PowerSystemWorking )
  {
    if ( *(_QWORD *)(a4 + 4496) )
      *(_QWORD *)(*(_QWORD *)(a4 + 4496) + 1112LL) = KeQueryUnbiasedInterruptTime();
    _m_prefetchw((const void *)(a4 + 4464));
    if ( (_InterlockedAnd((volatile signed __int32 *)(a4 + 4464), 0xFFFFFFFD) & 2) != 0 )
    {
      if ( v8 && a5 == 10 && *(_QWORD *)(a4 + 4496) && ndisWdfIsAoAcPowerTransition((struct _NDIS_MINIPORT_BLOCK *)a4) )
      {
        ndisWdfRequestNicActive((NDIS_HANDLE)a4, RunAsynchronous, NdisAoAcTempRefWake);
        goto LABEL_11;
      }
      v9 = *(_QWORD *)(a4 + 4488);
      if ( !v9 )
      {
LABEL_11:
        if ( !v8 )
        {
          CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
          *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
          *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
          *(_OWORD *)&CurrentStackLocation[-1].Parameters.ReadWriteConfig.Length = *(_OWORD *)&CurrentStackLocation->Parameters.ReadWriteConfig.Length;
          CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
          CurrentStackLocation[-1].Control = 0;
          v11 = Irp->Tail.Overlay.CurrentStackLocation;
          v11[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))ndisSetDevicePowerOnComplete;
          v11[-1].Context = (void *)a4;
          v11[-1].Control = -32;
          if ( (unsigned __int8)byte_1C00A025D >= 4u )
            WPP_SF_q(100LL, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, a4);
          goto LABEL_14;
        }
        return (unsigned int)ndisSetDevicePowerOnComplete(*(_QWORD *)(a4 + 3864), 0LL, a4);
      }
      v28 = KeAcquireSpinLockRaiseToDpc(*(PKSPIN_LOCK *)(a4 + 4488));
      v29 = *(_DWORD *)(v9 + 504);
      if ( (v29 & 0x100) == 0 )
      {
        if ( v8 )
        {
          if ( a5 != 10 )
            goto LABEL_72;
        }
        else if ( (v29 & 0x20) == 0 )
        {
          goto LABEL_72;
        }
        KeReleaseSpinLock((PKSPIN_LOCK)v9, v28);
        return (unsigned int)ndisSetPowerResume(Irp);
      }
LABEL_72:
      KeReleaseSpinLock((PKSPIN_LOCK)v9, v28);
      goto LABEL_11;
    }
LABEL_34:
    _InterlockedOr((volatile signed __int32 *)(a4 + 4464), 8u);
    Irp->IoStatus.Status = 0;
    ++Irp->CurrentLocation;
    ++Irp->Tail.Overlay.CurrentStackLocation;
    return (unsigned int)IofCallDriver(*(PDEVICE_OBJECT *)(a4 + 3872), Irp);
  }
  if ( (unsigned int)(a3.SystemState - 2) > 2 )
  {
    v12 = -1073741811;
    goto LABEL_64;
  }
  _m_prefetchw((const void *)(a4 + 4464));
  if ( (_InterlockedAnd((volatile signed __int32 *)(a4 + 4464), 0xFFFFFFFB) & 4) == 0 )
    goto LABEL_34;
  if ( v8 && a5 == 10 && *(_QWORD *)(a4 + 4496) && ndisWdfIsAoAcPowerTransition((struct _NDIS_MINIPORT_BLOCK *)a4) )
  {
    ndisNicQuietRequestComplete(0LL, 2u, a3, (void *)a4, 0LL);
    goto LABEL_20;
  }
  v14 = *(_QWORD *)(a4 + 4488);
  if ( !v14 )
    goto LABEL_20;
  v23 = KeAcquireSpinLockRaiseToDpc(*(PKSPIN_LOCK *)(a4 + 4488));
  v24 = *(_DWORD *)(v14 + 504);
  if ( (v24 & 0x100) == 0 )
  {
    if ( v8 )
    {
      if ( a5 != 10 )
        goto LABEL_42;
    }
    else if ( (v24 & 8) == 0 )
    {
      goto LABEL_42;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)v14, v23);
    return (unsigned int)ndisSetPowerSuspend(Irp);
  }
LABEL_42:
  KeReleaseSpinLock((PKSPIN_LOCK)v14, v23);
LABEL_20:
  if ( !(unsigned __int8)ndisIsMiniportStarted(a4) || *(_DWORD *)(a4 + 1520) != 1 )
    goto LABEL_30;
  v16 = *(_DWORD *)(a4 + 124);
  if ( (v16 & 0x800) == 0 )
  {
    KeClearEvent((PRKEVENT)(a4 + 3760));
    ndisPrepForLowPower((struct _NDIS_MINIPORT_BLOCK *)a4, a3.SystemState);
    v16 = *(_DWORD *)(a4 + 124);
  }
  if ( (v16 & 0x20) == 0 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(a4 + 3792) + 26LL) & 1) == 0 )
    {
      if ( (unsigned __int8)byte_1C00A025D >= 4u )
        WPP_SF_q(103LL, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, a4);
      if ( (byte_1C00A2083 & 4) != 0 )
        McTemplateK0jqxq(
          v15,
          (unsigned int)&PowerHaltMiniport,
          a4 + 4040,
          a4 + 4040,
          *(_DWORD *)(a4 + 4088),
          *(_QWORD *)(a4 + 4056),
          36);
      if ( (*(_DWORD *)(a4 + 124) & 0x100) == 0 )
      {
        Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release(a4 + 5264);
        ndisPmHaltMiniport(a4);
        Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Acquire(a4 + 5264, 1LL);
      }
    }
    goto LABEL_30;
  }
  ndisCancelWakeUpDpcTimer(a4);
  ndisWaitForResetCompletion(a4);
  if ( (*(_DWORD *)(a4 + 124) & 0x800) != 0 )
  {
    ndisSetDeviceInterfaceState(a4, 0LL);
    _InterlockedOr((volatile signed __int32 *)(a4 + 4464), 0x10u);
  }
  LOBYTE(v17) = 1;
  SetMiniportDeviceState = ndisQuerySetMiniportDeviceState(a4, (unsigned int)a3.SystemState, 4244701441LL, v17);
  v12 = SetMiniportDeviceState;
  if ( (unsigned __int8)byte_1C00A025D >= 4u )
    WPP_SF_qdD(
      101LL,
      &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids,
      a4,
      (unsigned int)a3.SystemState,
      SetMiniportDeviceState);
  if ( !v12 )
  {
LABEL_30:
    if ( (unsigned __int8)byte_1C00A025D >= 4u )
      WPP_SF_q(104LL, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, a4);
    if ( (*(_DWORD *)(a4 + 120) & 0x80u) == 0 )
    {
      v20 = Irp->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&v20[-1].MajorFunction = *(_OWORD *)&v20->MajorFunction;
      *(_OWORD *)&v20[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v20->Parameters.NotifyDirectoryEx.CompletionFilter;
      *(_OWORD *)&v20[-1].Parameters.ReadWriteConfig.Length = *(_OWORD *)&v20->Parameters.ReadWriteConfig.Length;
      v20[-1].FileObject = v20->FileObject;
      v20[-1].Control = 0;
      v21 = Irp->Tail.Overlay.CurrentStackLocation;
      v21[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))ndisSetDevicePowerDownComplete;
      v21[-1].Context = (void *)a4;
      v21[-1].Control = -32;
LABEL_14:
      Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
      IofCallDriver(*(PDEVICE_OBJECT *)(a4 + 3872), Irp);
      return 259;
    }
    return (unsigned int)ndisSetDevicePowerDownComplete(*(struct _DEVICE_OBJECT **)(a4 + 3864), 0LL, (void *)a4);
  }
  if ( (unsigned __int8)byte_1C00A025D >= 2u )
    WPP_SF_q(102LL, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, a4);
  if ( (byte_1C00A2083 & 0x40) != 0 )
    McTemplateK0jqxqdq(
      v19,
      (unsigned int)&PowerDownFailed,
      a4 + 4040,
      a4 + 4040,
      *(_DWORD *)(a4 + 4088),
      *(_QWORD *)(a4 + 4056),
      v12,
      254,
      0);
  Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release(a4 + 5264);
  _m_prefetchw((const void *)(a4 + 4464));
  v26 = *(_DWORD *)(a4 + 4464);
  do
  {
    v27 = v26;
    v26 = _InterlockedCompareExchange((volatile signed __int32 *)(a4 + 4464), v26, v26);
  }
  while ( v27 != v26 );
  if ( (v26 & 0x10) != 0 )
  {
    LOBYTE(v25) = 1;
    ndisSetDeviceInterfaceState(a4, v25);
    _InterlockedAnd((volatile signed __int32 *)(a4 + 4464), 0xFFFFFFEF);
  }
  if ( !v8 )
  {
LABEL_64:
    Irp->IoStatus.Status = v12;
    IofCompleteRequest(Irp, 0);
  }
  return v12;
}
