/*
 * XREFs of PiProcessNewDeviceNode @ 0x1406E51B4
 * Callers:
 *     PipProcessDevNodeTree @ 0x1406E77FC (PipProcessDevNodeTree.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x140050860 (ExAcquireResourceSharedLite.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     PipSetDevNodeState @ 0x140159ED8 (PipSetDevNodeState.c)
 *     PpMarkDeviceStackExtensionFlag @ 0x14015FEC0 (PpMarkDeviceStackExtensionFlag.c)
 *     PnpIrpDeviceEnumerated @ 0x1401606C8 (PnpIrpDeviceEnumerated.c)
 *     IoAddTriageDumpDataBlock @ 0x140191E2C (IoAddTriageDumpDataBlock.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     wcschr @ 0x140197810 (wcschr.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     McTemplateK0p @ 0x140288E20 (McTemplateK0p.c)
 *     McTemplateK0pz @ 0x14028B23C (McTemplateK0pz.c)
 *     PpvUtilFailDriver @ 0x14028B42C (PpvUtilFailDriver.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PnpFindAlternateStringData @ 0x140588E34 (PnpFindAlternateStringData.c)
 *     PiPnpRtlEndOperation @ 0x140596CA4 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x140597E08 (PiPnpRtlBeginOperation.c)
 *     RtlGUIDFromString @ 0x14059B5A0 (RtlGUIDFromString.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x14059BC4C (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     _CmGetDeviceRegProp @ 0x1405C799C (_CmGetDeviceRegProp.c)
 *     PnpSaveDeviceCapabilities @ 0x1406E3B10 (PnpSaveDeviceCapabilities.c)
 *     _CmSetDeviceRegProp @ 0x1406E3CC4 (_CmSetDeviceRegProp.c)
 *     PipSetDevNodeFlags @ 0x1406E637C (PipSetDevNodeFlags.c)
 *     _PnpSetObjectProperty @ 0x1406E68C4 (_PnpSetObjectProperty.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1406E6D10 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     PipClearDevNodeFlags @ 0x1406E7780 (PipClearDevNodeFlags.c)
 *     PiUpdateDevicePanel @ 0x1406EACBC (PiUpdateDevicePanel.c)
 *     PipClearDevNodeUserFlags @ 0x1406EB03C (PipClearDevNodeUserFlags.c)
 *     PnpSetPlugPlayEvent @ 0x1406EC22C (PnpSetPlugPlayEvent.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x1406EC47C (PiDcUpdateDeviceContainerMembership.c)
 *     PpIrpQueryCapabilities @ 0x1406EC944 (PpIrpQueryCapabilities.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x1406EC9CC (PnpNewDeviceNodeDependencyCheck.c)
 *     PnpQueryID @ 0x1406ED5F8 (PnpQueryID.c)
 *     PnpIrpQueryID @ 0x1406ED6F0 (PnpIrpQueryID.c)
 *     PpDeviceRegistration @ 0x1406EF568 (PpDeviceRegistration.c)
 *     PipSetDevNodeProblem @ 0x1406F0800 (PipSetDevNodeProblem.c)
 *     PiDevCfgProcessDevice @ 0x1406F56C4 (PiDevCfgProcessDevice.c)
 *     PipClearDevNodeProblem @ 0x1406F7F78 (PipClearDevNodeProblem.c)
 *     PiDmaGuardProcessNewDeviceNode @ 0x1406F9C80 (PiDmaGuardProcessNewDeviceNode.c)
 *     PnpGetDeviceLocationStrings @ 0x1406F9DD0 (PnpGetDeviceLocationStrings.c)
 *     PnpQueryInterface @ 0x1406FA418 (PnpQueryInterface.c)
 *     PiQueryAndAllocateBootResources @ 0x1406FC58C (PiQueryAndAllocateBootResources.c)
 *     PiQueryResourceRequirements @ 0x1406FCE98 (PiQueryResourceRequirements.c)
 *     PiCreateDeviceInstanceKey @ 0x1406FE578 (PiCreateDeviceInstanceKey.c)
 *     PnpGenerateDeviceIdsHash @ 0x1406FEE48 (PnpGenerateDeviceIdsHash.c)
 *     PnpQueryDeviceText @ 0x1406FEF04 (PnpQueryDeviceText.c)
 *     PnpIsDeviceInstanceEnabled @ 0x1406FF794 (PnpIsDeviceInstanceEnabled.c)
 *     PiBuildDeviceNodeInstancePath @ 0x1406FFBD4 (PiBuildDeviceNodeInstancePath.c)
 *     KseAddHardwareId @ 0x140700268 (KseAddHardwareId.c)
 *     PiQueryRemovableDeviceOverride @ 0x140701018 (PiQueryRemovableDeviceOverride.c)
 *     PpHotSwapUpdateRemovalPolicy @ 0x1407015C0 (PpHotSwapUpdateRemovalPolicy.c)
 *     PnpQueryBusInformation @ 0x140701A58 (PnpQueryBusInformation.c)
 *     PipGenerateContainerID @ 0x140701C00 (PipGenerateContainerID.c)
 *     PnpInitializeSessionId @ 0x140701EF4 (PnpInitializeSessionId.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x14070275C (PnpMapDeviceObjectToDeviceInstance.c)
 *     PnpCheckDeviceIdsChanged @ 0x14070C314 (PnpCheckDeviceIdsChanged.c)
 *     PipMakeGloballyUniqueId @ 0x14070D190 (PipMakeGloballyUniqueId.c)
 *     PpDevCfgProcessDeviceOperations @ 0x14070E158 (PpDevCfgProcessDeviceOperations.c)
 *     PipSetDevNodeUserFlags @ 0x14070F4E0 (PipSetDevNodeUserFlags.c)
 *     PnpDisableDevice @ 0x140828E98 (PnpDisableDevice.c)
 *     PiDevCfgGetFailedInstallProblemStatus @ 0x14082E2F4 (PiDevCfgGetFailedInstallProblemStatus.c)
 *     PpDevCfgCheckDeviceNeedsUpdate @ 0x14083289C (PpDevCfgCheckDeviceNeedsUpdate.c)
 *     PpProfileCancelTransitioningDock @ 0x140833AAC (PpProfileCancelTransitioningDock.c)
 *     PnpSetInvalidIDEvent @ 0x140834738 (PnpSetInvalidIDEvent.c)
 *     PnpTraceDockDeviceEnumeration @ 0x14083ACA8 (PnpTraceDockDeviceEnumeration.c)
 *     PnpLogDuplicateDevice @ 0x14083B8CC (PnpLogDuplicateDevice.c)
 */

__int64 __fastcall PiProcessNewDeviceNode(ULONG_PTR a1)
{
  int v2; // r13d
  HANDLE v3; // r12
  struct _DEVICE_OBJECT *v4; // r15
  int v5; // eax
  wchar_t *v6; // rax
  int v7; // ebx
  bool v8; // r14
  int v9; // eax
  __int64 v10; // r8
  __int64 v11; // r8
  int v12; // eax
  int GloballyUniqueId; // ebx
  WCHAR *v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // ebx
  __int64 v18; // r8
  unsigned int v19; // eax
  struct _DEVICE_OBJECT *v20; // rax
  ULONG_PTR v21; // rbx
  unsigned int v22; // esi
  struct _KTHREAD *v23; // rax
  HANDLE v24; // rbx
  __int64 v25; // rdx
  unsigned int v26; // eax
  int v27; // eax
  int v28; // r14d
  int v29; // eax
  PVOID v30; // rsi
  WCHAR *v31; // rbx
  __int64 v32; // r8
  HANDLE v33; // rdx
  struct _KTHREAD *v34; // rax
  struct _KTHREAD *v35; // rax
  struct _KTHREAD *v36; // rax
  HANDLE v37; // rbx
  PVOID v38; // r12
  unsigned int v39; // r13d
  PVOID v40; // r14
  int v41; // eax
  char v42; // si
  int v43; // eax
  unsigned int v44; // r14d
  char v45; // r13
  HANDLE v46; // rsi
  PVOID v47; // r14
  int AlternateStringData; // eax
  unsigned int v49; // ebx
  unsigned int v50; // r12d
  int v51; // eax
  unsigned int v52; // ebx
  __int64 v53; // r8
  struct _KTHREAD *v54; // rax
  __int64 v55; // rdx
  int v56; // eax
  int v57; // ecx
  __int64 v58; // rcx
  __int64 v59; // rcx
  PVOID v60; // rcx
  __int64 v62; // rcx
  PVOID v63; // rbx
  __int64 v64; // rax
  unsigned int v65; // eax
  __int64 v66; // rdx
  __int64 FailedInstallProblemStatus; // r8
  struct _KTHREAD *CurrentThread; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rdx
  unsigned int v72; // eax
  int v73; // ecx
  unsigned int v74; // eax
  unsigned int v75; // eax
  __int64 v76; // rdx
  __int64 v77; // r8
  unsigned int v78; // eax
  int v79; // ecx
  struct _DRIVER_OBJECT *DriverObject; // rcx
  UNICODE_STRING *p_DriverName; // rcx
  char *DeviceNode; // rcx
  unsigned __int16 *v83; // rdi
  struct _DEVOBJ_EXTENSION *DeviceObjectExtension; // rcx
  _WORD *v85; // rax
  __int64 v86; // rcx
  _WORD *v87; // rcx
  __int64 v88; // rcx
  __int64 v89; // rcx
  _WORD *v90; // rcx
  __int64 v91; // rcx
  unsigned __int16 *v92; // rdi
  __int64 v93; // rcx
  __int64 v94; // rax
  __int64 v95; // rcx
  _WORD *v96; // rcx
  __int64 v97; // rcx
  int v98; // eax
  int v99; // eax
  int v100; // eax
  int v101; // edx
  char v102; // al
  int BugCheckParameter4; // [rsp+28h] [rbp-E0h]
  int BugCheckParameter4a; // [rsp+28h] [rbp-E0h]
  int v105; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v106; // [rsp+5Ch] [rbp-ACh] BYREF
  int v107; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v108; // [rsp+64h] [rbp-A4h]
  __int64 v109; // [rsp+68h] [rbp-A0h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-98h] BYREF
  int v111; // [rsp+78h] [rbp-90h]
  int v112; // [rsp+7Ch] [rbp-8Ch]
  int v113; // [rsp+80h] [rbp-88h] BYREF
  int v114; // [rsp+84h] [rbp-84h] BYREF
  int v115; // [rsp+88h] [rbp-80h]
  PCWSTR SourceString; // [rsp+90h] [rbp-78h] BYREF
  PVOID v117; // [rsp+98h] [rbp-70h] BYREF
  PVOID v118; // [rsp+A0h] [rbp-68h] BYREF
  int v119; // [rsp+A8h] [rbp-60h] BYREF
  unsigned int v120; // [rsp+ACh] [rbp-5Ch] BYREF
  __int64 v121; // [rsp+B0h] [rbp-58h] BYREF
  PVOID v122; // [rsp+B8h] [rbp-50h] BYREF
  PVOID v123; // [rsp+C0h] [rbp-48h] BYREF
  PVOID v124; // [rsp+C8h] [rbp-40h]
  WCHAR *v125; // [rsp+D0h] [rbp-38h] BYREF
  int v126; // [rsp+D8h] [rbp-30h] BYREF
  unsigned int v127; // [rsp+DCh] [rbp-2Ch] BYREF
  PVOID P; // [rsp+E0h] [rbp-28h] BYREF
  PVOID v129; // [rsp+E8h] [rbp-20h] BYREF
  PVOID v130; // [rsp+F0h] [rbp-18h] BYREF
  char v131[4]; // [rsp+F8h] [rbp-10h] BYREF
  char v132[4]; // [rsp+FCh] [rbp-Ch] BYREF
  wchar_t *Str; // [rsp+100h] [rbp-8h] BYREF
  __int64 v134; // [rsp+108h] [rbp+0h] BYREF
  const WCHAR *v135; // [rsp+110h] [rbp+8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+118h] [rbp+10h] BYREF
  char v137[2]; // [rsp+128h] [rbp+20h] BYREF
  __int16 v138; // [rsp+12Ah] [rbp+22h]
  __int64 v139; // [rsp+130h] [rbp+28h]
  void (__fastcall *v140)(__int64); // [rsp+140h] [rbp+38h]
  void (__fastcall *v141)(__int64, __int64 *); // [rsp+148h] [rbp+40h]
  int v142; // [rsp+158h] [rbp+50h] BYREF
  int v143; // [rsp+15Ch] [rbp+54h]
  GUID Guid; // [rsp+198h] [rbp+90h] BYREF

  v130 = 0LL;
  if ( (byte_140406847 & 8) != 0 )
    McTemplateK0p(a1, &KMPnPEvt_ProcessNewDevice_Start, 0LL, a1);
  LOBYTE(v112) = 0;
  LOWORD(v105) = 0;
  v115 = 0;
  v2 = 0;
  v3 = 0LL;
  v108 = 0;
  v4 = *(struct _DEVICE_OBJECT **)(a1 + 32);
  v134 = MEMORY[0xFFFFF78000000014];
  v106 = 0;
  v113 = 0;
  v107 = 0;
  Handle = 0LL;
  PiPnpRtlBeginOperation(&v130);
  PipClearDevNodeFlags(a1, 0x2000000LL);
  v124 = 0LL;
  v118 = 0LL;
  v5 = PnpQueryID(a1, 0LL, &Str, v131);
  if ( v5 < 0 )
  {
    v2 = v5;
    if ( v5 == -1073479624 )
      v2 = -1073741823;
  }
  else
  {
    v124 = Str;
    v6 = wcschr(Str, 0x5Cu);
    *v6 = 0;
    v118 = v6 + 1;
  }
  v7 = PpIrpQueryCapabilities(v4, &v142);
  PipClearDevNodeUserFlags(a1, 2LL);
  v8 = 0;
  if ( v7 >= 0 )
  {
    if ( (v143 & 0x20000) != 0 )
      PipSetDevNodeUserFlags(a1, 2LL);
    v8 = (v143 & 0x40) != 0;
  }
  if ( (v143 & 0x20) != 0 )
  {
    if ( *(_DWORD *)(a1 + 568) == 4 )
      PpProfileCancelTransitioningDock(a1);
    v9 = 1;
  }
  else
  {
    v9 = 0;
  }
  *(_DWORD *)(a1 + 568) = v9;
  v121 = -1LL;
  if ( (int)PnpQueryInterface(v4, 0LL, v137) >= 0 )
  {
    if ( v141 )
    {
      if ( v138 == 1 )
      {
        v141(v139, &v121);
        if ( v140 )
          v140(v139);
      }
    }
  }
  else
  {
    v121 = -1LL;
  }
  PnpQueryDeviceText(*(_QWORD *)(a1 + 32), 0LL, v10, &v122);
  PnpQueryDeviceText(*(_QWORD *)(a1 + 32), 1LL, v11, &v129);
  v12 = PnpQueryID(a1, 3LL, &v117, v132);
  GloballyUniqueId = v12;
  if ( v8 )
  {
    if ( v12 == -1073741637 )
    {
      PipSetDevNodeProblem(a1, 9LL, 3221225659LL);
      PipSetDevNodeFlags(*(_QWORD *)(a1 + 16), 0x200000LL);
      PnpSetInvalidIDEvent(*(_QWORD *)(a1 + 16) + 40LL);
    }
  }
  else if ( (*(_DWORD *)(a1 + 396) & 0x2000) == 0 || *(_DWORD *)(a1 + 404) != 9 )
  {
    v62 = *(_QWORD *)(a1 + 16);
    if ( v62 != IopRootDeviceNode )
    {
      v125 = 0LL;
      v14 = (WCHAR *)v117;
      goto LABEL_134;
    }
  }
  v14 = (WCHAR *)v117;
  while ( 1 )
  {
    if ( GloballyUniqueId < 0 )
    {
      v2 = GloballyUniqueId;
      if ( (*(_DWORD *)(a1 + 396) & 0x2000) == 0 || *(_DWORD *)(a1 + 404) != 9 )
      {
        if ( GloballyUniqueId == -1073741670 )
        {
          v76 = 3LL;
          v77 = 3221225626LL;
        }
        else
        {
          v77 = (unsigned int)GloballyUniqueId;
          v76 = 19LL;
        }
        PipSetDevNodeProblem(a1, v76, v77);
      }
    }
    v17 = PiBuildDeviceNodeInstancePath(a1, v124, v118, v14);
    if ( v17 >= 0 )
    {
      if ( (byte_140406847 & 8) != 0 )
        McTemplateK0pz(v16, v15, v18, a1, *(_QWORD *)(a1 + 48));
      v17 = PiCreateDeviceInstanceKey(a1, &Handle, &v107);
      v19 = 0;
      if ( v17 < 0 )
      {
        PipSetDevNodeProblem(a1, 19LL, (unsigned int)v17);
      }
      else
      {
        if ( v107 == 1 )
          v19 = 0x20000;
        v108 = v19;
      }
      v3 = Handle;
    }
    if ( v17 >= 0 )
      v17 = v2;
    v2 = v17;
    PpMarkDeviceStackExtensionFlag((__int64)v4, 16, 1);
    PipSetDevNodeState(a1, 770);
    if ( (*(_DWORD *)(a1 + 396) & 0x2000) != 0 )
    {
      v78 = *(_DWORD *)(a1 + 404);
      if ( v78 <= 0x13 )
      {
        v79 = 524808;
        if ( _bittest(&v79, v78) )
          break;
      }
    }
    if ( v107 == 1 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
      if ( Handle && v122 )
      {
        v70 = -1LL;
        do
          ++v70;
        while ( *((_WORD *)v122 + v70) );
        CmSetDeviceRegProp(
          *(__int64 *)&PiPnpRtlCtx,
          *(_QWORD *)(a1 + 48),
          (__int64)Handle,
          1u,
          1u,
          (__int64)v122,
          2 * v70 + 2,
          v108);
      }
      ExReleaseResourceLite(&PnpRegistryDeviceResource);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      v3 = Handle;
      goto LABEL_31;
    }
    v20 = (struct _DEVICE_OBJECT *)PnpDeviceObjectFromDeviceInstanceWithTag(a1 + 40, 0x65706E50u);
    v21 = (ULONG_PTR)v20;
    if ( !v20 )
      goto LABEL_31;
    if ( v20 == v4 )
    {
      ObfDereferenceObjectWithTag(v20, 0x65706E50u);
LABEL_31:
      if ( (*(_DWORD *)(a1 + 396) & 0x2000) != 0 && *(_DWORD *)(a1 + 404) == 42 )
        PipClearDevNodeProblem(a1);
      break;
    }
    if ( !v8 )
    {
      PpvUtilFailDriver(0);
      IoAddTriageDumpDataBlock((int)v4, v4->Size);
      DriverObject = v4->DriverObject;
      if ( DriverObject )
      {
        IoAddTriageDumpDataBlock((int)DriverObject, DriverObject->Size);
        p_DriverName = &v4->DriverObject->DriverName;
        if ( p_DriverName->Length )
        {
          IoAddTriageDumpDataBlock((int)p_DriverName, 2);
          IoAddTriageDumpDataBlock((int)v4->DriverObject->DriverName.Buffer, v4->DriverObject->DriverName.Length);
        }
      }
      DeviceNode = (char *)v4->DeviceObjectExtension->DeviceNode;
      if ( DeviceNode )
      {
        v83 = (unsigned __int16 *)(DeviceNode + 40);
        IoAddTriageDumpDataBlock((int)DeviceNode, 784);
        if ( *v83 )
        {
          IoAddTriageDumpDataBlock((int)v83, 2);
          IoAddTriageDumpDataBlock(*((_QWORD *)v83 + 1), *v83);
        }
        DeviceObjectExtension = v4->DeviceObjectExtension;
        v85 = DeviceObjectExtension->DeviceNode;
        if ( v85[28] )
        {
          IoAddTriageDumpDataBlock((_DWORD)v85 + 56, 2);
          IoAddTriageDumpDataBlock(
            *((_QWORD *)v4->DeviceObjectExtension->DeviceNode + 8),
            *((unsigned __int16 *)v4->DeviceObjectExtension->DeviceNode + 28));
          DeviceObjectExtension = v4->DeviceObjectExtension;
        }
        v86 = *((_QWORD *)DeviceObjectExtension->DeviceNode + 2);
        if ( v86 )
        {
          v87 = (_WORD *)(v86 + 56);
          if ( *v87 )
          {
            IoAddTriageDumpDataBlock((int)v87, 2);
            v88 = *((_QWORD *)v4->DeviceObjectExtension->DeviceNode + 2);
            IoAddTriageDumpDataBlock(*(_QWORD *)(v88 + 64), *(unsigned __int16 *)(v88 + 56));
          }
        }
      }
      IoAddTriageDumpDataBlock(v21, *(unsigned __int16 *)(v21 + 2));
      v89 = *(_QWORD *)(v21 + 8);
      if ( v89 )
      {
        IoAddTriageDumpDataBlock(v89, *(__int16 *)(v89 + 2));
        v90 = (_WORD *)(*(_QWORD *)(v21 + 8) + 56LL);
        if ( *v90 )
        {
          IoAddTriageDumpDataBlock((int)v90, 2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(v21 + 8) + 64LL),
            *(unsigned __int16 *)(*(_QWORD *)(v21 + 8) + 56LL));
        }
      }
      v91 = *(_QWORD *)(*(_QWORD *)(v21 + 312) + 40LL);
      if ( v91 )
      {
        v92 = (unsigned __int16 *)(v91 + 40);
        IoAddTriageDumpDataBlock(v91, 784);
        if ( *v92 )
        {
          IoAddTriageDumpDataBlock((int)v92, 2);
          IoAddTriageDumpDataBlock(*((_QWORD *)v92 + 1), *v92);
        }
        v93 = *(_QWORD *)(v21 + 312);
        v94 = *(_QWORD *)(v93 + 40);
        if ( *(_WORD *)(v94 + 56) )
        {
          IoAddTriageDumpDataBlock(v94 + 56, 2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v21 + 312) + 40LL) + 64LL),
            *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v21 + 312) + 40LL) + 56LL));
          v93 = *(_QWORD *)(v21 + 312);
        }
        v95 = *(_QWORD *)(*(_QWORD *)(v93 + 40) + 16LL);
        if ( v95 )
        {
          v96 = (_WORD *)(v95 + 56);
          if ( *v96 )
          {
            IoAddTriageDumpDataBlock((int)v96, 2);
            v97 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v21 + 312) + 40LL) + 16LL);
            IoAddTriageDumpDataBlock(*(_QWORD *)(v97 + 64), *(unsigned __int16 *)(v97 + 56));
          }
        }
      }
      KeBugCheckEx(0xCAu, 1uLL, (ULONG_PTR)v4, v21, 0LL);
    }
    ZwClose(v3);
    v143 &= ~0x40u;
    Handle = 0LL;
    v3 = 0LL;
    v8 = 0;
    PipSetDevNodeProblem(a1, 42LL, 0LL);
    PnpLogDuplicateDevice((PCWSTR)v124, v14);
    if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v21 + 312) + 40LL) + 16LL) == *(_QWORD *)(a1 + 16) )
      PpvUtilFailDriver(0);
    ObfDereferenceObjectWithTag((PVOID)v21, 0x65706E50u);
    v62 = *(_QWORD *)(a1 + 16);
LABEL_134:
    GloballyUniqueId = PipMakeGloballyUniqueId(*(_QWORD *)(v62 + 32), v14, &v125);
    if ( v14 )
      ExFreePoolWithTag(v14, 0);
    v14 = v125;
    v117 = v125;
  }
  v22 = v108;
  if ( v3 )
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
      v108);
    PnpSetObjectProperty(
      PiPnpRtlCtx,
      *(_QWORD *)(a1 + 48),
      1,
      0LL,
      (__int64)&DEVPKEY_Device_LastArrivalDate,
      16,
      (__int64)&v134,
      8,
      v22);
    PnpSetObjectProperty(
      PiPnpRtlCtx,
      *(_QWORD *)(a1 + 48),
      1,
      0LL,
      (__int64)&DEVPKEY_Device_LastRemovalDate,
      0,
      0LL,
      0,
      v22);
    PnpSetObjectProperty(
      PiPnpRtlCtx,
      *(_QWORD *)(a1 + 48),
      1,
      0LL,
      (__int64)&DEVPKEY_Device_HardwareConfigurationIndex,
      7,
      (__int64)&PnpCurrentHardwareConfigurationIndex,
      4,
      v22);
  }
  if ( (v143 & 0x4000) != 0 )
  {
    if ( (*(_DWORD *)(a1 + 396) & 0x2000) == 0 || (v98 = *(_DWORD *)(a1 + 404), v98 != 1) && v98 != 14 )
      PnpDisableDevice(a1, 29LL);
  }
  if ( (*(_DWORD *)(a1 + 396) & 0x2000) == 0
    || (v99 = *(_DWORD *)(a1 + 404), v111 = v2, v99 != 9) && (v111 = v2, v99 != 3) && (v111 = v2, v99 != 19) )
  {
    v23 = KeGetCurrentThread();
    --v23->KernelApcDisable;
    ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
    v24 = Handle;
    if ( Handle && v129 )
    {
      v69 = -1LL;
      do
        ++v69;
      while ( *((_WORD *)v129 + v69) );
      CmSetDeviceRegProp(
        *(__int64 *)&PiPnpRtlCtx,
        *(_QWORD *)(a1 + 48),
        (__int64)Handle,
        0xEu,
        1u,
        (__int64)v129,
        2 * v69 + 2,
        v22);
    }
    PnpSaveDeviceCapabilities(a1, &v142, v107 == 1);
    if ( v121 != -1 )
      PnpSetObjectProperty(
        PiPnpRtlCtx,
        *(_QWORD *)(a1 + 48),
        1,
        0LL,
        (__int64)&DEVPKEY_Device_ExtendedAddress,
        9,
        (__int64)&v121,
        8,
        v22);
    v25 = *(_QWORD *)(a1 + 48);
    LOBYTE(v105) = v107 == 1;
    v119 = 4;
    if ( (int)CmGetDeviceRegProp(
                *(__int64 *)&PiPnpRtlCtx,
                v25,
                (__int64)v24,
                11,
                (__int64)&v126,
                (__int64)&v106,
                (__int64)&v119,
                0) >= 0
      && v126 == 4
      && v119 == 4 )
    {
      v26 = v106;
      if ( (v106 & 0x20) == 0 )
      {
        if ( (v106 & 0x40) == 0 )
        {
LABEL_45:
          v27 = PnpMapDeviceObjectToDeviceInstance(*(_QWORD *)(a1 + 32), a1 + 40);
          v28 = v2;
          if ( v27 < 0 )
            v28 = v27;
          v111 = v28;
          if ( PnpBootMode )
          {
            *(_DWORD *)(a1 + 704) |= 0x1000u;
            v115 = 2;
          }
          else
          {
            v29 = (unsigned __int8)v112;
            if ( (v106 & 0x40000) != 0 )
              v29 = 1;
            v112 = v29;
          }
          ExReleaseResourceLite(&PnpRegistryDeviceResource);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          v3 = Handle;
          goto LABEL_52;
        }
        v66 = 28LL;
LABEL_147:
        if ( (v143 & 0x100) != 0 )
        {
          v71 = *(_QWORD *)(a1 + 48);
          v106 = v26 | 0x400;
          CmSetDeviceRegProp(*(__int64 *)&PiPnpRtlCtx, v71, (__int64)v24, 0xBu, 4u, (__int64)&v106, 4u, v22);
        }
        else
        {
          if ( (_DWORD)v66 == 28 )
          {
            FailedInstallProblemStatus = (unsigned int)PiDevCfgGetFailedInstallProblemStatus(*(_QWORD *)(a1 + 48), v24);
            v66 = 28LL;
          }
          else
          {
            FailedInstallProblemStatus = 0LL;
          }
          PipSetDevNodeProblem(a1, v66, FailedInstallProblemStatus);
        }
        goto LABEL_45;
      }
      v66 = 18LL;
      if ( (v106 & 1) != 0 )
        goto LABEL_147;
    }
    else
    {
      v26 = 0;
      v66 = 1LL;
      v106 = 0;
    }
    LOBYTE(v105) = 1;
    goto LABEL_147;
  }
LABEL_52:
  PnpQueryID(a1, 1LL, &P, &v127);
  v30 = P;
  KseAddHardwareId((PCWSTR)P);
  PnpQueryID(a1, 2LL, &v123, &v120);
  PnpGenerateDeviceIdsHash(v30, v123, a1 + 684);
  PnpIrpQueryID(*(_QWORD *)(a1 + 32), 5LL, &SourceString);
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
  if ( (int)PiQueryRemovableDeviceOverride(a1, v30, v123, &v109) >= 0 )
  {
    LOBYTE(v32) = v109;
LABEL_59:
    v33 = 0LL;
    if ( v107 != 1 )
      v33 = v3;
    if ( (int)PipGenerateContainerID(a1, v33, v32, v31, &v135) >= 0 )
    {
      if ( v31 )
        ExFreePoolWithTag(v31, 0);
      v31 = (WCHAR *)v135;
      SourceString = v135;
    }
    goto LABEL_65;
  }
  if ( (v143 & 0x20) != 0 || (v143 & 0x40000) != 0 || (LOBYTE(v32) = 1, (v143 & 0x10) == 0) )
    LOBYTE(v32) = 0;
  if ( !v31 )
    goto LABEL_59;
LABEL_65:
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
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( Handle && SourceString )
  {
    v35 = KeGetCurrentThread();
    --v35->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
    PiDcUpdateDeviceContainerMembership(*(_QWORD *)(a1 + 48), Handle, SourceString);
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  v36 = KeGetCurrentThread();
  --v36->KernelApcDisable;
  ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
  v37 = Handle;
  if ( !Handle )
    goto LABEL_84;
  v38 = v123;
  v39 = v127;
  v40 = P;
  if ( (_BYTE)v105 || v107 == 1 )
  {
    v42 = BYTE1(v105);
  }
  else
  {
    LOBYTE(BugCheckParameter4) = 1;
    v41 = PnpCheckDeviceIdsChanged(a1, Handle, P, v127, BugCheckParameter4, (char *)&v105 + 1);
    v42 = BYTE1(v105);
    if ( v41 < 0 )
      v42 = 0;
    BYTE1(v105) = v42;
    if ( !v42 )
    {
      LOBYTE(BugCheckParameter4a) = 0;
      v43 = PnpCheckDeviceIdsChanged(a1, v37, v38, v120, BugCheckParameter4a, (char *)&v105 + 1);
      v42 = BYTE1(v105);
      if ( v43 < 0 )
        v42 = 0;
    }
  }
  if ( v40 )
    CmSetDeviceRegProp(*(__int64 *)&PiPnpRtlCtx, *(_QWORD *)(a1 + 48), (__int64)v37, 2u, 7u, (__int64)v40, v39, v108);
  v44 = v108;
  if ( v38 )
    CmSetDeviceRegProp(*(__int64 *)&PiPnpRtlCtx, *(_QWORD *)(a1 + 48), (__int64)v37, 3u, 7u, (__int64)v38, v120, v108);
  if ( v42 || (_BYTE)v112 )
  {
    v45 = v105;
    if ( (_BYTE)v105 )
    {
      v101 = v106;
      v102 = v113;
    }
    else
    {
      v100 = PpDevCfgCheckDeviceNeedsUpdate(*(_QWORD *)(a1 + 48), v37, &v113);
      v101 = v106;
      if ( v100 < 0 )
      {
        v102 = 0;
      }
      else
      {
        v102 = v113;
        v101 = v113 | v106;
        v106 |= v113;
      }
    }
    if ( (v102 & 0x20) != 0 || (v101 & 0x40000) != 0 )
    {
      v106 = v101 & 0xFFFBFFFF;
      CmSetDeviceRegProp(
        *(__int64 *)&PiPnpRtlCtx,
        *(_QWORD *)(a1 + 48),
        (__int64)v37,
        0xBu,
        4u,
        (__int64)&v106,
        4u,
        v44);
      LOBYTE(v101) = v106;
    }
    if ( (v101 & 0x20) != 0 )
    {
      v45 = 1;
      PipSetDevNodeProblem(a1, 18LL, 0LL);
    }
  }
  else
  {
LABEL_84:
    v45 = v105;
  }
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  v46 = Handle;
  v47 = v122;
  if ( Handle )
  {
    v118 = 0LL;
    AlternateStringData = 0;
    v114 = 0;
    v49 = 0;
    if ( v122 )
    {
      v64 = -1LL;
      do
        ++v64;
      while ( *((_WORD *)v122 + v64) );
      v49 = 2 * v64 + 2;
      AlternateStringData = PnpFindAlternateStringData(v122, v49, &v118, &v114);
    }
    v50 = v108;
    PnpSetObjectProperty(
      PiPnpRtlCtx,
      *(_QWORD *)(a1 + 48),
      1,
      0LL,
      (__int64)&DEVPKEY_Device_BusReportedDeviceDesc,
      AlternateStringData != 0 ? 25 : 18,
      (__int64)v47,
      v49,
      v108);
    if ( (int)PnpGetDeviceLocationStrings(a1, &v118, &v114) >= 0 )
    {
      v63 = v118;
      PnpSetObjectProperty(
        PiPnpRtlCtx,
        *(_QWORD *)(a1 + 48),
        1,
        0LL,
        (__int64)&DEVPKEY_Device_LocationPaths,
        8210,
        (__int64)v118,
        2 * v114,
        v50);
      ExFreePoolWithTag(v63, 0);
    }
  }
  PnpQueryBusInformation(a1);
  v51 = PiDmaGuardProcessNewDeviceNode(a1);
  v52 = v111;
  if ( v51 < 0 )
    v52 = v51;
  if ( (v143 & 0x4000) == 0 && ((*(_DWORD *)(a1 + 396) & 0x2000) == 0 || *(_DWORD *)(a1 + 404) != 14) )
  {
    if ( v45 )
    {
      v65 = v115;
      if ( v107 == 1 )
        v65 = v115 | 1;
      if ( PiDevCfgMode )
        PiDevCfgProcessDevice(a1, v46, v65);
    }
    else
    {
      PpDevCfgProcessDeviceOperations(a1);
    }
  }
  PiQueryResourceRequirements(a1);
  if ( (*(_DWORD *)(a1 + 396) & 0x2000) == 0
    || (v72 = *(_DWORD *)(a1 + 404), v72 > 0x1D)
    || (v73 = 541606408, !_bittest(&v73, v72)) )
  {
    PnpIsDeviceInstanceEnabled(v46, a1 + 40, 1LL);
  }
  if ( v46 )
  {
    LOBYTE(v53) = v107 == 1;
    PnpInitializeSessionId(a1, v46, v53);
  }
  PiQueryAndAllocateBootResources(a1);
  if ( (*(_DWORD *)(a1 + 396) & 0x2000) == 0
    || (v74 = *(_DWORD *)(a1 + 404), v74 > 0x13)
    || (v57 = 524808, !_bittest(&v57, v74)) )
  {
    v54 = KeGetCurrentThread();
    --v54->KernelApcDisable;
    ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
    PnpSaveDeviceCapabilities(a1, &v142, v107 == 1);
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    PpHotSwapUpdateRemovalPolicy(a1);
    LOBYTE(v55) = 1;
    v56 = PpDeviceRegistration(a1 + 40, v55, a1 + 56, 0LL);
    if ( v56 < 0 )
      PipSetDevNodeProblem(a1, 19LL, (unsigned int)v56);
    v47 = v122;
    v57 = 524808;
    v46 = Handle;
  }
  if ( (*(_DWORD *)(a1 + 396) & 0x2000) == 0 || (v75 = *(_DWORD *)(a1 + 404), v75 > 0x13) || !_bittest(&v57, v75) )
  {
    PnpIrpDeviceEnumerated((int)v4);
    if ( v46 )
      PiUpdateDevicePanel(a1, v46);
    PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v58, *(_QWORD *)(a1 + 48), 1LL);
    PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v59, *(_QWORD *)(a1 + 48), 14LL);
    PnpSetPlugPlayEvent(&GUID_DEVICE_ENUMERATED, v4);
    PnpNewDeviceNodeDependencyCheck(a1);
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v123 )
    ExFreePoolWithTag(v123, 0);
  if ( SourceString )
    ExFreePoolWithTag((PVOID)SourceString, 0);
  if ( v46 )
    ZwClose(v46);
  if ( v117 )
    ExFreePoolWithTag(v117, 0);
  if ( v129 )
    ExFreePoolWithTag(v129, 0);
  if ( v47 )
    ExFreePoolWithTag(v47, 0);
  if ( v124 )
    ExFreePoolWithTag(v124, 0);
  v60 = v130;
  if ( v130 )
    PiPnpRtlEndOperation((PVOID **)v130);
  if ( (byte_140406847 & 8) != 0 )
    McTemplateK0p((__int64)v60, &KMPnPEvt_ProcessNewDevice_Stop, 0LL, a1);
  if ( *(_DWORD *)(a1 + 568) )
    PnpTraceDockDeviceEnumeration(a1, v52);
  return v52;
}
