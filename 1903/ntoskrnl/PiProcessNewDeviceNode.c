/*
 * XREFs of PiProcessNewDeviceNode @ 0x14070502C
 * Callers:
 *     PipProcessDevNodeTree @ 0x14070265C (PipProcessDevNodeTree.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C350 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003C730 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     PipSetDevNodeState @ 0x14014568C (PipSetDevNodeState.c)
 *     PpMarkDeviceStackExtensionFlag @ 0x140158BD4 (PpMarkDeviceStackExtensionFlag.c)
 *     PnpIrpDeviceEnumerated @ 0x14015BAC8 (PnpIrpDeviceEnumerated.c)
 *     IoAddTriageDumpDataBlock @ 0x14019B8D8 (IoAddTriageDumpDataBlock.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     wcschr @ 0x1401A1F20 (wcschr.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     McTemplateK0p @ 0x14029EDA0 (McTemplateK0p.c)
 *     McTemplateK0pz @ 0x1402A12C0 (McTemplateK0pz.c)
 *     PpvUtilFailDriver @ 0x1402A14B0 (PpvUtilFailDriver.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PiPnpRtlEndOperation @ 0x1405BB544 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x1405BD2F8 (PiPnpRtlBeginOperation.c)
 *     RtlGUIDFromString @ 0x1405C15F0 (RtlGUIDFromString.c)
 *     _CmGetDeviceRegProp @ 0x1405C2244 (_CmGetDeviceRegProp.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x1406A2B68 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PnpFindAlternateStringData @ 0x1406E00B4 (PnpFindAlternateStringData.c)
 *     PipClearDevNodeProblem @ 0x1406F8FDC (PipClearDevNodeProblem.c)
 *     PpDevCfgProcessDevice @ 0x1406F93D0 (PpDevCfgProcessDevice.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x1406FEBF0 (PnpNewDeviceNodeDependencyCheck.c)
 *     PnpSetPlugPlayEvent @ 0x1406FF290 (PnpSetPlugPlayEvent.c)
 *     PiUpdateDevicePanel @ 0x1406FF4E0 (PiUpdateDevicePanel.c)
 *     PpIrpQueryCapabilities @ 0x1407003EC (PpIrpQueryCapabilities.c)
 *     PipClearDevNodeUserFlags @ 0x1407017E0 (PipClearDevNodeUserFlags.c)
 *     PnpQueryDeviceText @ 0x140701D4C (PnpQueryDeviceText.c)
 *     PnpQueryID @ 0x1407020A8 (PnpQueryID.c)
 *     PnpIrpQueryID @ 0x1407021A4 (PnpIrpQueryID.c)
 *     PnpSaveDeviceCapabilities @ 0x140703A2C (PnpSaveDeviceCapabilities.c)
 *     _CmSetDeviceRegProp @ 0x140703BE0 (_CmSetDeviceRegProp.c)
 *     PipSetDevNodeFlags @ 0x14070618C (PipSetDevNodeFlags.c)
 *     _PnpSetObjectProperty @ 0x1407065F4 (_PnpSetObjectProperty.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140706A30 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     PipClearDevNodeFlags @ 0x140707494 (PipClearDevNodeFlags.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x14070AB38 (PiDcUpdateDeviceContainerMembership.c)
 *     PiQueryRemovableDeviceOverride @ 0x1407127B4 (PiQueryRemovableDeviceOverride.c)
 *     PiDmaGuardProcessNewDeviceNode @ 0x140713F40 (PiDmaGuardProcessNewDeviceNode.c)
 *     PnpGetDeviceLocationStrings @ 0x140714090 (PnpGetDeviceLocationStrings.c)
 *     PnpQueryInterface @ 0x1407146F0 (PnpQueryInterface.c)
 *     PiCreateDeviceInstanceKey @ 0x14071951C (PiCreateDeviceInstanceKey.c)
 *     PnpGenerateDeviceIdsHash @ 0x140719F18 (PnpGenerateDeviceIdsHash.c)
 *     PiBuildDeviceNodeInstancePath @ 0x14071A83C (PiBuildDeviceNodeInstancePath.c)
 *     KseAddHardwareId @ 0x14071AD10 (KseAddHardwareId.c)
 *     PnpQueryBusInformation @ 0x14071B014 (PnpQueryBusInformation.c)
 *     PpHotSwapUpdateRemovalPolicy @ 0x14071B3AC (PpHotSwapUpdateRemovalPolicy.c)
 *     PipGenerateContainerID @ 0x14071BAF8 (PipGenerateContainerID.c)
 *     PnpInitializeSessionId @ 0x14071BDF4 (PnpInitializeSessionId.c)
 *     PiQueryAndAllocateBootResources @ 0x140721F88 (PiQueryAndAllocateBootResources.c)
 *     PiQueryResourceRequirements @ 0x140722880 (PiQueryResourceRequirements.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x140722ABC (PnpMapDeviceObjectToDeviceInstance.c)
 *     PpDeviceRegistration @ 0x140722B18 (PpDeviceRegistration.c)
 *     PnpIsDeviceInstanceEnabled @ 0x14072304C (PnpIsDeviceInstanceEnabled.c)
 *     PipSetDevNodeProblem @ 0x140731754 (PipSetDevNodeProblem.c)
 *     PnpCheckDeviceIdsChanged @ 0x1407363E8 (PnpCheckDeviceIdsChanged.c)
 *     PipMakeGloballyUniqueId @ 0x140737660 (PipMakeGloballyUniqueId.c)
 *     PpDevCfgProcessDeviceOperations @ 0x1407391D8 (PpDevCfgProcessDeviceOperations.c)
 *     PipSetDevNodeUserFlags @ 0x14073AB78 (PipSetDevNodeUserFlags.c)
 *     PnpDisableDevice @ 0x140862064 (PnpDisableDevice.c)
 *     PiDevCfgGetFailedInstallProblemStatus @ 0x14086792C (PiDevCfgGetFailedInstallProblemStatus.c)
 *     PpDevCfgCheckDeviceNeedsUpdate @ 0x14086C018 (PpDevCfgCheckDeviceNeedsUpdate.c)
 *     PpProfileCancelTransitioningDock @ 0x14086D268 (PpProfileCancelTransitioningDock.c)
 *     PnpSetInvalidIDEvent @ 0x14086DE20 (PnpSetInvalidIDEvent.c)
 *     PnpTraceDockDeviceEnumeration @ 0x1408746C4 (PnpTraceDockDeviceEnumeration.c)
 *     PnpLogDuplicateDevice @ 0x1408753EC (PnpLogDuplicateDevice.c)
 */

__int64 __fastcall PiProcessNewDeviceNode(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // r13d
  HANDLE v4; // r12
  struct _DEVICE_OBJECT *v5; // r15
  int v6; // eax
  wchar_t *v7; // rax
  int Capabilities; // ebx
  bool v9; // r14
  int v10; // eax
  __int64 v11; // r8
  __int64 v12; // r8
  int v13; // eax
  int GloballyUniqueId; // ebx
  WCHAR *v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // ebx
  __int64 v19; // r8
  unsigned int v20; // ecx
  struct _DEVICE_OBJECT *v21; // rax
  ULONG_PTR v22; // rbx
  unsigned int v23; // esi
  struct _KTHREAD *v24; // rax
  int v25; // ebx
  __int64 v26; // rdx
  unsigned int v27; // eax
  int v28; // eax
  int v29; // r14d
  PVOID v30; // rsi
  WCHAR *v31; // rbx
  __int64 v32; // r8
  HANDLE v33; // rdx
  struct _KTHREAD *v34; // rax
  struct _KTHREAD *v35; // rax
  struct _KTHREAD *v36; // rax
  HANDLE v37; // rsi
  PVOID v38; // r13
  PVOID v39; // r12
  unsigned int v40; // r14d
  int v41; // eax
  char v42; // bl
  int v43; // eax
  unsigned int v44; // r14d
  __int64 v45; // rdx
  PVOID v46; // r14
  int AlternateStringData; // eax
  unsigned int v48; // ebx
  int DeviceLocationStrings; // eax
  int v50; // eax
  unsigned int v51; // ebx
  __int64 v52; // r8
  struct _KTHREAD *v53; // rax
  __int64 v54; // rdx
  int v55; // eax
  int v56; // ecx
  __int64 v57; // rcx
  __int64 v58; // rcx
  PVOID v59; // rcx
  int v61; // eax
  _QWORD *v62; // rcx
  PVOID v63; // rbx
  __int64 v64; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v66; // rdx
  __int64 FailedInstallProblemStatus; // r8
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rdx
  __int64 v72; // r8
  unsigned int v73; // eax
  int v74; // ecx
  struct _DRIVER_OBJECT *DriverObject; // rcx
  UNICODE_STRING *p_DriverName; // rcx
  char *DeviceNode; // rcx
  unsigned __int16 *v78; // rdi
  struct _DEVOBJ_EXTENSION *DeviceObjectExtension; // rcx
  _WORD *v80; // rax
  __int64 v81; // rcx
  _WORD *v82; // rcx
  __int64 v83; // rcx
  __int64 v84; // rcx
  _WORD *v85; // rcx
  __int64 v86; // rcx
  unsigned __int16 *v87; // rdi
  __int64 v88; // rcx
  __int64 v89; // rax
  __int64 v90; // rcx
  _WORD *v91; // rcx
  __int64 v92; // rcx
  int v93; // eax
  int v94; // eax
  int v95; // eax
  int v96; // edx
  char v97; // al
  unsigned int v98; // eax
  int v99; // ecx
  unsigned int v100; // eax
  unsigned int v101; // eax
  int BugCheckParameter4; // [rsp+28h] [rbp-E0h]
  int BugCheckParameter4a; // [rsp+28h] [rbp-E0h]
  int v104; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v105; // [rsp+5Ch] [rbp-ACh] BYREF
  int v106; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v107; // [rsp+64h] [rbp-A4h]
  int v108; // [rsp+68h] [rbp-A0h] BYREF
  char v109; // [rsp+6Ch] [rbp-9Ch] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-98h] BYREF
  int v111; // [rsp+78h] [rbp-90h]
  int v112; // [rsp+7Ch] [rbp-8Ch]
  int v113; // [rsp+80h] [rbp-88h] BYREF
  int v114; // [rsp+84h] [rbp-84h]
  PCWSTR SourceString; // [rsp+88h] [rbp-80h] BYREF
  PVOID v116; // [rsp+90h] [rbp-78h] BYREF
  PVOID v117; // [rsp+98h] [rbp-70h] BYREF
  int v118; // [rsp+A0h] [rbp-68h] BYREF
  unsigned int v119; // [rsp+A4h] [rbp-64h] BYREF
  PVOID v120; // [rsp+A8h] [rbp-60h] BYREF
  WCHAR *v121; // [rsp+B0h] [rbp-58h] BYREF
  PVOID v122; // [rsp+B8h] [rbp-50h] BYREF
  PVOID P; // [rsp+C0h] [rbp-48h] BYREF
  PVOID v124; // [rsp+C8h] [rbp-40h]
  int v125; // [rsp+D0h] [rbp-38h] BYREF
  unsigned int v126; // [rsp+D4h] [rbp-34h] BYREF
  __int64 v127; // [rsp+D8h] [rbp-30h] BYREF
  PVOID v128; // [rsp+E0h] [rbp-28h] BYREF
  PVOID v129; // [rsp+E8h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+F0h] [rbp-18h] BYREF
  int v131; // [rsp+100h] [rbp-8h] BYREF
  int v132; // [rsp+104h] [rbp-4h] BYREF
  wchar_t *Str; // [rsp+108h] [rbp+0h] BYREF
  __int64 v134; // [rsp+110h] [rbp+8h] BYREF
  const WCHAR *v135; // [rsp+118h] [rbp+10h] BYREF
  _QWORD v136[5]; // [rsp+120h] [rbp+18h] BYREF
  _DWORD v137[16]; // [rsp+148h] [rbp+40h] BYREF
  GUID Guid; // [rsp+188h] [rbp+80h] BYREF

  memset(v137, 0, sizeof(v137));
  *(_QWORD *)&Guid.Data1 = 0LL;
  *(_QWORD *)Guid.Data4 = 0LL;
  v129 = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  if ( (byte_14042BDBB & 8) != 0 )
    McTemplateK0p(v2, &KMPnPEvt_ProcessNewDevice_Start, 0LL, a1);
  LOBYTE(v112) = 0;
  LOWORD(v104) = 0;
  v114 = 0;
  v3 = 0;
  v4 = 0LL;
  v107 = 0;
  v5 = *(struct _DEVICE_OBJECT **)(a1 + 32);
  v134 = MEMORY[0xFFFFF78000000014];
  v106 = 0;
  v108 = 0;
  v105 = 0;
  v113 = 0;
  Handle = 0LL;
  PiPnpRtlBeginOperation(&v129);
  PipClearDevNodeFlags(a1, 0x2000000LL);
  v124 = 0LL;
  v117 = 0LL;
  v6 = PnpQueryID(a1, 0, (PVOID *)&Str, &v131);
  if ( v6 < 0 )
  {
    v3 = v6;
    if ( v6 == -1073479624 )
      v3 = -1073741823;
  }
  else
  {
    v124 = Str;
    v7 = wcschr(Str, 0x5Cu);
    *v7 = 0;
    v117 = v7 + 1;
  }
  Capabilities = PpIrpQueryCapabilities(v5, v137);
  PipClearDevNodeUserFlags(a1, 2);
  v9 = 0;
  if ( Capabilities >= 0 )
  {
    if ( (v137[1] & 0x20000) != 0 )
      PipSetDevNodeUserFlags(a1, 2LL);
    v9 = (v137[1] & 0x40) != 0;
  }
  if ( (v137[1] & 0x20) != 0 )
  {
    if ( *(_DWORD *)(a1 + 568) == 4 )
      PpProfileCancelTransitioningDock(a1);
    v10 = 1;
  }
  else
  {
    v10 = 0;
  }
  *(_DWORD *)(a1 + 568) = v10;
  v127 = -1LL;
  memset(v136, 0, sizeof(v136));
  if ( (int)PnpQueryInterface(v5, 0LL, v136) >= 0 )
  {
    if ( v136[4] )
    {
      if ( WORD1(v136[0]) == 1 )
      {
        ((void (__fastcall *)(_QWORD, __int64 *))v136[4])(v136[1], &v127);
        if ( v136[3] )
          ((void (__fastcall *)(_QWORD))v136[3])(v136[1]);
      }
    }
  }
  PnpQueryDeviceText(*(struct _DEVICE_OBJECT **)(a1 + 32), 0, v11, &v122);
  PnpQueryDeviceText(*(struct _DEVICE_OBJECT **)(a1 + 32), 1, v12, &v128);
  v13 = PnpQueryID(a1, 3, &v116, &v132);
  GloballyUniqueId = v13;
  if ( v9 )
  {
    if ( v13 == -1073741637 )
    {
      PipSetDevNodeProblem(a1, 9LL, 3221225659LL);
      PipSetDevNodeFlags(*(_QWORD *)(a1 + 16), 0x200000LL);
      PnpSetInvalidIDEvent(*(_QWORD *)(a1 + 16) + 40LL);
    }
  }
  else if ( (*(_DWORD *)(a1 + 396) & 0x2000) == 0 || *(_DWORD *)(a1 + 404) != 9 )
  {
    v62 = *(_QWORD **)(a1 + 16);
    if ( v62 != IopRootDeviceNode )
    {
      v121 = 0LL;
      v15 = (WCHAR *)v116;
      goto LABEL_132;
    }
  }
  v15 = (WCHAR *)v116;
  while ( 1 )
  {
    if ( GloballyUniqueId < 0 )
    {
      v3 = GloballyUniqueId;
      if ( (*(_DWORD *)(a1 + 396) & 0x2000) == 0 || *(_DWORD *)(a1 + 404) != 9 )
      {
        if ( GloballyUniqueId == -1073741670 )
        {
          v71 = 3LL;
          v72 = 3221225626LL;
        }
        else
        {
          v72 = (unsigned int)GloballyUniqueId;
          v71 = 19LL;
        }
        PipSetDevNodeProblem(a1, v71, v72);
      }
    }
    v18 = PiBuildDeviceNodeInstancePath(a1, v124, v117, v15);
    if ( v18 >= 0 )
    {
      if ( (byte_14042BDBB & 8) != 0 )
        McTemplateK0pz(v17, v16, v19, a1, *(_QWORD *)(a1 + 48));
      v18 = PiCreateDeviceInstanceKey(a1, &Handle, &v108);
      if ( v18 < 0 )
      {
        PipSetDevNodeProblem(a1, 19LL, (unsigned int)v18);
        v106 = v108;
      }
      else
      {
        v20 = 0;
        v106 = v108;
        if ( v108 == 1 )
          v20 = 0x20000;
        v107 = v20;
      }
      v4 = Handle;
    }
    if ( v18 >= 0 )
      v18 = v3;
    v3 = v18;
    PpMarkDeviceStackExtensionFlag((__int64)v5, 16, 1);
    PipSetDevNodeState(a1, 770);
    if ( (*(_DWORD *)(a1 + 396) & 0x2000) != 0 )
    {
      v73 = *(_DWORD *)(a1 + 404);
      if ( v73 <= 0x13 )
      {
        v74 = 524808;
        if ( _bittest(&v74, v73) )
          break;
      }
    }
    if ( v106 == 1 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
      v4 = Handle;
      if ( Handle && v122 )
      {
        v69 = -1LL;
        do
          ++v69;
        while ( *((_WORD *)v122 + v69) );
        CmSetDeviceRegProp(
          *(__int64 *)&PiPnpRtlCtx,
          *(_QWORD *)(a1 + 48),
          (__int64)Handle,
          1u,
          1u,
          (__int64)v122,
          2 * v69 + 2,
          v107);
      }
      ExReleaseResourceLite(&PnpRegistryDeviceResource);
      KeLeaveCriticalRegion();
      v106 = v108;
      goto LABEL_30;
    }
    v21 = (struct _DEVICE_OBJECT *)PnpDeviceObjectFromDeviceInstanceWithTag(a1 + 40, 0x65706E50u);
    v22 = (ULONG_PTR)v21;
    if ( !v21 )
      goto LABEL_30;
    if ( v21 == v5 )
    {
      ObfDereferenceObjectWithTag(v21, 0x65706E50u);
LABEL_30:
      if ( (*(_DWORD *)(a1 + 396) & 0x2000) != 0 && *(_DWORD *)(a1 + 404) == 42 )
        PipClearDevNodeProblem(a1);
      break;
    }
    if ( !v9 )
    {
      PpvUtilFailDriver(0);
      IoAddTriageDumpDataBlock((ULONG)v5, (PVOID)v5->Size);
      DriverObject = v5->DriverObject;
      if ( DriverObject )
      {
        IoAddTriageDumpDataBlock((ULONG)DriverObject, (PVOID)(unsigned int)DriverObject->Size);
        p_DriverName = &v5->DriverObject->DriverName;
        if ( p_DriverName->Length )
        {
          IoAddTriageDumpDataBlock((ULONG)p_DriverName, (PVOID)2);
          IoAddTriageDumpDataBlock(
            (ULONG)v5->DriverObject->DriverName.Buffer,
            (PVOID)v5->DriverObject->DriverName.Length);
        }
      }
      DeviceNode = (char *)v5->DeviceObjectExtension->DeviceNode;
      if ( DeviceNode )
      {
        v78 = (unsigned __int16 *)(DeviceNode + 40);
        IoAddTriageDumpDataBlock((ULONG)DeviceNode, (PVOID)0x310);
        if ( *v78 )
        {
          IoAddTriageDumpDataBlock((ULONG)v78, (PVOID)2);
          IoAddTriageDumpDataBlock(*((_QWORD *)v78 + 1), (PVOID)*v78);
        }
        DeviceObjectExtension = v5->DeviceObjectExtension;
        v80 = DeviceObjectExtension->DeviceNode;
        if ( v80[28] )
        {
          IoAddTriageDumpDataBlock((_DWORD)v80 + 56, (PVOID)2);
          IoAddTriageDumpDataBlock(
            *((_QWORD *)v5->DeviceObjectExtension->DeviceNode + 8),
            (PVOID)*((unsigned __int16 *)v5->DeviceObjectExtension->DeviceNode + 28));
          DeviceObjectExtension = v5->DeviceObjectExtension;
        }
        v81 = *((_QWORD *)DeviceObjectExtension->DeviceNode + 2);
        if ( v81 )
        {
          v82 = (_WORD *)(v81 + 56);
          if ( *v82 )
          {
            IoAddTriageDumpDataBlock((ULONG)v82, (PVOID)2);
            v83 = *((_QWORD *)v5->DeviceObjectExtension->DeviceNode + 2);
            IoAddTriageDumpDataBlock(*(_QWORD *)(v83 + 64), (PVOID)*(unsigned __int16 *)(v83 + 56));
          }
        }
      }
      IoAddTriageDumpDataBlock(v22, (PVOID)*(unsigned __int16 *)(v22 + 2));
      v84 = *(_QWORD *)(v22 + 8);
      if ( v84 )
      {
        IoAddTriageDumpDataBlock(v84, (PVOID)(unsigned int)*(__int16 *)(v84 + 2));
        v85 = (_WORD *)(*(_QWORD *)(v22 + 8) + 56LL);
        if ( *v85 )
        {
          IoAddTriageDumpDataBlock((ULONG)v85, (PVOID)2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(v22 + 8) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(v22 + 8) + 56LL));
        }
      }
      v86 = *(_QWORD *)(*(_QWORD *)(v22 + 312) + 40LL);
      if ( v86 )
      {
        v87 = (unsigned __int16 *)(v86 + 40);
        IoAddTriageDumpDataBlock(v86, (PVOID)0x310);
        if ( *v87 )
        {
          IoAddTriageDumpDataBlock((ULONG)v87, (PVOID)2);
          IoAddTriageDumpDataBlock(*((_QWORD *)v87 + 1), (PVOID)*v87);
        }
        v88 = *(_QWORD *)(v22 + 312);
        v89 = *(_QWORD *)(v88 + 40);
        if ( *(_WORD *)(v89 + 56) )
        {
          IoAddTriageDumpDataBlock(v89 + 56, (PVOID)2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v22 + 312) + 40LL) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v22 + 312) + 40LL) + 56LL));
          v88 = *(_QWORD *)(v22 + 312);
        }
        v90 = *(_QWORD *)(*(_QWORD *)(v88 + 40) + 16LL);
        if ( v90 )
        {
          v91 = (_WORD *)(v90 + 56);
          if ( *v91 )
          {
            IoAddTriageDumpDataBlock((ULONG)v91, (PVOID)2);
            v92 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v22 + 312) + 40LL) + 16LL);
            IoAddTriageDumpDataBlock(*(_QWORD *)(v92 + 64), (PVOID)*(unsigned __int16 *)(v92 + 56));
          }
        }
      }
      KeBugCheckEx(0xCAu, 1uLL, (ULONG_PTR)v5, v22, 0LL);
    }
    ZwClose(v4);
    v137[1] &= ~0x40u;
    Handle = 0LL;
    v4 = 0LL;
    v9 = 0;
    PipSetDevNodeProblem(a1, 42LL, 0LL);
    PnpLogDuplicateDevice((PCWSTR)v124, v15);
    if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v22 + 312) + 40LL) + 16LL) == *(_QWORD *)(a1 + 16) )
      PpvUtilFailDriver(0);
    ObfDereferenceObjectWithTag((PVOID)v22, 0x65706E50u);
    v62 = *(_QWORD **)(a1 + 16);
LABEL_132:
    GloballyUniqueId = PipMakeGloballyUniqueId(v62[4], v15, &v121);
    if ( v15 )
      ExFreePoolWithTag(v15, 0);
    v15 = v121;
    v116 = v121;
  }
  v23 = v107;
  if ( v4 )
  {
    PnpSetObjectProperty(
      PiPnpRtlCtx,
      *(_QWORD *)(a1 + 48),
      1,
      0LL,
      (__int64)&DEVPKEY_Device_LastKnownParent,
      18,
      *(_QWORD *)(*(_QWORD *)(a1 + 16) + 48LL),
      *(unsigned __int16 *)(*(_QWORD *)(a1 + 16) + 40LL) + 2,
      v107);
    PnpSetObjectProperty(
      PiPnpRtlCtx,
      *(_QWORD *)(a1 + 48),
      1,
      0LL,
      (__int64)&DEVPKEY_Device_LastArrivalDate,
      16,
      (__int64)&v134,
      8,
      v107);
    PnpSetObjectProperty(
      PiPnpRtlCtx,
      *(_QWORD *)(a1 + 48),
      1,
      0LL,
      (__int64)&DEVPKEY_Device_LastRemovalDate,
      0,
      0LL,
      0,
      v107);
    PnpSetObjectProperty(
      PiPnpRtlCtx,
      *(_QWORD *)(a1 + 48),
      1,
      0LL,
      (__int64)&DEVPKEY_Device_HardwareConfigurationIndex,
      7,
      (__int64)&PnpCurrentHardwareConfigurationIndex,
      4,
      v107);
  }
  if ( (v137[1] & 0x4000) != 0 )
  {
    if ( (*(_DWORD *)(a1 + 396) & 0x2000) == 0 || (v93 = *(_DWORD *)(a1 + 404), v93 != 1) && v93 != 14 )
      PnpDisableDevice(a1, 29LL);
  }
  if ( (*(_DWORD *)(a1 + 396) & 0x2000) == 0
    || (v94 = *(_DWORD *)(a1 + 404), v111 = v3, v94 != 9) && (v111 = v3, v94 != 3) && (v111 = v3, v94 != 19) )
  {
    v24 = KeGetCurrentThread();
    --v24->KernelApcDisable;
    ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
    v4 = Handle;
    if ( Handle && v128 )
    {
      v68 = -1LL;
      do
        ++v68;
      while ( *((_WORD *)v128 + v68) );
      CmSetDeviceRegProp(
        *(__int64 *)&PiPnpRtlCtx,
        *(_QWORD *)(a1 + 48),
        (__int64)Handle,
        0xEu,
        1u,
        (__int64)v128,
        2 * v68 + 2,
        v23);
    }
    v25 = v108;
    v106 = v108;
    PnpSaveDeviceCapabilities(a1, v137, v108 == 1);
    if ( v127 != -1 )
      PnpSetObjectProperty(
        PiPnpRtlCtx,
        *(_QWORD *)(a1 + 48),
        1,
        0LL,
        (__int64)&DEVPKEY_Device_ExtendedAddress,
        9,
        (__int64)&v127,
        8,
        v23);
    v26 = *(_QWORD *)(a1 + 48);
    v118 = 4;
    LOBYTE(v104) = v25 == 1;
    if ( (int)CmGetDeviceRegProp(
                *(__int64 *)&PiPnpRtlCtx,
                v26,
                (__int64)v4,
                11,
                (__int64)&v125,
                (__int64)&v105,
                (__int64)&v118,
                0) >= 0
      && v125 == 4
      && v118 == 4 )
    {
      v27 = v105;
      if ( (v105 & 0x20) == 0 )
      {
        if ( (v105 & 0x40) == 0 )
        {
LABEL_44:
          v28 = PnpMapDeviceObjectToDeviceInstance(*(_QWORD *)(a1 + 32), a1 + 40);
          v29 = v3;
          if ( v28 < 0 )
            v29 = v28;
          v111 = v29;
          if ( PnpBootMode )
          {
            *(_DWORD *)(a1 + 704) |= 0x1000u;
            v114 = 2;
          }
          else
          {
            v61 = (unsigned __int8)v112;
            if ( (v105 & 0x40000) != 0 )
              v61 = 1;
            v112 = v61;
          }
          ExReleaseResourceLite(&PnpRegistryDeviceResource);
          KeLeaveCriticalRegion();
          goto LABEL_49;
        }
        v66 = 28LL;
LABEL_143:
        if ( (v137[1] & 0x100) != 0 )
        {
          v70 = *(_QWORD *)(a1 + 48);
          v105 = v27 | 0x400;
          CmSetDeviceRegProp(*(__int64 *)&PiPnpRtlCtx, v70, (__int64)v4, 0xBu, 4u, (__int64)&v105, 4u, v23);
        }
        else
        {
          if ( (_DWORD)v66 == 28 )
          {
            FailedInstallProblemStatus = (unsigned int)PiDevCfgGetFailedInstallProblemStatus(*(_QWORD *)(a1 + 48), v4);
            v66 = 28LL;
          }
          else
          {
            FailedInstallProblemStatus = 0LL;
          }
          PipSetDevNodeProblem(a1, v66, FailedInstallProblemStatus);
        }
        goto LABEL_44;
      }
      v66 = 18LL;
      if ( (v105 & 1) != 0 )
        goto LABEL_143;
    }
    else
    {
      v27 = 0;
      v105 = 0;
      v66 = 1LL;
    }
    LOBYTE(v104) = 1;
    goto LABEL_143;
  }
LABEL_49:
  PnpQueryID(a1, 1, &P, &v126);
  v30 = P;
  KseAddHardwareId((PCWSTR)P);
  PnpQueryID(a1, 2, &v120, &v119);
  PnpGenerateDeviceIdsHash(v30, v120, a1 + 684);
  PnpIrpQueryID(*(struct _DEVICE_OBJECT **)(a1 + 32), 5, (ULONG_PTR *)&SourceString);
  v31 = (WCHAR *)SourceString;
  if ( SourceString )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    if ( RtlGUIDFromString(&DestinationString, &Guid) < 0 )
    {
      ExFreePoolWithTag(v31, 0);
      v31 = 0LL;
      SourceString = 0LL;
    }
  }
  if ( (int)PiQueryRemovableDeviceOverride(a1, v30, v120, &v109) >= 0 )
  {
    LOBYTE(v32) = v109;
LABEL_56:
    v33 = 0LL;
    if ( v106 != 1 )
      v33 = v4;
    if ( (int)PipGenerateContainerID(a1, v33, v32, v31, &v135) >= 0 )
    {
      if ( v31 )
        ExFreePoolWithTag(v31, 0);
      v31 = (WCHAR *)v135;
      SourceString = v135;
    }
    goto LABEL_62;
  }
  if ( (v137[1] & 0x20) != 0 || (v137[1] & 0x40000) != 0 || (LOBYTE(v32) = 1, (v137[1] & 0x10) == 0) )
    LOBYTE(v32) = 0;
  if ( !v31 )
    goto LABEL_56;
LABEL_62:
  if ( !v31
    || (RtlInitUnicodeString(&DestinationString, v31), RtlGUIDFromString(&DestinationString, (GUID *)(a1 + 664)) < 0) )
  {
    *(_QWORD *)(a1 + 664) = 0LL;
    *(_QWORD *)(a1 + 672) = 0LL;
  }
  v34 = KeGetCurrentThread();
  --v34->KernelApcDisable;
  ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
  PipSetDevNodeFlags(a1, 32LL);
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegion();
  if ( Handle && SourceString )
  {
    v35 = KeGetCurrentThread();
    --v35->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
    PiDcUpdateDeviceContainerMembership(*(_QWORD *)(a1 + 48), Handle, SourceString);
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    KeLeaveCriticalRegion();
  }
  v36 = KeGetCurrentThread();
  --v36->KernelApcDisable;
  ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
  v37 = Handle;
  v38 = P;
  v39 = v120;
  if ( Handle )
  {
    v40 = v126;
    if ( (_BYTE)v104 || v108 == 1 )
    {
      v42 = BYTE1(v104);
    }
    else
    {
      LOBYTE(BugCheckParameter4) = 1;
      v41 = PnpCheckDeviceIdsChanged(a1, Handle, P, v126, BugCheckParameter4, (char *)&v104 + 1);
      v42 = BYTE1(v104);
      if ( v41 < 0 )
        v42 = 0;
      BYTE1(v104) = v42;
      if ( !v42 )
      {
        LOBYTE(BugCheckParameter4a) = 0;
        v43 = PnpCheckDeviceIdsChanged(a1, v37, v39, v119, BugCheckParameter4a, (char *)&v104 + 1);
        v42 = BYTE1(v104);
        if ( v43 < 0 )
          v42 = 0;
      }
    }
    if ( v38 )
      CmSetDeviceRegProp(*(__int64 *)&PiPnpRtlCtx, *(_QWORD *)(a1 + 48), (__int64)v37, 2u, 7u, (__int64)v38, v40, v107);
    v44 = v107;
    if ( v39 )
      CmSetDeviceRegProp(*(__int64 *)&PiPnpRtlCtx, *(_QWORD *)(a1 + 48), (__int64)v37, 3u, 7u, (__int64)v39, v119, v107);
    if ( v42 || (_BYTE)v112 )
    {
      if ( (_BYTE)v104 )
      {
        v96 = v105;
        v97 = v113;
      }
      else
      {
        v95 = PpDevCfgCheckDeviceNeedsUpdate(*(_QWORD *)(a1 + 48), v37, &v113);
        v96 = v105;
        if ( v95 < 0 )
        {
          v97 = 0;
        }
        else
        {
          v97 = v113;
          v96 = v113 | v105;
          v105 |= v113;
        }
      }
      if ( (v97 & 0x20) != 0 || (v96 & 0x40000) != 0 )
      {
        v105 = v96 & 0xFFFBFFFF;
        CmSetDeviceRegProp(
          *(__int64 *)&PiPnpRtlCtx,
          *(_QWORD *)(a1 + 48),
          (__int64)v37,
          0xBu,
          4u,
          (__int64)&v105,
          4u,
          v44);
        LOBYTE(v96) = v105;
      }
      if ( (v96 & 0x20) != 0 )
      {
        LOBYTE(v104) = 1;
        PipSetDevNodeProblem(a1, 18LL, 0LL);
      }
    }
  }
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegion();
  v46 = v122;
  if ( v37 )
  {
    v117 = 0LL;
    AlternateStringData = 0;
    v106 = 0;
    v48 = 0;
    if ( v122 )
    {
      v64 = -1LL;
      do
        ++v64;
      while ( *((_WORD *)v122 + v64) );
      v48 = 2 * v64 + 2;
      AlternateStringData = PnpFindAlternateStringData(v122, v48, &v117, &v106);
    }
    PnpSetObjectProperty(
      PiPnpRtlCtx,
      *(_QWORD *)(a1 + 48),
      1,
      0LL,
      (__int64)&DEVPKEY_Device_BusReportedDeviceDesc,
      AlternateStringData != 0 ? 25 : 18,
      (__int64)v46,
      v48,
      v107);
    DeviceLocationStrings = PnpGetDeviceLocationStrings(a1, &v117, &v106);
    v45 = 0LL;
    if ( DeviceLocationStrings >= 0 )
    {
      v63 = v117;
      PnpSetObjectProperty(
        PiPnpRtlCtx,
        *(_QWORD *)(a1 + 48),
        1,
        0LL,
        (__int64)&DEVPKEY_Device_LocationPaths,
        8210,
        (__int64)v117,
        2 * v106,
        v107);
      ExFreePoolWithTag(v63, 0);
    }
  }
  PnpQueryBusInformation(a1, v45);
  v50 = PiDmaGuardProcessNewDeviceNode(a1);
  v51 = v111;
  if ( v50 < 0 )
    v51 = v50;
  if ( (v137[1] & 0x4000) == 0 && ((*(_DWORD *)(a1 + 396) & 0x2000) == 0 || *(_DWORD *)(a1 + 404) != 14) )
  {
    if ( (_BYTE)v104 )
      PpDevCfgProcessDevice();
    else
      PpDevCfgProcessDeviceOperations(a1);
  }
  PiQueryResourceRequirements(a1);
  if ( (*(_DWORD *)(a1 + 396) & 0x2000) == 0
    || (v98 = *(_DWORD *)(a1 + 404), v98 > 0x1D)
    || (v99 = 541606408, !_bittest(&v99, v98)) )
  {
    PnpIsDeviceInstanceEnabled(v37, a1 + 40, 1LL);
  }
  if ( v37 )
  {
    LOBYTE(v52) = v108 == 1;
    PnpInitializeSessionId(a1, v37, v52);
  }
  PiQueryAndAllocateBootResources(a1);
  if ( (*(_DWORD *)(a1 + 396) & 0x2000) == 0
    || (v100 = *(_DWORD *)(a1 + 404), v100 > 0x13)
    || (v56 = 524808, !_bittest(&v56, v100)) )
  {
    v53 = KeGetCurrentThread();
    --v53->KernelApcDisable;
    ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
    PnpSaveDeviceCapabilities(a1, v137, v108 == 1);
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    KeLeaveCriticalRegion();
    PpHotSwapUpdateRemovalPolicy(a1);
    LOBYTE(v54) = 1;
    v55 = PpDeviceRegistration(a1 + 40, v54, a1 + 56, 0LL);
    if ( v55 < 0 )
      PipSetDevNodeProblem(a1, 19LL, (unsigned int)v55);
    v39 = v120;
    v56 = 524808;
    v38 = P;
    v46 = v122;
    v37 = Handle;
  }
  if ( (*(_DWORD *)(a1 + 396) & 0x2000) == 0 || (v101 = *(_DWORD *)(a1 + 404), v101 > 0x13) || !_bittest(&v56, v101) )
  {
    PnpIrpDeviceEnumerated((int)v5);
    if ( v37 )
      PiUpdateDevicePanel(a1, v37);
    PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v57, *(_QWORD *)(a1 + 48), 1LL);
    PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v58, *(_QWORD *)(a1 + 48), 14LL);
    PnpSetPlugPlayEvent((__int128 *)&GUID_DEVICE_ENUMERATED, v5);
    PnpNewDeviceNodeDependencyCheck(a1);
  }
  if ( v38 )
    ExFreePoolWithTag(v38, 0);
  if ( v39 )
    ExFreePoolWithTag(v39, 0);
  if ( SourceString )
    ExFreePoolWithTag((PVOID)SourceString, 0);
  if ( v37 )
    ZwClose(v37);
  if ( v116 )
    ExFreePoolWithTag(v116, 0);
  if ( v128 )
    ExFreePoolWithTag(v128, 0);
  if ( v46 )
    ExFreePoolWithTag(v46, 0);
  if ( v124 )
    ExFreePoolWithTag(v124, 0);
  v59 = v129;
  if ( v129 )
    PiPnpRtlEndOperation((PVOID **)v129);
  if ( (byte_14042BDBB & 8) != 0 )
    McTemplateK0p((__int64)v59, &KMPnPEvt_ProcessNewDevice_Stop, 0LL, a1);
  if ( *(_DWORD *)(a1 + 568) )
    PnpTraceDockDeviceEnumeration(a1, v51);
  return v51;
}
