/*
 * XREFs of PnpProcessQueryRemoveAndEject @ 0x14072E630
 * Callers:
 *     PnpProcessTargetDeviceEvent @ 0x1406FF3C4 (PnpProcessTargetDeviceEvent.c)
 *     PnpShutdownDevices @ 0x14085D44C (PnpShutdownDevices.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     RtlCopyUnicodeString @ 0x140043E20 (RtlCopyUnicodeString.c)
 *     PipAreDriversLoaded @ 0x1400EE568 (PipAreDriversLoaded.c)
 *     PnpRequestDeviceAction @ 0x14015D184 (PnpRequestDeviceAction.c)
 *     PnpIsChainDereferenced @ 0x1401726B8 (PnpIsChainDereferenced.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     IoGetLegacyVetoList @ 0x1406A23A4 (IoGetLegacyVetoList.c)
 *     PpDevNodeUnlockTree @ 0x1406A2B0C (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x1406A2C34 (PpDevNodeLockTree.c)
 *     PipClearDevNodeProblem @ 0x1406F8FDC (PipClearDevNodeProblem.c)
 *     PipSetDevNodeFlags @ 0x14070618C (PipSetDevNodeFlags.c)
 *     PiDetermineDeleteType @ 0x14072E134 (PiDetermineDeleteType.c)
 *     PiEventAreDeviceRelationsExcluded @ 0x14072E5A0 (PiEventAreDeviceRelationsExcluded.c)
 *     PiSendTargetDeviceRemoveCompleteNotification @ 0x14072E5C0 (PiSendTargetDeviceRemoveCompleteNotification.c)
 *     PnpRecordBlackboxPnpEventInformation @ 0x14072E994 (PnpRecordBlackboxPnpEventInformation.c)
 *     PiGetTargetDeviceNode @ 0x14072EAEC (PiGetTargetDeviceNode.c)
 *     PnpNotifyUserModeDeviceRemoval @ 0x14072EB0C (PnpNotifyUserModeDeviceRemoval.c)
 *     PiEventRemovalPostSurpriseRemove @ 0x14072EC74 (PiEventRemovalPostSurpriseRemove.c)
 *     PnpBuildRemovalRelationList @ 0x14072ED00 (PnpBuildRemovalRelationList.c)
 *     IopRemoveDeviceRelationsFromList @ 0x14072F78C (IopRemoveDeviceRelationsFromList.c)
 *     PnpResizeTargetDeviceBlock @ 0x14072F7E8 (PnpResizeTargetDeviceBlock.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x14072F8C4 (PnpUnlinkDeviceRemovalRelations.c)
 *     PiEventBuildPdoList @ 0x14072FBB4 (PiEventBuildPdoList.c)
 *     PnpBuildUnsafeRemovalDeviceList @ 0x14072FCF8 (PnpBuildUnsafeRemovalDeviceList.c)
 *     PnpInvalidateRelationsInList @ 0x14072FE3C (PnpInvalidateRelationsInList.c)
 *     PnpDeleteLockedDeviceNodes @ 0x14072FFA4 (PnpDeleteLockedDeviceNodes.c)
 *     PnpCompileDeviceInstancePaths @ 0x1407300EC (PnpCompileDeviceInstancePaths.c)
 *     IopEnumerateRelations @ 0x140730274 (IopEnumerateRelations.c)
 *     IopFreeRelationList @ 0x1407311AC (IopFreeRelationList.c)
 *     PiEventAllocateVetoBuffer @ 0x140731258 (PiEventAllocateVetoBuffer.c)
 *     PnpRestartDeviceNode @ 0x1408623E8 (PnpRestartDeviceNode.c)
 *     PnpProcessCompletedEject @ 0x140862770 (PnpProcessCompletedEject.c)
 *     PpProfileBeginHardwareProfileTransition @ 0x14086D1C0 (PpProfileBeginHardwareProfileTransition.c)
 *     PpProfileCancelHardwareProfileTransition @ 0x14086D1F0 (PpProfileCancelHardwareProfileTransition.c)
 *     PpProfileQueryHardwareProfileChange @ 0x14086D540 (PpProfileQueryHardwareProfileChange.c)
 *     PnpFinalizeVetoedRemove @ 0x14086D8EC (PnpFinalizeVetoedRemove.c)
 *     PnpTrackQueryRemoveDevices @ 0x14086E040 (PnpTrackQueryRemoveDevices.c)
 *     IopEjectDevice @ 0x140875BC4 (IopEjectDevice.c)
 *     IopQueryDockRemovalInterface @ 0x140875E1C (IopQueryDockRemovalInterface.c)
 *     PiEventAllocatePendingEjectRelations @ 0x14087B994 (PiEventAllocatePendingEjectRelations.c)
 *     PiProcessCanceledRemoveForReset @ 0x14087BA2C (PiProcessCanceledRemoveForReset.c)
 *     PiProcessQueryAndCancelRemoval @ 0x14087BB8C (PiProcessQueryAndCancelRemoval.c)
 *     PiProcessQueryRemoveNoFdo @ 0x14087BD6C (PiProcessQueryRemoveNoFdo.c)
 *     PiRestartRemovalRelations @ 0x14087BE18 (PiRestartRemovalRelations.c)
 *     PoGetLightestSystemStateForEject @ 0x1408A221C (PoGetLightestSystemStateForEject.c)
 */

__int64 __fastcall PnpProcessQueryRemoveAndEject(__int64 *a1)
{
  __int64 v1; // rdi
  __int64 v2; // r12
  PVOID *v3; // r15
  PDEVICE_OBJECT v4; // rbx
  unsigned int v5; // esi
  __int64 DeviceNode; // r13
  unsigned int v7; // eax
  __int64 v8; // r9
  _DWORD *TargetDeviceNode; // rax
  __int64 v10; // rcx
  __int64 VetoBuffer; // rax
  PVOID v12; // r14
  int v13; // ebx
  int v14; // eax
  int v15; // r8d
  int v16; // ecx
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // ebx
  PVOID v20; // rbx
  GUID *v21; // r8
  int v22; // ebx
  __int64 v23; // r8
  int v24; // r9d
  PVOID *v25; // r8
  unsigned int *v27; // r8
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // rdx
  char v31; // al
  __int64 v32; // rdx
  _QWORD *v33; // r8
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // r9
  __int64 v37; // rcx
  _DWORD *v38; // rcx
  PDEVICE_OBJECT v39; // rbx
  __int64 v40; // rcx
  char v41; // al
  __int64 v42; // rcx
  __int64 v43; // rbx
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 PendingEjectRelations; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  _QWORD *v52; // rbx
  int LightestSystemStateForEject; // eax
  PVOID v54; // [rsp+40h] [rbp-49h] BYREF
  PVOID P; // [rsp+48h] [rbp-41h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+50h] [rbp-39h]
  __int64 v57; // [rsp+58h] [rbp-31h] BYREF
  PCWSTR SourceString; // [rsp+60h] [rbp-29h] BYREF
  PVOID v59; // [rsp+68h] [rbp-21h] BYREF
  __int64 v60; // [rsp+70h] [rbp-19h] BYREF
  PVOID v61; // [rsp+78h] [rbp-11h] BYREF
  __int64 v62; // [rsp+80h] [rbp-9h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-1h] BYREF
  char v65; // [rsp+F0h] [rbp+67h]
  char v66; // [rsp+F8h] [rbp+6Fh] BYREF
  int v67; // [rsp+100h] [rbp+77h] BYREF
  __int64 v68; // [rsp+108h] [rbp+7Fh] BYREF

  v1 = *a1;
  v2 = 0LL;
  v57 = 0LL;
  v54 = 0LL;
  v3 = 0LL;
  P = 0LL;
  v4 = *(PDEVICE_OBJECT *)(v1 + 152);
  v61 = 0LL;
  v5 = 7;
  v60 = 0LL;
  v66 = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  LOBYTE(v67) = 0;
  DeviceObject = v4;
  if ( v4 )
    DeviceNode = (__int64)v4->DeviceObjectExtension->DeviceNode;
  else
    DeviceNode = 0LL;
  PpDevNodeLockTree(1);
  if ( (unsigned int)(*(_DWORD *)(DeviceNode + 300) - 787) <= 1 )
  {
    v13 = -1073741738;
    goto LABEL_142;
  }
  v7 = PiDetermineDeleteType(v1);
  v5 = v7;
  if ( v7 != 4 )
  {
    LOBYTE(v8) = 1;
    PnpRecordBlackboxPnpEventInformation(v1, v7, 0LL, v8);
  }
  TargetDeviceNode = (_DWORD *)PiGetTargetDeviceNode(v1);
  if ( (v5 & 0xFFFFFFFB) == 0 && (TargetDeviceNode[99] & 0x1000) != 0 )
  {
    v27 = TargetDeviceNode + 10;
    v28 = 1LL;
LABEL_68:
    PnpFinalizeVetoedRemove(v10, v28, v27);
LABEL_72:
    v13 = -2147483608;
    goto LABEL_142;
  }
  if ( !v5 && *(_DWORD *)(v1 + 16) == 22 && TargetDeviceNode[150] )
  {
    v27 = TargetDeviceNode + 10;
    v28 = 10LL;
    goto LABEL_68;
  }
  if ( TargetDeviceNode[75] == 786 && !v5 && *(_DWORD *)(v1 + 16) == 54 )
  {
    v27 = 0LL;
    v28 = 13LL;
    goto LABEL_68;
  }
  if ( v5 == 4 )
  {
    if ( (*(_DWORD *)(DeviceNode + 396) & 0x80000) != 0 )
    {
LABEL_123:
      v13 = 0;
      goto LABEL_142;
    }
    if ( (unsigned int)(*(_DWORD *)(DeviceNode + 568) - 3) <= 1 )
    {
      v31 = 0;
    }
    else
    {
      if ( (*(_DWORD *)(DeviceNode + 560) & 0x10) == 0 )
      {
        v13 = -2147483608;
        v29 = DeviceNode + 40;
        v30 = 8LL;
        goto LABEL_141;
      }
      v31 = 1;
    }
    v13 = 0;
    if ( v31 )
    {
      v4 = DeviceObject;
      goto LABEL_10;
    }
LABEL_142:
    PpDevNodeUnlockTree(1);
LABEL_143:
    if ( v13 == -1073741738 )
      goto LABEL_35;
    goto LABEL_31;
  }
LABEL_10:
  if ( !v5 && !(unsigned int)PipAreDriversLoaded(DeviceNode) )
  {
    v13 = PiProcessQueryRemoveNoFdo(v1);
    goto LABEL_142;
  }
  VetoBuffer = PiEventAllocateVetoBuffer(v5);
  v3 = (PVOID *)VetoBuffer;
  if ( !VetoBuffer )
  {
LABEL_64:
    v27 = 0LL;
    v28 = 0LL;
LABEL_67:
    v10 = v1;
    goto LABEL_68;
  }
  if ( (int)PnpBuildRemovalRelationList(v4, v5, VetoBuffer, &v59) < 0 )
    goto LABEL_66;
  v12 = v59;
  v13 = PiEventBuildPdoList((_DWORD)v59, v5, v1, (unsigned int)&v68, (__int64)&v54, (__int64)&v66, (__int64)&v67);
  if ( v13 < 0 )
    goto LABEL_139;
  v14 = PnpResizeTargetDeviceBlock(a1, v5);
  v1 = *a1;
  v13 = v14;
  if ( v14 < 0 )
    goto LABEL_139;
  LOBYTE(v15) = PiEventAreDeviceRelationsExcluded(v5);
  v13 = PnpCompileDeviceInstancePaths(v16, (_DWORD)v12, v15, 0, (__int64)&P);
  if ( v5 == 3 )
    PnpBuildUnsafeRemovalDeviceList(v18, v12, &v61);
  if ( v13 < 0 )
  {
LABEL_139:
    IopFreeRelationList(v12);
    if ( v13 == -2147483608 )
      goto LABEL_142;
    v29 = 0LL;
    v10 = v1;
    v30 = 0LL;
LABEL_141:
    PnpFinalizeVetoedRemove(v10, v30, v29);
    goto LABEL_142;
  }
  if ( !v66 )
  {
    v19 = v68;
    goto LABEL_20;
  }
  LOBYTE(v18) = v67;
  PpProfileBeginHardwareProfileTransition(v18);
  v19 = v68;
  if ( (int)v68 - 1 >= 0 )
  {
    v33 = v54;
    v34 = (int)v68 - 1;
    do
    {
      v35 = v33[v34];
      v36 = v34;
      if ( v35 )
        v17 = *(_QWORD *)(*(_QWORD *)(v35 + 312) + 40LL);
      else
        v17 = 0LL;
      if ( *(_DWORD *)(v17 + 568) == 1 )
      {
        _InterlockedIncrement(&PiProfileDevicesInTransition);
        v33 = v54;
        *(_DWORD *)(v17 + 568) = 3;
      }
      --v34;
    }
    while ( v36 > 0 );
    v2 = v60;
    v12 = v59;
    v19 = v68;
  }
  if ( v5 == 4 )
  {
    if ( (int)IoGetLegacyVetoList((PVOID *)&SourceString, v3) >= 0 && *(_DWORD *)v3 )
    {
      PpProfileCancelHardwareProfileTransition();
      IopFreeRelationList(v12);
      v38 = *(_DWORD **)(v1 + 48);
      if ( v38 )
        *v38 = *(_DWORD *)v3;
      if ( *(_QWORD *)(v1 + 56) )
      {
        RtlInitUnicodeString(&DestinationString, SourceString);
        RtlCopyUnicodeString(*(PUNICODE_STRING *)(v1 + 56), &DestinationString);
      }
      ExFreePoolWithTag((PVOID)SourceString, 0);
      SourceString = 0LL;
      goto LABEL_72;
    }
    LOBYTE(v37) = v67;
    if ( (int)PpProfileQueryHardwareProfileChange(v37, 0LL, v3, v3 + 1) >= 0 )
      goto LABEL_91;
    PpProfileCancelHardwareProfileTransition();
    IopFreeRelationList(v12);
LABEL_66:
    v28 = *(unsigned int *)v3;
    v27 = (unsigned int *)(v3 + 1);
    goto LABEL_67;
  }
LABEL_20:
  if ( (v5 & 0xFFFFFFFB) != 0 )
  {
    if ( ((v5 - 3) & 0xFFFFFFFD) == 0 )
      PnpDeleteLockedDeviceNodes((int)DeviceObject, (int)v12, 3, 0, 0, 0, 0LL, 0LL);
    goto LABEL_23;
  }
LABEL_91:
  LOBYTE(v17) = 1;
  PnpTrackQueryRemoveDevices(v12, v17);
  v13 = PiProcessQueryAndCancelRemoval(v5, v1, (_DWORD)v12, v19, (__int64)v54, (__int64)v3, (__int64)&P);
  if ( v13 < 0 )
  {
    if ( v66 )
      PpProfileCancelHardwareProfileTransition();
    if ( *(_DWORD *)(v1 + 16) == 54 )
      v13 = PiProcessCanceledRemoveForReset(v5, v1, v12, v3);
    PnpTrackQueryRemoveDevices(v12, 0LL);
    IopFreeRelationList(v12);
    goto LABEL_142;
  }
LABEL_23:
  if ( v5 == 3 )
  {
    v20 = v61;
    if ( v61 )
    {
      PnpNotifyUserModeDeviceRemoval(v1, v61, &GUID_DEVICE_SURPRISE_REMOVAL, 0LL, 0LL, 0LL);
      ExFreePoolWithTag(v20, 0x4B706E50u);
    }
    v21 = &GUID_TARGET_DEVICE_REMOVE_COMPLETE;
  }
  else
  {
    v21 = &GUID_DEVICE_REMOVE_PENDING;
  }
  PnpNotifyUserModeDeviceRemoval(v1, P, v21, 0LL, 0LL, 0LL);
  v22 = v68;
  PiSendTargetDeviceRemoveCompleteNotification(v5, (_QWORD **)v54, v68);
  if ( ((v5 - 2) & 0xFFFFFFFC) != 0
    || v5 == 4
    || (LOBYTE(v23) = 1, PnpInvalidateRelationsInList(v12, v5, v23, 0LL), IopRemoveDeviceRelationsFromList(v12), v5 != 3) )
  {
    if ( v5 != 5 )
    {
      v39 = DeviceObject;
      if ( *(_DWORD *)(DeviceNode + 568) )
      {
        IopQueryDockRemovalInterface(DeviceObject, &v60);
        v2 = v60;
        if ( v60 )
          (*(void (__fastcall **)(_QWORD, __int64))(v60 + 32))(*(_QWORD *)(v60 + 8), 3LL);
      }
      if ( v5 )
      {
        if ( v5 != 4 )
        {
          LOBYTE(v24) = 0;
          goto LABEL_105;
        }
      }
      else
      {
        PipSetDevNodeFlags(DeviceNode, 0x2000000);
      }
      LOBYTE(v24) = 1;
LABEL_105:
      PnpDeleteLockedDeviceNodes((int)v39, (int)v12, 2, v24, *(_DWORD *)(v1 + 16), *(_DWORD *)(v1 + 20), 0LL, 0LL);
      v40 = *(_DWORD *)(DeviceNode + 560) >> 3;
      LOBYTE(v40) = (*(_DWORD *)(DeviceNode + 560) & 8) != 0;
      v41 = HIWORD(*(_DWORD *)(DeviceNode + 560)) & 1;
      v67 = v40;
      v65 = v41;
      if ( v5 != 4 )
      {
        PiRestartRemovalRelations(v1, v12, v39);
        PnpUnlinkDeviceRemovalRelations(v42, v12);
        if ( v5 )
          goto LABEL_114;
        goto LABEL_113;
      }
      if ( !(_BYTE)v40 && !v41 )
      {
        PnpUnlinkDeviceRemovalRelations(v40, v12);
LABEL_113:
        PnpTrackQueryRemoveDevices(v12, 0LL);
LABEL_114:
        IopFreeRelationList(v12);
        if ( v5 == 2 )
          PnpNotifyUserModeDeviceRemoval(v1, P, &GUID_TARGET_DEVICE_REMOVE_COMPLETE, 0LL, 0LL, 0LL);
        if ( !v5
          && (*(_DWORD *)(v1 + 144) & 2) == 0
          && (*(_DWORD *)(DeviceNode + 396) & 0x2000) != 0
          && *(_DWORD *)(DeviceNode + 404) == 18 )
        {
          PipClearDevNodeProblem(DeviceNode);
          PnpRestartDeviceNode(DeviceNode);
          PnpRequestDeviceAction(*(PVOID *)(DeviceNode + 32), 16, 1, 0LL, 0LL, 0LL, 0LL);
        }
        if ( v2 )
        {
          (*(void (__fastcall **)(_QWORD, __int64))(v2 + 32))(*(_QWORD *)(v2 + 8), 1LL);
          (*(void (__fastcall **)(_QWORD))(v2 + 24))(*(_QWORD *)(v2 + 8));
        }
        goto LABEL_123;
      }
      v57 = 1LL;
      while ( (unsigned __int8)IopEnumerateRelations((_DWORD)v12, (unsigned int)&v57, (unsigned int)&v62, 0, 0LL) )
      {
        if ( v62 )
          v43 = *(_QWORD *)(*(_QWORD *)(v62 + 312) + 40LL);
        else
          v43 = 0LL;
        if ( v43 )
        {
          PipSetDevNodeFlags(v43, 0x80000);
          v44 = *(_QWORD *)(v43 + 696);
          v68 = v44;
          if ( v44 )
          {
            IopFreeRelationList(*(PVOID *)(v44 + 64));
            *(_QWORD *)(v68 + 64) = 0LL;
            *(_QWORD *)(v43 + 696) = 0LL;
          }
        }
      }
      PnpUnlinkDeviceRemovalRelations(v45, v12);
      LOBYTE(v46) = v66;
      PendingEjectRelations = PiEventAllocatePendingEjectRelations(v1, v12, v46, v2);
      v52 = (_QWORD *)PendingEjectRelations;
      if ( PendingEjectRelations )
      {
        LOBYTE(v50) = v65;
        LOBYTE(v48) = v67;
        LOBYTE(v49) = v66;
        *(_QWORD *)(DeviceNode + 696) = PendingEjectRelations;
        LightestSystemStateForEject = PoGetLightestSystemStateForEject(v49, v48, v50, PendingEjectRelations + 92);
        if ( LightestSystemStateForEject >= 0 )
        {
          PpDevNodeUnlockTree(1);
          IopEjectDevice(DeviceObject);
          v13 = 259;
          goto LABEL_143;
        }
        v32 = 0LL;
        if ( LightestSystemStateForEject == -1073741090 )
          v32 = 9LL;
        PnpFinalizeVetoedRemove(v1, v32, 0LL);
        v52[6] = 0LL;
        *((_BYTE *)v52 + 89) = 0;
        v52[1] = v52;
        *v52 = v52;
        PnpProcessCompletedEject(v52);
        goto LABEL_72;
      }
      if ( v2 )
      {
        (*(void (__fastcall **)(_QWORD, __int64))(v2 + 32))(*(_QWORD *)(v2 + 8), 1LL);
        (*(void (__fastcall **)(_QWORD))(v2 + 24))(*(_QWORD *)(v2 + 8));
      }
      if ( v66 )
        PpProfileCancelHardwareProfileTransition();
      LOBYTE(v51) = 1;
      PnpInvalidateRelationsInList(v12, 4LL, 0LL, v51);
      PnpTrackQueryRemoveDevices(v12, 0LL);
      IopFreeRelationList(v12);
      goto LABEL_64;
    }
  }
  PiEventRemovalPostSurpriseRemove(v1, v5, &v59);
  PpDevNodeUnlockTree(1);
  PnpIsChainDereferenced(v54, v22, 0, 1u, 0LL);
  v13 = 0;
LABEL_31:
  if ( v5 != 4 )
  {
    if ( v3 )
      v25 = v3;
    else
      v25 = 0LL;
    PnpRecordBlackboxPnpEventInformation(v1, v5, v25, 0LL);
  }
LABEL_35:
  if ( v3 && !PnpShutdownEvent.Header.SignalState )
  {
    ExFreePoolWithTag(v3[2], 0x4D706E50u);
    v3[2] = 0LL;
    ExFreePoolWithTag(v3, 0x4D706E50u);
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v54 )
    ExFreePoolWithTag(v54, 0);
  return (unsigned int)v13;
}
