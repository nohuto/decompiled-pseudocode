/*
 * XREFs of ObInsertObjectEx @ 0x1405D9D60
 * Callers:
 *     WmipCreateGuidObject @ 0x1405C10D8 (WmipCreateGuidObject.c)
 *     SeCopyClientToken @ 0x1405C4278 (SeCopyClientToken.c)
 *     EtwpAddUmRegEntry @ 0x1405D49B0 (EtwpAddUmRegEntry.c)
 *     MiCreateSectionCommon @ 0x1405D6CC0 (MiCreateSectionCommon.c)
 *     NtCreateSemaphore @ 0x1405D8510 (NtCreateSemaphore.c)
 *     NtCreateEvent @ 0x1405D86F0 (NtCreateEvent.c)
 *     ObInsertObject @ 0x1405D9D30 (ObInsertObject.c)
 *     SepCreateClientSecurityEx @ 0x1405DE7A0 (SepCreateClientSecurityEx.c)
 *     PspInsertThread @ 0x1405E9524 (PspInsertThread.c)
 *     MmCreateSpecialImageSection @ 0x14061A8E8 (MmCreateSpecialImageSection.c)
 *     NtFilterToken @ 0x1406207D0 (NtFilterToken.c)
 *     NtCreateTimer @ 0x14064A240 (NtCreateTimer.c)
 *     AlpcpCreateClientPort @ 0x14065CA48 (AlpcpCreateClientPort.c)
 *     PspInsertProcess @ 0x140677BB8 (PspInsertProcess.c)
 *     NtCreateTimer2 @ 0x1406811A0 (NtCreateTimer2.c)
 *     NtCreatePrivateNamespace @ 0x14069EBF0 (NtCreatePrivateNamespace.c)
 *     IoCreateDevice @ 0x14069F670 (IoCreateDevice.c)
 *     IoCreateStreamFileObjectEx2 @ 0x1406A0820 (IoCreateStreamFileObjectEx2.c)
 *     NtCreateMutant @ 0x1406AA680 (NtCreateMutant.c)
 *     PopPowerRequestCreateInfo @ 0x1406B3BE0 (PopPowerRequestCreateInfo.c)
 *     NtCreateWaitCompletionPacket @ 0x1406C4990 (NtCreateWaitCompletionPacket.c)
 *     EtwpCreateUmReplyObject @ 0x1406CC224 (EtwpCreateUmReplyObject.c)
 *     NtCreateIoCompletion @ 0x1406CC3F0 (NtCreateIoCompletion.c)
 *     ObCreateSymbolicLink @ 0x1406D8F48 (ObCreateSymbolicLink.c)
 *     AlpcpCreateConnectionPort @ 0x1406D9188 (AlpcpCreateConnectionPort.c)
 *     NtAllocateReserveObject @ 0x1406E0200 (NtAllocateReserveObject.c)
 *     NtCreateRegistryTransaction @ 0x1406EA4E0 (NtCreateRegistryTransaction.c)
 *     ExCreateCallback @ 0x1406EAE20 (ExCreateCallback.c)
 *     PspCreateActivityReference @ 0x1406F96D0 (PspCreateActivityReference.c)
 *     MiSessionObjectCreate @ 0x140741BC0 (MiSessionObjectCreate.c)
 *     IoCreateDriver @ 0x140755600 (IoCreateDriver.c)
 *     SeFilterToken @ 0x140757FB0 (SeFilterToken.c)
 *     SepInitializationPhase1 @ 0x14075C9D4 (SepInitializationPhase1.c)
 *     NtCreateKeyedEvent @ 0x14077F330 (NtCreateKeyedEvent.c)
 *     PspAllocatePartition @ 0x140785400 (PspAllocatePartition.c)
 *     NtCreateDebugObject @ 0x140848A30 (NtCreateDebugObject.c)
 *     IoCreateController @ 0x140855950 (IoCreateController.c)
 *     TtmiCreateTerminal @ 0x1408BBBFC (TtmiCreateTerminal.c)
 *     TtmiCreateEventQueue @ 0x1408BF914 (TtmiCreateEventQueue.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x1408D9D50 (SepCopyAnonymousTokenAndSetSilo.c)
 *     SeGetLogonSessionToken @ 0x1408DFDF0 (SeGetLogonSessionToken.c)
 *     EtwpRegisterPrivateSession @ 0x1408FC894 (EtwpRegisterPrivateSession.c)
 * Callees:
 *     SeAssignSecurityEx2 @ 0x14000ABF0 (SeAssignSecurityEx2.c)
 *     SeComputeAutoInheritByObjectTypeEx @ 0x14000AD40 (SeComputeAutoInheritByObjectTypeEx.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x14003ABA0 (SepCreateAccessStateFromSubjectContext.c)
 *     ObFastReferenceObject @ 0x14003ACD0 (ObFastReferenceObject.c)
 *     SepDeleteAccessState @ 0x14003ADF0 (SepDeleteAccessState.c)
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14003E070 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x14003EF80 (ExReleasePushLockEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ObFastReferenceObjectLocked @ 0x14007FC50 (ObFastReferenceObjectLocked.c)
 *     ExfReleasePushLockShared @ 0x1400C6220 (ExfReleasePushLockShared.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401CC5B0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ObpAdjustCreatorAccessState @ 0x1405C6118 (ObpAdjustCreatorAccessState.c)
 *     ObpChargeQuotaForObject @ 0x1405D70FC (ObpChargeQuotaForObject.c)
 *     RtlValidSecurityDescriptor @ 0x1405D7690 (RtlValidSecurityDescriptor.c)
 *     SeReleaseSecurityDescriptor @ 0x1405DE240 (SeReleaseSecurityDescriptor.c)
 *     SeReleaseSubjectContext @ 0x1405F3AE0 (SeReleaseSubjectContext.c)
 *     ObpCreateHandle @ 0x1405F3B50 (ObpCreateHandle.c)
 *     SeDeassignSecurity @ 0x1406D1200 (SeDeassignSecurity.c)
 *     SeObjectCreateSaclAccessBits @ 0x1406D3AF0 (SeObjectCreateSaclAccessBits.c)
 */

__int64 __fastcall ObInsertObjectEx(
        _QWORD *Object,
        PACCESS_STATE AccessState,
        ACCESS_MASK a3,
        int a4,
        char a5,
        __int64 a6,
        _QWORD *a7)
{
  _QWORD *v8; // r12
  _SLIST_ENTRY *v11; // rsi
  char *v12; // r8
  unsigned __int64 v13; // rcx
  void *v14; // rbx
  POBJECT_TYPE v15; // r13
  _BYTE *v16; // rax
  char *v17; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v19; // r9
  _SLIST_ENTRY *Next; // rcx
  struct _KPRCB *CurrentPrcb; // rdx
  _GENERAL_LOOKASIDE *P; // rcx
  struct _KTHREAD *v24; // r15
  _KPROCESS *Process; // rcx
  unsigned __int64 *v26; // r12
  ULONG_PTR v27; // rbx
  signed __int64 *p_Lock; // r15
  _SLIST_ENTRY *v29; // rbx
  char *v30; // rcx
  PSECURITY_DESCRIPTOR v31; // rdx
  int v32; // ebx
  _SLIST_ENTRY *v33; // rcx
  _SLIST_ENTRY *v34; // rax
  int Handle; // r15d
  KPROCESSOR_MODE v36; // al
  struct _KTHREAD *v37; // rax
  __int64 v38; // r8
  __int64 v39; // r9
  _SLIST_ENTRY *v40; // rcx
  struct _KPRCB *v41; // rdx
  _GENERAL_LOOKASIDE *L; // rcx
  int v43; // [rsp+30h] [rbp-D0h]
  int v44; // [rsp+40h] [rbp-C0h]
  __int64 v45; // [rsp+48h] [rbp-B8h]
  __int64 v46; // [rsp+48h] [rbp-B8h]
  KPROCESSOR_MODE PreviousMode; // [rsp+60h] [rbp-A0h]
  int v50; // [rsp+6Ch] [rbp-94h] BYREF
  ULONG Index[2]; // [rsp+70h] [rbp-90h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+78h] [rbp-88h] BYREF
  char *v53; // [rsp+80h] [rbp-80h]
  struct _KTHREAD *v54; // [rsp+88h] [rbp-78h]
  _KPROCESS *v55; // [rsp+90h] [rbp-70h]
  __int64 v56; // [rsp+98h] [rbp-68h]
  __int128 v57; // [rsp+A0h] [rbp-60h] BYREF
  ULONG_PTR v58; // [rsp+B0h] [rbp-50h]
  struct _LIST_ENTRY *Flink; // [rsp+B8h] [rbp-48h]
  _QWORD *v60; // [rsp+C0h] [rbp-40h]
  _QWORD v61[20]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v62[28]; // [rsp+170h] [rbp+70h] BYREF

  v8 = a7;
  v56 = a6;
  v60 = a7;
  memset(v62, 0, sizeof(v62));
  memset(v61, 0, sizeof(v61));
  v11 = (_SLIST_ENTRY *)*(Object - 2);
  v12 = 0LL;
  v13 = *((unsigned __int8 *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8);
  v53 = 0LL;
  v14 = 0LL;
  v15 = (POBJECT_TYPE)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v13];
  if ( (*((_BYTE *)Object - 22) & 2) != 0 )
  {
    v16 = (_BYTE *)ObpInfoMaskToOffset[*((_BYTE *)Object - 22) & 3];
    v17 = (char *)((char *)(Object - 6) - v16);
    if ( Object - 6 != (_QWORD *)v16 )
    {
      v12 = v17 + 8;
      v53 = v17 + 8;
    }
  }
  CurrentThread = KeGetCurrentThread();
  v19 = (unsigned __int8)CurrentThread->$24A664F1AFBF48775CBEA2BECCC9B900::gap0[10];
  PreviousMode = CurrentThread->PreviousMode;
  if ( (v15->TypeInfo.ObjectTypeFlags & 8) == 0 && !v12 && !v11[2].Next )
  {
    *(Object - 2) = 0LL;
    if ( a7 )
    {
      v45 = v56;
      *a7 = 0LL;
      LODWORD(v14) = ObpCreateHandle(0LL, Object, a3, 0LL, a4 + 1, v11->Next, (_BYTE)v19, 0LL, 0, v45, a7);
    }
    Next = v11[2].Next;
    if ( Next )
    {
      LOBYTE(v12) = 1;
      SeReleaseSecurityDescriptor(Next, LOBYTE(v11[1].Next), v12, v19);
      v11[2].Next = 0LL;
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
        ((void (__fastcall *)(_SLIST_ENTRY *))P->FreeEx)(v11);
        ObfDereferenceObject(Object);
        return (unsigned int)v14;
      }
    }
    RtlpInterlockedPushEntrySList(&P->ListHead, v11);
    goto LABEL_15;
  }
  if ( !AccessState )
  {
    AccessState = (PACCESS_STATE)v61;
    v24 = KeGetCurrentThread();
    *((_QWORD *)&v57 + 1) = 0LL;
    Process = v24->ApcState.Process;
    v55 = Process;
    Flink = Process[1].Header.WaitListHead.Flink;
    if ( v24 )
    {
      if ( (*(_DWORD *)(&v24[1].SwapListEntry + 1) & 8) != 0 )
      {
        v54 = KeGetCurrentThread();
        --v54->KernelApcDisable;
        ExAcquirePushLockSharedEx((ULONG_PTR)&v24[1].WaitBlockList, 0LL);
        if ( (*(_DWORD *)(&v24[1].SwapListEntry + 1) & 8) != 0 )
        {
          v14 = (void *)(*(_QWORD *)((char *)&v24[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
          ObfReferenceObject(v14);
          DWORD2(v57) = *((_DWORD *)&v24[1].0 + 1) & 3;
        }
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)&v24[1].WaitBlockList, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)&v24[1].WaitBlockList);
        KeAbPostRelease((ULONG_PTR)&v24[1].WaitBlockList);
        KeLeaveCriticalRegionThread((__int64)v54);
        Process = v55;
      }
      *(_QWORD *)&v57 = v14;
    }
    else
    {
      *(_QWORD *)&v57 = 0LL;
    }
    v26 = &Process[1].Affinity.Bitmap[5];
    v27 = ObFastReferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5]);
    if ( !v27 )
    {
      v54 = KeGetCurrentThread();
      --v54->KernelApcDisable;
      p_Lock = (signed __int64 *)&v55[1].Header.Lock;
      ExAcquirePushLockSharedEx((ULONG_PTR)&v55[1], 0LL);
      v27 = ObFastReferenceObjectLocked(v26);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&v55[1].Header.Lock, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(p_Lock);
      KeAbPostRelease((ULONG_PTR)p_Lock);
      KeLeaveCriticalRegionThread((__int64)v54);
    }
    v58 = v27;
    if ( *(_DWORD *)((char *)&NlsMbCodePageTag + 3) )
    {
      if ( v27 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v27 + 1144) + 284LL));
        if ( v27 == SepTokenLeakToken )
          __debugbreak();
      }
      if ( (_QWORD)v57 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v57 + 1144) + 284LL));
        if ( (_QWORD)v57 == SepTokenLeakToken )
          __debugbreak();
      }
    }
    LODWORD(v14) = SepCreateAccessStateFromSubjectContext(&v57, v61, v62, a3, &v15->TypeInfo.GenericMapping);
    if ( (int)v14 < 0 )
    {
LABEL_15:
      ObfDereferenceObject(Object);
      return (unsigned int)v14;
    }
    v8 = v60;
  }
  v29 = v11[2].Next;
  AccessState->SecurityDescriptor = v29;
  if ( !v29 )
  {
LABEL_44:
    v30 = v53;
    if ( !v53 && ((v15->TypeInfo.ObjectTypeFlags & 8) != 0 || (char *)v11[2].Next != v53) )
    {
      v31 = AccessState->SecurityDescriptor;
      Index[1] = 0;
      SecurityDescriptor = 0LL;
      Index[0] = 8;
      v32 = SeComputeAutoInheritByObjectTypeEx((__int64)v15, (__int64)v31, 0LL, &v50, Index);
      if ( v32 < 0 )
        goto LABEL_51;
      v32 = SeAssignSecurityEx2(
              0,
              (int)AccessState->SecurityDescriptor,
              (int)&SecurityDescriptor,
              0LL,
              v15 == ObpDirectoryObjectType,
              (16 * (a5 & 1)) | (unsigned int)v50,
              Index,
              (__int64)&AccessState->SubjectSecurityContext,
              (__int64)&v15->TypeInfo.GenericMapping);
      if ( v32 < 0 )
        goto LABEL_51;
      LOBYTE(v44) = KeGetCurrentThread()->PreviousMode;
      v32 = v15->TypeInfo.SecurityProcedure(
              Object,
              AssignSecurityDescriptor,
              0LL,
              SecurityDescriptor,
              0LL,
              0LL,
              PagedPool,
              &v15->TypeInfo.GenericMapping,
              v44);
      if ( v32 < 0 )
      {
        SeDeassignSecurity(&SecurityDescriptor);
LABEL_51:
        ObfDereferenceObject(Object);
        if ( AccessState == (PACCESS_STATE)v61 )
        {
          SepDeleteAccessState((__int64)AccessState);
          SeReleaseSubjectContext(&AccessState->SubjectSecurityContext);
        }
        return (unsigned int)v32;
      }
      v33 = v11[2].Next;
      if ( LOBYTE(v11[1].Next) <= 1u && v33 )
        ExFreePoolWithTag(v33, 0);
      v30 = v53;
      v11[2].Next = 0LL;
      AccessState->SecurityDescriptor = 0LL;
    }
    *(Object - 2) = 0LL;
    if ( v8 )
    {
      v34 = 0LL;
      if ( v30 )
        v34 = v11;
      v46 = v56;
      LOBYTE(v43) = PreviousMode;
      *v8 = 0LL;
      Handle = ObpCreateHandle(0LL, Object, 0LL, AccessState, a4 + 1, v11->Next, v43, v34, 0, v46, v8);
    }
    else
    {
      if ( AccessState == (PACCESS_STATE)v61 )
        goto LABEL_82;
      v36 = PreviousMode;
      if ( ((__int64)v11->Next & 0x400) != 0 )
        v36 = 1;
      Handle = ObpAdjustCreatorAccessState(AccessState, v36, (__int64)v15, (__int64)Object);
      if ( Handle >= 0 )
      {
LABEL_82:
        v37 = KeGetCurrentThread();
        --v37->KernelApcDisable;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)(Object - 4), 0LL);
        Handle = ObpChargeQuotaForObject((__int64)(Object - 6), (__int64)KeGetCurrentThread()->ApcState.Process);
        ExReleasePushLockEx((ULONG_PTR)(Object - 4), 0LL);
        KeLeaveCriticalRegion();
        if ( Handle >= 0 )
          goto LABEL_71;
      }
    }
    ObfDereferenceObject(Object);
LABEL_71:
    v40 = v11[2].Next;
    if ( v40 )
    {
      LOBYTE(v38) = 1;
      SeReleaseSecurityDescriptor(v40, LOBYTE(v11[1].Next), v38, v39);
      v11[2].Next = 0LL;
    }
    v41 = KeGetCurrentPrcb();
    L = v41->PPLookasideList[4].P;
    ++L->TotalFrees;
    if ( LOWORD(L->ListHead.Alignment) < L->Depth
      || (++L->FreeMisses, L = v41->PPLookasideList[4].L, ++L->TotalFrees, LOWORD(L->ListHead.Alignment) < L->Depth) )
    {
      RtlpInterlockedPushEntrySList(&L->ListHead, v11);
    }
    else
    {
      ++L->FreeMisses;
      ((void (__fastcall *)(_SLIST_ENTRY *))L->FreeEx)(v11);
    }
    if ( AccessState == (PACCESS_STATE)v61 )
    {
      SepDeleteAccessState((__int64)AccessState);
      SeReleaseSubjectContext(&AccessState->SubjectSecurityContext);
    }
    return (unsigned int)Handle;
  }
  if ( RtlValidSecurityDescriptor(v29) )
  {
    if ( (BYTE2(v29->Next) & 0x10) != 0 && (AccessState->PreviouslyGrantedAccess & 0x1000000) == 0 )
      AccessState->RemainingDesiredAccess |= SeObjectCreateSaclAccessBits(v29);
    goto LABEL_44;
  }
  ObfDereferenceObject(Object);
  if ( AccessState == (PACCESS_STATE)v61 )
  {
    SepDeleteAccessState((__int64)AccessState);
    SeReleaseSubjectContext(&AccessState->SubjectSecurityContext);
  }
  return 3221225593LL;
}
