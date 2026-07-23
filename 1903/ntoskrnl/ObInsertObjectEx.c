/*
 * XREFs of ObInsertObjectEx @ 0x1405D95A0
 * Callers:
 *     WmipCreateGuidObject @ 0x1405C0C08 (WmipCreateGuidObject.c)
 *     SeCopyClientToken @ 0x1405C3DA8 (SeCopyClientToken.c)
 *     EtwpAddUmRegEntry @ 0x1405D44B0 (EtwpAddUmRegEntry.c)
 *     MiCreateSectionCommon @ 0x1405D6500 (MiCreateSectionCommon.c)
 *     NtCreateSemaphore @ 0x1405D7D50 (NtCreateSemaphore.c)
 *     NtCreateEvent @ 0x1405D7F30 (NtCreateEvent.c)
 *     ObInsertObject @ 0x1405D9570 (ObInsertObject.c)
 *     SepCreateClientSecurityEx @ 0x1405DE000 (SepCreateClientSecurityEx.c)
 *     PspInsertThread @ 0x1405E8D54 (PspInsertThread.c)
 *     MmCreateSpecialImageSection @ 0x140618DD8 (MmCreateSpecialImageSection.c)
 *     NtFilterToken @ 0x14061ECB0 (NtFilterToken.c)
 *     AlpcpAcceptConnectPort @ 0x140648064 (AlpcpAcceptConnectPort.c)
 *     AlpcpCreateClientPort @ 0x140648DD8 (AlpcpCreateClientPort.c)
 *     PspInsertProcess @ 0x1406724A4 (PspInsertProcess.c)
 *     NtCreatePrivateNamespace @ 0x140680690 (NtCreatePrivateNamespace.c)
 *     IoCreateDevice @ 0x140681110 (IoCreateDevice.c)
 *     IoCreateStreamFileObjectEx2 @ 0x1406822C0 (IoCreateStreamFileObjectEx2.c)
 *     NtCreateTimer @ 0x1406842D0 (NtCreateTimer.c)
 *     NtCreateTimer2 @ 0x14068DC30 (NtCreateTimer2.c)
 *     PopPowerRequestCreateInfo @ 0x14069DD50 (PopPowerRequestCreateInfo.c)
 *     NtCreateMutant @ 0x1406B6E80 (NtCreateMutant.c)
 *     NtCreateWaitCompletionPacket @ 0x1406C57D0 (NtCreateWaitCompletionPacket.c)
 *     EtwpCreateUmReplyObject @ 0x1406CD3F4 (EtwpCreateUmReplyObject.c)
 *     NtCreateIoCompletion @ 0x1406CD5C0 (NtCreateIoCompletion.c)
 *     ObCreateSymbolicLink @ 0x1406D92D8 (ObCreateSymbolicLink.c)
 *     AlpcpCreateConnectionPort @ 0x1406D9518 (AlpcpCreateConnectionPort.c)
 *     NtAllocateReserveObject @ 0x1406DEEF0 (NtAllocateReserveObject.c)
 *     NtCreateRegistryTransaction @ 0x1406E90C0 (NtCreateRegistryTransaction.c)
 *     ExCreateCallback @ 0x1406E9C40 (ExCreateCallback.c)
 *     PspCreateActivityReference @ 0x1406F7910 (PspCreateActivityReference.c)
 *     MiSessionObjectCreate @ 0x14073FCC0 (MiSessionObjectCreate.c)
 *     IoCreateDriver @ 0x140754B70 (IoCreateDriver.c)
 *     SepInitializationPhase1 @ 0x140758140 (SepInitializationPhase1.c)
 *     SeFilterToken @ 0x140769320 (SeFilterToken.c)
 *     NtCreateKeyedEvent @ 0x14077CA10 (NtCreateKeyedEvent.c)
 *     PspAllocatePartition @ 0x1407830A0 (PspAllocatePartition.c)
 *     NtCreateDebugObject @ 0x140849330 (NtCreateDebugObject.c)
 *     IoCreateController @ 0x140856250 (IoCreateController.c)
 *     TtmiCreateTerminal @ 0x1408BC32C (TtmiCreateTerminal.c)
 *     TtmiCreateEventQueue @ 0x1408C0044 (TtmiCreateEventQueue.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x1408DA450 (SepCopyAnonymousTokenAndSetSilo.c)
 *     SeGetLogonSessionToken @ 0x1408E04F0 (SeGetLogonSessionToken.c)
 *     EtwpRegisterPrivateSession @ 0x1408FCEB4 (EtwpRegisterPrivateSession.c)
 * Callees:
 *     SeAssignSecurityEx2 @ 0x14000AB60 (SeAssignSecurityEx2.c)
 *     SeComputeAutoInheritByObjectTypeEx @ 0x14000ACB0 (SeComputeAutoInheritByObjectTypeEx.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x14003AE60 (SepCreateAccessStateFromSubjectContext.c)
 *     ObFastReferenceObject @ 0x14003AF90 (ObFastReferenceObject.c)
 *     SepDeleteAccessState @ 0x14003B0B0 (SepDeleteAccessState.c)
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14003E330 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x14003F240 (ExReleasePushLockEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ObFastReferenceObjectLocked @ 0x14007F850 (ObFastReferenceObjectLocked.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401CBA30 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ObpAdjustCreatorAccessState @ 0x1405C5C18 (ObpAdjustCreatorAccessState.c)
 *     ObpChargeQuotaForObject @ 0x1405D693C (ObpChargeQuotaForObject.c)
 *     RtlValidSecurityDescriptor @ 0x1405D6ED0 (RtlValidSecurityDescriptor.c)
 *     SeReleaseSecurityDescriptor @ 0x1405DDAA0 (SeReleaseSecurityDescriptor.c)
 *     SeReleaseSubjectContext @ 0x1405F3180 (SeReleaseSubjectContext.c)
 *     ObpCreateHandle @ 0x1405F3220 (ObpCreateHandle.c)
 *     SeDeassignSecurity @ 0x1406D1F90 (SeDeassignSecurity.c)
 *     SeObjectCreateSaclAccessBits @ 0x1406D4408 (SeObjectCreateSaclAccessBits.c)
 *     ObpCreateSymbolicLinkName @ 0x1406E5900 (ObpCreateSymbolicLinkName.c)
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
  _SLIST_ENTRY *v9; // rbx
  char *v10; // r12
  __int64 v11; // r8
  unsigned __int64 v12; // r9
  char *v13; // rdx
  unsigned __int64 v14; // rcx
  POBJECT_TYPE v15; // rdi
  KPROCESSOR_MODE PreviousMode; // r14
  unsigned int Handle; // edi
  _SLIST_ENTRY *Next; // rcx
  struct _KPRCB *CurrentPrcb; // rdx
  _GENERAL_LOOKASIDE *P; // rcx
  struct _KTHREAD *CurrentThread; // rcx
  ULONG_PTR Process; // rdx
  void *v24; // rax
  ULONG_PTR v25; // rcx
  _SLIST_ENTRY *v26; // rax
  char *v27; // rcx
  PSECURITY_DESCRIPTOR v28; // rdx
  int v29; // r12d
  _SLIST_ENTRY *v30; // rcx
  _SLIST_ENTRY *v31; // rax
  int v32; // eax
  int v33; // r14d
  __int64 v34; // r8
  __int64 v35; // r9
  _SLIST_ENTRY *v36; // rcx
  struct _KPRCB *v37; // rdx
  _GENERAL_LOOKASIDE *L; // rcx
  struct _KTHREAD *v39; // rax
  char *v40; // rax
  char *v41; // rcx
  ULONG_PTR v42; // rcx
  unsigned __int64 v43; // rax
  ULONG_PTR v44; // rcx
  int v45; // [rsp+30h] [rbp-D0h]
  int v46; // [rsp+40h] [rbp-C0h]
  __int64 v47; // [rsp+48h] [rbp-B8h]
  __int64 v48; // [rsp+48h] [rbp-B8h]
  struct _KTHREAD *v49; // [rsp+68h] [rbp-98h]
  int v50; // [rsp+68h] [rbp-98h]
  _QWORD *SecurityDescriptor; // [rsp+70h] [rbp-90h]
  _SLIST_ENTRY *SecurityDescriptora; // [rsp+70h] [rbp-90h]
  struct _KTHREAD *SecurityDescriptorb; // [rsp+70h] [rbp-90h]
  PSECURITY_DESCRIPTOR SecurityDescriptorc; // [rsp+70h] [rbp-90h]
  ULONG_PTR v57; // [rsp+80h] [rbp-80h]
  signed __int64 *v58; // [rsp+80h] [rbp-80h]
  void *v59; // [rsp+88h] [rbp-78h]
  struct _KTHREAD *v60; // [rsp+88h] [rbp-78h]
  int v61; // [rsp+90h] [rbp-70h] BYREF
  ULONG Index[2]; // [rsp+98h] [rbp-68h] BYREF
  PSECURITY_DESCRIPTOR v63; // [rsp+A0h] [rbp-60h] BYREF
  char *v64; // [rsp+A8h] [rbp-58h]
  ULONG_PTR BugCheckParameter2; // [rsp+B0h] [rbp-50h]
  __int64 v66; // [rsp+B8h] [rbp-48h]
  __int128 v67; // [rsp+C0h] [rbp-40h] BYREF
  ULONG_PTR v68; // [rsp+D0h] [rbp-30h]
  __int64 v69; // [rsp+D8h] [rbp-28h]
  _QWORD v70[20]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v71[28]; // [rsp+180h] [rbp+80h] BYREF

  v66 = a6;
  memset(v71, 0, sizeof(v71));
  memset(v70, 0, sizeof(v70));
  v9 = (_SLIST_ENTRY *)*(Object - 2);
  v10 = (char *)(Object - 6);
  v11 = 0LL;
  v12 = 0x140000000uLL;
  v13 = 0LL;
  v14 = *((unsigned __int8 *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8);
  v64 = 0LL;
  v15 = (POBJECT_TYPE)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v14];
  if ( (*((_BYTE *)Object - 22) & 2) != 0 )
  {
    v40 = (char *)ObpInfoMaskToOffset[*((_BYTE *)Object - 22) & 3];
    v41 = (char *)(v10 - v40);
    if ( v10 != v40 )
    {
      v13 = v41 + 8;
      v64 = v41 + 8;
    }
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( (v15->TypeInfo.ObjectTypeFlags & 8) == 0 && !v13 && !v9[2].Next )
  {
    *((_QWORD *)v10 + 4) = 0LL;
    if ( a7 )
    {
      v47 = v66;
      *a7 = 0LL;
      Handle = ObpCreateHandle(0LL, Object, a3, 0LL, a4 + 1, v9->Next, PreviousMode, 0LL, 0, v47, a7);
    }
    else
    {
      Handle = 0;
    }
    Next = v9[2].Next;
    if ( Next )
    {
      LOBYTE(v11) = 1;
      SeReleaseSecurityDescriptor(Next, LOBYTE(v9[1].Next), v11, v12);
      v9[2].Next = 0LL;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    P = CurrentPrcb->PPLookasideList[4].P;
    ++P->TotalFrees;
    if ( LOWORD(P->ListHead.Alignment) < P->Depth
      || (++P->FreeMisses,
          P = CurrentPrcb->PPLookasideList[4].L,
          ++P->TotalFrees,
          LOWORD(P->ListHead.Alignment) < P->Depth) )
    {
      RtlpInterlockedPushEntrySList(&P->ListHead, v9);
    }
    else
    {
      ++P->FreeMisses;
      ((void (__fastcall *)(_SLIST_ENTRY *))P->FreeEx)(v9);
    }
    ObfDereferenceObject(Object);
    return Handle;
  }
  if ( !AccessState )
  {
    AccessState = (PACCESS_STATE)v70;
    CurrentThread = KeGetCurrentThread();
    v49 = CurrentThread;
    *((_QWORD *)&v67 + 1) = 0LL;
    Process = (ULONG_PTR)CurrentThread->ApcState.Process;
    v57 = Process;
    v69 = *(_QWORD *)(Process + 744);
    if ( CurrentThread )
    {
      if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
      {
        SecurityDescriptorb = KeGetCurrentThread();
        --SecurityDescriptorb->KernelApcDisable;
        BugCheckParameter2 = (ULONG_PTR)&CurrentThread[1].WaitBlockList;
        ExAcquirePushLockSharedEx((ULONG_PTR)&CurrentThread[1].WaitBlockList, 0LL);
        if ( (*(_DWORD *)(&v49[1].SwapListEntry + 1) & 8) != 0 )
        {
          v59 = (void *)(*(_QWORD *)((char *)&v49[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
          ObfReferenceObject(v59);
          DWORD2(v67) = *((_DWORD *)&v49[1].0 + 1) & 3;
        }
        else
        {
          v59 = 0LL;
        }
        v42 = BugCheckParameter2;
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
        {
          ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
          v42 = BugCheckParameter2;
        }
        KeAbPostRelease(v42);
        KeLeaveCriticalRegionThread((__int64)SecurityDescriptorb);
        Process = v57;
        v24 = v59;
      }
      else
      {
        v24 = 0LL;
      }
      *(_QWORD *)&v67 = v24;
    }
    else
    {
      *(_QWORD *)&v67 = 0LL;
    }
    SecurityDescriptor = (_QWORD *)(Process + 864);
    v25 = ObFastReferenceObject((signed __int64 *)(Process + 864));
    if ( !v25 )
    {
      v60 = KeGetCurrentThread();
      --v60->KernelApcDisable;
      v58 = (signed __int64 *)(v57 + 736);
      ExAcquirePushLockSharedEx((ULONG_PTR)v58, 0LL);
      v43 = ObFastReferenceObjectLocked(SecurityDescriptor);
      v44 = (ULONG_PTR)v58;
      SecurityDescriptorc = (PSECURITY_DESCRIPTOR)v43;
      if ( _InterlockedCompareExchange64(v58, 0LL, 17LL) != 17 )
      {
        ExfReleasePushLockShared(v58);
        v44 = (ULONG_PTR)v58;
      }
      KeAbPostRelease(v44);
      KeLeaveCriticalRegionThread((__int64)v60);
      v25 = (ULONG_PTR)SecurityDescriptorc;
    }
    v68 = v25;
    if ( *(_DWORD *)((char *)&NlsMbCodePageTag + 3) )
    {
      if ( v25 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v25 + 1144) + 284LL));
        if ( v25 == SepTokenLeakToken )
          __debugbreak();
      }
      if ( (_QWORD)v67 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v67 + 1144) + 284LL));
        if ( (_QWORD)v67 == SepTokenLeakToken )
          __debugbreak();
      }
    }
    v50 = SepCreateAccessStateFromSubjectContext(&v67, v70, v71, a3, &v15->TypeInfo.GenericMapping);
    if ( v50 < 0 )
    {
      ObfDereferenceObject(Object);
      return (unsigned int)v50;
    }
  }
  v26 = v9[2].Next;
  SecurityDescriptora = v26;
  AccessState->SecurityDescriptor = v26;
  if ( v26 )
  {
    if ( !RtlValidSecurityDescriptor(v26) )
    {
      ObfDereferenceObject(Object);
      if ( AccessState == (PACCESS_STATE)v70 )
      {
        SepDeleteAccessState((__int64)AccessState);
        SeReleaseSubjectContext(&AccessState->SubjectSecurityContext);
      }
      return 3221225593LL;
    }
    if ( (BYTE2(SecurityDescriptora->Next) & 0x10) != 0 && (AccessState->PreviouslyGrantedAccess & 0x1000000) == 0 )
      AccessState->RemainingDesiredAccess |= SeObjectCreateSaclAccessBits(SecurityDescriptora);
  }
  v27 = v64;
  if ( v64 || (v15->TypeInfo.ObjectTypeFlags & 8) == 0 && !v9[2].Next )
    goto LABEL_30;
  v28 = AccessState->SecurityDescriptor;
  Index[1] = 0;
  v63 = 0LL;
  Index[0] = 8;
  v29 = SeComputeAutoInheritByObjectTypeEx((__int64)v15, (__int64)v28, 0LL, &v61, Index);
  if ( v29 >= 0 )
  {
    v29 = SeAssignSecurityEx2(
            0,
            (int)AccessState->SecurityDescriptor,
            (int)&v63,
            0LL,
            v15 == ObpDirectoryObjectType,
            (16 * (a5 & 1)) | (unsigned int)v61,
            Index,
            (__int64)&AccessState->SubjectSecurityContext,
            (__int64)&v15->TypeInfo.GenericMapping);
    if ( v29 >= 0 )
    {
      LOBYTE(v46) = KeGetCurrentThread()->PreviousMode;
      v29 = v15->TypeInfo.SecurityProcedure(
              Object,
              AssignSecurityDescriptor,
              0LL,
              v63,
              0LL,
              0LL,
              PagedPool,
              &v15->TypeInfo.GenericMapping,
              v46);
      if ( v29 >= 0 )
      {
        v30 = v9[2].Next;
        if ( LOBYTE(v9[1].Next) <= 1u && v30 )
          ExFreePoolWithTag(v30, 0);
        v10 = (char *)(Object - 6);
        v27 = v64;
        v9[2].Next = 0LL;
        AccessState->SecurityDescriptor = 0LL;
LABEL_30:
        *((_QWORD *)v10 + 4) = 0LL;
        if ( a7 )
        {
          v31 = 0LL;
          if ( v27 )
            v31 = v9;
          v48 = v66;
          *a7 = 0LL;
          LOBYTE(v45) = PreviousMode;
          v32 = ObpCreateHandle(0LL, Object, 0LL, AccessState, a4 + 1, v9->Next, v45, v31, 0, v48, a7);
          v33 = v32;
          if ( v32 >= 0 && v15 == ObpSymbolicLinkObjectType && v32 != 0x40000000 )
            ObpCreateSymbolicLinkName(Object);
        }
        else
        {
          if ( AccessState == (PACCESS_STATE)v70 )
            goto LABEL_91;
          if ( ((__int64)v9->Next & 0x400) != 0 )
            PreviousMode = 1;
          v33 = ObpAdjustCreatorAccessState(AccessState, PreviousMode, (__int64)v15, (__int64)Object);
          if ( v33 >= 0 )
          {
LABEL_91:
            v39 = KeGetCurrentThread();
            --v39->KernelApcDisable;
            ExAcquirePushLockExclusiveEx((ULONG_PTR)(v10 + 16), 0LL);
            v33 = ObpChargeQuotaForObject((__int64)v10, (__int64)KeGetCurrentThread()->ApcState.Process);
            ExReleasePushLockEx((ULONG_PTR)(v10 + 16), 0LL);
            KeLeaveCriticalRegion();
            if ( v33 >= 0 )
              goto LABEL_36;
          }
        }
        ObfDereferenceObject(Object);
LABEL_36:
        v36 = v9[2].Next;
        if ( v36 )
        {
          LOBYTE(v34) = 1;
          SeReleaseSecurityDescriptor(v36, LOBYTE(v9[1].Next), v34, v35);
          v9[2].Next = 0LL;
        }
        v37 = KeGetCurrentPrcb();
        L = v37->PPLookasideList[4].P;
        ++L->TotalFrees;
        if ( LOWORD(L->ListHead.Alignment) < L->Depth
          || (++L->FreeMisses, L = v37->PPLookasideList[4].L, ++L->TotalFrees, LOWORD(L->ListHead.Alignment) < L->Depth) )
        {
          RtlpInterlockedPushEntrySList(&L->ListHead, v9);
        }
        else
        {
          ++L->FreeMisses;
          ((void (__fastcall *)(_SLIST_ENTRY *))L->FreeEx)(v9);
        }
        if ( AccessState == (PACCESS_STATE)v70 )
        {
          SepDeleteAccessState((__int64)AccessState);
          SeReleaseSubjectContext(&AccessState->SubjectSecurityContext);
        }
        return (unsigned int)v33;
      }
      SeDeassignSecurity(&v63);
    }
  }
  ObfDereferenceObject(Object);
  if ( AccessState == (PACCESS_STATE)v70 )
  {
    SepDeleteAccessState((__int64)AccessState);
    SeReleaseSubjectContext(&AccessState->SubjectSecurityContext);
  }
  return (unsigned int)v29;
}
