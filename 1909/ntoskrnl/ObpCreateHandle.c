/*
 * XREFs of ObpCreateHandle @ 0x1405F3B50
 * Callers:
 *     NtOpenProcessTokenEx @ 0x1405CFF00 (NtOpenProcessTokenEx.c)
 *     ObOpenObjectByPointer @ 0x1405D0890 (ObOpenObjectByPointer.c)
 *     ObInsertObjectEx @ 0x1405D9D60 (ObInsertObjectEx.c)
 *     ObOpenObjectByNameEx @ 0x1405F5850 (ObOpenObjectByNameEx.c)
 * Callees:
 *     RtlEqualSid @ 0x140005470 (RtlEqualSid.c)
 *     PsGetCurrentThreadProcessId @ 0x140036F60 (PsGetCurrentThreadProcessId.c)
 *     SeComputeCreatorDeniedRights @ 0x14003A9B0 (SeComputeCreatorDeniedRights.c)
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003C470 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection_0 @ 0x140043C20 (ExReleaseRundownProtection_0.c)
 *     SepSidInTokenSidHash @ 0x140086F04 (SepSidInTokenSidHash.c)
 *     CmSiFreeMemory @ 0x14008CFE0 (CmSiFreeMemory.c)
 *     SeAccessCheck @ 0x1400A61D0 (SeAccessCheck.c)
 *     ExfReleasePushLockShared @ 0x1400C6220 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x140108A40 (OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO.c)
 *     ObReferenceObjectExWithTag @ 0x14010A6B0 (ObReferenceObjectExWithTag.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwDuplicateObject @ 0x1401C13D0 (ZwDuplicateObject.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ObpInsertOrLocateNamedObject @ 0x1405C6208 (ObpInsertOrLocateNamedObject.c)
 *     ObDereferenceSecurityDescriptor @ 0x1405C7520 (ObDereferenceSecurityDescriptor.c)
 *     SePrivilegeCheck @ 0x1405CF200 (SePrivilegeCheck.c)
 *     SePrivilegedServiceAuditAlarm @ 0x1405CF8DC (SePrivilegedServiceAuditAlarm.c)
 *     ObpCallPreOperationCallbacks @ 0x1405E4500 (ObpCallPreOperationCallbacks.c)
 *     ObReferenceProcessHandleTable @ 0x1405E6F94 (ObReferenceProcessHandleTable.c)
 *     ObpIncrementHandleCountEx @ 0x1405F5FC0 (ObpIncrementHandleCountEx.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 *     RtlMapGenericMask @ 0x140603930 (RtlMapGenericMask.c)
 *     ExpFreeHandleTableEntry @ 0x1406113D0 (ExpFreeHandleTableEntry.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x14062340C (SepAdtPrivilegeObjectAuditAlarm.c)
 *     ObpAllocateAndQuerySecurityDescriptorInfo @ 0x140623750 (ObpAllocateAndQuerySecurityDescriptorInfo.c)
 *     ObpDecrementHandleCount @ 0x14063F2E4 (ObpDecrementHandleCount.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x14064D1D0 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x1406B79C8 (ExpAllocateHandleTableEntrySlow.c)
 *     SeAppendPrivileges @ 0x1406BEA10 (SeAppendPrivileges.c)
 *     ObpCreateSymbolicLinkName @ 0x1406E67F0 (ObpCreateSymbolicLinkName.c)
 *     ObHandleRevocationBlockAddObject @ 0x14089D450 (ObHandleRevocationBlockAddObject.c)
 *     ObpSetObjectAuditInfo @ 0x14089DD4C (ObpSetObjectAuditInfo.c)
 *     ObpPostInterceptHandleCreate @ 0x14089E874 (ObpPostInterceptHandleCreate.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x1408DCA48 (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x1408DD528 (SepAdtStagingEvent.c)
 *     SepAdtClassifyObjectIntoSubCategory @ 0x1408DDCA0 (SepAdtClassifyObjectIntoSubCategory.c)
 *     EtwpTraceHandle @ 0x1408F50C4 (EtwpTraceHandle.c)
 *     ExpSetHandleExtraInfo @ 0x14090B180 (ExpSetHandleExtraInfo.c)
 *     ExpUpdateDebugInfo @ 0x14090B40C (ExpUpdateDebugInfo.c)
 */

__int64 __fastcall ObpCreateHandle(
        int a1,
        char *a2,
        ACCESS_MASK a3,
        struct _ACCESS_STATE *a4,
        unsigned int a5,
        unsigned int a6,
        char a7,
        struct _KTHREAD *a8,
        int a9,
        PVOID *a10,
        unsigned __int64 *a11)
{
  unsigned int v11; // r13d
  PACCESS_STATE v12; // r14
  struct _KTHREAD *v13; // r12
  int v14; // r10d
  _KPROCESS *Process; // r8
  unsigned __int64 v16; // r15
  NTSTATUS v17; // ebx
  ULONG_PTR v18; // rbx
  KPROCESSOR_MODE AccessMode; // r13
  ULONG_PTR v20; // r15
  unsigned int RemainingDesiredAccess; // eax
  signed __int64 v22; // rdx
  signed __int64 v23; // rax
  signed __int64 v24; // rdi
  unsigned int v25; // edx
  unsigned __int64 v26; // rdi
  struct _KTHREAD *v27; // rax
  signed __int64 v28; // rax
  signed __int64 v29; // rtt
  volatile signed __int64 *v30; // rbx
  signed __int64 v31; // rax
  signed __int64 v32; // rcx
  bool v33; // zf
  signed __int64 v34; // rtt
  struct _KTHREAD *v35; // r14
  volatile signed __int64 *v36; // rsi
  volatile signed __int64 *v37; // rdi
  signed __int64 v38; // rax
  bool v39; // cc
  signed __int64 v40; // rax
  volatile signed __int64 *j; // rax
  signed __int64 v42; // rdx
  signed __int64 v43; // rax
  signed __int64 v44; // rdi
  unsigned int v45; // edx
  volatile signed __int64 *PoolWithTag; // rdi
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 v48; // rax
  signed __int64 v49; // rtt
  char v50; // r14
  ULONG_PTR v51; // r14
  PACCESS_STATE v52; // rsi
  struct _KTHREAD *v53; // rax
  SECURITY_SUBJECT_CONTEXT *p_SubjectSecurityContext; // rbx
  struct _KTHREAD *v55; // rax
  BOOLEAN v56; // al
  struct _PRIVILEGE_SET *v57; // rsi
  BOOLEAN v58; // r12
  PACCESS_STATE v59; // rdx
  ACCESS_MASK v60; // eax
  volatile signed __int64 *v61; // rdi
  signed __int64 v62; // rax
  signed __int64 v63; // rcx
  bool v64; // zf
  signed __int64 v65; // rtt
  struct _KTHREAD *v66; // r14
  volatile signed __int64 *v67; // rsi
  volatile signed __int64 *v68; // rbx
  signed __int64 v69; // rax
  signed __int64 v70; // rax
  char *v71; // r15
  volatile signed __int64 *i; // rax
  int PreviouslyGrantedAccess; // eax
  __int64 QuantumTarget; // rax
  struct _EX_RUNDOWN_REF *v75; // rdi
  char *v76; // rbx
  __int64 v77; // rcx
  __int64 v78; // r12
  __int64 v79; // rdi
  int v80; // r8d
  signed __int64 v81; // rdx
  signed __int64 v82; // rax
  signed __int64 v83; // rbx
  unsigned int v84; // edx
  unsigned __int64 v85; // rbx
  struct _KTHREAD *v86; // rax
  signed __int64 v87; // rax
  signed __int64 v88; // rtt
  int v89; // r15d
  volatile signed __int64 *v90; // rbx
  signed __int64 v91; // rax
  signed __int64 v92; // rcx
  bool v93; // zf
  signed __int64 v94; // rtt
  struct _KTHREAD *v95; // r14
  volatile signed __int64 *v96; // rsi
  volatile signed __int64 *v97; // rdi
  signed __int64 v98; // rax
  signed __int64 v99; // rax
  _DWORD *AuxData; // rax
  unsigned int v101; // r15d
  char *v102; // rbx
  unsigned __int64 v103; // rcx
  int v104; // edi
  __int64 v105; // rcx
  int v106; // esi
  bool v107; // al
  volatile signed __int64 *k; // rax
  int v109; // r8d
  _DWORD *v110; // rcx
  __int64 v111; // rbx
  char v112; // al
  unsigned int Number; // eax
  unsigned int v114; // r12d
  int v115; // r13d
  unsigned int v116; // r15d
  unsigned int v117; // r14d
  ULONG_PTR v118; // rdi
  unsigned __int64 *v119; // rsi
  unsigned __int64 v120; // rax
  int v121; // eax
  unsigned int v122; // eax
  volatile signed __int64 *v123; // rsi
  char HandleTableEntrySlow; // r14
  _DWORD *v125; // rdi
  _DWORD *v126; // r15
  unsigned __int64 v127; // r15
  __int64 v128; // rdi
  POBJECT_TYPE *v129; // r14
  bool v130; // r10
  unsigned __int64 *v131; // rsi
  char v132; // al
  PVOID SecurityDescriptor; // r14
  __int64 v134; // rax
  PVOID *v135; // rcx
  unsigned __int8 v136; // di
  _QWORD *v137; // r8
  __int64 v138; // r8
  BOOLEAN v139; // r13
  PVOID v140; // rdi
  __int64 *v141; // r15
  PACCESS_STATE v142; // rdi
  __int64 v143; // r8
  PACCESS_STATE v144; // rsi
  UNICODE_STRING *p_ObjectTypeName; // r12
  unsigned __int16 v146; // r13
  __int64 p_ObjectName; // rsi
  unsigned __int64 CurrentThreadProcessId; // rax
  unsigned __int64 v149; // rax
  __int64 v150; // rdx
  int v151; // esi
  _DWORD *v152; // rdx
  char *ClientToken; // rdi
  struct _KTHREAD *v154; // rax
  char *PrimaryToken; // rsi
  struct _KTHREAD *v156; // rax
  struct _ERESOURCE *v157; // rcx
  struct _KTHREAD *v158; // rax
  unsigned __int64 v159; // rax
  PVOID v160; // rdi
  int GrantedAccess; // [rsp+40h] [rbp-E0h]
  int AccessStatus; // [rsp+48h] [rbp-D8h]
  bool v164; // [rsp+A0h] [rbp-80h]
  char v165; // [rsp+A1h] [rbp-7Fh]
  int v166; // [rsp+A4h] [rbp-7Ch] BYREF
  char v167; // [rsp+A8h] [rbp-78h]
  PACCESS_STATE AccessState; // [rsp+B0h] [rbp-70h]
  PVOID Object; // [rsp+B8h] [rbp-68h]
  NTSTATUS v170; // [rsp+C0h] [rbp-60h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+C8h] [rbp-58h]
  ACCESS_MASK AccessMask; // [rsp+D0h] [rbp-50h] BYREF
  struct _KTHREAD *v173; // [rsp+D8h] [rbp-48h]
  unsigned __int64 v174; // [rsp+E0h] [rbp-40h]
  SIZE_T NumberOfBytes; // [rsp+E8h] [rbp-38h] BYREF
  unsigned int v176; // [rsp+F0h] [rbp-30h]
  int v177; // [rsp+F8h] [rbp-28h]
  char *v178; // [rsp+100h] [rbp-20h] BYREF
  int v179; // [rsp+108h] [rbp-18h] BYREF
  ACCESS_MASK v180; // [rsp+10Ch] [rbp-14h] BYREF
  POBJECT_TYPE *v181; // [rsp+110h] [rbp-10h]
  int v182; // [rsp+118h] [rbp-8h]
  int v183; // [rsp+11Ch] [rbp-4h]
  void *v184; // [rsp+120h] [rbp+0h] BYREF
  HANDLE TargetHandle; // [rsp+128h] [rbp+8h] BYREF
  char *v186; // [rsp+130h] [rbp+10h]
  PVOID P; // [rsp+138h] [rbp+18h] BYREF
  __int64 v188; // [rsp+140h] [rbp+20h]
  _QWORD *v189; // [rsp+148h] [rbp+28h] BYREF
  _QWORD **v190; // [rsp+150h] [rbp+30h]
  PPRIVILEGE_SET Privileges; // [rsp+158h] [rbp+38h] BYREF
  int v192[2]; // [rsp+160h] [rbp+40h] BYREF
  unsigned __int64 *v193; // [rsp+168h] [rbp+48h]
  unsigned __int64 v194; // [rsp+170h] [rbp+50h]
  unsigned __int64 v195; // [rsp+178h] [rbp+58h]
  __int64 v196; // [rsp+180h] [rbp+60h] BYREF
  __int128 v197; // [rsp+188h] [rbp+68h]
  __int64 v198; // [rsp+198h] [rbp+78h] BYREF
  char *v199; // [rsp+1A0h] [rbp+80h]
  __int64 v200; // [rsp+1A8h] [rbp+88h]
  __int64 v201; // [rsp+1B0h] [rbp+90h]
  __int64 *v202; // [rsp+1B8h] [rbp+98h]
  PVOID v203; // [rsp+1C0h] [rbp+A0h] BYREF
  PVOID *v204; // [rsp+1C8h] [rbp+A8h]
  struct _PRIVILEGE_SET RequiredPrivileges; // [rsp+1D0h] [rbp+B0h] BYREF

  v11 = a6;
  v12 = a4;
  v13 = a8;
  v14 = a1;
  v204 = a10;
  v193 = a11;
  v189 = 0LL;
  v190 = 0LL;
  v182 = 0;
  v183 = a9;
  AccessMask = a3;
  AccessState = a4;
  Object = a2;
  Process = KeGetCurrentThread()->ApcState.Process;
  BugCheckParameter1 = (ULONG_PTR)Process;
  v177 = a1;
  v176 = a6;
  v173 = a8;
  v178 = 0LL;
  v165 = 0;
  v167 = 0;
  if ( (a6 & 0x200) != 0 )
  {
    v16 = ObpKernelHandleTable;
    BugCheckParameter1 = (ULONG_PTR)PsInitialSystemProcess;
LABEL_8:
    v174 = v16;
    goto LABEL_9;
  }
  if ( KeGetCurrentThread()->ApcStateIndex != 1 )
  {
    v16 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[4];
    goto LABEL_8;
  }
  v174 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Process);
  v16 = v174;
  if ( !v174 )
    return (unsigned int)-1073741558;
  a2 = (char *)Object;
  v14 = v177;
  v167 = 1;
LABEL_9:
  v164 = v16 == ObpKernelHandleTable;
  if ( !v12 || v16 == ObpKernelHandleTable && !v12->OriginalDesiredAccess )
  {
    PreviouslyGrantedAccess = AccessMask;
    if ( (AccessMask & 0x2000000) != 0 )
    {
      PreviouslyGrantedAccess = AccessMask & 0xEDFFFFFF | 0x10000000;
      AccessMask = PreviouslyGrantedAccess;
    }
    v71 = (char *)Object;
    if ( (PreviouslyGrantedAccess & 0xF0000000) != 0 )
    {
      RtlMapGenericMask(
        &AccessMask,
        (PGENERIC_MAPPING)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)]
                         + 76));
      PreviouslyGrantedAccess = AccessMask;
    }
    goto LABEL_130;
  }
  v18 = (ULONG_PTR)(a2 - 48);
  AccessMode = 1;
  v20 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*(a2 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)a2 - 48) >> 8)];
  if ( (a6 & 0x400) == 0 )
    AccessMode = a7;
  if ( (unsigned int)(v14 - 1) <= 1 )
  {
    v180 = 0;
    Privileges = 0LL;
    if ( *(__int64 (__fastcall **)(_QWORD *, int, DWORD *, void *, ULONG *, __int64 *, POOL_TYPE, GENERIC_MAPPING *))(v20 + 152) == SeDefaultObjectMethod )
    {
      _m_prefetchw((const void *)(v18 + 40));
      v42 = *(_QWORD *)(v18 + 40);
      if ( (v42 & 0xF) != 0 )
      {
        do
        {
          v43 = _InterlockedCompareExchange64((volatile signed __int64 *)(v18 + 40), v42 - 1, v42);
          if ( v42 == v43 )
            break;
          v42 = v43;
        }
        while ( (v43 & 0xF) != 0 );
      }
      v44 = v42;
      v45 = v42 & 0xF;
      PoolWithTag = (volatile signed __int64 *)(v44 & 0xFFFFFFFFFFFFFFF0uLL);
      if ( v45 <= 1 && PoolWithTag )
      {
        if ( v45 == 1 )
        {
          if ( _InterlockedExchangeAdd64(PoolWithTag - 3, 0xFuLL) <= 0 )
            __fastfail(0xEu);
        }
        else
        {
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
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
        v48 = *(_QWORD *)(v18 + 40);
        while ( (v48 & 0xF) == 0 )
        {
          if ( PoolWithTag != (volatile signed __int64 *)(v48 & 0xFFFFFFFFFFFFFFF0uLL) )
            break;
          v49 = v48;
          v48 = _InterlockedCompareExchange64((volatile signed __int64 *)(v18 + 40), v48 + 15, v48);
          if ( v49 == v48 )
            goto LABEL_78;
        }
        ObDereferenceSecurityDescriptor((__int64)PoolWithTag, 0xFu);
      }
LABEL_78:
      v50 = 0;
      if ( !PoolWithTag && ((*(_BYTE *)(v20 + 66) & 8) != 0 || (*(_BYTE *)(v18 + 26) & 2) != 0) )
        KeBugCheckEx(0x189u, v18, v20, 1uLL, 0LL);
      v17 = 0;
    }
    else
    {
      v179 = 447;
      LODWORD(NumberOfBytes) = ObpDefaultSecurityDescriptorLength;
      PoolWithTag = (volatile signed __int64 *)ExAllocatePoolWithTag(
                                                 PagedPool,
                                                 (unsigned int)ObpDefaultSecurityDescriptorLength,
                                                 0x7153624Fu);
      if ( !PoolWithTag )
      {
        v17 = -1073741670;
        v170 = -1073741670;
        goto LABEL_117;
      }
      v51 = v18 + 40;
      v17 = (*(__int64 (__fastcall **)(PVOID, __int64, int *, volatile signed __int64 *, SIZE_T *, ULONG_PTR, _DWORD, ULONG_PTR, KPROCESSOR_MODE))(v20 + 152))(
              Object,
              1LL,
              &v179,
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
        PoolWithTag = (volatile signed __int64 *)ExAllocatePoolWithTag(
                                                   PagedPool,
                                                   (unsigned int)NumberOfBytes,
                                                   0x7153624Fu);
        if ( !PoolWithTag )
        {
          v17 = -1073741670;
          v170 = -1073741670;
          goto LABEL_117;
        }
        LOBYTE(GrantedAccess) = AccessMode;
        v17 = (*(__int64 (__fastcall **)(PVOID, __int64, int *, volatile signed __int64 *, SIZE_T *, ULONG_PTR, _DWORD, ULONG_PTR, int))(v20 + 152))(
                Object,
                1LL,
                &v179,
                PoolWithTag,
                &NumberOfBytes,
                v51,
                *(_DWORD *)(v20 + 100),
                v20 + 76,
                GrantedAccess);
      }
      v50 = 1;
      if ( v17 < 0 )
      {
        ExFreePoolWithTag((PVOID)PoolWithTag, 0);
        v170 = v17;
        goto LABEL_117;
      }
    }
    if ( !PoolWithTag )
    {
      v12 = AccessState;
      v170 = v17;
      AccessState->PreviouslyGrantedAccess |= AccessState->RemainingDesiredAccess;
      v12->RemainingDesiredAccess = 0;
      goto LABEL_125;
    }
    v52 = AccessState;
    v53 = KeGetCurrentThread();
    p_SubjectSecurityContext = &AccessState->SubjectSecurityContext;
    --v53->KernelApcDisable;
    ExAcquireResourceSharedLite(*((PERESOURCE *)p_SubjectSecurityContext->PrimaryToken + 6), 1u);
    if ( p_SubjectSecurityContext->ClientToken )
    {
      v55 = KeGetCurrentThread();
      --v55->KernelApcDisable;
      ExAcquireResourceSharedLite(*((PERESOURCE *)p_SubjectSecurityContext->ClientToken + 6), 1u);
    }
    v56 = SeAccessCheck(
            (PSECURITY_DESCRIPTOR)PoolWithTag,
            p_SubjectSecurityContext,
            1u,
            v52->RemainingDesiredAccess,
            v52->PreviouslyGrantedAccess,
            &Privileges,
            (PGENERIC_MAPPING)(v20 + 76),
            AccessMode,
            &v180,
            &v170);
    v57 = Privileges;
    v58 = v56;
    if ( Privileges )
    {
      SeAppendPrivileges(AccessState, Privileges);
      CmSiFreeMemory(v57);
    }
    v59 = AccessState;
    if ( v58 )
    {
      v60 = v180;
      AccessState->PreviouslyGrantedAccess |= v180;
      v59->RemainingDesiredAccess &= ~(v60 | 0x2000000);
    }
    if ( AccessMode )
      SeOpenObjectAuditAlarmWithTransaction(
        (PUNICODE_STRING)(v20 + 16),
        Object,
        0LL,
        (PSECURITY_DESCRIPTOR)PoolWithTag,
        v59,
        0,
        v58,
        AccessMode,
        0LL,
        &v59->GenerateOnClose);
    ExReleaseResourceLite(*((PERESOURCE *)p_SubjectSecurityContext->PrimaryToken + 6));
    KeLeaveCriticalRegion();
    if ( p_SubjectSecurityContext->ClientToken )
    {
      ExReleaseResourceLite(*((PERESOURCE *)p_SubjectSecurityContext->ClientToken + 6));
      KeLeaveCriticalRegion();
    }
    if ( v50 )
    {
      ExFreePoolWithTag((PVOID)PoolWithTag, 0);
    }
    else
    {
      v61 = PoolWithTag - 4;
      _m_prefetchw((const void *)(v61 + 1));
      v62 = *((_QWORD *)v61 + 1);
      v63 = v62 - 1;
      v64 = v62 == 1;
      if ( v62 - 1 <= 0 )
      {
LABEL_107:
        if ( !v64 )
          __fastfail(0xEu);
        v66 = KeGetCurrentThread();
        v67 = (volatile signed __int64 *)((char *)&ObsSecurityDescriptorCache
                                        + 16 * (unsigned __int8)*((_DWORD *)v61 + 4));
        --v66->KernelApcDisable;
        v68 = v67 + 1;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)v67, 0LL);
        v69 = _InterlockedExchangeAdd64(v61 + 1, 0xFFFFFFFFFFFFFFFFuLL);
        v39 = v69 <= 1;
        v70 = v69 - 1;
        if ( v39 )
        {
          if ( v70 )
            __fastfail(0xEu);
          for ( i = (volatile signed __int64 *)*v68; i != v61; i = (volatile signed __int64 *)*i )
            v68 = i;
          *v68 = *v61;
          if ( (_InterlockedExchangeAdd64(v67, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v67);
          KeAbPostRelease((ULONG_PTR)v67);
          KeLeaveCriticalRegionThread((__int64)v66);
          ExFreePoolWithTag((PVOID)v61, 0x6353624Fu);
        }
        else
        {
          if ( (_InterlockedExchangeAdd64(v67, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v67);
          KeAbPostRelease((ULONG_PTR)v67);
          KeLeaveCriticalRegionThread((__int64)v66);
        }
      }
      else
      {
        while ( 1 )
        {
          v65 = v62;
          v62 = _InterlockedCompareExchange64(v61 + 1, v63, v62);
          if ( v65 == v62 )
            break;
          v63 = v62 - 1;
          v64 = v62 == 1;
          if ( v62 - 1 <= 0 )
            goto LABEL_107;
        }
      }
    }
    v33 = v58 == 0;
    v13 = v173;
    if ( !v33 )
    {
      v12 = AccessState;
      goto LABEL_125;
    }
    v17 = v170;
LABEL_117:
    if ( v17 < 0 )
      goto LABEL_313;
    v12 = AccessState;
    v11 = v176;
    v71 = (char *)Object;
    goto LABEL_131;
  }
  memset(&RequiredPrivileges, 0, sizeof(RequiredPrivileges));
  RemainingDesiredAccess = v12->RemainingDesiredAccess;
  if ( (RemainingDesiredAccess & 0x2000000) != 0 )
  {
    RemainingDesiredAccess = RemainingDesiredAccess & 0xEDFFFFFF | 0x10000000;
    v12->RemainingDesiredAccess = RemainingDesiredAccess;
  }
  if ( (RemainingDesiredAccess & 0xF0000000) != 0 )
  {
    RtlMapGenericMask(&v12->RemainingDesiredAccess, (PGENERIC_MAPPING)(v20 + 76));
    RemainingDesiredAccess = v12->RemainingDesiredAccess;
  }
  if ( (RemainingDesiredAccess & 0x1000000) != 0 )
  {
    RequiredPrivileges.PrivilegeCount = 1;
    RequiredPrivileges.Privilege[0].Attributes = 0;
    RequiredPrivileges.Control = 1;
    RequiredPrivileges.Privilege[0].Luid = SeSecurityPrivilege;
    if ( !SePrivilegeCheck(&RequiredPrivileges, &v12->SubjectSecurityContext, AccessMode) )
    {
      SePrivilegedServiceAuditAlarm(0, (__int64 *)&v12->SubjectSecurityContext, (__int64)&RequiredPrivileges, 0);
      v17 = -1073741727;
      goto LABEL_313;
    }
    v12->RemainingDesiredAccess &= ~0x1000000u;
    v12->PreviouslyGrantedAccess |= 0x1000000u;
    SeAppendPrivileges(v12, &RequiredPrivileges);
  }
  v12->PreviouslyGrantedAccess |= v12->RemainingDesiredAccess;
  v12->RemainingDesiredAccess = 0;
  v12->PreviouslyGrantedAccess &= *(_DWORD *)(v20 + 92) | 0x1000000;
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
      v27 = KeGetCurrentThread();
      --v27->KernelApcDisable;
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
  v12->PreviouslyGrantedAccess &= ~(unsigned int)SeComputeCreatorDeniedRights(
                                                   &v12->SubjectSecurityContext,
                                                   (__int64)v12,
                                                   v12->PreviouslyGrantedAccess,
                                                   v26);
  if ( v26 )
  {
    v30 = (volatile signed __int64 *)(v26 - 32);
    _m_prefetchw((const void *)(v26 - 32 + 8));
    v31 = *(_QWORD *)(v26 - 32 + 8);
    v32 = v31 - 1;
    v33 = v31 == 1;
    if ( v31 - 1 <= 0 )
    {
LABEL_45:
      if ( !v33 )
        __fastfail(0xEu);
      v35 = KeGetCurrentThread();
      v36 = (volatile signed __int64 *)((char *)&ObsSecurityDescriptorCache + 16 * (unsigned __int8)*((_DWORD *)v30 + 4));
      --v35->KernelApcDisable;
      v37 = v36 + 1;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)v36, 0LL);
      v38 = _InterlockedExchangeAdd64(v30 + 1, 0xFFFFFFFFFFFFFFFFuLL);
      v39 = v38 <= 1;
      v40 = v38 - 1;
      if ( v39 )
      {
        if ( v40 )
          __fastfail(0xEu);
        for ( j = (volatile signed __int64 *)*v37; j != v30; j = (volatile signed __int64 *)*j )
          v37 = j;
        *v37 = *v30;
        if ( (_InterlockedExchangeAdd64(v36, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v36);
        KeAbPostRelease((ULONG_PTR)v36);
        KeLeaveCriticalRegionThread((__int64)v35);
        ExFreePoolWithTag((PVOID)v30, 0x6353624Fu);
        v12 = AccessState;
        v170 = 0;
        goto LABEL_125;
      }
      if ( (_InterlockedExchangeAdd64(v36, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v36);
      KeAbPostRelease((ULONG_PTR)v36);
      KeLeaveCriticalRegionThread((__int64)v35);
      v12 = AccessState;
    }
    else
    {
      while ( 1 )
      {
        v34 = v31;
        v31 = _InterlockedCompareExchange64(v30 + 1, v32, v31);
        if ( v34 == v31 )
          break;
        v32 = v31 - 1;
        v33 = v31 == 1;
        if ( v31 - 1 <= 0 )
          goto LABEL_45;
      }
    }
  }
  v170 = 0;
LABEL_125:
  PreviouslyGrantedAccess = v12->PreviouslyGrantedAccess;
  v11 = v176;
  v71 = (char *)Object;
LABEL_130:
  v166 = PreviouslyGrantedAccess;
LABEL_131:
  QuantumTarget = 0LL;
  v184 = 0LL;
  if ( v13 )
  {
    QuantumTarget = v13->QuantumTarget;
    v184 = (void *)QuantumTarget;
  }
  v17 = ObpIncrementHandleCountEx(v177, (unsigned int)&v166, BugCheckParameter1, (_DWORD)v71, a7, v11, QuantumTarget);
  if ( v17 < 0 )
    goto LABEL_313;
  if ( v12 )
  {
    if ( v13 )
    {
      v75 = (struct _EX_RUNDOWN_REF *)BugCheckParameter1;
      v17 = ObpInsertOrLocateNamedObject(BugCheckParameter1, v71, (__int64)&v166, (__int64)v12, a7, v13, &v178);
      if ( v17 < 0 )
        goto LABEL_314;
      v76 = v178;
      if ( v178 == v71 )
      {
        v76 = 0LL;
        v178 = 0LL;
      }
      else
      {
        v71 = v178;
        Object = v178;
        v165 = 1;
      }
    }
    else
    {
      v76 = v178;
    }
    if ( v12->GenerateOnClose )
      LOBYTE(v11) = v11 | 4;
  }
  else
  {
    v76 = v178;
  }
  v77 = (unsigned __int8)*(v71 - 24);
  v78 = (__int64)(v71 - 48);
  v186 = v71 - 48;
  v188 = (unsigned __int8)((unsigned __int16)((_WORD)v71 - 48) >> 8);
  v79 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v188 ^ v77];
  v181 = (POBJECT_TYPE *)v79;
  v80 = (*(_DWORD *)(v79 + 92) | 0x1000000) & v166;
  v166 = v80;
  if ( v12 )
  {
    _m_prefetchw((const void *)(v78 + 40));
    v81 = *(_QWORD *)(v78 + 40);
    if ( (v81 & 0xF) != 0 )
    {
      do
      {
        v82 = _InterlockedCompareExchange64((volatile signed __int64 *)(v78 + 40), v81 - 1, v81);
        if ( v81 == v82 )
          break;
        v81 = v82;
      }
      while ( (v82 & 0xF) != 0 );
    }
    v83 = v81;
    v84 = v81 & 0xF;
    v85 = v83 & 0xFFFFFFFFFFFFFFF0uLL;
    if ( v84 <= 1 && v85 )
    {
      if ( v84 == 1 )
      {
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v85 - 24), 0xFuLL) <= 0 )
          __fastfail(0xEu);
      }
      else
      {
        v86 = KeGetCurrentThread();
        --v86->KernelApcDisable;
        ExAcquirePushLockSharedEx(v78 + 16, 0LL);
        v85 = *(_QWORD *)(v78 + 40) & 0xFFFFFFFFFFFFFFF0uLL;
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v85 - 24), 0x10uLL) <= 0 )
          __fastfail(0xEu);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v78 + 16), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v78 + 16));
        KeAbPostRelease(v78 + 16);
        KeLeaveCriticalRegion();
      }
      _m_prefetchw((const void *)(v78 + 40));
      v87 = *(_QWORD *)(v78 + 40);
      while ( (v87 & 0xF) == 0 )
      {
        if ( v85 != (v87 & 0xFFFFFFFFFFFFFFF0uLL) )
          break;
        v88 = v87;
        v87 = _InterlockedCompareExchange64((volatile signed __int64 *)(v78 + 40), v87 + 15, v87);
        if ( v88 == v87 )
          goto LABEL_163;
      }
      ObDereferenceSecurityDescriptor(v85, 0xFu);
    }
LABEL_163:
    v89 = SeComputeCreatorDeniedRights(&v12->SubjectSecurityContext, (__int64)v12, v166, v85);
    if ( v85 )
    {
      v90 = (volatile signed __int64 *)(v85 - 32);
      _m_prefetchw((const void *)(v90 + 1));
      v91 = *((_QWORD *)v90 + 1);
      v92 = v91 - 1;
      v93 = v91 == 1;
      if ( v91 - 1 <= 0 )
      {
LABEL_167:
        if ( !v93 )
          __fastfail(0xEu);
        v95 = KeGetCurrentThread();
        v96 = (volatile signed __int64 *)((char *)&ObsSecurityDescriptorCache
                                        + 16 * (unsigned __int8)*((_DWORD *)v90 + 4));
        --v95->KernelApcDisable;
        v97 = v96 + 1;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)v96, 0LL);
        v98 = _InterlockedExchangeAdd64(v90 + 1, 0xFFFFFFFFFFFFFFFFuLL);
        v39 = v98 <= 1;
        v99 = v98 - 1;
        if ( v39 )
        {
          if ( v99 )
            __fastfail(0xEu);
          for ( k = (volatile signed __int64 *)*v97; k != v90; k = (volatile signed __int64 *)*k )
            v97 = k;
          *v97 = *v90;
          if ( (_InterlockedExchangeAdd64(v96, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v96);
          KeAbPostRelease((ULONG_PTR)v96);
          KeLeaveCriticalRegionThread((__int64)v95);
          ExFreePoolWithTag((PVOID)v90, 0x6353624Fu);
        }
        else
        {
          if ( (_InterlockedExchangeAdd64(v96, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v96);
          KeAbPostRelease((ULONG_PTR)v96);
          KeLeaveCriticalRegionThread((__int64)v95);
        }
        v12 = AccessState;
      }
      else
      {
        while ( 1 )
        {
          v94 = v91;
          v91 = _InterlockedCompareExchange64(v90 + 1, v92, v91);
          if ( v94 == v91 )
            break;
          v92 = v91 - 1;
          v93 = v91 == 1;
          if ( v91 - 1 <= 0 )
            goto LABEL_167;
        }
      }
    }
    AuxData = v12->AuxData;
    v80 = ~v89 & v166;
    v76 = v178;
    v79 = (__int64)v181;
    v166 = v80;
    v12->PreviouslyGrantedAccess = v80;
    v182 = AuxData[7];
  }
  v101 = a5;
  if ( a5 )
  {
    ObReferenceObjectExWithTag((ULONG_PTR)Object, a5);
    v80 = v166;
  }
  if ( v76 )
  {
    ObfDereferenceObject(v76);
    v80 = v166;
  }
  v102 = (char *)Object;
  if ( v173 && !v165 && (POBJECT_TYPE)v79 == ObpSymbolicLinkObjectType )
  {
    ObpCreateSymbolicLinkName(Object);
    v80 = v166;
  }
  v190 = &v189;
  v189 = &v189;
  if ( (*(_BYTE *)(v79 + 66) & 0x40) != 0 && *(_QWORD *)(v79 + 200) != v79 + 200 )
  {
    v103 = (unsigned __int8)*(v102 - 24);
    v198 = 0LL;
    v196 = 0LL;
    v199 = 0LL;
    v200 = 0LL;
    v104 = v80;
    v201 = 0LL;
    v202 = 0LL;
    v197 = 0uLL;
    v105 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)v188 ^ v103];
    v106 = v80 & *(_DWORD *)(v105 + 96);
    HIDWORD(v198) = v164;
    HIDWORD(v196) = v80;
    LODWORD(v196) = v80;
    v197 = 0LL;
    v202 = &v196;
    LODWORD(v198) = 1;
    v199 = v102;
    v201 = 0LL;
    v200 = v105;
    v17 = ObpCallPreOperationCallbacks((struct _EX_RUNDOWN_REF *)v105, (__int64)&v198, &v189);
    v107 = v164;
    if ( v17 >= 0 && !v164 )
    {
      v104 &= v106 | v196;
      v107 = 0;
    }
    if ( v17 < 0 )
    {
      v75 = (struct _EX_RUNDOWN_REF *)BugCheckParameter1;
      ObpDecrementHandleCount(BugCheckParameter1);
      if ( a5 )
      {
        if ( a5 > 1 )
          _InterlockedExchangeAdd64((volatile signed __int64 *)v78, (int)(1 - a5));
        ObfDereferenceObject(Object);
      }
      goto LABEL_314;
    }
    if ( v107 )
    {
      v80 = v166;
    }
    else
    {
      v166 = v104;
      v80 = v104;
      if ( v12 )
        v12->PreviouslyGrantedAccess = v104;
    }
  }
  v195 = 0LL;
  v109 = v80 & 0x1FFFFFF;
  if ( (v11 & 8) != 0 )
    v109 |= 0x2000000u;
  LODWORD(v195) = v109;
  v194 = ((v78 & 0xFFFFFFFFFFFFFFF1uLL) << 16) | ((unsigned __int64)(v11 & 7) << 17) | 1;
  v173 = KeGetCurrentThread();
  --v173->KernelApcDisable;
  v110 = (_DWORD *)v174;
  v111 = 0LL;
  v112 = *(_BYTE *)(v174 + 44);
  if ( (v112 & 4) != 0 )
  {
LABEL_236:
    v128 = (__int64)v173;
    goto LABEL_237;
  }
  if ( (v112 & 1) != 0 )
    Number = 0;
  else
    Number = KeGetPcr()->Prcb.Number;
  v114 = ExpFreeListCount;
  v176 = Number;
LABEL_211:
  v115 = *v110;
  v116 = 0;
  v117 = Number;
  while ( 1 )
  {
    v118 = (ULONG_PTR)&v110[16 * v117 + 16];
    if ( *(_QWORD *)(v118 + 8) )
      break;
LABEL_222:
    v122 = v117 + 1;
    ++v116;
    v117 = 0;
    if ( v122 != v114 )
      v117 = v122;
    if ( v116 >= v114 )
    {
      v123 = (volatile signed __int64 *)(v110 + 14);
      HandleTableEntrySlow = 1;
      v125 = &v110[16 * v176 + 16];
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(v110 + 14), 0LL);
      v126 = (_DWORD *)v174;
      if ( v115 == *(_DWORD *)v174 )
        HandleTableEntrySlow = ExpAllocateHandleTableEntrySlow(v174, v125);
      if ( (_InterlockedExchangeAdd64(v123, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v123);
      KeAbPostRelease((ULONG_PTR)v123);
      if ( HandleTableEntrySlow )
      {
        Number = v176;
        v110 = v126;
        goto LABEL_211;
      }
      goto LABEL_235;
    }
  }
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&v110[16 * v117 + 16], 0LL);
  v119 = *(unsigned __int64 **)(v118 + 8);
  if ( v119 )
  {
    v120 = v119[1];
    *(_QWORD *)(v118 + 8) = v120;
    if ( !v120 )
      *(_QWORD *)(v118 + 16) = 0LL;
    v121 = ++*(_DWORD *)(v118 + 24);
    if ( v121 > *(_DWORD *)(v118 + 28) )
      *(_DWORD *)(v118 + 28) = v121;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v118, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v118);
  KeAbPostRelease(v118);
  if ( !v119 )
  {
    v110 = (_DWORD *)v174;
    goto LABEL_222;
  }
  v111 = *(_QWORD *)(((unsigned __int64)v119 & 0xFFFFFFFFFFFFF000uLL) + 8)
       + 4 * ((__int64)((__int64)v119 - ((unsigned __int64)v119 & 0xFFFFFFFFFFFFF000uLL)) >> 4);
  if ( v182 || a9 )
  {
    v127 = v174;
    if ( (unsigned int)ExpSetHandleExtraInfo(v174, v111) )
    {
      ExpFreeHandleTableEntry(v127, v111, v119);
      v111 = 0LL;
LABEL_235:
      v101 = a5;
      v12 = AccessState;
      v78 = (__int64)v186;
      goto LABEL_236;
    }
  }
  else
  {
    v127 = v174;
  }
  v128 = (__int64)v173;
  if ( *(_QWORD *)(v127 + 96) )
    ExpUpdateDebugInfo(v127, v173, v111, 1LL);
  v78 = (__int64)v186;
  v12 = AccessState;
  v101 = a5;
  v119[1] = v195;
  *v119 = v194;
LABEL_237:
  KeLeaveCriticalRegionThread(v128);
  if ( !v111 )
  {
    ObpDecrementHandleCount(BugCheckParameter1);
    if ( v101 )
    {
      if ( v101 > 1 )
        _InterlockedExchangeAdd64((volatile signed __int64 *)v78, (int)(1 - v101));
      ObfDereferenceObject(Object);
    }
    v129 = v181;
    v17 = -1073741670;
    v130 = v164;
    v131 = v193;
    goto LABEL_308;
  }
  if ( v12 )
  {
    v132 = *(_BYTE *)(v78 + 26);
    SecurityDescriptor = 0LL;
    P = 0LL;
    if ( (v132 & 0x20) == 0 || (v134 = ObpInfoMaskToOffset[v132 & 0x3F], v135 = (PVOID *)(v78 - v134), v78 == v134) )
    {
      if ( v184 )
        SecurityDescriptor = v184;
    }
    else if ( *v135 )
    {
      SecurityDescriptor = *v135;
    }
    else if ( v184 )
    {
      ObpSetObjectAuditInfo(v78, &v184, 0LL);
    }
    else if ( (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)v188 ^ (unsigned __int64)*(unsigned __int8 *)(v78 + 24)] != IoFileObjectType
           || (*(_DWORD *)(*((_QWORD *)Object + 1) + 52LL) & 0x10) == 0 )
    {
      v136 = 0;
      v137 = AccessState->AuxData;
      if ( v137 && (v138 = v137[7]) != 0 )
        v136 = 1;
      else
        v138 = 0LL;
      if ( (int)ObpAllocateAndQuerySecurityDescriptorInfo(Object, 32LL, v138, &P) >= 0 )
      {
        SecurityDescriptor = P;
        ObpSetObjectAuditInfo(v78, &P, v136);
      }
    }
    v139 = 0;
    *(_QWORD *)v192 = v111;
    v140 = 0LL;
    TargetHandle = 0LL;
    v141 = (__int64 *)AccessState->AuxData;
    if ( !SecurityDescriptor )
    {
      SecurityDescriptor = (PVOID)v141[7];
      if ( !SecurityDescriptor )
        SecurityDescriptor = AccessState->SecurityDescriptor;
    }
    if ( AccessState->GenerateAudit )
    {
      if ( AccessState->AuditPrivileges )
      {
        v142 = AccessState;
        SepAdtPrivilegeObjectAuditAlarm(
          (unsigned int)&SeSubsystemName,
          (_DWORD)AccessState + 144,
          (_DWORD)AccessState + 128,
          v111,
          (__int64)AccessState->SubjectSecurityContext.ClientToken,
          (__int64)AccessState->SubjectSecurityContext.PrimaryToken,
          (__int64)AccessState->SubjectSecurityContext.ProcessAuditId,
          AccessState->PreviouslyGrantedAccess,
          *v141,
          1);
        goto LABEL_280;
      }
    }
    else if ( !*((_BYTE *)v141 + 216) )
    {
      v142 = AccessState;
      goto LABEL_280;
    }
    if ( ZwDuplicateObject(
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           (HANDLE)v111,
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           &TargetHandle,
           0,
           0x200u,
           2u) >= 0 )
    {
      ObReferenceObjectByHandle(TargetHandle, 0, 0LL, 0, &v203, 0LL);
      v140 = v203;
    }
    v144 = AccessState;
    LOBYTE(v143) = 1;
    p_ObjectTypeName = &AccessState->ObjectTypeName;
    LOWORD(v170) = SepAdtClassifyObjectIntoSubCategory(v140, &AccessState->ObjectTypeName, v143, 0LL);
    v146 = v170;
    if ( v140 )
      ObfDereferenceObject(v140);
    if ( TargetHandle )
    {
      ZwClose(TargetHandle);
      TargetHandle = 0LL;
    }
    p_ObjectName = (__int64)&v144->ObjectName;
    CurrentThreadProcessId = PsGetCurrentThreadProcessId();
    v142 = AccessState;
    v139 = SepAdtOpenObjectAuditAlarm(
             v146,
             (int)&SeSubsystemName,
             (int)v192,
             (int)p_ObjectTypeName,
             p_ObjectName,
             SecurityDescriptor,
             (__int64)AccessState->SubjectSecurityContext.ClientToken,
             (__int64)AccessState->SubjectSecurityContext.PrimaryToken,
             AccessState->OriginalDesiredAccess,
             AccessState->PreviouslyGrantedAccess,
             *v141,
             1,
             CurrentThreadProcessId,
             2,
             0LL,
             0,
             0LL,
             (__int64)(v141 + 4),
             (__int64)AccessState);
    v149 = PsGetCurrentThreadProcessId();
    LOBYTE(AccessStatus) = 1;
    SepAdtStagingEvent(
      (unsigned __int16)v170,
      v150,
      v192,
      p_ObjectTypeName,
      p_ObjectName,
      v142->SubjectSecurityContext.ClientToken,
      v142->SubjectSecurityContext.PrimaryToken,
      v142->OriginalDesiredAccess,
      v142->PreviouslyGrantedAccess,
      AccessStatus,
      v149,
      v142);
    v78 = (__int64)v186;
LABEL_280:
    v151 = v177;
    v142->GenerateOnClose = v139;
    if ( !v151 )
    {
      v152 = *(_DWORD **)v142->AuxData;
      if ( v152 )
      {
        if ( *v152 && KeGetCurrentThread()->PreviousMode )
          SepAdtPrivilegeObjectAuditAlarm(
            (unsigned int)&SeSubsystemName,
            0,
            0,
            v111,
            (__int64)v142->SubjectSecurityContext.ClientToken,
            (__int64)v142->SubjectSecurityContext.PrimaryToken,
            (__int64)v142->SubjectSecurityContext.ProcessAuditId,
            v142->PreviouslyGrantedAccess,
            (__int64)v152,
            1);
      }
    }
    if ( P )
      ExFreePoolWithTag(P, 0);
    v129 = v181;
    if ( !v151 && (v181 == CmKeyObjectType || v181 == IoFileObjectType) )
    {
      ClientToken = (char *)v142->SubjectSecurityContext.ClientToken;
      if ( ClientToken )
      {
        v154 = KeGetCurrentThread();
        PrimaryToken = (char *)AccessState->SubjectSecurityContext.PrimaryToken;
        --v154->KernelApcDisable;
        if ( PrimaryToken >= ClientToken )
        {
          ExAcquireResourceSharedLite(*((PERESOURCE *)ClientToken + 6), 1u);
          v158 = KeGetCurrentThread();
          --v158->KernelApcDisable;
          v157 = (struct _ERESOURCE *)*((_QWORD *)PrimaryToken + 6);
        }
        else
        {
          ExAcquireResourceSharedLite(*((PERESOURCE *)PrimaryToken + 6), 1u);
          v156 = KeGetCurrentThread();
          --v156->KernelApcDisable;
          v157 = (struct _ERESOURCE *)*((_QWORD *)ClientToken + 6);
        }
        ExAcquireResourceSharedLite(v157, 1u);
        if ( (*((_DWORD *)ClientToken + 50) & 0x4000) != 0
          && *((int *)ClientToken + 49) >= 2
          && !RtlEqualSid(**((PSID **)PrimaryToken + 19), **((PSID **)ClientToken + 19))
          && OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO(v78)
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
    v129 = v181;
  }
  if ( a5 && v204 )
    *v204 = Object;
  v130 = v164;
  v131 = v193;
  v159 = v111 | 0xFFFFFFFF80000000uLL;
  if ( !v164 )
    v159 = v111;
  *v193 = v159;
  v17 = v165 != 0 ? 0x40000000 : 0;
LABEL_308:
  v160 = Object;
  if ( v189 != &v189 )
    ObpPostInterceptHandleCreate((_DWORD)Object, v130, v17, v166, (__int64)&v189);
  if ( (xmmword_140572410 & 0x40) != 0 && v17 >= 0 )
    EtwpTraceHandle(4384LL, *v131, v160, v129);
LABEL_313:
  v75 = (struct _EX_RUNDOWN_REF *)BugCheckParameter1;
LABEL_314:
  if ( v167 )
    ExReleaseRundownProtection_0(v75 + 96);
  return (unsigned int)v17;
}
