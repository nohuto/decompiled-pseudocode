/*
 * XREFs of ObpCreateHandle @ 0x1405F3220
 * Callers:
 *     NtOpenProcessTokenEx @ 0x1405CFA00 (NtOpenProcessTokenEx.c)
 *     ObOpenObjectByPointer @ 0x1405D0390 (ObOpenObjectByPointer.c)
 *     ObInsertObjectEx @ 0x1405D95A0 (ObInsertObjectEx.c)
 *     ObOpenObjectByNameEx @ 0x1405F48D0 (ObOpenObjectByNameEx.c)
 * Callees:
 *     RtlEqualSid @ 0x1400053E0 (RtlEqualSid.c)
 *     PsGetCurrentThreadProcessId @ 0x140036B70 (PsGetCurrentThreadProcessId.c)
 *     SeComputeCreatorDeniedRights @ 0x14003AC70 (SeComputeCreatorDeniedRights.c)
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003C730 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection_0 @ 0x140043820 (ExReleaseRundownProtection_0.c)
 *     SepSidInTokenSidHash @ 0x140086AE4 (SepSidInTokenSidHash.c)
 *     CmSiFreeMemory @ 0x14008BCE0 (CmSiFreeMemory.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     SeAccessCheck @ 0x1400C6350 (SeAccessCheck.c)
 *     OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x140109A70 (OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO.c)
 *     ObReferenceObjectExWithTag @ 0x14010AAE0 (ObReferenceObjectExWithTag.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwDuplicateObject @ 0x1401C0850 (ZwDuplicateObject.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ObpInsertOrLocateNamedObject @ 0x1405C5D08 (ObpInsertOrLocateNamedObject.c)
 *     ObDereferenceSecurityDescriptor @ 0x1405C7020 (ObDereferenceSecurityDescriptor.c)
 *     SePrivilegeCheck @ 0x1405CED00 (SePrivilegeCheck.c)
 *     SePrivilegedServiceAuditAlarm @ 0x1405CF3DC (SePrivilegedServiceAuditAlarm.c)
 *     ObpCallPreOperationCallbacks @ 0x1405E3D30 (ObpCallPreOperationCallbacks.c)
 *     ObReferenceProcessHandleTable @ 0x1405E67C4 (ObReferenceProcessHandleTable.c)
 *     ObpIncrementHandleCountEx @ 0x1405F5040 (ObpIncrementHandleCountEx.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
 *     RtlMapGenericMask @ 0x140601F00 (RtlMapGenericMask.c)
 *     ExpFreeHandleTableEntry @ 0x14060F8C0 (ExpFreeHandleTableEntry.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x1406218EC (SepAdtPrivilegeObjectAuditAlarm.c)
 *     ObpAllocateAndQuerySecurityDescriptorInfo @ 0x140621C30 (ObpAllocateAndQuerySecurityDescriptorInfo.c)
 *     ObpDecrementHandleCount @ 0x14063C254 (ObpDecrementHandleCount.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140687000 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x1406BC1A8 (ExpAllocateHandleTableEntrySlow.c)
 *     SeAppendPrivileges @ 0x1406BEF60 (SeAppendPrivileges.c)
 *     SePrivilegeObjectAuditAlarm @ 0x1406F8F80 (SePrivilegeObjectAuditAlarm.c)
 *     ObHandleRevocationBlockAddObject @ 0x14089DC30 (ObHandleRevocationBlockAddObject.c)
 *     ObpSetObjectAuditInfo @ 0x14089E50C (ObpSetObjectAuditInfo.c)
 *     ObpPostInterceptHandleCreate @ 0x14089F034 (ObpPostInterceptHandleCreate.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x1408DD148 (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x1408DDC28 (SepAdtStagingEvent.c)
 *     SepAdtClassifyObjectIntoSubCategory @ 0x1408DE3A0 (SepAdtClassifyObjectIntoSubCategory.c)
 *     EtwpTraceHandle @ 0x1408F5754 (EtwpTraceHandle.c)
 *     ExpSetHandleExtraInfo @ 0x14090B720 (ExpSetHandleExtraInfo.c)
 *     ExpUpdateDebugInfo @ 0x14090B9AC (ExpUpdateDebugInfo.c)
 */

__int64 __fastcall ObpCreateHandle(
        int a1,
        char *a2,
        ACCESS_MASK a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        char a7,
        POBJECT_TYPE *a8,
        int a9,
        PVOID *a10,
        unsigned __int64 *a11)
{
  unsigned int v12; // r13d
  POBJECT_TYPE *v13; // rdi
  int v14; // ebx
  _KPROCESS *Process; // r8
  unsigned __int64 v16; // r12
  ULONG_PTR v17; // rdi
  KPROCESSOR_MODE AccessMode; // r15
  ULONG_PTR v19; // r13
  unsigned int v20; // eax
  signed __int64 v21; // rdx
  signed __int64 v22; // rbx
  unsigned int v23; // edx
  unsigned __int64 v24; // rbx
  int v25; // eax
  __int64 v26; // rax
  char *v27; // r12
  NTSTATUS v28; // ebx
  PVOID v29; // rdi
  unsigned __int64 v30; // rcx
  __int64 v31; // r12
  __int64 v32; // rsi
  int v33; // ebx
  signed __int64 v34; // rdx
  signed __int64 v35; // rbx
  unsigned int v36; // edx
  unsigned __int64 v37; // rbx
  int v38; // edi
  __int64 v39; // rax
  unsigned int v40; // r15d
  PVOID v41; // rsi
  int v42; // ebx
  unsigned __int64 v43; // rcx
  struct _KTHREAD *v44; // r13
  _DWORD *v45; // r8
  __int64 v46; // rbx
  char v47; // al
  unsigned int Number; // edx
  unsigned int v49; // ecx
  unsigned int v50; // r12d
  unsigned int v51; // r15d
  ULONG_PTR v52; // rdi
  __int64 *v53; // rsi
  __int64 v54; // rax
  int v55; // eax
  unsigned __int64 v56; // r12
  char v57; // al
  PVOID v58; // r15
  void *v59; // rax
  PVOID v60; // r13
  __int64 v61; // r12
  char v62; // di
  int v63; // edi
  _DWORD *v64; // r9
  POBJECT_TYPE *v65; // r15
  unsigned __int64 v66; // rdi
  PVOID v67; // r11
  bool v68; // r10
  unsigned __int64 *v69; // rdi
  unsigned __int64 v70; // rax
  struct _EX_RUNDOWN_REF *v71; // rdi
  unsigned int v73; // eax
  volatile signed __int64 *v74; // rsi
  _DWORD *v75; // rdi
  char HandleTableEntrySlow; // r15
  _DWORD *v77; // r12
  volatile signed __int64 *v78; // rbx
  signed __int64 v79; // rax
  signed __int64 v80; // rcx
  bool v81; // zf
  signed __int64 v82; // rtt
  signed __int64 v83; // rax
  signed __int64 v84; // rdx
  signed __int64 v85; // rax
  signed __int64 v86; // rsi
  unsigned int v87; // edx
  char *PoolWithTag; // rsi
  struct _KTHREAD *v89; // rax
  BOOLEAN v90; // al
  struct _PRIVILEGE_SET *v91; // r12
  BOOLEAN v92; // di
  ACCESS_MASK v93; // eax
  __int64 v94; // rcx
  volatile signed __int64 *v95; // rsi
  signed __int64 v96; // rax
  signed __int64 v97; // rcx
  bool v98; // zf
  signed __int64 v99; // rtt
  struct _KTHREAD *v100; // rax
  unsigned __int64 v101; // rsi
  struct _KTHREAD *v102; // rax
  struct _ERESOURCE *v103; // rcx
  int v104; // edi
  __int64 v105; // rcx
  int v106; // esi
  int v107; // esi
  bool v108; // al
  signed __int64 v109; // rax
  volatile signed __int64 *v110; // rbx
  signed __int64 v111; // rax
  signed __int64 v112; // rcx
  bool v113; // zf
  signed __int64 v114; // rtt
  struct _KTHREAD *v115; // rax
  ULONG_PTR v116; // rdi
  signed __int64 v117; // rax
  signed __int64 v118; // rtt
  signed __int64 v119; // rax
  signed __int64 v120; // rtt
  struct _KTHREAD *v121; // rax
  __int64 v122; // rax
  struct _KTHREAD *v123; // rax
  struct _KTHREAD *v124; // rax
  __int64 v125; // rax
  void **v126; // rcx
  signed __int64 v127; // rax
  signed __int64 v128; // rtt
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v130; // r15
  volatile signed __int64 *v131; // rdi
  volatile signed __int64 *v132; // rsi
  signed __int64 v133; // rax
  bool v134; // cc
  signed __int64 v135; // rax
  volatile signed __int64 *i; // rax
  struct _KTHREAD *v137; // r12
  volatile signed __int64 *v138; // rbx
  volatile signed __int64 *v139; // r15
  signed __int64 v140; // rax
  signed __int64 v141; // rax
  volatile signed __int64 *j; // rax
  struct _KTHREAD *v143; // r12
  volatile signed __int64 *v144; // rsi
  volatile signed __int64 *v145; // r15
  signed __int64 v146; // rax
  signed __int64 v147; // rax
  volatile signed __int64 *k; // rax
  __int64 v149; // r8
  unsigned __int8 v150; // di
  __int64 v151; // r8
  __int64 v152; // r8
  unsigned __int64 CurrentThreadProcessId; // rax
  unsigned __int64 v154; // rax
  __int64 v155; // rdx
  PPRIVILEGE_SET *Privileges; // [rsp+28h] [rbp-F8h]
  int GrantedAccess; // [rsp+40h] [rbp-E0h]
  int AccessStatus; // [rsp+48h] [rbp-D8h]
  bool v159; // [rsp+A0h] [rbp-80h]
  char v160; // [rsp+A1h] [rbp-7Fh]
  int v161; // [rsp+A4h] [rbp-7Ch] BYREF
  char v162; // [rsp+A8h] [rbp-78h]
  PVOID Object; // [rsp+B0h] [rbp-70h]
  int v164; // [rsp+B8h] [rbp-68h]
  unsigned int v165; // [rsp+BCh] [rbp-64h]
  ULONG_PTR BugCheckParameter1; // [rsp+C0h] [rbp-60h]
  NTSTATUS v167; // [rsp+C8h] [rbp-58h] BYREF
  ACCESS_MASK AccessMask; // [rsp+D0h] [rbp-50h] BYREF
  POBJECT_TYPE *v169; // [rsp+D8h] [rbp-48h]
  unsigned __int64 v170; // [rsp+E0h] [rbp-40h]
  unsigned int NumberOfBytes; // [rsp+E8h] [rbp-38h] BYREF
  int NumberOfBytes_4; // [rsp+ECh] [rbp-34h]
  PVOID v173; // [rsp+F0h] [rbp-30h] BYREF
  __int64 v174; // [rsp+F8h] [rbp-28h]
  int v175; // [rsp+100h] [rbp-20h] BYREF
  ACCESS_MASK v176; // [rsp+104h] [rbp-1Ch] BYREF
  int v177; // [rsp+108h] [rbp-18h]
  int v178; // [rsp+10Ch] [rbp-14h]
  __int64 v179; // [rsp+110h] [rbp-10h] BYREF
  HANDLE TargetHandle; // [rsp+118h] [rbp-8h] BYREF
  PVOID P; // [rsp+120h] [rbp+0h] BYREF
  __int64 v182; // [rsp+128h] [rbp+8h]
  _QWORD *v183; // [rsp+130h] [rbp+10h] BYREF
  _QWORD **v184; // [rsp+138h] [rbp+18h]
  int v185; // [rsp+140h] [rbp+20h]
  PPRIVILEGE_SET v186; // [rsp+148h] [rbp+28h] BYREF
  int v187[2]; // [rsp+150h] [rbp+30h] BYREF
  unsigned __int64 *v188; // [rsp+158h] [rbp+38h]
  __int64 v189; // [rsp+160h] [rbp+40h]
  __int64 v190; // [rsp+168h] [rbp+48h]
  __int64 v191; // [rsp+170h] [rbp+50h] BYREF
  __int128 v192; // [rsp+178h] [rbp+58h]
  PVOID v193; // [rsp+188h] [rbp+68h] BYREF
  PVOID *v194; // [rsp+190h] [rbp+70h]
  _QWORD v195[5]; // [rsp+198h] [rbp+78h] BYREF
  struct _PRIVILEGE_SET RequiredPrivileges; // [rsp+1C0h] [rbp+A0h] BYREF

  v12 = a6;
  v13 = a8;
  v14 = a1;
  v194 = a10;
  v188 = a11;
  v160 = 0;
  v162 = 0;
  v183 = 0LL;
  v184 = 0LL;
  v177 = 0;
  v178 = a9;
  AccessMask = a3;
  Object = a2;
  NumberOfBytes_4 = a1;
  Process = KeGetCurrentThread()->ApcState.Process;
  BugCheckParameter1 = (ULONG_PTR)Process;
  v165 = a6;
  v169 = a8;
  v173 = 0LL;
  if ( (a6 & 0x200) != 0 )
  {
    v16 = ObpKernelHandleTable;
    BugCheckParameter1 = (ULONG_PTR)PsInitialSystemProcess;
    goto LABEL_4;
  }
  if ( KeGetCurrentThread()->ApcStateIndex != 1 )
  {
    v16 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[4];
LABEL_4:
    v170 = v16;
    goto LABEL_5;
  }
  v170 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Process);
  v16 = v170;
  if ( !v170 )
    return (unsigned int)-1073741558;
  a2 = (char *)Object;
  v162 = 1;
LABEL_5:
  v159 = v16 == ObpKernelHandleTable;
  if ( !a4 || v16 == ObpKernelHandleTable && !*(_DWORD *)(a4 + 24) )
  {
    v25 = AccessMask;
    if ( (AccessMask & 0x2000000) != 0 )
    {
      v25 = AccessMask & 0xEDFFFFFF | 0x10000000;
      AccessMask = v25;
    }
    if ( (v25 & 0xF0000000) != 0 )
    {
      RtlMapGenericMask(
        &AccessMask,
        (PGENERIC_MAPPING)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*(a2 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)a2 - 48) >> 8)]
                         + 76));
      v25 = AccessMask;
    }
    goto LABEL_21;
  }
  v17 = (ULONG_PTR)(a2 - 48);
  AccessMode = 1;
  v19 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*(a2 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)a2 - 48) >> 8)];
  if ( (v165 & 0x400) == 0 )
    AccessMode = a7;
  if ( (unsigned int)(v14 - 1) > 1 )
  {
    memset(&RequiredPrivileges, 0, sizeof(RequiredPrivileges));
    v20 = *(_DWORD *)(a4 + 16);
    if ( (v20 & 0x2000000) != 0 )
    {
      v20 = v20 & 0xEDFFFFFF | 0x10000000;
      *(_DWORD *)(a4 + 16) = v20;
    }
    if ( (v20 & 0xF0000000) != 0 )
    {
      RtlMapGenericMask((PACCESS_MASK)(a4 + 16), (PGENERIC_MAPPING)(v19 + 76));
      v20 = *(_DWORD *)(a4 + 16);
    }
    if ( (v20 & 0x1000000) != 0 )
    {
      RequiredPrivileges.PrivilegeCount = 1;
      RequiredPrivileges.Privilege[0].Attributes = 0;
      RequiredPrivileges.Control = 1;
      RequiredPrivileges.Privilege[0].Luid = SeSecurityPrivilege;
      if ( !SePrivilegeCheck(&RequiredPrivileges, (PSECURITY_SUBJECT_CONTEXT)(a4 + 32), AccessMode) )
      {
        SePrivilegedServiceAuditAlarm(0, (__int64 *)(a4 + 32), (__int64)&RequiredPrivileges, 0);
        v28 = -1073741727;
        goto LABEL_90;
      }
      *(_DWORD *)(a4 + 16) &= ~0x1000000u;
      *(_DWORD *)(a4 + 20) |= 0x1000000u;
      SeAppendPrivileges((PACCESS_STATE)a4, &RequiredPrivileges);
    }
    *(_DWORD *)(a4 + 20) |= *(_DWORD *)(a4 + 16);
    *(_DWORD *)(a4 + 16) = 0;
    *(_DWORD *)(a4 + 20) &= *(_DWORD *)(v19 + 92) | 0x1000000;
    _m_prefetchw((const void *)(v17 + 40));
    v21 = *(_QWORD *)(v17 + 40);
    if ( (v21 & 0xF) != 0 )
    {
      do
      {
        v109 = _InterlockedCompareExchange64((volatile signed __int64 *)(v17 + 40), v21 - 1, v21);
        if ( v21 == v109 )
          break;
        v21 = v109;
      }
      while ( (v109 & 0xF) != 0 );
    }
    v22 = v21;
    v23 = v21 & 0xF;
    v24 = v22 & 0xFFFFFFFFFFFFFFF0uLL;
    if ( v23 <= 1 && v24 )
    {
      if ( v23 == 1 )
      {
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v24 - 24), 0xFuLL) <= 0 )
          __fastfail(0xEu);
      }
      else
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquirePushLockSharedEx(v17 + 16, 0LL);
        v24 = *(_QWORD *)(v17 + 40) & 0xFFFFFFFFFFFFFFF0uLL;
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v24 - 24), 0x10uLL) <= 0 )
          __fastfail(0xEu);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v17 + 16), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v17 + 16));
        KeAbPostRelease(v17 + 16);
        KeLeaveCriticalRegion();
      }
      _m_prefetchw((const void *)(v17 + 40));
      v127 = *(_QWORD *)(v17 + 40);
      while ( (v127 & 0xF) == 0 )
      {
        if ( v24 != (v127 & 0xFFFFFFFFFFFFFFF0uLL) )
          break;
        v128 = v127;
        v127 = _InterlockedCompareExchange64((volatile signed __int64 *)(v17 + 40), v127 + 15, v127);
        if ( v128 == v127 )
          goto LABEL_18;
      }
      ObDereferenceSecurityDescriptor(v24, 0xFu);
    }
LABEL_18:
    *(_DWORD *)(a4 + 20) &= ~(unsigned int)SeComputeCreatorDeniedRights(
                                             (PSECURITY_SUBJECT_CONTEXT)(a4 + 32),
                                             a4,
                                             *(_DWORD *)(a4 + 20),
                                             v24);
    if ( v24 )
    {
      v110 = (volatile signed __int64 *)(v24 - 32);
      _m_prefetchw((const void *)(v110 + 1));
      v111 = *((_QWORD *)v110 + 1);
      v112 = v111 - 1;
      v113 = v111 == 1;
      if ( v111 - 1 <= 0 )
      {
LABEL_246:
        if ( !v113 )
          __fastfail(0xEu);
        v130 = KeGetCurrentThread();
        v131 = (volatile signed __int64 *)((char *)&ObsSecurityDescriptorCache
                                         + 16 * (unsigned __int8)*((_DWORD *)v110 + 4));
        --v130->KernelApcDisable;
        v132 = v131 + 1;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)v131, 0LL);
        v133 = _InterlockedExchangeAdd64(v110 + 1, 0xFFFFFFFFFFFFFFFFuLL);
        v134 = v133 <= 1;
        v135 = v133 - 1;
        if ( v134 )
        {
          if ( v135 )
            __fastfail(0xEu);
          for ( i = (volatile signed __int64 *)*v132; i != v110; i = (volatile signed __int64 *)*i )
            v132 = i;
          *v132 = *v110;
          if ( (_InterlockedExchangeAdd64(v131, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v131);
          KeAbPostRelease((ULONG_PTR)v131);
          KeLeaveCriticalRegionThread((__int64)v130);
          ExFreePoolWithTag((PVOID)v110, 0x6353624Fu);
        }
        else
        {
          if ( (_InterlockedExchangeAdd64(v131, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v131);
          KeAbPostRelease((ULONG_PTR)v131);
          KeLeaveCriticalRegionThread((__int64)v130);
        }
      }
      else
      {
        while ( 1 )
        {
          v114 = v111;
          v111 = _InterlockedCompareExchange64(v110 + 1, v112, v111);
          if ( v114 == v111 )
            break;
          v112 = v111 - 1;
          v113 = v111 == 1;
          if ( v111 - 1 <= 0 )
            goto LABEL_246;
        }
      }
    }
    v167 = 0;
    goto LABEL_20;
  }
  v176 = 0;
  v186 = 0LL;
  if ( *(__int64 (__fastcall **)(_QWORD *, int, DWORD *, void *, ULONG *, __int64 *, POOL_TYPE, GENERIC_MAPPING *))(v19 + 152) != SeDefaultObjectMethod )
  {
    v175 = 447;
    NumberOfBytes = ObpDefaultSecurityDescriptorLength;
    PoolWithTag = (char *)ExAllocatePoolWithTag(
                            PagedPool,
                            (unsigned int)ObpDefaultSecurityDescriptorLength,
                            0x7153624Fu);
    if ( PoolWithTag )
    {
      v116 = v17 + 40;
      v28 = (*(__int64 (__fastcall **)(PVOID, __int64, int *, char *, unsigned int *, ULONG_PTR, _DWORD, ULONG_PTR, KPROCESSOR_MODE))(v19 + 152))(
              Object,
              1LL,
              &v175,
              PoolWithTag,
              &NumberOfBytes,
              v116,
              *(_DWORD *)(v19 + 100),
              v19 + 76,
              AccessMode);
      if ( v28 == -1073741789 )
      {
        ExFreePoolWithTag(PoolWithTag, 0);
        LODWORD(ObpDefaultSecurityDescriptorLength) = NumberOfBytes;
        PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x7153624Fu);
        if ( !PoolWithTag )
        {
          v28 = -1073741670;
          goto LABEL_226;
        }
        LOBYTE(GrantedAccess) = AccessMode;
        v28 = (*(__int64 (__fastcall **)(PVOID, __int64, int *, char *, unsigned int *, ULONG_PTR, _DWORD, ULONG_PTR, int))(v19 + 152))(
                Object,
                1LL,
                &v175,
                PoolWithTag,
                &NumberOfBytes,
                v116,
                *(_DWORD *)(v19 + 100),
                v19 + 76,
                GrantedAccess);
      }
      LOBYTE(v164) = 1;
      if ( v28 >= 0 )
        goto LABEL_119;
      ExFreePoolWithTag(PoolWithTag, 0);
      LOBYTE(v164) = 0;
    }
    else
    {
      v28 = -1073741670;
    }
LABEL_226:
    v167 = v28;
    goto LABEL_135;
  }
  _m_prefetchw((const void *)(v17 + 40));
  v84 = *(_QWORD *)(v17 + 40);
  if ( (v84 & 0xF) != 0 )
  {
    do
    {
      v85 = _InterlockedCompareExchange64((volatile signed __int64 *)(v17 + 40), v84 - 1, v84);
      if ( v84 == v85 )
        break;
      v84 = v85;
    }
    while ( (v85 & 0xF) != 0 );
  }
  v86 = v84;
  v87 = v84 & 0xF;
  PoolWithTag = (char *)(v86 & 0xFFFFFFFFFFFFFFF0uLL);
  if ( v87 <= 1 && PoolWithTag )
  {
    if ( v87 == 1 )
    {
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)PoolWithTag - 3, 0xFuLL) <= 0 )
        __fastfail(0xEu);
    }
    else
    {
      v123 = KeGetCurrentThread();
      --v123->KernelApcDisable;
      ExAcquirePushLockSharedEx(v17 + 16, 0LL);
      PoolWithTag = (char *)(*(_QWORD *)(v17 + 40) & 0xFFFFFFFFFFFFFFF0uLL);
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)PoolWithTag - 3, 0x10uLL) <= 0 )
        __fastfail(0xEu);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v17 + 16), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v17 + 16));
      KeAbPostRelease(v17 + 16);
      KeLeaveCriticalRegion();
    }
    _m_prefetchw((const void *)(v17 + 40));
    v117 = *(_QWORD *)(v17 + 40);
    while ( (v117 & 0xF) == 0 )
    {
      if ( PoolWithTag != (char *)(v117 & 0xFFFFFFFFFFFFFFF0uLL) )
        break;
      v118 = v117;
      v117 = _InterlockedCompareExchange64((volatile signed __int64 *)(v17 + 40), v117 + 15, v117);
      if ( v118 == v117 )
        goto LABEL_117;
    }
    ObDereferenceSecurityDescriptor((__int64)PoolWithTag, 0xFu);
  }
LABEL_117:
  LOBYTE(v164) = 0;
  if ( !PoolWithTag && ((*(_BYTE *)(v19 + 66) & 8) != 0 || (*(_BYTE *)(v17 + 26) & 2) != 0) )
    KeBugCheckEx(0x189u, v17, v19, 1uLL, 0LL);
  v28 = 0;
LABEL_119:
  if ( PoolWithTag )
  {
    v89 = KeGetCurrentThread();
    --v89->KernelApcDisable;
    ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)(a4 + 48) + 48LL), 1u);
    if ( *(_QWORD *)(a4 + 32) )
    {
      v121 = KeGetCurrentThread();
      --v121->KernelApcDisable;
      ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)(a4 + 32) + 48LL), 1u);
    }
    v90 = SeAccessCheck(
            PoolWithTag,
            (PSECURITY_SUBJECT_CONTEXT)(a4 + 32),
            1u,
            *(_DWORD *)(a4 + 16),
            *(_DWORD *)(a4 + 20),
            &v186,
            (PGENERIC_MAPPING)(v19 + 76),
            AccessMode,
            &v176,
            &v167);
    v91 = v186;
    v92 = v90;
    if ( v186 )
    {
      SeAppendPrivileges((PACCESS_STATE)a4, v186);
      CmSiFreeMemory(v91);
    }
    if ( v92 )
    {
      v93 = v176;
      *(_DWORD *)(a4 + 20) |= v176;
      *(_DWORD *)(a4 + 16) &= ~(v93 | 0x2000000);
    }
    if ( AccessMode )
      SeOpenObjectAuditAlarmWithTransaction(
        (PUNICODE_STRING)(v19 + 16),
        Object,
        0LL,
        PoolWithTag,
        (PACCESS_STATE)a4,
        0,
        v92,
        AccessMode,
        0LL,
        (PBOOLEAN)(a4 + 10));
    ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(a4 + 48) + 48LL));
    KeLeaveCriticalRegion();
    v94 = *(_QWORD *)(a4 + 32);
    if ( v94 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v94 + 48));
      KeLeaveCriticalRegion();
    }
    if ( (_BYTE)v164 )
    {
      ExFreePoolWithTag(PoolWithTag, 0);
    }
    else
    {
      v95 = (volatile signed __int64 *)(PoolWithTag - 32);
      _m_prefetchw((const void *)(v95 + 1));
      v96 = *((_QWORD *)v95 + 1);
      v97 = v96 - 1;
      v98 = v96 == 1;
      if ( v96 - 1 <= 0 )
      {
LABEL_262:
        if ( !v98 )
          __fastfail(0xEu);
        v137 = KeGetCurrentThread();
        v138 = (volatile signed __int64 *)((char *)&ObsSecurityDescriptorCache
                                         + 16 * (unsigned __int8)*((_DWORD *)v95 + 4));
        --v137->KernelApcDisable;
        v139 = v138 + 1;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)v138, 0LL);
        v140 = _InterlockedExchangeAdd64(v95 + 1, 0xFFFFFFFFFFFFFFFFuLL);
        v134 = v140 <= 1;
        v141 = v140 - 1;
        if ( v134 )
        {
          if ( v141 )
            __fastfail(0xEu);
          for ( j = (volatile signed __int64 *)*v139; j != v95; j = (volatile signed __int64 *)*j )
            v139 = j;
          *v139 = *v95;
          if ( (_InterlockedExchangeAdd64(v138, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v138);
          KeAbPostRelease((ULONG_PTR)v138);
          KeLeaveCriticalRegionThread((__int64)v137);
          ExFreePoolWithTag((PVOID)v95, 0x6353624Fu);
        }
        else
        {
          if ( (_InterlockedExchangeAdd64(v138, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v138);
          KeAbPostRelease((ULONG_PTR)v138);
          KeLeaveCriticalRegionThread((__int64)v137);
        }
      }
      else
      {
        while ( 1 )
        {
          v99 = v96;
          v96 = _InterlockedCompareExchange64(v95 + 1, v97, v96);
          if ( v99 == v96 )
            break;
          v97 = v96 - 1;
          v98 = v96 == 1;
          if ( v96 - 1 <= 0 )
            goto LABEL_262;
        }
      }
    }
    if ( v92 )
      goto LABEL_20;
    v28 = v167;
LABEL_135:
    if ( v28 < 0 )
      goto LABEL_90;
    v13 = v169;
    v12 = v165;
    v14 = NumberOfBytes_4;
    goto LABEL_22;
  }
  *(_DWORD *)(a4 + 20) |= *(_DWORD *)(a4 + 16);
  *(_DWORD *)(a4 + 16) = 0;
  v167 = v28;
LABEL_20:
  v25 = *(_DWORD *)(a4 + 20);
  v13 = v169;
  v12 = v165;
  v14 = NumberOfBytes_4;
LABEL_21:
  v161 = v25;
LABEL_22:
  v26 = 0LL;
  v179 = 0LL;
  if ( v13 )
  {
    v26 = (__int64)v13[4];
    v179 = v26;
  }
  v27 = (char *)Object;
  v28 = ObpIncrementHandleCountEx(v14, (unsigned int)&v161, BugCheckParameter1, (_DWORD)Object, a7, v12, v26);
  if ( v28 < 0 )
    goto LABEL_90;
  if ( a4 )
  {
    if ( v13 )
    {
      Privileges = (PPRIVILEGE_SET *)v13;
      v71 = (struct _EX_RUNDOWN_REF *)BugCheckParameter1;
      v28 = ObpInsertOrLocateNamedObject(BugCheckParameter1, v27, (__int64)&v161, a4, a7, Privileges, &v173);
      if ( v28 < 0 )
        goto LABEL_91;
      v29 = v173;
      if ( v173 == v27 )
      {
        v29 = 0LL;
        v173 = 0LL;
      }
      else
      {
        v27 = (char *)v173;
        Object = v173;
        v160 = 1;
      }
    }
    else
    {
      v29 = v173;
    }
    if ( *(_BYTE *)(a4 + 10) )
      LOBYTE(v12) = v12 | 4;
  }
  else
  {
    v29 = v173;
  }
  v30 = (unsigned __int8)*(v27 - 24);
  v31 = (__int64)(v27 - 48);
  v174 = v31;
  v182 = BYTE1(v31);
  v32 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ BYTE1(v31) ^ v30];
  v169 = (POBJECT_TYPE *)v32;
  v33 = (*(_DWORD *)(v32 + 92) | 0x1000000) & v161;
  v161 = v33;
  if ( a4 )
  {
    _m_prefetchw((const void *)(v31 + 40));
    v34 = *(_QWORD *)(v31 + 40);
    if ( (v34 & 0xF) != 0 )
    {
      do
      {
        v83 = _InterlockedCompareExchange64((volatile signed __int64 *)(v31 + 40), v34 - 1, v34);
        if ( v34 == v83 )
          break;
        v34 = v83;
      }
      while ( (v83 & 0xF) != 0 );
    }
    v35 = v34;
    v36 = v34 & 0xF;
    v37 = v35 & 0xFFFFFFFFFFFFFFF0uLL;
    if ( v36 <= 1 && v37 )
    {
      if ( v36 == 1 )
      {
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v37 - 24), 0xFuLL) <= 0 )
          __fastfail(0xEu);
      }
      else
      {
        v124 = KeGetCurrentThread();
        --v124->KernelApcDisable;
        ExAcquirePushLockSharedEx(v31 + 16, 0LL);
        v37 = *(_QWORD *)(v31 + 40) & 0xFFFFFFFFFFFFFFF0uLL;
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v37 - 24), 0x10uLL) <= 0 )
          __fastfail(0xEu);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v31 + 16), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v31 + 16));
        KeAbPostRelease(v31 + 16);
        KeLeaveCriticalRegion();
      }
      _m_prefetchw((const void *)(v31 + 40));
      v119 = *(_QWORD *)(v31 + 40);
      while ( (v119 & 0xF) == 0 )
      {
        if ( v37 != (v119 & 0xFFFFFFFFFFFFFFF0uLL) )
          break;
        v120 = v119;
        v119 = _InterlockedCompareExchange64((volatile signed __int64 *)(v31 + 40), v119 + 15, v119);
        if ( v120 == v119 )
          goto LABEL_34;
      }
      ObDereferenceSecurityDescriptor(v37, 0xFu);
    }
LABEL_34:
    v38 = SeComputeCreatorDeniedRights((PSECURITY_SUBJECT_CONTEXT)(a4 + 32), a4, v161, v37);
    if ( v37 )
    {
      v78 = (volatile signed __int64 *)(v37 - 32);
      _m_prefetchw((const void *)(v78 + 1));
      v79 = *((_QWORD *)v78 + 1);
      v80 = v79 - 1;
      v81 = v79 == 1;
      if ( v79 - 1 <= 0 )
      {
LABEL_277:
        if ( !v81 )
          __fastfail(0xEu);
        v143 = KeGetCurrentThread();
        v144 = (volatile signed __int64 *)((char *)&ObsSecurityDescriptorCache
                                         + 16 * (unsigned __int8)*((_DWORD *)v78 + 4));
        --v143->KernelApcDisable;
        v145 = v144 + 1;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)v144, 0LL);
        v146 = _InterlockedExchangeAdd64(v78 + 1, 0xFFFFFFFFFFFFFFFFuLL);
        v134 = v146 <= 1;
        v147 = v146 - 1;
        if ( v134 )
        {
          if ( v147 )
            __fastfail(0xEu);
          for ( k = (volatile signed __int64 *)*v145; k != v78; k = (volatile signed __int64 *)*k )
            v145 = k;
          *v145 = *v78;
          if ( (_InterlockedExchangeAdd64(v144, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v144);
          KeAbPostRelease((ULONG_PTR)v144);
          KeLeaveCriticalRegionThread((__int64)v143);
          ExFreePoolWithTag((PVOID)v78, 0x6353624Fu);
        }
        else
        {
          if ( (_InterlockedExchangeAdd64(v144, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v144);
          KeAbPostRelease((ULONG_PTR)v144);
          KeLeaveCriticalRegionThread((__int64)v143);
        }
        v32 = (__int64)v169;
        v31 = v174;
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
            goto LABEL_277;
        }
      }
    }
    v39 = *(_QWORD *)(a4 + 72);
    v33 = ~v38 & v161;
    v29 = v173;
    v161 = v33;
    *(_DWORD *)(a4 + 20) = v33;
    v177 = *(_DWORD *)(v39 + 28);
  }
  v40 = a5;
  if ( a5 )
  {
    ObReferenceObjectExWithTag((ULONG_PTR)Object, a5);
    v33 = v161;
  }
  if ( v29 )
  {
    ObfDereferenceObject(v29);
    v33 = v161;
  }
  v184 = &v183;
  v183 = &v183;
  if ( (*(_BYTE *)(v32 + 66) & 0x40) != 0 && *(_QWORD *)(v32 + 200) != v32 + 200 )
  {
    v104 = v33;
    memset(v195, 0, sizeof(v195));
    v191 = 0LL;
    v192 = 0uLL;
    v105 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)v182 ^ (unsigned __int64)(unsigned __int8)*((char *)Object - 24)];
    v106 = *(_DWORD *)(v105 + 96);
    HIDWORD(v195[0]) = v159;
    v107 = v33 & v106;
    v195[1] = Object;
    v195[4] = &v191;
    v192 = 0LL;
    LODWORD(v195[0]) = 1;
    v195[3] = 0LL;
    v195[2] = v105;
    HIDWORD(v191) = v33;
    LODWORD(v191) = v33;
    v28 = ObpCallPreOperationCallbacks((struct _EX_RUNDOWN_REF *)v105, (__int64)v195, &v183);
    v108 = v159;
    if ( v28 >= 0 && !v159 )
    {
      v104 &= v107 | v191;
      v108 = 0;
    }
    if ( v28 < 0 )
    {
      v71 = (struct _EX_RUNDOWN_REF *)BugCheckParameter1;
      ObpDecrementHandleCount(BugCheckParameter1);
      if ( a5 )
      {
        if ( a5 > 1 )
          _InterlockedExchangeAdd64((volatile signed __int64 *)v31, (int)(1 - a5));
        ObfDereferenceObject(Object);
      }
      goto LABEL_91;
    }
    if ( v108 )
    {
      v33 = v161;
    }
    else
    {
      v33 = v104;
      v161 = v104;
      if ( a4 )
        *(_DWORD *)(a4 + 20) = v104;
    }
  }
  v41 = 0LL;
  v190 = 0LL;
  v42 = v33 & 0x1FFFFFF;
  v43 = ((v31 & 0xFFFFFFFFFFFFFFF1uLL) << 16) | ((unsigned __int64)(v12 & 7) << 17);
  if ( (v12 & 8) != 0 )
    v42 |= 0x2000000u;
  v44 = KeGetCurrentThread();
  LODWORD(v190) = v42;
  v189 = v43 | 1;
  --v44->KernelApcDisable;
  v45 = (_DWORD *)v170;
  v46 = 0LL;
  v47 = *(_BYTE *)(v170 + 44);
  if ( (v47 & 4) != 0 )
    goto LABEL_64;
  if ( (v47 & 1) != 0 )
    Number = 0;
  else
    Number = KeGetPcr()->Prcb.Number;
  v49 = ExpFreeListCount;
  v164 = ExpFreeListCount;
  v165 = Number;
LABEL_47:
  v50 = 0;
  v185 = *v45;
  v51 = Number;
  while ( 1 )
  {
    v52 = (ULONG_PTR)&v45[16 * v51 + 16];
    if ( *(_QWORD *)(v52 + 8) )
      break;
LABEL_95:
    v73 = v51 + 1;
    ++v50;
    v51 = 0;
    if ( v73 != v49 )
      v51 = v73;
    if ( v50 >= v49 )
    {
      v74 = (volatile signed __int64 *)(v45 + 14);
      v75 = &v45[16 * v165 + 16];
      HandleTableEntrySlow = 1;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(v45 + 14), 0LL);
      v77 = (_DWORD *)v170;
      if ( v185 == *(_DWORD *)v170 )
        HandleTableEntrySlow = ExpAllocateHandleTableEntrySlow(v170, v75);
      if ( (_InterlockedExchangeAdd64(v74, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v74);
      KeAbPostRelease((ULONG_PTR)v74);
      v41 = 0LL;
      if ( HandleTableEntrySlow )
      {
        v49 = v164;
        v45 = v77;
        Number = v165;
        goto LABEL_47;
      }
      goto LABEL_63;
    }
  }
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&v45[16 * v51 + 16], 0LL);
  v53 = *(__int64 **)(v52 + 8);
  if ( v53 )
  {
    v54 = v53[1];
    *(_QWORD *)(v52 + 8) = v54;
    if ( !v54 )
      *(_QWORD *)(v52 + 16) = 0LL;
    v55 = ++*(_DWORD *)(v52 + 24);
    if ( v55 > *(_DWORD *)(v52 + 28) )
      *(_DWORD *)(v52 + 28) = v55;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v52, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v52);
  KeAbPostRelease(v52);
  if ( !v53 )
  {
    v49 = v164;
    v45 = (_DWORD *)v170;
    goto LABEL_95;
  }
  v46 = *(_QWORD *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFF000uLL) + 8)
      + 4 * ((__int64)((__int64)v53 - ((unsigned __int64)v53 & 0xFFFFFFFFFFFFF000uLL)) >> 4);
  if ( v177 || a9 )
  {
    v56 = v170;
    if ( (unsigned int)ExpSetHandleExtraInfo(v170, v46) )
    {
      ExpFreeHandleTableEntry(v56, v46, v53);
      v41 = 0LL;
      v46 = 0LL;
      goto LABEL_63;
    }
  }
  else
  {
    v56 = v170;
  }
  if ( *(_QWORD *)(v56 + 96) )
    ExpUpdateDebugInfo(v56, v44, v46, 1LL);
  v53[1] = v190;
  *v53 = v189;
  v41 = 0LL;
LABEL_63:
  v31 = v174;
  v40 = a5;
LABEL_64:
  KeLeaveCriticalRegionThread((__int64)v44);
  if ( !v46 )
  {
    ObpDecrementHandleCount(BugCheckParameter1);
    if ( v40 )
    {
      if ( v40 > 1 )
        _InterlockedExchangeAdd64((volatile signed __int64 *)v31, (int)(1 - v40));
      ObfDereferenceObject(Object);
    }
    v65 = v169;
    v28 = -1073741670;
    v68 = v159;
    v67 = Object;
    v69 = v188;
    goto LABEL_87;
  }
  if ( !a4 )
  {
    v65 = v169;
    goto LABEL_83;
  }
  v57 = *(_BYTE *)(v31 + 26);
  v58 = 0LL;
  P = 0LL;
  if ( (v57 & 0x20) == 0 || (v125 = ObpInfoMaskToOffset[v57 & 0x3F], v126 = (void **)(v31 - v125), v31 == v125) )
  {
    v59 = (void *)v179;
    if ( !v179 )
      goto LABEL_68;
    goto LABEL_198;
  }
  v59 = *v126;
  if ( *v126 )
  {
LABEL_198:
    v58 = v59;
    goto LABEL_68;
  }
  if ( v179 )
  {
    ObpSetObjectAuditInfo(v31, &v179, 0LL);
LABEL_68:
    v60 = Object;
  }
  else
  {
    v60 = Object;
    if ( (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)v182 ^ (unsigned __int64)*(unsigned __int8 *)(v31 + 24)] != IoFileObjectType
      || (*(_DWORD *)(*((_QWORD *)Object + 1) + 52LL) & 0x10) == 0 )
    {
      v149 = *(_QWORD *)(a4 + 72);
      v150 = 0;
      if ( v149 && (v151 = *(_QWORD *)(v149 + 56)) != 0 )
        v150 = 1;
      else
        v151 = 0LL;
      if ( (int)ObpAllocateAndQuerySecurityDescriptorInfo(Object, 32LL, v151, &P) >= 0 )
      {
        v58 = P;
        ObpSetObjectAuditInfo(v31, &P, v150);
      }
    }
  }
  v61 = *(_QWORD *)(a4 + 72);
  v62 = 0;
  *(_QWORD *)v187 = v46;
  TargetHandle = 0LL;
  if ( !v58 )
  {
    v58 = *(PVOID *)(v61 + 56);
    if ( !v58 )
      v58 = *(PVOID *)(a4 + 64);
  }
  if ( *(_BYTE *)(a4 + 9) )
  {
    if ( *(_BYTE *)(a4 + 124) )
    {
      SepAdtPrivilegeObjectAuditAlarm(
        (unsigned int)&SeSubsystemName,
        a4 + 144,
        a4 + 128,
        v46,
        *(_QWORD *)(a4 + 32),
        *(_QWORD *)(a4 + 48),
        *(_QWORD *)(a4 + 56),
        *(_DWORD *)(a4 + 20),
        *(_QWORD *)v61,
        1);
      goto LABEL_74;
    }
  }
  else if ( !*(_BYTE *)(v61 + 216) )
  {
    goto LABEL_74;
  }
  if ( ZwDuplicateObject(
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         (HANDLE)v46,
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         &TargetHandle,
         0,
         0x200u,
         2u) >= 0 )
  {
    ObReferenceObjectByHandle(TargetHandle, 0, 0LL, 0, &v193, 0LL);
    v41 = v193;
  }
  LOBYTE(v152) = 1;
  LOWORD(v164) = SepAdtClassifyObjectIntoSubCategory(v41, a4 + 144, v152, 0LL);
  if ( v41 )
    ObfDereferenceObject(v41);
  if ( TargetHandle )
  {
    ZwClose(TargetHandle);
    TargetHandle = 0LL;
  }
  CurrentThreadProcessId = PsGetCurrentThreadProcessId();
  v62 = SepAdtOpenObjectAuditAlarm(
          (unsigned __int16)v164,
          (int)&SeSubsystemName,
          (int)v187,
          (int)a4 + 144,
          a4 + 128,
          v58,
          *(_QWORD *)(a4 + 32),
          *(_QWORD *)(a4 + 48),
          *(_DWORD *)(a4 + 24),
          *(_DWORD *)(a4 + 20),
          *(_QWORD *)v61,
          1,
          CurrentThreadProcessId,
          2,
          0LL,
          0,
          0LL,
          v61 + 32,
          a4);
  v154 = PsGetCurrentThreadProcessId();
  LOBYTE(AccessStatus) = 1;
  SepAdtStagingEvent(
    (unsigned __int16)v164,
    v155,
    v187,
    a4 + 144,
    a4 + 128,
    *(_QWORD *)(a4 + 32),
    *(_QWORD *)(a4 + 48),
    *(_DWORD *)(a4 + 24),
    *(_DWORD *)(a4 + 20),
    AccessStatus,
    v154,
    a4);
  v60 = Object;
LABEL_74:
  *(_BYTE *)(a4 + 10) = v62;
  v63 = NumberOfBytes_4;
  if ( !NumberOfBytes_4 )
  {
    v64 = **(_DWORD ***)(a4 + 72);
    if ( v64 )
    {
      if ( *v64 )
        SePrivilegeObjectAuditAlarm(
          v46,
          a4 + 32,
          *(_DWORD *)(a4 + 20),
          (_DWORD)v64,
          1,
          KeGetCurrentThread()->PreviousMode);
    }
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  v65 = v169;
  if ( !v63 && (v169 == CmKeyObjectType || v169 == IoFileObjectType) )
  {
    v66 = *(_QWORD *)(a4 + 32);
    if ( v66 )
    {
      v100 = KeGetCurrentThread();
      v101 = *(_QWORD *)(a4 + 48);
      --v100->KernelApcDisable;
      if ( v101 >= v66 )
      {
        ExAcquireResourceSharedLite(*(PERESOURCE *)(v66 + 48), 1u);
        v115 = KeGetCurrentThread();
        --v115->KernelApcDisable;
        v103 = *(struct _ERESOURCE **)(v101 + 48);
      }
      else
      {
        ExAcquireResourceSharedLite(*(PERESOURCE *)(v101 + 48), 1u);
        v102 = KeGetCurrentThread();
        --v102->KernelApcDisable;
        v103 = *(struct _ERESOURCE **)(v66 + 48);
      }
      ExAcquireResourceSharedLite(v103, 1u);
      if ( (*(_DWORD *)(v66 + 200) & 0x4000) != 0
        && *(int *)(v66 + 196) >= 2
        && !RtlEqualSid(**(PSID **)(v101 + 152), **(PSID **)(v66 + 152)) )
      {
        v122 = OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO(v174);
        if ( v122 )
          LOBYTE(v122) = 1;
        if ( (_BYTE)v122
          && SepSidInTokenSidHash(
               (PSID_AND_ATTRIBUTES_HASH)(v101 + 808),
               0LL,
               SeConstrainedImpersonationCapabilitySid,
               0,
               1,
               0,
               0) )
        {
          ObHandleRevocationBlockAddObject(*(_QWORD *)(v66 + 216) + 128LL, v60);
        }
      }
      ExReleaseResourceLite(*(PERESOURCE *)(v101 + 48));
      KeLeaveCriticalRegion();
      ExReleaseResourceLite(*(PERESOURCE *)(v66 + 48));
      KeLeaveCriticalRegion();
    }
  }
LABEL_83:
  v67 = Object;
  if ( a5 && v194 )
    *v194 = Object;
  v68 = v159;
  v69 = v188;
  v70 = v46 | 0xFFFFFFFF80000000uLL;
  if ( !v159 )
    v70 = v46;
  *v188 = v70;
  v28 = v160 != 0 ? 0x40000000 : 0;
LABEL_87:
  if ( v183 != &v183 )
  {
    ObpPostInterceptHandleCreate((_DWORD)v67, v68, v28, v161, (__int64)&v183);
    v67 = Object;
  }
  if ( (xmmword_140572410 & 0x40) != 0 && v28 >= 0 )
    EtwpTraceHandle(4384LL, *v69, v67, v65);
LABEL_90:
  v71 = (struct _EX_RUNDOWN_REF *)BugCheckParameter1;
LABEL_91:
  if ( v162 )
    ExReleaseRundownProtection_0(v71 + 96);
  return (unsigned int)v28;
}
