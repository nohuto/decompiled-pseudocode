/*
 * XREFs of UsbhPdoInternalDeviceControl @ 0x1C0016790
 * Callers:
 *     <none>
 * Callees:
 *     UsbhWait @ 0x1C0001F78 (UsbhWait.c)
 *     UsbhRefPdoDeviceHandle @ 0x1C000E5D0 (UsbhRefPdoDeviceHandle.c)
 *     PdoExt @ 0x1C0010C40 (PdoExt.c)
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     UsbhFdoReturnPortStatus @ 0x1C0016D40 (UsbhFdoReturnPortStatus.c)
 *     UsbhDecPdoIoCount @ 0x1C001A400 (UsbhDecPdoIoCount.c)
 *     UsbhSetPdo_AllowIo @ 0x1C001F0E0 (UsbhSetPdo_AllowIo.c)
 *     UsbhFdoReturnDeviceConfigInfo @ 0x1C0029424 (UsbhFdoReturnDeviceConfigInfo.c)
 *     UsbhFdoSelectConfigurationPdo @ 0x1C0029650 (UsbhFdoSelectConfigurationPdo.c)
 *     UsbhFdoReturnHubCount @ 0x1C0029B0C (UsbhFdoReturnHubCount.c)
 *     UsbhFdoReturnRootHubPdo @ 0x1C0029BB4 (UsbhFdoReturnRootHubPdo.c)
 *     UsbhBuildTopologyAddress @ 0x1C002A1AC (UsbhBuildTopologyAddress.c)
 *     UsbhFdoGetMsDescriptorPdo @ 0x1C002A97C (UsbhFdoGetMsDescriptorPdo.c)
 *     UsbhFdoReturnDeviceHandle @ 0x1C003E5C8 (UsbhFdoReturnDeviceHandle.c)
 *     UsbhFdoReturnTtDeviceHandle @ 0x1C003E680 (UsbhFdoReturnTtDeviceHandle.c)
 *     UsbhFdoSelectInterfacePdo @ 0x1C003E870 (UsbhFdoSelectInterfacePdo.c)
 *     UsbhFdoValidateConnectionPdo @ 0x1C003E9A0 (UsbhFdoValidateConnectionPdo.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003FD38 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_ @ 0x1C003FFA4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C004051C (WPP_RECORDER_SF_q.c)
 *     UsbhFdoCyclePdoPort @ 0x1C0041B9C (UsbhFdoCyclePdoPort.c)
 *     UsbhFdoHandleFreeDumpDataIoctl @ 0x1C0041CFC (UsbhFdoHandleFreeDumpDataIoctl.c)
 *     UsbhFdoHandleGetDumpDataIoctl @ 0x1C0041D5C (UsbhFdoHandleGetDumpDataIoctl.c)
 *     UsbhFdoHandleNotifyForwardProgress @ 0x1C0041E48 (UsbhFdoHandleNotifyForwardProgress.c)
 *     UsbhFdoRecordFailure @ 0x1C0041F30 (UsbhFdoRecordFailure.c)
 *     UsbhFdoResetPdoPort @ 0x1C0042140 (UsbhFdoResetPdoPort.c)
 *     UsbhFdoReturnControllerName @ 0x1C0042520 (UsbhFdoReturnControllerName.c)
 *     UsbhFdoReturnDeviceBusInfo @ 0x1C0042584 (UsbhFdoReturnDeviceBusInfo.c)
 *     UsbhFdoReturnHubName @ 0x1C0042634 (UsbhFdoReturnHubName.c)
 *     UsbhFdoSubmitPdoIdleNotification @ 0x1C00426D4 (UsbhFdoSubmitPdoIdleNotification.c)
 *     USBHUB_TriggerCallBacks @ 0x1C004F260 (USBHUB_TriggerCallBacks.c)
 *     UsbhIdleIrp_Event @ 0x1C005A888 (UsbhIdleIrp_Event.c)
 */

__int64 __fastcall UsbhPdoInternalDeviceControl(_QWORD *BugCheckParameter3, IRP *BugCheckParameter4)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r13
  __int64 v5; // r14
  unsigned int LowPart; // ebx
  __int64 v7; // rbp
  KSPIN_LOCK *v8; // r15
  KIRQL v9; // al
  KIRQL v10; // r12
  _QWORD *PoolWithTag; // rax
  __int64 v12; // rbp
  _QWORD *v13; // rcx
  _QWORD *v14; // rax
  unsigned int v15; // ebp
  struct _DEVICE_OBJECT *v16; // r9
  PDEVICE_OBJECT *DeviceExtension; // r8
  __int64 v18; // rdx
  _IO_SECURITY_CONTEXT *v19; // rcx
  NTSTATUS v20; // eax
  __int64 v21; // rbp
  unsigned int v22; // r15d
  _QWORD *v23; // rbx
  KIRQL v24; // r12
  _QWORD *v25; // rcx
  _QWORD *v26; // rdx
  _QWORD *v27; // r8
  unsigned int v29; // ebx
  unsigned int v30; // ebx
  unsigned int v31; // ebx
  unsigned int v32; // ebx
  __int64 v33; // rbp
  _DWORD *v34; // r15
  _IO_SECURITY_CONTEXT *v35; // r14
  int v36; // eax
  unsigned int v37; // ebx
  unsigned int v38; // ebx
  unsigned int v39; // ebx
  unsigned int v40; // ebx
  unsigned int v41; // ebx
  __int64 v42; // r15
  _IO_STACK_LOCATION *v43; // rbp
  unsigned int v44; // ebx
  __int64 *SecurityContext; // r14
  __int64 v46; // rax
  __int64 v47; // rcx
  unsigned int v48; // ebx
  unsigned int v49; // ebx
  unsigned int v50; // ebx
  unsigned int v51; // ebx
  unsigned int v52; // ebx
  unsigned int v53; // ebx
  unsigned int Status; // ebx
  int v55; // eax
  int v56; // [rsp+70h] [rbp+8h]

  CurrentStackLocation = BugCheckParameter4->Tail.Overlay.CurrentStackLocation;
  if ( !BugCheckParameter3 )
LABEL_176:
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v5 = BugCheckParameter3[8];
  if ( !v5 )
    goto LABEL_175;
  if ( *(_DWORD *)v5 != 1329877064 )
    UsbhTrapFatal_Dbg(BugCheckParameter3, BugCheckParameter3[8]);
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  switch ( LowPart )
  {
    case 0x220FB3u:
      UsbhWait(*(_QWORD *)(v5 + 1184), 100);
      if ( *(_BYTE *)(v5 + 2741) )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            0,
            3,
            10,
            (__int64)&WPP_f2aca5edc47035375c4b9957b65d3b97_Traceguids);
        Log(*(_QWORD *)(v5 + 1184), 256, 1397903939, 0LL, *(_QWORD *)(v5 + 1184));
        UsbhSetPdo_AllowIo(v47, BugCheckParameter3);
        BugCheckParameter4->IoStatus.Status = 0;
        IofCompleteRequest(BugCheckParameter4, 0);
        *(_QWORD *)(v5 + 2784) = 0LL;
        *(_BYTE *)(v5 + 2741) = 0;
        return 0LL;
      }
      if ( *(_DWORD *)(v5 + 784) != 2 )
        goto LABEL_119;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          3,
          11,
          (__int64)&WPP_f2aca5edc47035375c4b9957b65d3b97_Traceguids);
      Log(*(_QWORD *)(v5 + 1184), 256, 1397903953, 0LL, *(_QWORD *)(v5 + 1184));
      *(_QWORD *)(v5 + 2784) = BugCheckParameter4;
LABEL_99:
      BugCheckParameter4->Tail.Overlay.CurrentStackLocation->Control |= 1u;
      return 259LL;
    case 0x220FABu:
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_q(
          WPP_GLOBAL_Control->DeviceExtension,
          (_DWORD)BugCheckParameter4,
          3,
          12,
          (__int64)&WPP_f2aca5edc47035375c4b9957b65d3b97_Traceguids,
          *(_QWORD *)(v5 + 1184));
      Log(*(_QWORD *)(v5 + 1184), 256, 1397903944, 0LL, *(_QWORD *)(v5 + 1184));
      *(_QWORD *)(v5 + 2792) = BugCheckParameter4;
      goto LABEL_99;
    case 0x220463u:
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
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
LABEL_126:
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
LABEL_119:
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
    goto LABEL_126;
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
    goto LABEL_175;
  if ( *(_DWORD *)v7 != 1329877064 )
    UsbhTrapFatal_Dbg(BugCheckParameter3, BugCheckParameter3[8]);
  v8 = (KSPIN_LOCK *)(v7 + 1216);
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + 1216));
  v10 = v9;
  if ( *(_DWORD *)(v7 + 784) == 2 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 1216), v9);
    v15 = -1073741810;
  }
  else
  {
    PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x28uLL, 0x42554855u);
    if ( PoolWithTag )
    {
      *PoolWithTag = 0LL;
      v12 = v7 + 1224;
      PoolWithTag[1] = 0LL;
      PoolWithTag[2] = 0LL;
      PoolWithTag[4] = 0LL;
      *(_DWORD *)PoolWithTag = 1330201673;
      *((_DWORD *)PoolWithTag + 8) = v56;
      PoolWithTag[3] = BugCheckParameter4;
      v13 = PoolWithTag + 1;
      v14 = *(_QWORD **)(v12 + 8);
      if ( *v14 != v12 )
        goto LABEL_169;
      *v13 = v12;
      v13[1] = v14;
      *v14 = v13;
      *(_QWORD *)(v12 + 8) = v13;
    }
    else
    {
      ++*(_DWORD *)(v7 + 1264);
    }
    KeReleaseSpinLock(v8, v10);
    v15 = 0;
  }
  if ( (v15 & 0xC0000000) == 0xC0000000 )
  {
    if ( LowPart == 2228227 )
      *(_DWORD *)(CurrentStackLocation->Parameters.WMI.ProviderId + 4) = -2147482880;
    BugCheckParameter4->IoStatus.Status = v15;
    IofCompleteRequest(BugCheckParameter4, 0);
    return v15;
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
        v29 = LowPart - 2229299;
        if ( !v29 )
          return UsbhFdoReturnDeviceHandle(*(_QWORD *)(v5 + 1184), BugCheckParameter3, BugCheckParameter4, 0LL);
        v30 = v29 - 4;
        if ( !v30 )
        {
          v42 = *(_QWORD *)(v5 + 1184);
          v43 = BugCheckParameter4->Tail.Overlay.CurrentStackLocation;
          v44 = -1073741811;
          PdoExt((__int64)BugCheckParameter3);
          SecurityContext = (__int64 *)v43->Parameters.Create.SecurityContext;
          if ( SecurityContext )
          {
            v46 = UsbhRefPdoDeviceHandle(
                    v42,
                    (__int64)BugCheckParameter3,
                    (__int64)v43->Parameters.QueryDirectory.FileName,
                    0x48447472u);
            *SecurityContext = v46;
            if ( v46 )
              v44 = 0;
          }
          BugCheckParameter4->IoStatus.Status = v44;
          IofCompleteRequest(BugCheckParameter4, 0);
          UsbhDecPdoIoCount((ULONG_PTR)BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
          return v44;
        }
        v31 = v30 - 4;
        if ( !v31 )
          return UsbhFdoReturnTtDeviceHandle(*(_QWORD *)(v5 + 1184), BugCheckParameter3, BugCheckParameter4);
        v32 = v31 - 4;
        if ( !v32 )
        {
          v33 = *(_QWORD *)(v5 + 1184);
          FdoExt(v33);
          v34 = PdoExt((__int64)BugCheckParameter3);
          v35 = BugCheckParameter4->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
          if ( !v35 )
          {
            BugCheckParameter4->IoStatus.Status = -1073741811;
            IofCompleteRequest(BugCheckParameter4, 0);
            UsbhDecPdoIoCount((ULONG_PTR)BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
          }
          v36 = UsbhBuildTopologyAddress(v33, v35, *((unsigned __int16 *)v34 + 714));
          BugCheckParameter4->IoStatus.Status = v36;
          v37 = v36;
          IofCompleteRequest(BugCheckParameter4, 0);
          UsbhDecPdoIoCount((ULONG_PTR)BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
          return v37;
        }
        if ( v32 == 4 )
          return UsbhIdleIrp_Event(*(_QWORD *)(v5 + 1184), BugCheckParameter3, BugCheckParameter4, 7LL, 0);
LABEL_155:
        Status = BugCheckParameter4->IoStatus.Status;
        IofCompleteRequest(BugCheckParameter4, 0);
        UsbhDecPdoIoCount((ULONG_PTR)BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
        return Status;
      }
      v51 = LowPart - 2232243;
      if ( v51 )
      {
        v52 = v51 - 2557009;
        if ( !v52 )
          return UsbhFdoHandleGetDumpDataIoctl(*(_QWORD *)(v5 + 1184), BugCheckParameter3, BugCheckParameter4);
        v53 = v52 - 4;
        if ( !v53 )
          return UsbhFdoHandleFreeDumpDataIoctl(*(_QWORD *)(v5 + 1184), BugCheckParameter3, BugCheckParameter4);
        if ( v53 == 7 )
          return UsbhFdoHandleNotifyForwardProgress(*(_QWORD *)(v5 + 1184), BugCheckParameter3, BugCheckParameter4);
        goto LABEL_155;
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
      v48 = LowPart - 2228263;
      if ( !v48 )
        return UsbhFdoSubmitPdoIdleNotification(
                 *(_QWORD *)(v5 + 1184),
                 (ULONG_PTR)BugCheckParameter3,
                 (ULONG_PTR)BugCheckParameter4);
      v49 = v48 - 4;
      if ( !v49 )
        return UsbhFdoRecordFailure(
                 *(_QWORD *)(v5 + 1184),
                 (ULONG_PTR)BugCheckParameter3,
                 (ULONG_PTR)BugCheckParameter4);
      v50 = v49 - 1013;
      if ( !v50 )
        return UsbhFdoReturnDeviceBusInfo(*(_QWORD *)(v5 + 1184), BugCheckParameter3, BugCheckParameter4);
      if ( v50 == 4 )
        return UsbhFdoReturnControllerName(*(_QWORD *)(v5 + 1184), BugCheckParameter3, BugCheckParameter4);
      goto LABEL_155;
    }
    if ( LowPart == 2228256 )
      return UsbhFdoReturnHubName(*(_QWORD *)(v5 + 1184), BugCheckParameter3, BugCheckParameter4);
    v38 = LowPart - 2228231;
    if ( !v38 )
      return UsbhFdoResetPdoPort(
               *(PDEVICE_OBJECT *)(v5 + 1184),
               (ULONG_PTR)BugCheckParameter3,
               (ULONG_PTR)BugCheckParameter4);
    v39 = v38 - 8;
    if ( !v39 )
      return UsbhFdoReturnRootHubPdo(*(_QWORD *)(v5 + 1184), BugCheckParameter3, BugCheckParameter4);
    v40 = v39 - 8;
    if ( v40 )
    {
      v41 = v40 - 4;
      if ( !v41 )
        return UsbhFdoReturnHubCount(*(_QWORD *)(v5 + 1184), BugCheckParameter3, BugCheckParameter4);
      if ( v41 == 4 )
        return UsbhFdoCyclePdoPort(*(_QWORD *)(v5 + 1184), (ULONG_PTR)BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
      goto LABEL_155;
    }
    BugCheckParameter4->IoStatus.Status = 0;
    IofCompleteRequest(BugCheckParameter4, 0);
    UsbhDecPdoIoCount((ULONG_PTR)BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
    return 0LL;
  }
  v16 = *(struct _DEVICE_OBJECT **)(v5 + 1184);
  if ( !v16 )
    goto LABEL_176;
  DeviceExtension = (PDEVICE_OBJECT *)v16->DeviceExtension;
  if ( !DeviceExtension )
    UsbhTrapFatal_Dbg(*(_QWORD *)(v5 + 1184), 0LL);
  if ( *(_DWORD *)DeviceExtension != 541218120 )
    UsbhTrapFatal_Dbg(*(_QWORD *)(v5 + 1184), v16->DeviceExtension);
  v18 = BugCheckParameter3[8];
  if ( !v18 )
LABEL_175:
    UsbhTrapFatal_Dbg(BugCheckParameter3, 0LL);
  if ( *(_DWORD *)v18 != 1329877064 )
    UsbhTrapFatal_Dbg(BugCheckParameter3, v18);
  v19 = BugCheckParameter4->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  v19->AccessState = *(_ACCESS_STATE **)(v18 + 1160);
  switch ( WORD1(v19->SecurityQos) )
  {
    case 0:
      return (unsigned int)UsbhFdoSelectConfigurationPdo(
                             v16,
                             (ULONG_PTR)BugCheckParameter3,
                             (ULONG_PTR)BugCheckParameter4);
    case 1:
      return (unsigned int)UsbhFdoSelectInterfacePdo(v16, BugCheckParameter3, BugCheckParameter4);
    case 0x13:
      if ( (*(_DWORD *)(v18 + 1432) & 0x80000) == 0 )
        goto LABEL_24;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_q(
          WPP_GLOBAL_Control->DeviceExtension,
          v18,
          1,
          19,
          (__int64)&WPP_10fd33d0d4c73f43ffd0851bf01e9310_Traceguids,
          *(_QWORD *)(v18 + 840));
      v22 = -1073741637;
      BugCheckParameter4->IoStatus.Status = -1073741637;
      IofCompleteRequest(BugCheckParameter4, 0);
      UsbhDecPdoIoCount((ULONG_PTR)BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
      return v22;
    case 0x1E:
    case 0x30:
    case 0x31:
      return (unsigned int)UsbhFdoValidateConnectionPdo(v16, BugCheckParameter3, BugCheckParameter4);
    case 0x2A:
      return (unsigned int)UsbhFdoGetMsDescriptorPdo(v16, BugCheckParameter3, BugCheckParameter4);
    default:
LABEL_24:
      ++BugCheckParameter4->CurrentLocation;
      ++BugCheckParameter4->Tail.Overlay.CurrentStackLocation;
      v20 = IofCallDriver(DeviceExtension[152], BugCheckParameter4);
      v21 = BugCheckParameter3[8];
      v22 = v20;
      if ( !v21 )
        goto LABEL_175;
      if ( *(_DWORD *)v21 != 1329877064 )
        UsbhTrapFatal_Dbg(BugCheckParameter3, BugCheckParameter3[8]);
      v23 = (_QWORD *)(v21 + 1224);
      v24 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v21 + 1216));
      v25 = *(_QWORD **)(v21 + 1224);
      if ( v25 == (_QWORD *)(v21 + 1224) || !v25 || v25 == v23 )
        goto LABEL_170;
      break;
  }
  while ( 1 )
  {
    v26 = (_QWORD *)*v25;
    if ( (IRP *)v25[2] == BugCheckParameter4 )
      break;
    v25 = (_QWORD *)*v25;
    if ( v26 == v23 )
    {
LABEL_170:
      v55 = *(_DWORD *)(v21 + 1264);
      if ( !v55 )
      {
        USBHUB_TriggerCallBacks(BugCheckParameter3);
        KeBugCheckEx(0xFEu, 8uLL, 4uLL, (ULONG_PTR)BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
      }
      *(_DWORD *)(v21 + 1264) = v55 - 1;
      goto LABEL_35;
    }
  }
  if ( (_QWORD *)v26[1] != v25 || (v27 = (_QWORD *)v25[1], (_QWORD *)*v27 != v25) )
LABEL_169:
    __fastfail(3u);
  *v27 = v26;
  v26[1] = v27;
  ExFreePoolWithTag(v25 - 1, 0);
LABEL_35:
  if ( (_QWORD *)*v23 != v23 || *(_DWORD *)(v21 + 1264) )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v21 + 1216), v24);
  }
  else
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v21 + 1216), v24);
    KeSetEvent((PRKEVENT)(v21 + 1240), 0, 0);
  }
  return v22;
}
