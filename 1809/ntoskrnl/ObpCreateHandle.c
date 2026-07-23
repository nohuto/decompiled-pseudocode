/*
 * XREFs of ObpCreateHandle @ 0x1405E22B0
 * Callers:
 *     ObOpenObjectByNameEx @ 0x1405E3E30 (ObOpenObjectByNameEx.c)
 *     ObInsertObjectEx @ 0x14062E0A0 (ObInsertObjectEx.c)
 *     ObOpenObjectByPointer @ 0x1406480E0 (ObOpenObjectByPointer.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140013000 (CmSiFreeMemory.c)
 *     PsGetCurrentThreadProcessId @ 0x14004D240 (PsGetCurrentThreadProcessId.c)
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     SeComputeCreatorDeniedRights @ 0x14004D520 (SeComputeCreatorDeniedRights.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140050860 (ExAcquireResourceSharedLite.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x140051600 (KeLeaveCriticalRegionThread.c)
 *     SeAccessCheck @ 0x140051640 (SeAccessCheck.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     RtlEqualSid @ 0x1400A7D30 (RtlEqualSid.c)
 *     SepSidInTokenSidHash @ 0x1400AAAA0 (SepSidInTokenSidHash.c)
 *     OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x14010E044 (OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO.c)
 *     ObReferenceObjectExWithTag @ 0x140111F40 (ObReferenceObjectExWithTag.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwDuplicateObject @ 0x1401B8A70 (ZwDuplicateObject.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140597850 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     ObpDecrementHandleCount @ 0x1405AA584 (ObpDecrementHandleCount.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x1405BC8D8 (SepAdtPrivilegeObjectAuditAlarm.c)
 *     ObpAllocateAndQuerySecurityDescriptorInfo @ 0x1405BCBC0 (ObpAllocateAndQuerySecurityDescriptorInfo.c)
 *     ObpInsertOrLocateNamedObject @ 0x1405C95A8 (ObpInsertOrLocateNamedObject.c)
 *     ObDereferenceSecurityDescriptor @ 0x1405CA410 (ObDereferenceSecurityDescriptor.c)
 *     ObReferenceProcessHandleTable @ 0x1405D2160 (ObReferenceProcessHandleTable.c)
 *     ObpIncrementHandleCountEx @ 0x1405E45F0 (ObpIncrementHandleCountEx.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     ExpFreeHandleTableEntry @ 0x1405FC378 (ExpFreeHandleTableEntry.c)
 *     SePrivilegeCheck @ 0x14062B1F0 (SePrivilegeCheck.c)
 *     SePrivilegedServiceAuditAlarm @ 0x14062DE88 (SePrivilegedServiceAuditAlarm.c)
 *     ObpCallPreOperationCallbacks @ 0x140638100 (ObpCallPreOperationCallbacks.c)
 *     RtlMapGenericMask @ 0x14063FD50 (RtlMapGenericMask.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x140697D34 (ExpAllocateHandleTableEntrySlow.c)
 *     SeAppendPrivileges @ 0x14069ABE0 (SeAppendPrivileges.c)
 *     ObpCreateSymbolicLinkName @ 0x1406C56E0 (ObpCreateSymbolicLinkName.c)
 *     ObHandleRevocationBlockAddObject @ 0x140862400 (ObHandleRevocationBlockAddObject.c)
 *     ObpSetObjectAuditInfo @ 0x140862CD0 (ObpSetObjectAuditInfo.c)
 *     ObpPostInterceptHandleCreate @ 0x1408637F4 (ObpPostInterceptHandleCreate.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14089F93C (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x1408A06C8 (SepAdtStagingEvent.c)
 *     SepAdtClassifyObjectIntoSubCategory @ 0x1408A0E34 (SepAdtClassifyObjectIntoSubCategory.c)
 *     EtwpTraceHandle @ 0x1408B9ED0 (EtwpTraceHandle.c)
 *     ExpSetHandleExtraInfo @ 0x1408CF41C (ExpSetHandleExtraInfo.c)
 *     ExpUpdateDebugInfo @ 0x1408CF6A8 (ExpUpdateDebugInfo.c)
 */

__int64 __fastcall ObpCreateHandle(
        int a1,
        char *a2,
        ACCESS_MASK a3,
        struct _ACCESS_STATE *a4,
        unsigned int a5,
        unsigned int a6,
        char a7,
        __int64 a8,
        int a9,
        PVOID *a10,
        unsigned __int64 *a11)
{
  PACCESS_STATE v11; // r15
  unsigned int v12; // r12d
  __int64 v13; // r13
  int v14; // r9d
  _KPROCESS *Process; // r8
  unsigned __int64 v16; // r14
  NTSTATUS v17; // ebx
  ULONG_PTR v18; // rbx
  KPROCESSOR_MODE AccessMode; // r12
  ULONG_PTR v20; // r13
  unsigned int RemainingDesiredAccess; // eax
  signed __int64 v22; // rdx
  signed __int64 v23; // rax
  signed __int64 v24; // rdi
  unsigned int v25; // edx
  unsigned __int64 v26; // rdi
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 v28; // rax
  signed __int64 v29; // rtt
  ACCESS_MASK PreviouslyGrantedAccess; // eax
  char *v31; // r14
  signed __int64 v32; // rdx
  signed __int64 v33; // rax
  signed __int64 v34; // rdi
  unsigned int v35; // edx
  volatile signed __int64 *PoolWithTag; // rdi
  struct _KTHREAD *v37; // rax
  signed __int64 v38; // rax
  signed __int64 v39; // rtt
  char v40; // r14
  ULONG_PTR v41; // r14
  struct _KTHREAD *v42; // rax
  SECURITY_SUBJECT_CONTEXT *p_SubjectSecurityContext; // rbx
  struct _KTHREAD *v44; // rax
  BOOLEAN v45; // al
  struct _PRIVILEGE_SET *v46; // rsi
  BOOLEAN v47; // r15
  PACCESS_STATE v48; // rdx
  ACCESS_MASK v49; // eax
  volatile signed __int64 *v50; // rdi
  signed __int64 v51; // rax
  signed __int64 v52; // rcx
  bool v53; // zf
  signed __int64 v54; // rtt
  struct _KTHREAD *v55; // r14
  volatile signed __int64 *v56; // rsi
  volatile signed __int64 *v57; // rbx
  signed __int64 v58; // rax
  bool v59; // cc
  signed __int64 v60; // rax
  volatile signed __int64 *i; // rax
  __int64 v62; // rax
  struct _EX_RUNDOWN_REF *v63; // rdi
  void *v64; // rbx
  __int64 v65; // rcx
  __int64 v66; // r12
  __int64 v67; // rdi
  ACCESS_MASK v68; // r8d
  signed __int64 v69; // rdx
  signed __int64 v70; // rax
  signed __int64 v71; // rbx
  unsigned int v72; // edx
  unsigned __int64 v73; // rbx
  struct _KTHREAD *v74; // rax
  signed __int64 v75; // rax
  signed __int64 v76; // rtt
  int v77; // r15d
  volatile signed __int64 *v78; // rbx
  signed __int64 v79; // rax
  signed __int64 v80; // rcx
  bool v81; // zf
  signed __int64 v82; // rtt
  struct _KTHREAD *v83; // r14
  volatile signed __int64 *v84; // rsi
  volatile signed __int64 *v85; // rdi
  signed __int64 v86; // rax
  signed __int64 v87; // rax
  _DWORD *AuxData; // rax
  unsigned int v89; // r14d
  char *v90; // rbx
  int v91; // edi
  __int64 v92; // rcx
  int v93; // esi
  bool v94; // al
  volatile signed __int64 *j; // rax
  unsigned int v96; // r15d
  int v97; // r8d
  _DWORD *v98; // rcx
  unsigned __int64 v99; // rbx
  char v100; // al
  unsigned int Number; // eax
  unsigned int v102; // r12d
  int v103; // r13d
  unsigned int v104; // r14d
  ULONG_PTR v105; // rdi
  unsigned __int64 *v106; // rsi
  unsigned __int64 v107; // rax
  int v108; // eax
  unsigned int v109; // eax
  volatile signed __int64 *v110; // rsi
  char HandleTableEntrySlow; // r14
  _DWORD *v112; // rdi
  unsigned __int64 v113; // r14
  __int64 v114; // rdi
  POBJECT_TYPE *v115; // r14
  bool v116; // r10
  unsigned __int64 *v117; // rsi
  PACCESS_STATE v118; // rsi
  char v119; // al
  PVOID SecurityDescriptor; // r14
  __int64 v121; // rax
  PVOID *v122; // rcx
  _QWORD *v123; // r8
  unsigned __int8 v124; // di
  void *v125; // r8
  BOOLEAN v126; // r13
  PVOID v127; // rdi
  _QWORD *v128; // r15
  __int64 v129; // r8
  UNICODE_STRING *p_ObjectTypeName; // r12
  unsigned __int16 v131; // r13
  __int64 p_ObjectName; // rsi
  unsigned __int64 CurrentThreadProcessId; // rax
  PACCESS_STATE v134; // rdi
  unsigned __int64 v135; // rax
  __int64 v136; // rdx
  int v137; // edi
  int *v138; // rdx
  char *ClientToken; // rdi
  struct _KTHREAD *v140; // rax
  char *PrimaryToken; // rsi
  struct _KTHREAD *v142; // rax
  struct _ERESOURCE *v143; // rcx
  struct _KTHREAD *v144; // rax
  unsigned __int64 v145; // rax
  PVOID v146; // rdi
  int GrantedAccess; // [rsp+40h] [rbp-E0h]
  int AccessStatus; // [rsp+48h] [rbp-D8h]
  bool v150; // [rsp+A0h] [rbp-80h]
  char v151; // [rsp+A1h] [rbp-7Fh]
  int v152; // [rsp+A4h] [rbp-7Ch] BYREF
  char v153; // [rsp+A8h] [rbp-78h]
  PVOID Object; // [rsp+B0h] [rbp-70h]
  unsigned int v155; // [rsp+B8h] [rbp-68h]
  NTSTATUS v156; // [rsp+BCh] [rbp-64h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+C0h] [rbp-60h]
  PACCESS_STATE AccessState; // [rsp+C8h] [rbp-58h]
  ACCESS_MASK AccessMask; // [rsp+D0h] [rbp-50h] BYREF
  unsigned __int64 v160; // [rsp+D8h] [rbp-48h]
  unsigned int NumberOfBytes; // [rsp+E0h] [rbp-40h] BYREF
  int NumberOfBytes_4; // [rsp+E4h] [rbp-3Ch]
  __int64 v163; // [rsp+E8h] [rbp-38h]
  __int64 v164; // [rsp+F0h] [rbp-30h] BYREF
  ACCESS_MASK v165; // [rsp+F8h] [rbp-28h] BYREF
  struct _KTHREAD *v166; // [rsp+100h] [rbp-20h]
  POBJECT_TYPE *v167; // [rsp+108h] [rbp-18h]
  int v168; // [rsp+110h] [rbp-10h] BYREF
  void *v169; // [rsp+118h] [rbp-8h] BYREF
  HANDLE TargetHandle; // [rsp+120h] [rbp+0h] BYREF
  int v171; // [rsp+128h] [rbp+8h]
  int v172; // [rsp+12Ch] [rbp+Ch]
  PVOID P; // [rsp+130h] [rbp+10h] BYREF
  unsigned __int64 v174; // [rsp+138h] [rbp+18h]
  _QWORD v175[2]; // [rsp+140h] [rbp+20h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+150h] [rbp+30h] BYREF
  __int64 v177; // [rsp+158h] [rbp+38h]
  int v178[2]; // [rsp+160h] [rbp+40h] BYREF
  unsigned __int64 *v179; // [rsp+168h] [rbp+48h]
  _DWORD v180[2]; // [rsp+170h] [rbp+50h] BYREF
  char *v181; // [rsp+178h] [rbp+58h]
  __int64 v182; // [rsp+180h] [rbp+60h]
  __int64 v183; // [rsp+188h] [rbp+68h]
  _DWORD *v184; // [rsp+190h] [rbp+70h]
  _DWORD v185[2]; // [rsp+198h] [rbp+78h] BYREF
  __int64 v186; // [rsp+1A0h] [rbp+80h]
  __int64 v187; // [rsp+1A8h] [rbp+88h]
  PVOID v188; // [rsp+1B0h] [rbp+90h] BYREF
  PVOID *v189; // [rsp+1B8h] [rbp+98h]
  unsigned __int64 v190; // [rsp+1C8h] [rbp+A8h]
  struct _PRIVILEGE_SET RequiredPrivileges; // [rsp+1D0h] [rbp+B0h] BYREF

  v11 = a4;
  v12 = a6;
  v13 = a8;
  v189 = a10;
  v179 = a11;
  v171 = 0;
  v164 = 0LL;
  v151 = 0;
  v153 = 0;
  v172 = a9;
  AccessMask = a3;
  AccessState = a4;
  v14 = a1;
  Object = a2;
  Process = KeGetCurrentThread()->ApcState.Process;
  BugCheckParameter1 = (ULONG_PTR)Process;
  NumberOfBytes_4 = a1;
  v155 = a6;
  v163 = a8;
  if ( (a6 & 0x200) != 0 )
  {
    v16 = ObpKernelHandleTable;
    BugCheckParameter1 = (ULONG_PTR)PsInitialSystemProcess;
LABEL_8:
    v160 = v16;
    goto LABEL_9;
  }
  if ( KeGetCurrentThread()->ApcStateIndex != 1 )
  {
    v16 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[5];
    goto LABEL_8;
  }
  v160 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Process);
  v16 = v160;
  if ( !v160 )
    return (unsigned int)-1073741558;
  a2 = (char *)Object;
  v14 = NumberOfBytes_4;
  v153 = 1;
LABEL_9:
  v150 = v16 == ObpKernelHandleTable;
  if ( !v11 || v16 == ObpKernelHandleTable && !v11->OriginalDesiredAccess )
  {
    PreviouslyGrantedAccess = AccessMask;
    if ( (AccessMask & 0x2000000) != 0 )
    {
      PreviouslyGrantedAccess = AccessMask & 0xEDFFFFFF | 0x10000000;
      AccessMask = PreviouslyGrantedAccess;
    }
    v31 = (char *)Object;
    if ( (PreviouslyGrantedAccess & 0xF0000000) != 0 )
    {
      RtlMapGenericMask(
        &AccessMask,
        (PGENERIC_MAPPING)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)]
                         + 76));
      PreviouslyGrantedAccess = AccessMask;
    }
    goto LABEL_114;
  }
  v18 = (ULONG_PTR)(a2 - 48);
  AccessMode = 1;
  v20 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*(a2 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)a2 - 48) >> 8)];
  if ( (a6 & 0x400) == 0 )
    AccessMode = a7;
  if ( (unsigned int)(v14 - 1) > 1 )
  {
    RemainingDesiredAccess = v11->RemainingDesiredAccess;
    if ( (RemainingDesiredAccess & 0x2000000) != 0 )
    {
      RemainingDesiredAccess = RemainingDesiredAccess & 0xEDFFFFFF | 0x10000000;
      v11->RemainingDesiredAccess = RemainingDesiredAccess;
    }
    if ( (RemainingDesiredAccess & 0xF0000000) != 0 )
    {
      RtlMapGenericMask(&v11->RemainingDesiredAccess, (PGENERIC_MAPPING)(v20 + 76));
      RemainingDesiredAccess = v11->RemainingDesiredAccess;
    }
    if ( (RemainingDesiredAccess & 0x1000000) != 0 )
    {
      RequiredPrivileges.Privilege[0].Luid = SeSecurityPrivilege;
      RequiredPrivileges.PrivilegeCount = 1;
      RequiredPrivileges.Privilege[0].Attributes = 0;
      RequiredPrivileges.Control = 1;
      if ( !SePrivilegeCheck(&RequiredPrivileges, &v11->SubjectSecurityContext, AccessMode) )
      {
        SePrivilegedServiceAuditAlarm(0LL, &v11->SubjectSecurityContext, &RequiredPrivileges, 0LL);
        v17 = -1073741727;
        goto LABEL_295;
      }
      v11->RemainingDesiredAccess &= ~0x1000000u;
      v11->PreviouslyGrantedAccess |= 0x1000000u;
      SeAppendPrivileges(v11, &RequiredPrivileges);
    }
    v11->PreviouslyGrantedAccess |= v11->RemainingDesiredAccess;
    v11->RemainingDesiredAccess = 0;
    v11->PreviouslyGrantedAccess &= *(_DWORD *)(v20 + 92) | 0x1000000;
    _m_prefetchw((const void *)(v18 + 40));
    v22 = *(_QWORD *)(v18 + 40);
    if ( (v22 & 0xF) != 0 )
    {
      do
      {
        v23 = _InterlockedCompareExchange64((volatile signed __int64 *)(v18 + 40), v22 - 1, v22);
        if ( v22 == v23 )
          break;
        v22 = v23;
      }
      while ( (v23 & 0xF) != 0 );
    }
    v24 = v22;
    v25 = v22 & 0xF;
    v26 = v24 & 0xFFFFFFFFFFFFFFF0uLL;
    if ( v25 <= 1 && v26 )
    {
      if ( v25 == 1 )
      {
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v26 - 24), 0xFuLL) <= 0 )
          __fastfail(0xEu);
      }
      else
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquirePushLockSharedEx(v18 + 16, 0LL);
        v26 = *(_QWORD *)(v18 + 40) & 0xFFFFFFFFFFFFFFF0uLL;
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v26 - 24), 0x10uLL) <= 0 )
          __fastfail(0xEu);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v18 + 16), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v18 + 16));
        KeAbPostRelease(v18 + 16);
        KeLeaveCriticalRegion();
      }
      _m_prefetchw((const void *)(v18 + 40));
      v28 = *(_QWORD *)(v18 + 40);
      while ( (v28 & 0xF) == 0 )
      {
        if ( v26 != (v28 & 0xFFFFFFFFFFFFFFF0uLL) )
          break;
        v29 = v28;
        v28 = _InterlockedCompareExchange64((volatile signed __int64 *)(v18 + 40), v28 + 15, v28);
        if ( v29 == v28 )
          goto LABEL_41;
      }
      ObDereferenceSecurityDescriptor(v26, 0xFu);
    }
LABEL_41:
    v11->PreviouslyGrantedAccess &= ~(unsigned int)SeComputeCreatorDeniedRights(
                                                     &v11->SubjectSecurityContext,
                                                     (__int64)v11,
                                                     v11->PreviouslyGrantedAccess,
                                                     v26);
    if ( v26 )
      ObDereferenceSecurityDescriptor(v26, 1u);
    v156 = 0;
    goto LABEL_44;
  }
  v165 = 0;
  Privileges = 0LL;
  if ( *(__int64 (__fastcall **)(_QWORD *, int, DWORD *, void *, ULONG *, __int64 *, POOL_TYPE, GENERIC_MAPPING *))(v20 + 152) == SeDefaultObjectMethod )
  {
    _m_prefetchw((const void *)(v18 + 40));
    v32 = *(_QWORD *)(v18 + 40);
    if ( (v32 & 0xF) != 0 )
    {
      do
      {
        v33 = _InterlockedCompareExchange64((volatile signed __int64 *)(v18 + 40), v32 - 1, v32);
        if ( v32 == v33 )
          break;
        v32 = v33;
      }
      while ( (v33 & 0xF) != 0 );
    }
    v34 = v32;
    v35 = v32 & 0xF;
    PoolWithTag = (volatile signed __int64 *)(v34 & 0xFFFFFFFFFFFFFFF0uLL);
    if ( v35 <= 1 && PoolWithTag )
    {
      if ( v35 == 1 )
      {
        if ( _InterlockedExchangeAdd64(PoolWithTag - 3, 0xFuLL) <= 0 )
          __fastfail(0xEu);
      }
      else
      {
        v37 = KeGetCurrentThread();
        --v37->KernelApcDisable;
        ExAcquirePushLockSharedEx(v18 + 16, 0LL);
        PoolWithTag = (volatile signed __int64 *)(*(_QWORD *)(v18 + 40) & 0xFFFFFFFFFFFFFFF0uLL);
        if ( _InterlockedExchangeAdd64(PoolWithTag - 3, 0x10uLL) <= 0 )
          __fastfail(0xEu);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v18 + 16), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v18 + 16));
        KeAbPostRelease(v18 + 16);
        KeLeaveCriticalRegion();
      }
      _m_prefetchw((const void *)(v18 + 40));
      v38 = *(_QWORD *)(v18 + 40);
      while ( (v38 & 0xF) == 0 )
      {
        if ( PoolWithTag != (volatile signed __int64 *)(v38 & 0xFFFFFFFFFFFFFFF0uLL) )
          break;
        v39 = v38;
        v38 = _InterlockedCompareExchange64((volatile signed __int64 *)(v18 + 40), v38 + 15, v38);
        if ( v39 == v38 )
          goto LABEL_64;
      }
      ObDereferenceSecurityDescriptor((__int64)PoolWithTag, 0xFu);
    }
LABEL_64:
    v40 = 0;
    if ( !PoolWithTag && ((*(_BYTE *)(v20 + 66) & 8) != 0 || (*(_BYTE *)(v18 + 26) & 2) != 0) )
      KeBugCheckEx(0x189u, v18, v20, 1uLL, 0LL);
    v17 = 0;
  }
  else
  {
    v168 = 447;
    NumberOfBytes = ObpDefaultSecurityDescriptorLength;
    PoolWithTag = (volatile signed __int64 *)ExAllocatePoolWithTag(
                                               PagedPool,
                                               (unsigned int)ObpDefaultSecurityDescriptorLength,
                                               0x7153624Fu);
    if ( !PoolWithTag )
    {
      v17 = -1073741670;
      v156 = -1073741670;
      goto LABEL_103;
    }
    v41 = v18 + 40;
    v17 = (*(__int64 (__fastcall **)(PVOID, __int64, int *, volatile signed __int64 *, unsigned int *, ULONG_PTR, _DWORD, ULONG_PTR, KPROCESSOR_MODE))(v20 + 152))(
            Object,
            1LL,
            &v168,
            PoolWithTag,
            &NumberOfBytes,
            v18 + 40,
            *(_DWORD *)(v20 + 100),
            v20 + 76,
            AccessMode);
    if ( v17 == -1073741789 )
    {
      ExFreePoolWithTag((PVOID)PoolWithTag, 0);
      LODWORD(ObpDefaultSecurityDescriptorLength) = NumberOfBytes;
      PoolWithTag = (volatile signed __int64 *)ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x7153624Fu);
      if ( !PoolWithTag )
      {
        v17 = -1073741670;
        v156 = -1073741670;
        goto LABEL_103;
      }
      LOBYTE(GrantedAccess) = AccessMode;
      v17 = (*(__int64 (__fastcall **)(PVOID, __int64, int *, volatile signed __int64 *, unsigned int *, ULONG_PTR, _DWORD, ULONG_PTR, int))(v20 + 152))(
              Object,
              1LL,
              &v168,
              PoolWithTag,
              &NumberOfBytes,
              v41,
              *(_DWORD *)(v20 + 100),
              v20 + 76,
              GrantedAccess);
    }
    v40 = 1;
    if ( v17 < 0 )
    {
      ExFreePoolWithTag((PVOID)PoolWithTag, 0);
      v156 = v17;
      goto LABEL_103;
    }
  }
  if ( PoolWithTag )
  {
    v42 = KeGetCurrentThread();
    p_SubjectSecurityContext = &v11->SubjectSecurityContext;
    --v42->KernelApcDisable;
    ExAcquireResourceSharedLite(*((PERESOURCE *)v11->SubjectSecurityContext.PrimaryToken + 6), 1u);
    if ( v11->SubjectSecurityContext.ClientToken )
    {
      v44 = KeGetCurrentThread();
      --v44->KernelApcDisable;
      ExAcquireResourceSharedLite(*((PERESOURCE *)p_SubjectSecurityContext->ClientToken + 6), 1u);
    }
    v45 = SeAccessCheck(
            (PSECURITY_DESCRIPTOR)PoolWithTag,
            &v11->SubjectSecurityContext,
            1u,
            v11->RemainingDesiredAccess,
            v11->PreviouslyGrantedAccess,
            &Privileges,
            (PGENERIC_MAPPING)(v20 + 76),
            AccessMode,
            &v165,
            &v156);
    v46 = Privileges;
    v47 = v45;
    if ( Privileges )
    {
      SeAppendPrivileges(AccessState, Privileges);
      CmSiFreeMemory(v46);
    }
    v48 = AccessState;
    if ( v47 )
    {
      v49 = v165;
      AccessState->PreviouslyGrantedAccess |= v165;
      v48->RemainingDesiredAccess &= ~(v49 | 0x2000000);
    }
    if ( AccessMode )
      SeOpenObjectAuditAlarmWithTransaction(
        (PUNICODE_STRING)(v20 + 16),
        Object,
        0LL,
        (PSECURITY_DESCRIPTOR)PoolWithTag,
        v48,
        0,
        v47,
        AccessMode,
        0LL,
        &v48->GenerateOnClose);
    ExReleaseResourceLite(*((PERESOURCE *)p_SubjectSecurityContext->PrimaryToken + 6));
    KeLeaveCriticalRegion();
    if ( p_SubjectSecurityContext->ClientToken )
    {
      ExReleaseResourceLite(*((PERESOURCE *)p_SubjectSecurityContext->ClientToken + 6));
      KeLeaveCriticalRegion();
    }
    if ( v40 )
    {
      ExFreePoolWithTag((PVOID)PoolWithTag, 0);
    }
    else
    {
      v50 = PoolWithTag - 4;
      _m_prefetchw((const void *)(v50 + 1));
      v51 = *((_QWORD *)v50 + 1);
      v52 = v51 - 1;
      v53 = v51 == 1;
      if ( v51 - 1 <= 0 )
      {
LABEL_93:
        if ( !v53 )
          __fastfail(0xEu);
        v55 = KeGetCurrentThread();
        v56 = (volatile signed __int64 *)((char *)&ObsSecurityDescriptorCache
                                        + 16 * (unsigned __int8)*((_DWORD *)v50 + 4));
        --v55->KernelApcDisable;
        v57 = v56 + 1;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)v56, 0LL);
        v58 = _InterlockedExchangeAdd64(v50 + 1, 0xFFFFFFFFFFFFFFFFuLL);
        v59 = v58 <= 1;
        v60 = v58 - 1;
        if ( v59 )
        {
          if ( v60 )
            __fastfail(0xEu);
          for ( i = (volatile signed __int64 *)*v57; i != v50; i = (volatile signed __int64 *)*i )
            v57 = i;
          *v57 = *v50;
          if ( (_InterlockedExchangeAdd64(v56, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v56);
          KeAbPostRelease((ULONG_PTR)v56);
          KeLeaveCriticalRegionThread((__int64)v55);
          ExFreePoolWithTag((PVOID)v50, 0x6353624Fu);
        }
        else
        {
          if ( (_InterlockedExchangeAdd64(v56, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v56);
          KeAbPostRelease((ULONG_PTR)v56);
          KeLeaveCriticalRegionThread((__int64)v55);
        }
      }
      else
      {
        while ( 1 )
        {
          v54 = v51;
          v51 = _InterlockedCompareExchange64(v50 + 1, v52, v51);
          if ( v54 == v51 )
            break;
          v52 = v51 - 1;
          v53 = v51 == 1;
          if ( v51 - 1 <= 0 )
            goto LABEL_93;
        }
      }
    }
    v53 = v47 == 0;
    v11 = AccessState;
    if ( !v53 )
      goto LABEL_44;
    v17 = v156;
LABEL_103:
    if ( v17 < 0 )
      goto LABEL_295;
    v13 = v163;
    v12 = v155;
    v31 = (char *)Object;
    goto LABEL_115;
  }
  v11->PreviouslyGrantedAccess |= v11->RemainingDesiredAccess;
  v11->RemainingDesiredAccess = 0;
  v156 = v17;
LABEL_44:
  PreviouslyGrantedAccess = v11->PreviouslyGrantedAccess;
  v13 = v163;
  v12 = v155;
  v31 = (char *)Object;
LABEL_114:
  v152 = PreviouslyGrantedAccess;
LABEL_115:
  v62 = 0LL;
  v169 = 0LL;
  if ( v13 )
  {
    v62 = *(_QWORD *)(v13 + 32);
    v169 = (void *)v62;
  }
  v17 = ObpIncrementHandleCountEx(NumberOfBytes_4, (unsigned int)&v152, BugCheckParameter1, (_DWORD)v31, a7, v12, v62);
  if ( v17 < 0 )
    goto LABEL_295;
  if ( v11 )
  {
    if ( v13 )
    {
      v63 = (struct _EX_RUNDOWN_REF *)BugCheckParameter1;
      v17 = ObpInsertOrLocateNamedObject(
              (_KPROCESS *)BugCheckParameter1,
              v31,
              (ACCESS_MASK *)&v152,
              (__int64)v11,
              a7,
              (_DWORD *)v13,
              &v164);
      if ( v17 < 0 )
        goto LABEL_296;
      v64 = (void *)v164;
      if ( (char *)v164 == v31 )
      {
        v64 = 0LL;
        v164 = 0LL;
      }
      else
      {
        v31 = (char *)v164;
        Object = (PVOID)v164;
        v151 = 1;
      }
    }
    else
    {
      v64 = (void *)v164;
    }
    if ( v11->GenerateOnClose )
      v155 = v12 | 4;
  }
  else
  {
    v64 = (void *)v164;
  }
  v65 = (unsigned __int8)*(v31 - 24);
  v66 = (__int64)(v31 - 48);
  v163 = (__int64)(v31 - 48);
  v177 = (unsigned __int8)((unsigned __int16)((_WORD)v31 - 48) >> 8);
  v67 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v177 ^ v65];
  v167 = (POBJECT_TYPE *)v67;
  v68 = (*(_DWORD *)(v67 + 92) | 0x1000000) & v152;
  v152 = v68;
  if ( v11 )
  {
    _m_prefetchw((const void *)(v66 + 40));
    v69 = *(_QWORD *)(v66 + 40);
    if ( (v69 & 0xF) != 0 )
    {
      do
      {
        v70 = _InterlockedCompareExchange64((volatile signed __int64 *)(v66 + 40), v69 - 1, v69);
        if ( v69 == v70 )
          break;
        v69 = v70;
      }
      while ( (v70 & 0xF) != 0 );
    }
    v71 = v69;
    v72 = v69 & 0xF;
    v73 = v71 & 0xFFFFFFFFFFFFFFF0uLL;
    if ( v72 <= 1 && v73 )
    {
      if ( v72 == 1 )
      {
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v73 - 24), 0xFuLL) <= 0 )
          __fastfail(0xEu);
      }
      else
      {
        v74 = KeGetCurrentThread();
        --v74->KernelApcDisable;
        ExAcquirePushLockSharedEx(v66 + 16, 0LL);
        v73 = *(_QWORD *)(v66 + 40) & 0xFFFFFFFFFFFFFFF0uLL;
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v73 - 24), 0x10uLL) <= 0 )
          __fastfail(0xEu);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v66 + 16), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v66 + 16));
        KeAbPostRelease(v66 + 16);
        KeLeaveCriticalRegion();
      }
      _m_prefetchw((const void *)(v66 + 40));
      v75 = *(_QWORD *)(v66 + 40);
      while ( (v75 & 0xF) == 0 )
      {
        if ( v73 != (v75 & 0xFFFFFFFFFFFFFFF0uLL) )
          break;
        v76 = v75;
        v75 = _InterlockedCompareExchange64((volatile signed __int64 *)(v66 + 40), v75 + 15, v75);
        if ( v76 == v75 )
          goto LABEL_147;
      }
      ObDereferenceSecurityDescriptor(v73, 0xFu);
    }
LABEL_147:
    v77 = SeComputeCreatorDeniedRights(&v11->SubjectSecurityContext, (__int64)v11, v152, v73);
    if ( v73 )
    {
      v78 = (volatile signed __int64 *)(v73 - 32);
      _m_prefetchw((const void *)(v78 + 1));
      v79 = *((_QWORD *)v78 + 1);
      v80 = v79 - 1;
      v81 = v79 == 1;
      if ( v79 - 1 <= 0 )
      {
LABEL_151:
        if ( !v81 )
          __fastfail(0xEu);
        v83 = KeGetCurrentThread();
        v84 = (volatile signed __int64 *)((char *)&ObsSecurityDescriptorCache
                                        + 16 * (unsigned __int8)*((_DWORD *)v78 + 4));
        --v83->KernelApcDisable;
        v85 = v84 + 1;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)v84, 0LL);
        v86 = _InterlockedExchangeAdd64(v78 + 1, 0xFFFFFFFFFFFFFFFFuLL);
        v59 = v86 <= 1;
        v87 = v86 - 1;
        if ( v59 )
        {
          if ( v87 )
            __fastfail(0xEu);
          for ( j = (volatile signed __int64 *)*v85; j != v78; j = (volatile signed __int64 *)*j )
            v85 = j;
          *v85 = *v78;
          if ( (_InterlockedExchangeAdd64(v84, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v84);
          KeAbPostRelease((ULONG_PTR)v84);
          KeLeaveCriticalRegionThread((__int64)v83);
          ExFreePoolWithTag((PVOID)v78, 0x6353624Fu);
        }
        else
        {
          if ( (_InterlockedExchangeAdd64(v84, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v84);
          KeAbPostRelease((ULONG_PTR)v84);
          KeLeaveCriticalRegionThread((__int64)v83);
        }
      }
      else
      {
        while ( 1 )
        {
          v82 = v79;
          v79 = _InterlockedCompareExchange64(v78 + 1, v80, v79);
          if ( v82 == v79 )
            break;
          v80 = v79 - 1;
          v81 = v79 == 1;
          if ( v79 - 1 <= 0 )
            goto LABEL_151;
        }
      }
    }
    v64 = (void *)v164;
    v68 = ~v77 & v152;
    v11 = AccessState;
    v67 = (__int64)v167;
    v152 = v68;
    AuxData = AccessState->AuxData;
    AccessState->PreviouslyGrantedAccess = v68;
    v171 = AuxData[7];
  }
  v89 = a5;
  if ( a5 )
  {
    ObReferenceObjectExWithTag((ULONG_PTR)Object, a5);
    v68 = v152;
  }
  if ( v64 )
  {
    ObfDereferenceObject(v64);
    v68 = v152;
  }
  v90 = (char *)Object;
  if ( v13 && !v151 && (POBJECT_TYPE)v67 == ObpSymbolicLinkObjectType )
  {
    ObpCreateSymbolicLinkName(Object);
    v68 = v152;
  }
  v175[1] = v175;
  v175[0] = v175;
  if ( (*(_BYTE *)(v67 + 66) & 0x40) != 0 && *(_QWORD *)(v67 + 200) != v67 + 200 )
  {
    v91 = v68;
    v92 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)v177 ^ (unsigned __int64)(unsigned __int8)*(v90 - 24)];
    v93 = v68 & *(_DWORD *)(v92 + 96);
    v186 = 0LL;
    v187 = 0LL;
    v184 = v185;
    v180[1] = v150;
    v185[1] = v68;
    v185[0] = v68;
    v180[0] = 1;
    v181 = v90;
    v183 = 0LL;
    v182 = v92;
    v17 = ObpCallPreOperationCallbacks(v92, v180, v175);
    v94 = v150;
    if ( v17 >= 0 && !v150 )
    {
      v91 &= v93 | v185[0];
      v94 = 0;
    }
    if ( v17 < 0 )
    {
      v63 = (struct _EX_RUNDOWN_REF *)BugCheckParameter1;
      ObpDecrementHandleCount((_KPROCESS *)BugCheckParameter1, v66);
      if ( a5 )
      {
        if ( a5 > 1 )
          _InterlockedExchangeAdd64((volatile signed __int64 *)v66, (int)(1 - a5));
        ObfDereferenceObject(Object);
      }
      goto LABEL_296;
    }
    if ( v94 )
    {
      v68 = v152;
    }
    else
    {
      v152 = v91;
      v68 = v91;
      if ( v11 )
        v11->PreviouslyGrantedAccess = v91;
    }
  }
  v96 = 0;
  v190 = 0LL;
  v97 = v68 & 0x1FFFFFF;
  if ( (v155 & 8) != 0 )
    v97 |= 0x2000000u;
  LODWORD(v190) = v97;
  v174 = (v66 << 16) & 0xFFFFFFFFFFF1FFFFuLL | ((unsigned __int64)(v155 & 7) << 17) | 1;
  v166 = KeGetCurrentThread();
  --v166->KernelApcDisable;
  v98 = (_DWORD *)v160;
  v99 = 0LL;
  v100 = *(_BYTE *)(v160 + 44);
  if ( (v100 & 4) != 0 )
  {
LABEL_219:
    v114 = (__int64)v166;
    goto LABEL_220;
  }
  if ( (v100 & 1) != 0 )
    Number = 0;
  else
    Number = KeGetPcr()->Prcb.Number;
  v102 = ExpFreeListCount;
  v155 = Number;
LABEL_194:
  v103 = *v98;
  v104 = Number;
  while ( 1 )
  {
    v105 = (ULONG_PTR)&v98[16 * v104 + 16];
    if ( *(_QWORD *)(v105 + 8) )
      break;
LABEL_205:
    v109 = v104 + 1;
    ++v96;
    v104 = 0;
    if ( v109 != v102 )
      v104 = v109;
    if ( v96 >= v102 )
    {
      v110 = (volatile signed __int64 *)(v98 + 14);
      HandleTableEntrySlow = 1;
      v112 = &v98[16 * v155 + 16];
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(v98 + 14), 0LL);
      if ( v103 == *(_DWORD *)v160 )
        HandleTableEntrySlow = ExpAllocateHandleTableEntrySlow(v160, v112);
      if ( (_InterlockedExchangeAdd64(v110, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v110);
      KeAbPostRelease((ULONG_PTR)v110);
      v96 = 0;
      if ( HandleTableEntrySlow )
      {
        Number = v155;
        v98 = (_DWORD *)v160;
        goto LABEL_194;
      }
      goto LABEL_218;
    }
  }
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&v98[16 * v104 + 16], 0LL);
  v106 = *(unsigned __int64 **)(v105 + 8);
  if ( v106 )
  {
    v107 = v106[1];
    *(_QWORD *)(v105 + 8) = v107;
    if ( !v107 )
      *(_QWORD *)(v105 + 16) = 0LL;
    v108 = ++*(_DWORD *)(v105 + 24);
    if ( v108 > *(_DWORD *)(v105 + 28) )
      *(_DWORD *)(v105 + 28) = v108;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v105, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v105);
  KeAbPostRelease(v105);
  if ( !v106 )
  {
    v98 = (_DWORD *)v160;
    goto LABEL_205;
  }
  v99 = *(_QWORD *)(((unsigned __int64)v106 & 0xFFFFFFFFFFFFF000uLL) + 8)
      + 4 * ((__int64)((__int64)v106 - ((unsigned __int64)v106 & 0xFFFFFFFFFFFFF000uLL)) >> 4);
  if ( v171 || a9 )
  {
    v113 = v160;
    if ( (unsigned int)ExpSetHandleExtraInfo(v160, v99) )
    {
      ExpFreeHandleTableEntry(v113, v99, v106);
      v99 = 0LL;
LABEL_218:
      v89 = a5;
      v66 = v163;
      goto LABEL_219;
    }
  }
  else
  {
    v113 = v160;
  }
  v114 = (__int64)v166;
  if ( *(_QWORD *)(v113 + 96) )
    ExpUpdateDebugInfo(v113, v166, v99, 1LL);
  v66 = v163;
  v89 = a5;
  v106[1] = v190;
  *v106 = v174;
LABEL_220:
  KeLeaveCriticalRegionThread(v114);
  if ( !v99 )
  {
    ObpDecrementHandleCount((_KPROCESS *)BugCheckParameter1, v66);
    if ( v89 )
    {
      if ( v89 > 1 )
        _InterlockedExchangeAdd64((volatile signed __int64 *)v66, (int)(1 - v89));
      ObfDereferenceObject(Object);
    }
    v115 = v167;
    v17 = -1073741670;
    v116 = v150;
    v117 = v179;
    goto LABEL_290;
  }
  v118 = AccessState;
  if ( AccessState )
  {
    v119 = *(_BYTE *)(v66 + 26);
    SecurityDescriptor = 0LL;
    P = 0LL;
    if ( (v119 & 0x20) == 0 || (v121 = ObpInfoMaskToOffset[v119 & 0x3F], v122 = (PVOID *)(v66 - v121), v66 == v121) )
    {
      if ( v169 )
        SecurityDescriptor = v169;
    }
    else if ( *v122 )
    {
      SecurityDescriptor = *v122;
    }
    else if ( v169 )
    {
      ObpSetObjectAuditInfo(v66, &v169, 0LL);
    }
    else if ( (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)v177 ^ (unsigned __int64)*(unsigned __int8 *)(v66 + 24)] != IoFileObjectType
           || (*(_DWORD *)(*((_QWORD *)Object + 1) + 52LL) & 0x10) == 0 )
    {
      v123 = AccessState->AuxData;
      v124 = 0;
      if ( v123 && (v125 = (void *)v123[7]) != 0LL )
        v124 = 1;
      else
        v125 = 0LL;
      if ( (int)ObpAllocateAndQuerySecurityDescriptorInfo((__int64)Object, 0x20u, v125, &P) >= 0 )
      {
        SecurityDescriptor = P;
        ObpSetObjectAuditInfo(v66, &P, v124);
      }
    }
    v126 = 0;
    TargetHandle = 0LL;
    *(_QWORD *)v178 = v99;
    v127 = 0LL;
    v128 = v118->AuxData;
    if ( !SecurityDescriptor )
    {
      SecurityDescriptor = (PVOID)v128[7];
      if ( !SecurityDescriptor )
        SecurityDescriptor = v118->SecurityDescriptor;
    }
    if ( v118->GenerateAudit )
    {
      if ( v118->AuditPrivileges )
      {
        SepAdtPrivilegeObjectAuditAlarm(
          &SeSubsystemName,
          &v118->ObjectTypeName.Length,
          &v118->ObjectName.Length,
          v99,
          (__int64)v118->SubjectSecurityContext.ClientToken,
          (__int64)v118->SubjectSecurityContext.PrimaryToken,
          (__int64)v118->SubjectSecurityContext.ProcessAuditId,
          v118->PreviouslyGrantedAccess,
          (int *)*v128,
          1);
        goto LABEL_262;
      }
    }
    else if ( !*((_BYTE *)v128 + 216) )
    {
      goto LABEL_262;
    }
    if ( ZwDuplicateObject(
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           (HANDLE)v99,
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           &TargetHandle,
           0,
           0x200u,
           2u) >= 0 )
    {
      ObReferenceObjectByHandle(TargetHandle, 0, 0LL, 0, &v188, 0LL);
      v127 = v188;
    }
    p_ObjectTypeName = &v118->ObjectTypeName;
    LOBYTE(v129) = 1;
    LOWORD(v156) = SepAdtClassifyObjectIntoSubCategory(v127, &v118->ObjectTypeName, v129, 0LL);
    v131 = v156;
    if ( v127 )
      ObfDereferenceObject(v127);
    if ( TargetHandle )
    {
      ZwClose(TargetHandle);
      TargetHandle = 0LL;
    }
    p_ObjectName = (__int64)&v118->ObjectName;
    CurrentThreadProcessId = PsGetCurrentThreadProcessId();
    v134 = AccessState;
    v126 = SepAdtOpenObjectAuditAlarm(
             v131,
             (int)&SeSubsystemName,
             (int)v178,
             (int)p_ObjectTypeName,
             p_ObjectName,
             SecurityDescriptor,
             (__int64)AccessState->SubjectSecurityContext.ClientToken,
             (__int64)AccessState->SubjectSecurityContext.PrimaryToken,
             AccessState->OriginalDesiredAccess,
             AccessState->PreviouslyGrantedAccess,
             *v128,
             1,
             CurrentThreadProcessId,
             2,
             0LL,
             0,
             0LL,
             (__int64)(v128 + 4),
             (__int64)AccessState);
    v135 = PsGetCurrentThreadProcessId();
    LOBYTE(AccessStatus) = 1;
    SepAdtStagingEvent(
      (unsigned __int16)v156,
      v136,
      v178,
      p_ObjectTypeName,
      p_ObjectName,
      v134->SubjectSecurityContext.ClientToken,
      v134->SubjectSecurityContext.PrimaryToken,
      v134->OriginalDesiredAccess,
      v134->PreviouslyGrantedAccess,
      AccessStatus,
      v135,
      v134);
    v66 = v163;
    v118 = v134;
LABEL_262:
    v137 = NumberOfBytes_4;
    v118->GenerateOnClose = v126;
    if ( !v137 )
    {
      v138 = *(int **)v118->AuxData;
      if ( v138 )
      {
        if ( *v138 && KeGetCurrentThread()->PreviousMode )
          SepAdtPrivilegeObjectAuditAlarm(
            &SeSubsystemName,
            0LL,
            0LL,
            v99,
            (__int64)v118->SubjectSecurityContext.ClientToken,
            (__int64)v118->SubjectSecurityContext.PrimaryToken,
            (__int64)v118->SubjectSecurityContext.ProcessAuditId,
            v118->PreviouslyGrantedAccess,
            v138,
            1);
      }
    }
    if ( P )
      ExFreePoolWithTag(P, 0);
    v115 = v167;
    if ( !v137 && (v167 == CmKeyObjectType || v167 == IoFileObjectType) )
    {
      ClientToken = (char *)v118->SubjectSecurityContext.ClientToken;
      if ( ClientToken )
      {
        v140 = KeGetCurrentThread();
        PrimaryToken = (char *)v118->SubjectSecurityContext.PrimaryToken;
        --v140->KernelApcDisable;
        if ( PrimaryToken >= ClientToken )
        {
          ExAcquireResourceSharedLite(*((PERESOURCE *)ClientToken + 6), 1u);
          v144 = KeGetCurrentThread();
          --v144->KernelApcDisable;
          v143 = (struct _ERESOURCE *)*((_QWORD *)PrimaryToken + 6);
        }
        else
        {
          ExAcquireResourceSharedLite(*((PERESOURCE *)PrimaryToken + 6), 1u);
          v142 = KeGetCurrentThread();
          --v142->KernelApcDisable;
          v143 = (struct _ERESOURCE *)*((_QWORD *)ClientToken + 6);
        }
        ExAcquireResourceSharedLite(v143, 1u);
        if ( (*((_DWORD *)ClientToken + 50) & 0x4000) != 0
          && *((int *)ClientToken + 49) >= 2
          && !RtlEqualSid(**((PSID **)PrimaryToken + 19), **((PSID **)ClientToken + 19))
          && OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO(v66)
          && SepSidInTokenSidHash(
               (PSID_AND_ATTRIBUTES_HASH)(PrimaryToken + 808),
               0LL,
               SeConstrainedImpersonationCapabilitySid,
               0,
               1,
               0,
               0) )
        {
          ObHandleRevocationBlockAddObject(*((_QWORD *)ClientToken + 27) + 128LL, Object);
        }
        ExReleaseResourceLite(*((PERESOURCE *)PrimaryToken + 6));
        KeLeaveCriticalRegion();
        ExReleaseResourceLite(*((PERESOURCE *)ClientToken + 6));
        KeLeaveCriticalRegion();
      }
    }
  }
  else
  {
    v115 = v167;
  }
  if ( a5 && v189 )
    *v189 = Object;
  v116 = v150;
  v117 = v179;
  v145 = v99 | 0xFFFFFFFF80000000uLL;
  if ( !v150 )
    v145 = v99;
  *v179 = v145;
  v17 = v151 != 0 ? 0x40000000 : 0;
LABEL_290:
  v146 = Object;
  if ( (_QWORD *)v175[0] != v175 )
    ObpPostInterceptHandleCreate((_DWORD)Object, v116, v17, v152, (__int64)v175);
  if ( (xmmword_140542350 & 0x40) != 0 && v17 >= 0 )
    EtwpTraceHandle(4384LL, *v117, v146, v115);
LABEL_295:
  v63 = (struct _EX_RUNDOWN_REF *)BugCheckParameter1;
LABEL_296:
  if ( v153 )
    ExReleaseRundownProtection_0(v63 + 95);
  return (unsigned int)v17;
}
