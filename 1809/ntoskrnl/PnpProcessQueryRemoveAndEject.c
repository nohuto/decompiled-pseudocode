/*
 * XREFs of PnpProcessQueryRemoveAndEject @ 0x1406EF790
 * Callers:
 *     PnpProcessTargetDeviceEvent @ 0x1406EB0C0 (PnpProcessTargetDeviceEvent.c)
 *     PnpShutdownDevices @ 0x140823000 (PnpShutdownDevices.c)
 * Callees:
 *     KeReadStateSemaphore @ 0x140005D60 (KeReadStateSemaphore.c)
 *     PipAreDriversLoaded @ 0x1400072C0 (PipAreDriversLoaded.c)
 *     RtlCopyUnicodeString @ 0x1400B9890 (RtlCopyUnicodeString.c)
 *     RtlInitUnicodeString @ 0x1400B9A90 (RtlInitUnicodeString.c)
 *     PnpIsChainDereferenced @ 0x14015A778 (PnpIsChainDereferenced.c)
 *     PnpRequestDeviceAction @ 0x14015F004 (PnpRequestDeviceAction.c)
 *     _guard_dispatch_icall @ 0x1401C5ED0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     PpDevNodeUnlockTree @ 0x14059BEB4 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x14059BF10 (PpDevNodeLockTree.c)
 *     IoGetLegacyVetoList @ 0x1405B0B64 (IoGetLegacyVetoList.c)
 *     PipSetDevNodeFlags @ 0x1406E50DC (PipSetDevNodeFlags.c)
 *     PiDetermineDeleteType @ 0x1406EC2C4 (PiDetermineDeleteType.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x1406ED72C (PnpUnlinkDeviceRemovalRelations.c)
 *     PiEventBuildPdoList @ 0x1406EDA28 (PiEventBuildPdoList.c)
 *     PnpBuildUnsafeRemovalDeviceList @ 0x1406EDB6C (PnpBuildUnsafeRemovalDeviceList.c)
 *     PnpInvalidateRelationsInList @ 0x1406EDCB0 (PnpInvalidateRelationsInList.c)
 *     PnpDeleteLockedDeviceNodes @ 0x1406EDE18 (PnpDeleteLockedDeviceNodes.c)
 *     PnpCompileDeviceInstancePaths @ 0x1406EDF2C (PnpCompileDeviceInstancePaths.c)
 *     IopEnumerateRelations @ 0x1406EE0B4 (IopEnumerateRelations.c)
 *     IopFreeRelationList @ 0x1406EEA3C (IopFreeRelationList.c)
 *     PiEventAllocateVetoBuffer @ 0x1406EEAE8 (PiEventAllocateVetoBuffer.c)
 *     PnpResizeTargetDeviceBlock @ 0x1406EEBB4 (PnpResizeTargetDeviceBlock.c)
 *     PiInvalidateSpeculativeRelations @ 0x1406EF064 (PiInvalidateSpeculativeRelations.c)
 *     PnpBuildRemovalRelationList @ 0x1406EF2D4 (PnpBuildRemovalRelationList.c)
 *     PiEventRemovalPostSurpriseRemove @ 0x1406EF370 (PiEventRemovalPostSurpriseRemove.c)
 *     PiCheckRemovalPreconditions @ 0x1406EF748 (PiCheckRemovalPreconditions.c)
 *     PiIsOrderlyRemoval @ 0x1406EF780 (PiIsOrderlyRemoval.c)
 *     PiIsSurpriseRemoval @ 0x1406EFF64 (PiIsSurpriseRemoval.c)
 *     PnpRecordBlackboxPnpEventInformation @ 0x1406EFF78 (PnpRecordBlackboxPnpEventInformation.c)
 *     PnpNotifyUserModeDeviceRemoval @ 0x1406F00F4 (PnpNotifyUserModeDeviceRemoval.c)
 *     PiEventFreeVetoBuffer @ 0x1406F025C (PiEventFreeVetoBuffer.c)
 *     PiSendTargetDeviceRemoveCompleteNotification @ 0x1406F0294 (PiSendTargetDeviceRemoveCompleteNotification.c)
 *     PiEventAreDeviceRelationsExcluded @ 0x1406F0304 (PiEventAreDeviceRelationsExcluded.c)
 *     PipClearDevNodeProblem @ 0x1406F6CD8 (PipClearDevNodeProblem.c)
 *     PnpRestartDeviceNode @ 0x14075FE6C (PnpRestartDeviceNode.c)
 *     PnpProcessCompletedEject @ 0x140828280 (PnpProcessCompletedEject.c)
 *     PpProfileBeginHardwareProfileTransition @ 0x140832794 (PpProfileBeginHardwareProfileTransition.c)
 *     PpProfileCancelHardwareProfileTransition @ 0x1408327C4 (PpProfileCancelHardwareProfileTransition.c)
 *     PpProfileIncludeInHardwareProfileTransition @ 0x140832A3C (PpProfileIncludeInHardwareProfileTransition.c)
 *     PpProfileQueryHardwareProfileChange @ 0x140832B44 (PpProfileQueryHardwareProfileChange.c)
 *     PnpFinalizeVetoedRemove @ 0x140832F9C (PnpFinalizeVetoedRemove.c)
 *     PnpTrackQueryRemoveDevices @ 0x1408336F8 (PnpTrackQueryRemoveDevices.c)
 *     IopEjectDevice @ 0x14083AE00 (IopEjectDevice.c)
 *     IopQueryDockRemovalInterface @ 0x14083B058 (IopQueryDockRemovalInterface.c)
 *     PiEventAllocatePendingEjectRelations @ 0x14083FF40 (PiEventAllocatePendingEjectRelations.c)
 *     PiProcessCanceledRemoveForReset @ 0x14083FFD8 (PiProcessCanceledRemoveForReset.c)
 *     PiProcessQueryAndCancelRemoval @ 0x140840138 (PiProcessQueryAndCancelRemoval.c)
 *     PiProcessQueryRemoveNoFdo @ 0x140840318 (PiProcessQueryRemoveNoFdo.c)
 *     PiRestartRemovalRelations @ 0x1408403C4 (PiRestartRemovalRelations.c)
 *     PiValidateEjectionRequest @ 0x140840570 (PiValidateEjectionRequest.c)
 *     PoGetLightestSystemStateForEject @ 0x140865CEC (PoGetLightestSystemStateForEject.c)
 */

__int64 __fastcall PnpProcessQueryRemoveAndEject(const void **a1)
{
  const void *v1; // rdi
  __int64 v2; // r12
  unsigned int *v3; // r15
  struct _DEVICE_OBJECT *v4; // r14
  unsigned int v5; // esi
  __int64 DeviceNode; // r13
  int v7; // ebx
  unsigned int v8; // eax
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // rdx
  unsigned int *VetoBuffer; // rax
  unsigned int *v13; // r8
  __int64 v14; // rdx
  unsigned int **v15; // r14
  int v16; // eax
  char v17; // al
  unsigned int v18; // ecx
  __int64 v19; // rcx
  __int64 v20; // rbx
  _QWORD *v21; // r14
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rcx
  _DWORD *v25; // rcx
  __int64 v26; // rdx
  GUID *v27; // r8
  PVOID v28; // rbx
  _QWORD *v29; // rbx
  PDEVICE_OBJECT v30; // rbx
  void *v31; // rcx
  char v32; // al
  void *v33; // rcx
  __int64 v34; // rbx
  _QWORD **v35; // rax
  void *v36; // rcx
  __int64 v37; // r8
  __int64 PendingEjectRelations; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  _QWORD *v42; // rbx
  int LightestSystemStateForEject; // eax
  __int64 v44; // rdx
  unsigned int *v45; // r8
  PVOID v47; // [rsp+40h] [rbp-29h] BYREF
  PVOID v48; // [rsp+48h] [rbp-21h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+50h] [rbp-19h]
  PCWSTR SourceString; // [rsp+58h] [rbp-11h] BYREF
  PVOID v51; // [rsp+60h] [rbp-9h] BYREF
  PVOID P; // [rsp+68h] [rbp-1h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp+7h] BYREF
  char IsOrderlyRemoval; // [rsp+D0h] [rbp+67h]
  char v56; // [rsp+D0h] [rbp+67h]
  int v57; // [rsp+D8h] [rbp+6Fh] BYREF
  ULONG_PTR v58; // [rsp+E0h] [rbp+77h] BYREF
  unsigned int v59; // [rsp+E8h] [rbp+7Fh] BYREF
  int v60; // [rsp+ECh] [rbp+83h]

  v1 = *a1;
  v2 = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  v48 = 0LL;
  v3 = 0LL;
  LOBYTE(v57) = 0;
  v4 = (struct _DEVICE_OBJECT *)*((_QWORD *)v1 + 19);
  v5 = 7;
  LOBYTE(v58) = 0;
  v47 = 0LL;
  P = 0LL;
  DeviceObject = v4;
  if ( v4 )
    DeviceNode = (__int64)v4->DeviceObjectExtension->DeviceNode;
  else
    DeviceNode = 0LL;
  PpDevNodeLockTree(1);
  if ( (unsigned int)(*(_DWORD *)(DeviceNode + 300) - 787) <= 1 )
  {
    v7 = -1073741738;
LABEL_107:
    PpDevNodeUnlockTree(1);
LABEL_108:
    if ( v7 == -1073741738 )
      goto LABEL_114;
    goto LABEL_109;
  }
  v8 = PiDetermineDeleteType((__int64)v1);
  v5 = v8;
  if ( v8 != 4 )
  {
    LOBYTE(v9) = 1;
    PnpRecordBlackboxPnpEventInformation(v1, v8, 0LL, v9);
  }
  v7 = PiCheckRemovalPreconditions(v5, (__int64)v1);
  if ( v7 < 0 )
    goto LABEL_107;
  if ( v5 == 4 )
  {
    v7 = PiValidateEjectionRequest(DeviceNode, &v59);
    if ( v7 < 0 )
    {
      v10 = DeviceNode + 40;
      v11 = 8LL;
      goto LABEL_106;
    }
    if ( !(_BYTE)v59 )
      goto LABEL_107;
  }
  if ( !v5 && !(unsigned int)PipAreDriversLoaded(DeviceNode) )
  {
    v7 = PiProcessQueryRemoveNoFdo(v1);
    goto LABEL_107;
  }
  VetoBuffer = (unsigned int *)PiEventAllocateVetoBuffer(v5);
  v3 = VetoBuffer;
  if ( !VetoBuffer )
  {
LABEL_17:
    v13 = 0LL;
    v14 = 0LL;
LABEL_18:
    PnpFinalizeVetoedRemove(v1, v14, v13);
LABEL_19:
    v7 = -2147483608;
    goto LABEL_107;
  }
  if ( (int)PnpBuildRemovalRelationList((__int64)v4, v5, (__int64)VetoBuffer, &v51) < 0 )
  {
LABEL_21:
    v14 = *v3;
    v13 = v3 + 2;
    goto LABEL_18;
  }
  v15 = (unsigned int **)v51;
  v7 = PiEventBuildPdoList((unsigned int **)v51, v5, (__int64)v1, &v59, (__int64 *)&v48, &v57, (__int64)&v58);
  if ( v7 < 0 )
    goto LABEL_104;
  v16 = PnpResizeTargetDeviceBlock(a1, v5);
  v1 = *a1;
  v7 = v16;
  if ( v16 < 0 )
    goto LABEL_104;
  v17 = PiEventAreDeviceRelationsExcluded(v5);
  v7 = PnpCompileDeviceInstancePaths(v18, (__int64)v15, v17, 0, (__int64 *)&v47);
  if ( v5 == 3 )
    PnpBuildUnsafeRemovalDeviceList(v19, (__int64)v15, &P);
  if ( v7 < 0 )
  {
LABEL_104:
    IopFreeRelationList(v15);
    if ( v7 == -2147483608 )
      goto LABEL_107;
    v10 = 0LL;
    v11 = 0LL;
LABEL_106:
    PnpFinalizeVetoedRemove(v1, v11, v10);
    goto LABEL_107;
  }
  if ( (_BYTE)v57 )
  {
    LOBYTE(v19) = v58;
    PpProfileBeginHardwareProfileTransition(v19);
    v20 = (int)(v59 - 1);
    if ( (int)(v59 - 1) >= 0 )
    {
      v21 = v48;
      do
      {
        v22 = v21[v20];
        if ( v22 )
          v23 = *(_QWORD *)(*(_QWORD *)(v22 + 312) + 40LL);
        else
          v23 = 0LL;
        if ( *(_DWORD *)(v23 + 568) == 1 )
          PpProfileIncludeInHardwareProfileTransition(v23, 3LL);
        --v20;
      }
      while ( v20 >= 0 );
      v15 = (unsigned int **)v51;
    }
    if ( v5 == 4 )
    {
      if ( (int)IoGetLegacyVetoList((PVOID *)&SourceString, v3) >= 0 && *v3 )
      {
        PpProfileCancelHardwareProfileTransition();
        IopFreeRelationList(v15);
        v25 = (_DWORD *)*((_QWORD *)v1 + 6);
        if ( v25 )
          *v25 = *v3;
        if ( *((_QWORD *)v1 + 7) )
        {
          RtlInitUnicodeString(&DestinationString, SourceString);
          RtlCopyUnicodeString(*((PUNICODE_STRING *)v1 + 7), &DestinationString);
        }
        ExFreePoolWithTag((PVOID)SourceString, 0);
        SourceString = 0LL;
        goto LABEL_19;
      }
      LOBYTE(v24) = v58;
      if ( (int)PpProfileQueryHardwareProfileChange(v24, 0LL, v3, v3 + 2) < 0 )
      {
        PpProfileCancelHardwareProfileTransition();
        IopFreeRelationList(v15);
        goto LABEL_21;
      }
    }
  }
  IsOrderlyRemoval = PiIsOrderlyRemoval(v5);
  if ( IsOrderlyRemoval )
  {
    LOBYTE(v26) = 1;
    PnpTrackQueryRemoveDevices(v15, v26);
    v7 = PiProcessQueryAndCancelRemoval(v5, (_DWORD)v1, (_DWORD)v15, v59, (__int64)v48, (__int64)v3, (__int64)&v47);
    if ( v7 < 0 )
    {
      if ( (_BYTE)v57 )
        PpProfileCancelHardwareProfileTransition();
      if ( *((_DWORD *)v1 + 4) == 54 )
        v7 = PiProcessCanceledRemoveForReset(v5, v1, v15, v3);
      PnpTrackQueryRemoveDevices(v15, 0LL);
      IopFreeRelationList(v15);
      goto LABEL_107;
    }
  }
  else if ( (unsigned __int8)((__int64 (*)(void))PiIsSurpriseRemoval)() )
  {
    PnpDeleteLockedDeviceNodes((__int64)DeviceObject, (__int64)v15, 3, 0, 0, 0, 0LL, 0LL);
  }
  if ( v5 == 3 )
  {
    v28 = P;
    if ( P )
    {
      PnpNotifyUserModeDeviceRemoval(v1, P, &GUID_DEVICE_SURPRISE_REMOVAL, 0LL, 0LL, 0LL);
      ExFreePoolWithTag(v28, 0x4B706E50u);
    }
    v27 = &GUID_TARGET_DEVICE_REMOVE_COMPLETE;
  }
  else
  {
    v27 = &GUID_DEVICE_REMOVE_PENDING;
  }
  PnpNotifyUserModeDeviceRemoval(v1, v47, v27, 0LL, 0LL, 0LL);
  v29 = v48;
  PiSendTargetDeviceRemoveCompleteNotification(v5, v48, v59);
  PiInvalidateSpeculativeRelations(v5, v15);
  if ( !(unsigned __int8)PiIsSurpriseRemoval(v5) )
  {
    v30 = DeviceObject;
    if ( *(_DWORD *)(DeviceNode + 568) )
    {
      IopQueryDockRemovalInterface(DeviceObject, &DestinationString);
      v2 = *(_QWORD *)&DestinationString.Length;
      if ( *(_QWORD *)&DestinationString.Length )
        (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)&DestinationString.Length + 32LL))(
          *(_QWORD *)(*(_QWORD *)&DestinationString.Length + 8LL),
          3LL);
    }
    if ( !v5 )
      PipSetDevNodeFlags(DeviceNode, 0x2000000);
    PnpDeleteLockedDeviceNodes(
      (__int64)v30,
      (__int64)v15,
      2,
      IsOrderlyRemoval,
      *((_DWORD *)v1 + 4),
      *((_DWORD *)v1 + 5),
      0LL,
      0LL);
    v31 = (void *)(*(_DWORD *)(DeviceNode + 560) >> 3);
    LOBYTE(v31) = (*(_DWORD *)(DeviceNode + 560) & 8) != 0;
    v32 = HIWORD(*(_DWORD *)(DeviceNode + 560)) & 1;
    LODWORD(v58) = (_DWORD)v31;
    v56 = v32;
    if ( v5 == 4 )
    {
      if ( (_BYTE)v31 || v32 )
      {
        v60 = 0;
        v59 = 1;
        while ( IopEnumerateRelations(v15, (int *)&v59, &DestinationString, 0LL, 0LL) )
        {
          if ( *(_QWORD *)&DestinationString.Length )
            v34 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)&DestinationString.Length + 312LL) + 40LL);
          else
            v34 = 0LL;
          if ( v34 )
          {
            PipSetDevNodeFlags(v34, 0x80000);
            v35 = *(_QWORD ***)(v34 + 696);
            P = v35;
            if ( v35 )
            {
              IopFreeRelationList(v35[8]);
              *((_QWORD *)P + 8) = 0LL;
              *(_QWORD *)(v34 + 696) = 0LL;
            }
          }
        }
        PnpUnlinkDeviceRemovalRelations(v36, (__int64)v15);
        LOBYTE(v37) = v57;
        PendingEjectRelations = PiEventAllocatePendingEjectRelations(v1, v15, v37, v2);
        v42 = (_QWORD *)PendingEjectRelations;
        if ( PendingEjectRelations )
        {
          LOBYTE(v41) = v56;
          LOBYTE(v39) = v58;
          LOBYTE(v40) = v57;
          *(_QWORD *)(DeviceNode + 696) = PendingEjectRelations;
          LightestSystemStateForEject = PoGetLightestSystemStateForEject(v40, v39, v41, PendingEjectRelations + 92);
          if ( LightestSystemStateForEject >= 0 )
          {
            PpDevNodeUnlockTree(1);
            IopEjectDevice(DeviceObject);
            v7 = 259;
            goto LABEL_108;
          }
          v44 = 0LL;
          if ( LightestSystemStateForEject == -1073741090 )
            v44 = 9LL;
          PnpFinalizeVetoedRemove(v1, v44, 0LL);
          v42[6] = 0LL;
          *((_BYTE *)v42 + 89) = 0;
          v42[1] = v42;
          *v42 = v42;
          PnpProcessCompletedEject(v42);
          goto LABEL_19;
        }
        if ( v2 )
        {
          (*(void (__fastcall **)(_QWORD, __int64))(v2 + 32))(*(_QWORD *)(v2 + 8), 1LL);
          (*(void (__fastcall **)(_QWORD))(v2 + 24))(*(_QWORD *)(v2 + 8));
        }
        if ( (_BYTE)v57 )
          PpProfileCancelHardwareProfileTransition();
        PnpInvalidateRelationsInList(v15, 4u, 0, 1);
        PnpTrackQueryRemoveDevices(v15, 0LL);
        IopFreeRelationList(v15);
        goto LABEL_17;
      }
      PnpUnlinkDeviceRemovalRelations(v31, (__int64)v15);
    }
    else
    {
      PiRestartRemovalRelations(v1, v15, v30);
      PnpUnlinkDeviceRemovalRelations(v33, (__int64)v15);
      if ( v5 )
      {
LABEL_75:
        IopFreeRelationList(v15);
        if ( v5 == 2 )
          PnpNotifyUserModeDeviceRemoval(v1, v47, &GUID_TARGET_DEVICE_REMOVE_COMPLETE, 0LL, 0LL, 0LL);
        if ( !v5
          && (*((_DWORD *)v1 + 36) & 2) == 0
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
        v7 = 0;
        goto LABEL_107;
      }
    }
    PnpTrackQueryRemoveDevices(v15, 0LL);
    goto LABEL_75;
  }
  PiEventRemovalPostSurpriseRemove((__int64)v1, v5, (__int64 *)&v51);
  PpDevNodeUnlockTree(1);
  PnpIsChainDereferenced(v29, v59, 0, 1u, 0LL);
  v7 = 0;
LABEL_109:
  if ( v5 != 4 )
  {
    if ( v3 )
      v45 = v3;
    else
      v45 = 0LL;
    PnpRecordBlackboxPnpEventInformation(v1, v5, v45, 0LL);
  }
LABEL_114:
  if ( v3 && !KeReadStateSemaphore(&PnpShutdownEvent) )
    PiEventFreeVetoBuffer(v3);
  if ( v47 )
    ExFreePoolWithTag(v47, 0);
  if ( v48 )
    ExFreePoolWithTag(v48, 0);
  return (unsigned int)v7;
}
