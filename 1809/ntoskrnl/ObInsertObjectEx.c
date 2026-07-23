/*
 * XREFs of ObInsertObjectEx @ 0x14062E0A0
 * Callers:
 *     PopPowerRequestCreateInfo @ 0x140589318 (PopPowerRequestCreateInfo.c)
 *     IoCreateStreamFileObjectEx2 @ 0x1405A45A0 (IoCreateStreamFileObjectEx2.c)
 *     EtwpAddUmRegEntry @ 0x1405C54C0 (EtwpAddUmRegEntry.c)
 *     MiCreateSectionCommon @ 0x1405DE7A0 (MiCreateSectionCommon.c)
 *     NtCreateSemaphore @ 0x1405F9710 (NtCreateSemaphore.c)
 *     NtCreateJobObject @ 0x140606F80 (NtCreateJobObject.c)
 *     PspInsertProcess @ 0x14060A3A8 (PspInsertProcess.c)
 *     MmCreateSpecialImageSection @ 0x14060B404 (MmCreateSpecialImageSection.c)
 *     WmipCreateGuidObject @ 0x140612BC8 (WmipCreateGuidObject.c)
 *     AlpcpCreateClientPort @ 0x14061606C (AlpcpCreateClientPort.c)
 *     AlpcpAcceptConnectPort @ 0x14061ACD8 (AlpcpAcceptConnectPort.c)
 *     ObInsertObject @ 0x14061C280 (ObInsertObject.c)
 *     PspInsertThread @ 0x140622450 (PspInsertThread.c)
 *     NtCreateTimer @ 0x140624F50 (NtCreateTimer.c)
 *     NtCreateEvent @ 0x14062DF70 (NtCreateEvent.c)
 *     SepCreateClientSecurityEx @ 0x140632EE0 (SepCreateClientSecurityEx.c)
 *     NtOpenThreadTokenEx @ 0x140649A40 (NtOpenThreadTokenEx.c)
 *     SeCopyClientToken @ 0x14064B034 (SeCopyClientToken.c)
 *     NtDuplicateToken @ 0x14064B1D0 (NtDuplicateToken.c)
 *     SeSubProcessToken @ 0x14064FC0C (SeSubProcessToken.c)
 *     IoCreateDevice @ 0x140653B90 (IoCreateDevice.c)
 *     NtCreatePrivateNamespace @ 0x140655520 (NtCreatePrivateNamespace.c)
 *     NtCreateLowBoxToken @ 0x140656130 (NtCreateLowBoxToken.c)
 *     NtCreateMutant @ 0x14065C580 (NtCreateMutant.c)
 *     IopLoadDriver @ 0x140680BF4 (IopLoadDriver.c)
 *     NtCreateWorkerFactory @ 0x14068B3B0 (NtCreateWorkerFactory.c)
 *     NtCreateTimer2 @ 0x14068B710 (NtCreateTimer2.c)
 *     NtCreateWaitCompletionPacket @ 0x1406A1390 (NtCreateWaitCompletionPacket.c)
 *     EtwpCreateUmReplyObject @ 0x1406A7578 (EtwpCreateUmReplyObject.c)
 *     NtCreateIoCompletion @ 0x1406A7740 (NtCreateIoCompletion.c)
 *     ObpCreateDirectoryObject @ 0x1406AEF7C (ObpCreateDirectoryObject.c)
 *     AlpcpCreateConnectionPort @ 0x1406B7948 (AlpcpCreateConnectionPort.c)
 *     ObCreateSymbolicLink @ 0x1406B849C (ObCreateSymbolicLink.c)
 *     NtAllocateReserveObject @ 0x1406BEE10 (NtAllocateReserveObject.c)
 *     EtwpRealtimeConnect @ 0x1406C3D98 (EtwpRealtimeConnect.c)
 *     NtFilterToken @ 0x1406C7E00 (NtFilterToken.c)
 *     NtCreateRegistryTransaction @ 0x1406C8F80 (NtCreateRegistryTransaction.c)
 *     ExCreateCallback @ 0x1406CB620 (ExCreateCallback.c)
 *     PspCreateActivityReference @ 0x1406D747C (PspCreateActivityReference.c)
 *     MiSessionObjectCreate @ 0x14071655C (MiSessionObjectCreate.c)
 *     SepInitializationPhase1 @ 0x1407281C4 (SepInitializationPhase1.c)
 *     IoCreateDriver @ 0x14073B280 (IoCreateDriver.c)
 *     NtCreateKeyedEvent @ 0x140757890 (NtCreateKeyedEvent.c)
 *     SeFilterToken @ 0x140758C60 (SeFilterToken.c)
 *     PopEtEnergyTrackerCreate @ 0x14075D570 (PopEtEnergyTrackerCreate.c)
 *     PspAllocatePartition @ 0x14075DC38 (PspAllocatePartition.c)
 *     NtCreateDebugObject @ 0x140810C50 (NtCreateDebugObject.c)
 *     IoCreateController @ 0x14081D3E0 (IoCreateController.c)
 *     TtmiCreateTerminal @ 0x14087FA6C (TtmiCreateTerminal.c)
 *     SeGetLogonSessionToken @ 0x1408A2E40 (SeGetLogonSessionToken.c)
 *     EtwpRegisterPrivateSession @ 0x1408C1358 (EtwpRegisterPrivateSession.c)
 *     EtwpSetCoverageSamplerInformation @ 0x1408CA57C (EtwpSetCoverageSamplerInformation.c)
 *     ExpProfileCreate @ 0x1408DAE8C (ExpProfileCreate.c)
 * Callees:
 *     SepCreateAccessStateFromSubjectContext @ 0x14004D710 (SepCreateAccessStateFromSubjectContext.c)
 *     SepDeleteAccessState @ 0x14004D950 (SepDeleteAccessState.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     SeAssignSecurityEx2 @ 0x1400A8E70 (SeAssignSecurityEx2.c)
 *     SeComputeAutoInheritByObjectTypeEx @ 0x1400A8FB0 (SeComputeAutoInheritByObjectTypeEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401C5570 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ObpAdjustCreatorAccessState @ 0x1405C94C8 (ObpAdjustCreatorAccessState.c)
 *     ObpChargeQuotaForObject @ 0x1405CAA24 (ObpChargeQuotaForObject.c)
 *     SeCaptureSubjectContextEx @ 0x1405E17F0 (SeCaptureSubjectContextEx.c)
 *     SeReleaseSubjectContext @ 0x1405E2240 (SeReleaseSubjectContext.c)
 *     ObpCreateHandle @ 0x1405E22B0 (ObpCreateHandle.c)
 *     SeReleaseSecurityDescriptor @ 0x140632870 (SeReleaseSecurityDescriptor.c)
 *     RtlValidSecurityDescriptor @ 0x14069CB50 (RtlValidSecurityDescriptor.c)
 *     SeDeassignSecurity @ 0x1406AEE30 (SeDeassignSecurity.c)
 *     SeObjectCreateSaclAccessBits @ 0x1406B2238 (SeObjectCreateSaclAccessBits.c)
 */

__int64 __fastcall ObInsertObjectEx(
        _QWORD *Object,
        PACCESS_STATE AccessState,
        __int64 a3,
        int a4,
        char a5,
        PVOID *a6,
        unsigned __int64 *a7)
{
  __int64 v7; // rsi
  char *v10; // r12
  unsigned __int64 v11; // rcx
  int Handle; // ebx
  char v13; // al
  POBJECT_TYPE v14; // r13
  _BYTE *v15; // rax
  char *v16; // rcx
  char PreviousMode; // dl
  __int64 v18; // rcx
  struct _KPRCB *CurrentPrcb; // rdx
  _GENERAL_LOOKASIDE *P; // rcx
  _BYTE *v22; // rbx
  PSECURITY_DESCRIPTOR v23; // rdx
  int v24; // ebx
  void *v25; // rcx
  int v26; // ecx
  __int64 v27; // rax
  int v28; // r14d
  __int64 v29; // r8
  KPROCESSOR_MODE v30; // dl
  struct _KTHREAD *CurrentThread; // rax
  __int64 v32; // rcx
  struct _KPRCB *v33; // rdx
  _GENERAL_LOOKASIDE *L; // rcx
  int v35; // [rsp+40h] [rbp-238h]
  PVOID *v36; // [rsp+48h] [rbp-230h]
  char v37; // [rsp+60h] [rbp-218h]
  ACCESS_MASK v38; // [rsp+64h] [rbp-214h]
  int v39; // [rsp+68h] [rbp-210h] BYREF
  int v40; // [rsp+6Ch] [rbp-20Ch]
  ULONG Index[2]; // [rsp+70h] [rbp-208h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+78h] [rbp-200h] BYREF
  char *v43; // [rsp+80h] [rbp-1F8h]
  PVOID *v44; // [rsp+88h] [rbp-1F0h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+90h] [rbp-1E8h] BYREF
  _QWORD v46[20]; // [rsp+B0h] [rbp-1C8h] BYREF
  _QWORD v47[28]; // [rsp+150h] [rbp-128h] BYREF

  v7 = *(Object - 2);
  v10 = 0LL;
  v11 = *((unsigned __int8 *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8);
  v40 = a4;
  Handle = 0;
  v38 = a3;
  v13 = *((_BYTE *)Object - 22);
  v44 = a6;
  v43 = 0LL;
  v14 = (POBJECT_TYPE)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v11];
  if ( (v13 & 2) != 0 )
  {
    v15 = (_BYTE *)ObpInfoMaskToOffset[v13 & 3];
    v16 = (char *)((char *)(Object - 6) - v15);
    if ( Object - 6 != (_QWORD *)v15 )
    {
      v10 = v16 + 8;
      v43 = v16 + 8;
    }
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v37 = PreviousMode;
  if ( (v14->TypeInfo.ObjectTypeFlags & 8) == 0 && !v10 && !*(_QWORD *)(v7 + 32) )
  {
    *(Object - 2) = 0LL;
    if ( a7 )
    {
      *a7 = 0LL;
      Handle = ObpCreateHandle(0, (char *)Object, a3, 0LL, a4 + 1, *(_DWORD *)v7, PreviousMode, 0LL, 0, a6, a7);
    }
    v18 = *(_QWORD *)(v7 + 32);
    if ( v18 )
    {
      LOBYTE(a3) = 1;
      SeReleaseSecurityDescriptor(v18, *(unsigned __int8 *)(v7 + 16), a3);
      *(_QWORD *)(v7 + 32) = 0LL;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    P = CurrentPrcb->PPLookasideList[4].P;
    ++P->TotalFrees;
    if ( LOWORD(P->ListHead.Alignment) >= P->Depth )
    {
      ++P->FreeMisses;
      P = CurrentPrcb->PPLookasideList[4].L;
      ++P->TotalFrees;
      if ( LOWORD(P->ListHead.Alignment) >= P->Depth )
      {
        ++P->FreeMisses;
        ((void (__fastcall *)(__int64))P->FreeEx)(v7);
        ObfDereferenceObject(Object);
        return (unsigned int)Handle;
      }
    }
    RtlpInterlockedPushEntrySList(&P->ListHead, (PSLIST_ENTRY)v7);
    goto LABEL_15;
  }
  if ( !AccessState )
  {
    AccessState = (PACCESS_STATE)v46;
    SeCaptureSubjectContextEx(KeGetCurrentThread(), KeGetCurrentThread()->ApcState.Process, &SubjectContext);
    Handle = SepCreateAccessStateFromSubjectContext(&SubjectContext, v46, v47, v38, &v14->TypeInfo.GenericMapping);
    if ( Handle < 0 )
    {
LABEL_15:
      ObfDereferenceObject(Object);
      return (unsigned int)Handle;
    }
  }
  v22 = *(_BYTE **)(v7 + 32);
  AccessState->SecurityDescriptor = v22;
  if ( v22 )
  {
    if ( !RtlValidSecurityDescriptor(v22) )
    {
      ObfDereferenceObject(Object);
      if ( AccessState == (PACCESS_STATE)v46 )
      {
        SepDeleteAccessState((__int64)AccessState);
        SeReleaseSubjectContext(&AccessState->SubjectSecurityContext);
      }
      return 3221225593LL;
    }
    if ( (v22[2] & 0x10) != 0 && (AccessState->PreviouslyGrantedAccess & 0x1000000) == 0 )
      AccessState->RemainingDesiredAccess |= SeObjectCreateSaclAccessBits(v22);
  }
  if ( !v10 && ((v14->TypeInfo.ObjectTypeFlags & 8) != 0 || *(_QWORD *)(v7 + 32)) )
  {
    v23 = AccessState->SecurityDescriptor;
    Index[1] = 0;
    SecurityDescriptor = 0LL;
    Index[0] = 8;
    v24 = SeComputeAutoInheritByObjectTypeEx((__int64)v14, (__int64)v23, 0LL, &v39, Index);
    if ( v24 < 0 )
      goto LABEL_30;
    v24 = SeAssignSecurityEx2(
            0,
            (int)AccessState->SecurityDescriptor,
            (int)&SecurityDescriptor,
            0LL,
            v14 == ObpDirectoryObjectType,
            (16 * (a5 & 1)) | (unsigned int)v39,
            Index,
            (__int64)&AccessState->SubjectSecurityContext,
            (__int64)&v14->TypeInfo.GenericMapping);
    if ( v24 < 0 )
      goto LABEL_30;
    LOBYTE(v35) = KeGetCurrentThread()->PreviousMode;
    v24 = v14->TypeInfo.SecurityProcedure(
            Object,
            AssignSecurityDescriptor,
            0LL,
            SecurityDescriptor,
            0LL,
            0LL,
            PagedPool,
            &v14->TypeInfo.GenericMapping,
            v35);
    if ( v24 < 0 )
    {
      SeDeassignSecurity(&SecurityDescriptor);
LABEL_30:
      ObfDereferenceObject(Object);
      if ( AccessState == (PACCESS_STATE)v46 )
      {
        SepDeleteAccessState((__int64)AccessState);
        SeReleaseSubjectContext(&AccessState->SubjectSecurityContext);
      }
      return (unsigned int)v24;
    }
    v25 = *(void **)(v7 + 32);
    if ( *(_BYTE *)(v7 + 16) <= 1u && v25 )
      ExFreePoolWithTag(v25, 0);
    v10 = v43;
    *(_QWORD *)(v7 + 32) = 0LL;
    AccessState->SecurityDescriptor = 0LL;
  }
  *(Object - 2) = 0LL;
  if ( a7 )
  {
    v26 = v40;
    v27 = 0LL;
    if ( v10 )
      v27 = v7;
    v36 = v44;
    *a7 = 0LL;
    v28 = ObpCreateHandle(0, (char *)Object, 0, AccessState, v26 + 1, *(_DWORD *)v7, v37, v27, 0, v36, a7);
    ObfDereferenceObject(Object);
  }
  else
  {
    if ( AccessState != (PACCESS_STATE)v46 )
    {
      v30 = v37;
      if ( (*(_DWORD *)v7 & 0x400) != 0 )
        v30 = 1;
      v28 = ObpAdjustCreatorAccessState(AccessState, v30, (__int64)v14, (__int64)Object);
      if ( v28 < 0 )
        goto LABEL_49;
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(Object - 4), 0LL);
    v28 = ObpChargeQuotaForObject((__int64)(Object - 6), (__int64)KeGetCurrentThread()->ApcState.Process);
    ExReleasePushLockEx((ULONG_PTR)(Object - 4), 0LL);
    KeLeaveCriticalRegion();
    if ( v28 < 0 )
LABEL_49:
      ObfDereferenceObject(Object);
  }
  v32 = *(_QWORD *)(v7 + 32);
  if ( v32 )
  {
    LOBYTE(v29) = 1;
    SeReleaseSecurityDescriptor(v32, *(unsigned __int8 *)(v7 + 16), v29);
    *(_QWORD *)(v7 + 32) = 0LL;
  }
  v33 = KeGetCurrentPrcb();
  L = v33->PPLookasideList[4].P;
  ++L->TotalFrees;
  if ( LOWORD(L->ListHead.Alignment) < L->Depth
    || (++L->FreeMisses, L = v33->PPLookasideList[4].L, ++L->TotalFrees, LOWORD(L->ListHead.Alignment) < L->Depth) )
  {
    RtlpInterlockedPushEntrySList(&L->ListHead, (PSLIST_ENTRY)v7);
  }
  else
  {
    ++L->FreeMisses;
    ((void (__fastcall *)(__int64))L->FreeEx)(v7);
  }
  if ( AccessState == (PACCESS_STATE)v46 )
  {
    SepDeleteAccessState((__int64)AccessState);
    SeReleaseSubjectContext(&AccessState->SubjectSecurityContext);
  }
  return (unsigned int)v28;
}
