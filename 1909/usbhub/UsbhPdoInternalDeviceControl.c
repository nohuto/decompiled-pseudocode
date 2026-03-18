/*
 * XREFs of UsbhPdoInternalDeviceControl @ 0x1C0016EF0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhWait @ 0x1C0002048 (UsbhWait.c)
 *     UsbhRefPdoDeviceHandle @ 0x1C000EA60 (UsbhRefPdoDeviceHandle.c)
 *     PdoExt @ 0x1C0011270 (PdoExt.c)
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     UsbhFdoReturnPortStatus @ 0x1C00174B0 (UsbhFdoReturnPortStatus.c)
 *     UsbhDecPdoIoCount @ 0x1C001ABC0 (UsbhDecPdoIoCount.c)
 *     UsbhSetPdo_AllowIo @ 0x1C001FDB0 (UsbhSetPdo_AllowIo.c)
 *     UsbhFdoSelectConfigurationPdo @ 0x1C002A43C (UsbhFdoSelectConfigurationPdo.c)
 *     UsbhFdoReturnDeviceConfigInfo @ 0x1C002A5E4 (UsbhFdoReturnDeviceConfigInfo.c)
 *     UsbhFdoReturnHubCount @ 0x1C002ACCC (UsbhFdoReturnHubCount.c)
 *     UsbhFdoReturnRootHubPdo @ 0x1C002AD74 (UsbhFdoReturnRootHubPdo.c)
 *     UsbhBuildTopologyAddress @ 0x1C002B2EC (UsbhBuildTopologyAddress.c)
 *     UsbhFdoGetMsDescriptorPdo @ 0x1C002BB2C (UsbhFdoGetMsDescriptorPdo.c)
 *     UsbhFdoReturnDeviceHandle @ 0x1C003FB98 (UsbhFdoReturnDeviceHandle.c)
 *     UsbhFdoReturnTtDeviceHandle @ 0x1C003FC50 (UsbhFdoReturnTtDeviceHandle.c)
 *     UsbhFdoSelectInterfacePdo @ 0x1C003FE40 (UsbhFdoSelectInterfacePdo.c)
 *     UsbhFdoValidateConnectionPdo @ 0x1C003FF70 (UsbhFdoValidateConnectionPdo.c)
 *     UsbhTrapFatal_Dbg @ 0x1C00413A8 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_ @ 0x1C00415CC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C0041B44 (WPP_RECORDER_SF_q.c)
 *     UsbhFdoCyclePdoPort @ 0x1C00431EC (UsbhFdoCyclePdoPort.c)
 *     UsbhFdoHandleFreeDumpDataIoctl @ 0x1C004334C (UsbhFdoHandleFreeDumpDataIoctl.c)
 *     UsbhFdoHandleGetDumpDataIoctl @ 0x1C00433AC (UsbhFdoHandleGetDumpDataIoctl.c)
 *     UsbhFdoHandleNotifyForwardProgress @ 0x1C0043498 (UsbhFdoHandleNotifyForwardProgress.c)
 *     UsbhFdoRecordFailure @ 0x1C0043580 (UsbhFdoRecordFailure.c)
 *     UsbhFdoResetPdoPort @ 0x1C0043790 (UsbhFdoResetPdoPort.c)
 *     UsbhFdoReturnControllerName @ 0x1C0043B80 (UsbhFdoReturnControllerName.c)
 *     UsbhFdoReturnDeviceBusInfo @ 0x1C0043BE4 (UsbhFdoReturnDeviceBusInfo.c)
 *     UsbhFdoReturnHubName @ 0x1C0043CA4 (UsbhFdoReturnHubName.c)
 *     UsbhFdoSubmitPdoIdleNotification @ 0x1C0043D44 (UsbhFdoSubmitPdoIdleNotification.c)
 *     USBHUB_TriggerCallBacks @ 0x1C0050F80 (USBHUB_TriggerCallBacks.c)
 *     UsbhIdleIrp_Event @ 0x1C005CC68 (UsbhIdleIrp_Event.c)
 */

__int64 __fastcall UsbhPdoInternalDeviceControl(_QWORD *BugCheckParameter3, IRP *BugCheckParameter4)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r13
  __int64 v5; // r14
  unsigned int LowPart; // ebx
  __int64 v7; // rbp
  KSPIN_LOCK *v8; // r12
  KIRQL v9; // al
  char *PoolWithTag; // rax
  __int64 v11; // rbp
  _QWORD *v12; // rax
  _QWORD *v13; // rcx
  unsigned int v14; // ebp
  struct _DEVICE_OBJECT *v15; // r9
  PDEVICE_OBJECT *DeviceExtension; // r8
  __int64 v17; // rdx
  _IO_SECURITY_CONTEXT *v18; // rcx
  NTSTATUS v19; // eax
  __int64 v20; // rbp
  unsigned int v21; // r15d
  _QWORD *v22; // rbx
  KIRQL v23; // r12
  _QWORD *v24; // rcx
  _QWORD *v25; // rdx
  _QWORD *v26; // r8
  unsigned int v28; // ebx
  unsigned int v29; // ebx
  unsigned int v30; // ebx
  unsigned int v31; // ebx
  __int64 v32; // rbp
  _DWORD *v33; // r15
  _IO_SECURITY_CONTEXT *v34; // r14
  int v35; // eax
  unsigned int v36; // ebx
  unsigned int v37; // ebx
  unsigned int v38; // ebx
  unsigned int v39; // ebx
  unsigned int v40; // ebx
  __int64 v41; // r12
  _IO_STACK_LOCATION *v42; // rbp
  unsigned int v43; // ebx
  __int64 *SecurityContext; // r14
  __int64 v45; // rax
  __int64 v46; // rcx
  unsigned int v47; // ebx
  unsigned int v48; // ebx
  unsigned int v49; // ebx
  unsigned int v50; // ebx
  unsigned int v51; // ebx
  unsigned int v52; // ebx
  unsigned int Status; // ebx
  int v54; // eax
  KIRQL v55; // [rsp+70h] [rbp+8h]
  int v56; // [rsp+78h] [rbp+10h]

  CurrentStackLocation = BugCheckParameter4->Tail.Overlay.CurrentStackLocation;
  if ( !BugCheckParameter3 )
LABEL_181:
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v5 = BugCheckParameter3[8];
  if ( !v5 )
    goto LABEL_180;
  if ( *(_DWORD *)v5 != 1329877064 )
    UsbhTrapFatal_Dbg(BugCheckParameter3, BugCheckParameter3[8]);
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  switch ( LowPart )
  {
    case 0x220FB3u:
      UsbhWait(*(_QWORD *)(v5 + 1184), 100);
      if ( *(_BYTE *)(v5 + 2741) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            0,
            3,
            10,
            (__int64)&WPP_f2aca5edc47035375c4b9957b65d3b97_Traceguids);
        Log(*(_QWORD *)(v5 + 1184), 256, 1397903939, 0LL, *(_QWORD *)(v5 + 1184));
        UsbhSetPdo_AllowIo(v46, BugCheckParameter3);
        BugCheckParameter4->IoStatus.Status = 0;
        IofCompleteRequest(BugCheckParameter4, 0);
        *(_QWORD *)(v5 + 2784) = 0LL;
        *(_BYTE *)(v5 + 2741) = 0;
        return 0LL;
      }
      if ( *(_DWORD *)(v5 + 784) != 2 )
        goto LABEL_123;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          3,
          11,
          (__int64)&WPP_f2aca5edc47035375c4b9957b65d3b97_Traceguids);
      Log(*(_QWORD *)(v5 + 1184), 256, 1397903953, 0LL, *(_QWORD *)(v5 + 1184));
      *(_QWORD *)(v5 + 2784) = BugCheckParameter4;
LABEL_101:
      BugCheckParameter4->Tail.Overlay.CurrentStackLocation->Control |= 1u;
      return 259LL;
    case 0x220FABu:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_q(
          WPP_GLOBAL_Control->DeviceExtension,
          (_DWORD)BugCheckParameter4,
          3,
          12,
          (__int64)&WPP_f2aca5edc47035375c4b9957b65d3b97_Traceguids,
          *(_QWORD *)(v5 + 1184));
      Log(*(_QWORD *)(v5 + 1184), 256, 1397903944, 0LL, *(_QWORD *)(v5 + 1184));
      *(_QWORD *)(v5 + 2792) = BugCheckParameter4;
      goto LABEL_101;
    case 0x220463u:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_q(
          WPP_GLOBAL_Control->DeviceExtension,
          (_DWORD)BugCheckParameter4,
          1,
          13,
          (__int64)&WPP_f2aca5edc47035375c4b9957b65d3b97_Traceguids,
          *(_QWORD *)(v5 + 840));
      BugCheckParameter4->IoStatus.Status = 0;
      IofCompleteRequest(BugCheckParameter4, 0);
      *(_DWORD *)(v5 + 1432) |= 0x80000u;
      return 0LL;
    case 0x220003u:
      v56 = 1232023604;
      goto LABEL_9;
    case 0x220013u:
      v56 = 1232023605;
      goto LABEL_9;
  }
  if ( LowPart <= 0x220424 )
  {
    if ( LowPart == 2229284 )
    {
      v56 = 1232023602;
      goto LABEL_9;
    }
    if ( LowPart > 0x22001F )
    {
      switch ( LowPart )
      {
        case 0x220020u:
          v56 = 1232023651;
          break;
        case 0x220027u:
          v56 = 1232023653;
          break;
        case 0x22002Bu:
          v56 = 1232023654;
          break;
        case 0x220420u:
          v56 = 1232023603;
          break;
        default:
          goto LABEL_51;
      }
      goto LABEL_9;
    }
    if ( LowPart == 2228255 )
    {
      v56 = 1232023650;
      goto LABEL_9;
    }
    if ( LowPart != 2228231 )
    {
      switch ( LowPart )
      {
        case 0x22000Fu:
          v56 = 1232023601;
          break;
        case 0x220017u:
          v56 = 1232023649;
          break;
        case 0x22001Bu:
          v56 = 1232023600;
          break;
        default:
          goto LABEL_51;
      }
      goto LABEL_9;
    }
LABEL_130:
    v56 = 1232023609;
    goto LABEL_9;
  }
  if ( LowPart == 2229327 )
  {
    v56 = 1232023856;
    goto LABEL_9;
  }
  if ( LowPart > 0x22044F )
  {
LABEL_123:
    if ( LowPart != 2232243 )
    {
      switch ( LowPart )
      {
        case 0x491404u:
          v56 = 1232023857;
          break;
        case 0x491408u:
          v56 = 1232023858;
          break;
        case 0x49140Fu:
          v56 = 1232023859;
          break;
        default:
          goto LABEL_51;
      }
      goto LABEL_9;
    }
    goto LABEL_130;
  }
  switch ( LowPart )
  {
    case 0x22042Cu:
      v56 = 1232023652;
      break;
    case 0x220433u:
      v56 = 1232023607;
      break;
    case 0x220437u:
      v56 = 1232023608;
      break;
    case 0x22043Bu:
      v56 = 1232023606;
      break;
    default:
LABEL_51:
      v56 = LowPart;
      break;
  }
LABEL_9:
  v7 = BugCheckParameter3[8];
  if ( !v7 )
    goto LABEL_180;
  if ( *(_DWORD *)v7 != 1329877064 )
    UsbhTrapFatal_Dbg(BugCheckParameter3, BugCheckParameter3[8]);
  v8 = (KSPIN_LOCK *)(v7 + 1216);
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + 1216));
  v55 = v9;
  if ( *(_DWORD *)(v7 + 784) == 2 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 1216), v9);
    v14 = -1073741810;
  }
  else
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x28uLL, 0x42554855u);
    if ( PoolWithTag )
    {
      *(_QWORD *)(PoolWithTag + 4) = 0LL;
      v11 = v7 + 1224;
      *(_QWORD *)(PoolWithTag + 12) = 0LL;
      *((_DWORD *)PoolWithTag + 5) = 0;
      *((_DWORD *)PoolWithTag + 9) = 0;
      *((_QWORD *)PoolWithTag + 3) = BugCheckParameter4;
      *(_DWORD *)PoolWithTag = 1330201673;
      *((_DWORD *)PoolWithTag + 8) = v56;
      v12 = PoolWithTag + 8;
      v13 = *(_QWORD **)(v11 + 8);
      if ( *v13 != v11 )
        goto LABEL_174;
      *v12 = v11;
      v12[1] = v13;
      *v13 = v12;
      *(_QWORD *)(v11 + 8) = v12;
    }
    else
    {
      ++*(_DWORD *)(v7 + 1264);
    }
    KeReleaseSpinLock(v8, v55);
    v14 = 0;
  }
  if ( (v14 & 0xC0000000) == 0xC0000000 )
  {
    if ( LowPart == 2228227 )
      *(_DWORD *)(CurrentStackLocation->Parameters.WMI.ProviderId + 4) = -2147482880;
    BugCheckParameter4->IoStatus.Status = v14;
    IofCompleteRequest(BugCheckParameter4, 0);
    return v14;
  }
  if ( LowPart != 2228227 )
  {
    if ( LowPart == 2228243 )
      return UsbhFdoReturnPortStatus(*(_QWORD *)(v5 + 1184), BugCheckParameter3, BugCheckParameter4);
    if ( LowPart > 0x22042C )
    {
      if ( LowPart == 2229327 )
        return UsbhFdoReturnDeviceConfigInfo(*(_QWORD *)(v5 + 1184), BugCheckParameter3, BugCheckParameter4);
      if ( LowPart <= 0x22044F )
      {
        v28 = LowPart - 2229299;
        if ( !v28 )
          return UsbhFdoReturnDeviceHandle(*(_QWORD *)(v5 + 1184), BugCheckParameter3, BugCheckParameter4, 0LL);
        v29 = v28 - 4;
        if ( !v29 )
        {
          v41 = *(_QWORD *)(v5 + 1184);
          v42 = BugCheckParameter4->Tail.Overlay.CurrentStackLocation;
          v43 = -1073741811;
          PdoExt((__int64)BugCheckParameter3);
          SecurityContext = (__int64 *)v42->Parameters.Create.SecurityContext;
          if ( SecurityContext )
          {
            v45 = UsbhRefPdoDeviceHandle(
                    v41,
                    (__int64)BugCheckParameter3,
                    (__int64)v42->Parameters.QueryDirectory.FileName,
                    0x48447472u);
            *SecurityContext = v45;
            if ( v45 )
              v43 = 0;
          }
          BugCheckParameter4->IoStatus.Status = v43;
          IofCompleteRequest(BugCheckParameter4, 0);
          UsbhDecPdoIoCount((ULONG_PTR)BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
          return v43;
        }
        v30 = v29 - 4;
        if ( !v30 )
          return UsbhFdoReturnTtDeviceHandle(*(_QWORD *)(v5 + 1184), BugCheckParameter3, BugCheckParameter4);
        v31 = v30 - 4;
        if ( !v31 )
        {
          v32 = *(_QWORD *)(v5 + 1184);
          FdoExt(v32);
          v33 = PdoExt((__int64)BugCheckParameter3);
          v34 = BugCheckParameter4->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
          if ( !v34 )
          {
            BugCheckParameter4->IoStatus.Status = -1073741811;
            IofCompleteRequest(BugCheckParameter4, 0);
            UsbhDecPdoIoCount((ULONG_PTR)BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
          }
          v35 = UsbhBuildTopologyAddress(v32, v34, *((unsigned __int16 *)v33 + 714));
          BugCheckParameter4->IoStatus.Status = v35;
          v36 = v35;
          IofCompleteRequest(BugCheckParameter4, 0);
          UsbhDecPdoIoCount((ULONG_PTR)BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
          return v36;
        }
        if ( v31 == 4 )
          return UsbhIdleIrp_Event(*(_QWORD *)(v5 + 1184), BugCheckParameter3, BugCheckParameter4, 7LL, 0);
LABEL_159:
        Status = BugCheckParameter4->IoStatus.Status;
        IofCompleteRequest(BugCheckParameter4, 0);
        UsbhDecPdoIoCount((ULONG_PTR)BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
        return Status;
      }
      v50 = LowPart - 2232243;
      if ( v50 )
      {
        v51 = v50 - 2557009;
        if ( !v51 )
          return UsbhFdoHandleGetDumpDataIoctl(*(_QWORD *)(v5 + 1184), BugCheckParameter3, BugCheckParameter4);
        v52 = v51 - 4;
        if ( !v52 )
          return UsbhFdoHandleFreeDumpDataIoctl(*(_QWORD *)(v5 + 1184), BugCheckParameter3, BugCheckParameter4);
        if ( v52 == 7 )
          return UsbhFdoHandleNotifyForwardProgress(*(_QWORD *)(v5 + 1184), BugCheckParameter3, BugCheckParameter4);
        goto LABEL_159;
      }
      return UsbhFdoResetPdoPort(
               *(PDEVICE_OBJECT *)(v5 + 1184),
               (ULONG_PTR)BugCheckParameter3,
               (ULONG_PTR)BugCheckParameter4);
    }
    if ( LowPart == 2229292 )
    {
      BugCheckParameter4->IoStatus.Status = -1073741637;
      IofCompleteRequest(BugCheckParameter4, 0);
      UsbhDecPdoIoCount((ULONG_PTR)BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
      return 3221225659LL;
    }
    if ( LowPart > 0x220020 )
    {
      v47 = LowPart - 2228263;
      if ( !v47 )
        return UsbhFdoSubmitPdoIdleNotification(
                 *(_QWORD *)(v5 + 1184),
                 (ULONG_PTR)BugCheckParameter3,
                 (ULONG_PTR)BugCheckParameter4);
      v48 = v47 - 4;
      if ( !v48 )
        return UsbhFdoRecordFailure(
                 *(_QWORD *)(v5 + 1184),
                 (ULONG_PTR)BugCheckParameter3,
                 (ULONG_PTR)BugCheckParameter4);
      v49 = v48 - 1013;
      if ( !v49 )
        return UsbhFdoReturnDeviceBusInfo(*(_QWORD *)(v5 + 1184), BugCheckParameter3, BugCheckParameter4);
      if ( v49 == 4 )
        return UsbhFdoReturnControllerName(*(_QWORD *)(v5 + 1184), BugCheckParameter3, BugCheckParameter4);
      goto LABEL_159;
    }
    if ( LowPart == 2228256 )
      return UsbhFdoReturnHubName(*(_QWORD *)(v5 + 1184), BugCheckParameter3, BugCheckParameter4);
    v37 = LowPart - 2228231;
    if ( !v37 )
      return UsbhFdoResetPdoPort(
               *(PDEVICE_OBJECT *)(v5 + 1184),
               (ULONG_PTR)BugCheckParameter3,
               (ULONG_PTR)BugCheckParameter4);
    v38 = v37 - 8;
    if ( !v38 )
      return UsbhFdoReturnRootHubPdo(*(_QWORD *)(v5 + 1184), BugCheckParameter3, BugCheckParameter4);
    v39 = v38 - 8;
    if ( v39 )
    {
      v40 = v39 - 4;
      if ( !v40 )
        return UsbhFdoReturnHubCount(*(_QWORD *)(v5 + 1184), BugCheckParameter3, BugCheckParameter4);
      if ( v40 == 4 )
        return UsbhFdoCyclePdoPort(*(_QWORD *)(v5 + 1184), (ULONG_PTR)BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
      goto LABEL_159;
    }
    BugCheckParameter4->IoStatus.Status = 0;
    IofCompleteRequest(BugCheckParameter4, 0);
    UsbhDecPdoIoCount((ULONG_PTR)BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
    return 0LL;
  }
  v15 = *(struct _DEVICE_OBJECT **)(v5 + 1184);
  if ( !v15 )
    goto LABEL_181;
  DeviceExtension = (PDEVICE_OBJECT *)v15->DeviceExtension;
  if ( !DeviceExtension )
    UsbhTrapFatal_Dbg(*(_QWORD *)(v5 + 1184), 0LL);
  if ( *(_DWORD *)DeviceExtension != 541218120 )
    UsbhTrapFatal_Dbg(*(_QWORD *)(v5 + 1184), v15->DeviceExtension);
  v17 = BugCheckParameter3[8];
  if ( !v17 )
LABEL_180:
    UsbhTrapFatal_Dbg(BugCheckParameter3, 0LL);
  if ( *(_DWORD *)v17 != 1329877064 )
    UsbhTrapFatal_Dbg(BugCheckParameter3, v17);
  v18 = BugCheckParameter4->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  v18->AccessState = *(_ACCESS_STATE **)(v17 + 1160);
  switch ( WORD1(v18->SecurityQos) )
  {
    case 0:
      return (unsigned int)UsbhFdoSelectConfigurationPdo(
                             v15,
                             (ULONG_PTR)BugCheckParameter3,
                             (ULONG_PTR)BugCheckParameter4);
    case 1:
      return (unsigned int)UsbhFdoSelectInterfacePdo(v15, BugCheckParameter3, BugCheckParameter4);
    case 0x13:
      if ( (*(_DWORD *)(v17 + 1432) & 0x80000) == 0 )
        goto LABEL_24;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_q(
            WPP_GLOBAL_Control->DeviceExtension,
            v17,
            1,
            19,
            (__int64)&WPP_10fd33d0d4c73f43ffd0851bf01e9310_Traceguids,
            *(_QWORD *)(v17 + 840));
      }
      v21 = -1073741637;
      BugCheckParameter4->IoStatus.Status = -1073741637;
      IofCompleteRequest(BugCheckParameter4, 0);
      UsbhDecPdoIoCount((ULONG_PTR)BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
      return v21;
    case 0x1E:
    case 0x30:
    case 0x31:
      return (unsigned int)UsbhFdoValidateConnectionPdo(v15, BugCheckParameter3, BugCheckParameter4);
    case 0x2A:
      return (unsigned int)UsbhFdoGetMsDescriptorPdo(v15, BugCheckParameter3, BugCheckParameter4);
    default:
LABEL_24:
      ++BugCheckParameter4->CurrentLocation;
      ++BugCheckParameter4->Tail.Overlay.CurrentStackLocation;
      v19 = IofCallDriver(DeviceExtension[152], BugCheckParameter4);
      v20 = BugCheckParameter3[8];
      v21 = v19;
      if ( !v20 )
        goto LABEL_180;
      if ( *(_DWORD *)v20 != 1329877064 )
        UsbhTrapFatal_Dbg(BugCheckParameter3, BugCheckParameter3[8]);
      v22 = (_QWORD *)(v20 + 1224);
      v23 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v20 + 1216));
      v24 = *(_QWORD **)(v20 + 1224);
      if ( v24 == (_QWORD *)(v20 + 1224) || !v24 || v24 == v22 )
        goto LABEL_175;
      break;
  }
  while ( 1 )
  {
    v25 = (_QWORD *)*v24;
    if ( (IRP *)v24[2] == BugCheckParameter4 )
      break;
    v24 = (_QWORD *)*v24;
    if ( v25 == v22 )
    {
LABEL_175:
      v54 = *(_DWORD *)(v20 + 1264);
      if ( !v54 )
      {
        USBHUB_TriggerCallBacks(BugCheckParameter3);
        KeBugCheckEx(0xFEu, 8uLL, 4uLL, (ULONG_PTR)BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
      }
      *(_DWORD *)(v20 + 1264) = v54 - 1;
      goto LABEL_35;
    }
  }
  if ( (_QWORD *)v25[1] != v24 || (v26 = (_QWORD *)v24[1], (_QWORD *)*v26 != v24) )
LABEL_174:
    __fastfail(3u);
  *v26 = v25;
  v25[1] = v26;
  ExFreePoolWithTag(v24 - 1, 0);
LABEL_35:
  if ( (_QWORD *)*v22 != v22 || *(_DWORD *)(v20 + 1264) )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v20 + 1216), v23);
  }
  else
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v20 + 1216), v23);
    KeSetEvent((PRKEVENT)(v20 + 1240), 0, 0);
  }
  return v21;
}
