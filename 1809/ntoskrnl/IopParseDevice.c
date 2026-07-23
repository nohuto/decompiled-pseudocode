/*
 * XREFs of IopParseDevice @ 0x14063DD00
 * Callers:
 *     IopParseFile @ 0x1406A4800 (IopParseFile.c)
 * Callees:
 *     PsGetCurrentProcessSessionId @ 0x140002AA0 (PsGetCurrentProcessSessionId.c)
 *     KeReadStateSemaphore @ 0x140005D60 (KeReadStateSemaphore.c)
 *     PsGetServerSiloServiceSessionId @ 0x1400067D0 (PsGetServerSiloServiceSessionId.c)
 *     IopIncrementVpbRefCount @ 0x14000ED50 (IopIncrementVpbRefCount.c)
 *     RtlGetActiveConsoleId @ 0x140010890 (RtlGetActiveConsoleId.c)
 *     CmSiFreeMemory @ 0x140013000 (CmSiFreeMemory.c)
 *     IopGetDevicePDO @ 0x140019CF4 (IopGetDevicePDO.c)
 *     PsGetCurrentServerSilo @ 0x14004D270 (PsGetCurrentServerSilo.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14004E220 (ObfReferenceObject.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140050860 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegionThread @ 0x140051600 (KeLeaveCriticalRegionThread.c)
 *     SeAccessCheck @ 0x140051640 (SeAccessCheck.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     PsIsThreadTerminating @ 0x1400891C0 (PsIsThreadTerminating.c)
 *     IopSetFileObjectExtensionFlag @ 0x14008BD48 (IopSetFileObjectExtensionFlag.c)
 *     IopGetSetSpecificExtension @ 0x14008CFBC (IopGetSetSpecificExtension.c)
 *     IoGetSilo @ 0x14008D7A0 (IoGetSilo.c)
 *     KeEnterCriticalRegionThread @ 0x14008FA60 (KeEnterCriticalRegionThread.c)
 *     PsIsServerSilo @ 0x14008FCA0 (PsIsServerSilo.c)
 *     IopDeleteFileObjectExtension @ 0x140092090 (IopDeleteFileObjectExtension.c)
 *     ObfReferenceObjectWithTag @ 0x1400ACD30 (ObfReferenceObjectWithTag.c)
 *     PsIsHostSilo @ 0x1400B89C0 (PsIsHostSilo.c)
 *     IoGetRelatedDeviceObject @ 0x1400B8AD0 (IoGetRelatedDeviceObject.c)
 *     IopDecrementDeviceObjectRef @ 0x1400B8B60 (IopDecrementDeviceObjectRef.c)
 *     IopDoFullTraverseCheck @ 0x1400B8CF0 (IopDoFullTraverseCheck.c)
 *     KeInitializeEvent @ 0x1400B8DB0 (KeInitializeEvent.c)
 *     IoCallDriverWithTracing @ 0x1400B8DE0 (IoCallDriverWithTracing.c)
 *     IopDequeueIrpFromThread @ 0x1400B8E30 (IopDequeueIrpFromThread.c)
 *     IopCheckVpbMounted @ 0x1400B8F70 (IopCheckVpbMounted.c)
 *     IoGetAttachedDevice @ 0x1400B9190 (IoGetAttachedDevice.c)
 *     IopAllocateIrpExReturn @ 0x1400B9220 (IopAllocateIrpExReturn.c)
 *     IoFreeIrp @ 0x1400B95B0 (IoFreeIrp.c)
 *     RtlCopyUnicodeString @ 0x1400B97D0 (RtlCopyUnicodeString.c)
 *     IopCheckDeviceAndDriver @ 0x1400B9850 (IopCheckDeviceAndDriver.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     IopQueueThreadIrp @ 0x1400BC2C0 (IopQueueThreadIrp.c)
 *     IopVerifierExAllocatePool_0 @ 0x1400DD8DC (IopVerifierExAllocatePool_0.c)
 *     IopDereferenceVpbAndFree @ 0x14010C330 (IopDereferenceVpbAndFree.c)
 *     IopSymlinkGetMostRecentlyUsedName @ 0x14012592C (IopSymlinkGetMostRecentlyUsedName.c)
 *     IopSymlinkGetECP @ 0x140125948 (IopSymlinkGetECP.c)
 *     IopCreateSecurityCheck @ 0x1401300EC (IopCreateSecurityCheck.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     IopCheckSessionDeviceAccess @ 0x140283ED8 (IopCheckSessionDeviceAccess.c)
 *     IopAllowRemoteDASD @ 0x140285074 (IopAllowRemoteDASD.c)
 *     PsAcquireSiloHardReference @ 0x1402E9750 (PsAcquireSiloHardReference.c)
 *     PsReleaseSiloHardReference @ 0x1402E9810 (PsReleaseSiloHardReference.c)
 *     SeFastTraverseCheck @ 0x1402FE990 (SeFastTraverseCheck.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     FeatureServicing_43969648_EnableKey @ 0x140582E8C (FeatureServicing_43969648_EnableKey.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x140589B1C (SeIsAppContainerOrIdentifyLevelContext.c)
 *     SeOpenObjectAuditAlarm @ 0x1405971B0 (SeOpenObjectAuditAlarm.c)
 *     SeTokenIsAdmin @ 0x1405BCCD0 (SeTokenIsAdmin.c)
 *     IopCheckTopDeviceHint @ 0x1405DDC9C (IopCheckTopDeviceHint.c)
 *     SeUnlockSubjectContext @ 0x1405E72C0 (SeUnlockSubjectContext.c)
 *     SeLockSubjectContext @ 0x1405E7300 (SeLockSubjectContext.c)
 *     RtlEqualUnicodeString @ 0x140626D60 (RtlEqualUnicodeString.c)
 *     IopRetrieveTransactionParameters @ 0x14063A990 (IopRetrieveTransactionParameters.c)
 *     IopCloseFile @ 0x14063AB30 (IopCloseFile.c)
 *     IopSymlinkPropagateToExtensionIfNeeded @ 0x14063AFB0 (IopSymlinkPropagateToExtensionIfNeeded.c)
 *     IopAllocRealFileObject @ 0x14063CB20 (IopAllocRealFileObject.c)
 *     SeSetAccessStateGenericMapping @ 0x14063DB10 (SeSetAccessStateGenericMapping.c)
 *     IopCheckBackupRestorePrivilege @ 0x14063DB30 (IopCheckBackupRestorePrivilege.c)
 *     RtlMapGenericMask @ 0x14063FD50 (RtlMapGenericMask.c)
 *     IoGetIrpExtraCreateParameter @ 0x14063FDB0 (IoGetIrpExtraCreateParameter.c)
 *     IopQueryInformation @ 0x1406990D0 (IopQueryInformation.c)
 *     SeAppendPrivileges @ 0x14069ABE0 (SeAppendPrivileges.c)
 *     IopSymlinkUpdateECP @ 0x1406ACF50 (IopSymlinkUpdateECP.c)
 *     IopSymlinkCreateECP @ 0x1406AD1F8 (IopSymlinkCreateECP.c)
 *     IopSymlinkProcessReparse @ 0x1406AD4B0 (IopSymlinkProcessReparse.c)
 *     IoQueryFileInformation @ 0x1406D00D0 (IoQueryFileInformation.c)
 *     IopSymlinkEnforceEnabledTypes @ 0x140763AD0 (IopSymlinkEnforceEnabledTypes.c)
 *     IopCancelAlertedRequest @ 0x14081A7EC (IopCancelAlertedRequest.c)
 *     IoCancelFileOpen @ 0x14081CFC0 (IoCancelFileOpen.c)
 *     IopCheckAndUpdateStopOnSymlinkEcp @ 0x14081DF78 (IopCheckAndUpdateStopOnSymlinkEcp.c)
 *     IopGetNetworkOpenInformation @ 0x14081E714 (IopGetNetworkOpenInformation.c)
 *     PsGetParentSilo @ 0x140887970 (PsGetParentSilo.c)
 *     VfFastIoCheckState @ 0x140929F74 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x14092A04C (VfFastIoSnapState.c)
 */

__int64 __fastcall IopParseDevice(
        struct _DEVICE_OBJECT *BugCheckParameter2,
        POBJECT_TYPE *a2,
        struct _ACCESS_STATE *a3,
        unsigned __int8 a4,
        int a5,
        PUNICODE_STRING AbsoluteObjectName,
        PCUNICODE_STRING SourceString,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        PVOID *a11)
{
  PACCESS_STATE v11; // r14
  unsigned int *v12; // rsi
  __int64 v13; // r15
  int v14; // ebx
  __int64 v15; // r9
  __int64 v16; // r8
  __int64 v17; // rdx
  PVOID v18; // r13
  unsigned __int64 v19; // rcx
  __int64 result; // rax
  bool v21; // al
  __int64 v22; // rax
  __int64 CurrentServerSilo; // rax
  int ServerSiloServiceSessionId; // ebx
  _DWORD *DevicePDO; // rax
  void *v26; // rdi
  bool v27; // bl
  ACCESS_MASK *p_RemainingDesiredAccess; // rsi
  ACCESS_MASK RemainingDesiredAccess; // r12d
  char v30; // r8
  char v31; // dl
  __int64 v32; // rcx
  int v33; // r10d
  unsigned __int8 v34; // r9
  ULONG ActiveConsoleId; // ebx
  __int64 v36; // rax
  int v37; // ebx
  bool v38; // bl
  SECURITY_SUBJECT_CONTEXT *p_SubjectSecurityContext; // rdi
  unsigned int v40; // r13d
  PACCESS_TOKEN ClientToken; // rcx
  PACCESS_STATE v42; // r14
  ACCESS_MASK v43; // eax
  struct _KTHREAD *v44; // rsi
  char v45; // al
  char v46; // bl
  unsigned __int16 Length; // r8
  __int64 v48; // rdx
  __int64 v49; // rdi
  PDEVICE_OBJECT AttachedDevice; // rcx
  __int64 v51; // rax
  int v52; // edx
  __int64 v53; // rdx
  __int64 v54; // r8
  __int64 v55; // rdx
  __int64 v56; // r8
  int v57; // eax
  __int64 Irp; // rax
  __int64 v59; // r14
  unsigned __int8 v60; // dl
  __int64 v61; // r13
  int v62; // eax
  int v63; // r8d
  char v64; // al
  __int64 v65; // rdx
  __int64 v66; // r8
  _BYTE *v67; // rbx
  PVOID v68; // rbx
  unsigned __int64 DeviceType; // rax
  __int64 v70; // rdx
  __int64 v71; // rbx
  __int64 v72; // rcx
  __int64 Silo; // rax
  _DWORD *v74; // rbx
  __int64 v75; // r9
  unsigned __int16 v76; // ax
  unsigned __int16 v77; // cx
  char *v78; // rcx
  __int64 v79; // rdx
  __int64 v80; // r8
  PCUNICODE_STRING v81; // rsi
  _WORD *v82; // rdx
  void *v83; // rcx
  unsigned __int16 v84; // ax
  PVOID v85; // rsi
  __int16 *MostRecentlyUsedName; // rdx
  NTSTATUS updated; // eax
  __int64 v88; // rdx
  __int64 v89; // r8
  NTSTATUS v90; // eax
  unsigned __int8 v91; // al
  int v92; // ebx
  BOOLEAN v93; // di
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *CurrentPrcb; // rdx
  int *SchedulerAssist; // r10
  int v97; // r9d
  char *PriorityState; // rax
  int v99; // ecx
  _KTHREAD *NextThread; // r8
  _KTHREAD *IdleThread; // rax
  struct _KPRCB *v102; // rdx
  int *v103; // r10
  int v104; // r9d
  char *v105; // rax
  int v106; // ecx
  _KTHREAD *v107; // r8
  _KTHREAD *v108; // rax
  __int64 v109; // rdx
  __int64 v110; // r8
  int v111; // edi
  unsigned __int8 v112; // si
  _DWORD *v113; // rbx
  unsigned __int64 v114; // rcx
  __int64 v115; // rax
  __int64 v116; // rcx
  char v117; // al
  int v118; // ecx
  int v119; // ecx
  PUNICODE_STRING v120; // rdi
  char v121; // r13
  ULONG_PTR v122; // rax
  __int64 v123; // r14
  const UNICODE_STRING *v124; // rdx
  unsigned __int16 v125; // ax
  wchar_t *PoolWithTag; // rbx
  wchar_t *Buffer; // rcx
  _QWORD *v128; // rax
  _QWORD *v129; // rdi
  __int64 v130; // rdx
  __int64 v131; // r8
  __int64 v132; // r9
  ULONG_PTR v133; // rdx
  __int64 v134; // rdx
  __int64 v135; // r8
  PVOID v136; // rcx
  __int64 v137; // rdx
  __int64 v138; // r8
  __int64 v139; // rdx
  __int64 v140; // r8
  _QWORD *v141; // rcx
  PVOID v142; // rcx
  int v143; // ecx
  void *v144; // rcx
  _QWORD *v145; // rcx
  __int64 v146; // rdx
  __int64 v147; // r8
  __int64 v148; // r8
  int v149; // ecx
  unsigned __int64 v150; // rax
  unsigned int v151; // ecx
  PACCESS_STATE v152; // rcx
  __int64 v153; // rbx
  __int64 v154; // rdx
  PDEVICE_OBJECT RelatedDeviceObject; // rsi
  __int64 v156; // r8
  ULONG_PTR v157; // rcx
  __int64 v158; // rbx
  PVOID v159; // rcx
  __int64 v160; // rax
  unsigned __int64 v161; // rax
  __int64 v162; // rdx
  NTSTATUS FileInformation; // eax
  char v164; // di
  PFAST_IO_DISPATCH FastIoDispatch; // rcx
  __int64 (__fastcall *FastIoQueryBasicInfo)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // rbx
  struct _ECP_LIST *v167; // r14
  PVOID Pool_0; // rax
  __int64 (__fastcall *FastIoQueryNetworkOpenInfo)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // r14
  void *v170; // rbx
  NTSTATUS v171; // eax
  _QWORD *v172; // rcx
  __int64 v173; // rdx
  __int64 v174; // r8
  __int64 v175; // rdx
  __int64 v176; // r8
  NTSTATUS AccessStatus; // [rsp+60h] [rbp-108h] BYREF
  PVOID v178; // [rsp+68h] [rbp-100h] BYREF
  unsigned int v179; // [rsp+70h] [rbp-F8h]
  PDEVICE_OBJECT DeviceObject; // [rsp+78h] [rbp-F0h] BYREF
  char v181[4]; // [rsp+80h] [rbp-E8h] BYREF
  int v182; // [rsp+84h] [rbp-E4h]
  ACCESS_MASK GrantedAccess; // [rsp+88h] [rbp-E0h] BYREF
  PVOID Object; // [rsp+90h] [rbp-D8h]
  PPRIVILEGE_SET Privileges; // [rsp+98h] [rbp-D0h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+A0h] [rbp-C8h]
  void *Src; // [rsp+A8h] [rbp-C0h] BYREF
  char v188; // [rsp+B0h] [rbp-B8h]
  struct _ECP_LIST *v189; // [rsp+B8h] [rbp-B0h] BYREF
  PVOID P; // [rsp+C0h] [rbp-A8h]
  int v191; // [rsp+C8h] [rbp-A0h]
  ULONG ReturnedLength; // [rsp+CCh] [rbp-9Ch] BYREF
  __int64 v193; // [rsp+D0h] [rbp-98h]
  __int64 v194; // [rsp+D8h] [rbp-90h] BYREF
  ULONG_PTR BugCheckParameter4[2]; // [rsp+E0h] [rbp-88h] BYREF
  UNICODE_STRING ObjectTypeName; // [rsp+F0h] [rbp-78h] BYREF
  struct _ECP_LIST *ExtraCreateParameter[2]; // [rsp+100h] [rbp-68h] BYREF
  _QWORD v198[2]; // [rsp+110h] [rbp-58h] BYREF
  ACCESS_MASK v199; // [rsp+120h] [rbp-48h]
  int v200; // [rsp+124h] [rbp-44h]
  __int64 retaddr; // [rsp+168h] [rbp+0h]
  __int64 (__fastcall *v203)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // [rsp+178h] [rbp+10h] BYREF
  PACCESS_STATE AccessState; // [rsp+180h] [rbp+18h]
  unsigned __int8 v205; // [rsp+188h] [rbp+20h]

  v205 = a4;
  AccessState = a3;
  v11 = a3;
  v12 = (unsigned int *)BugCheckParameter2;
  v13 = a8;
  v191 = 0;
  LOBYTE(v182) = 0;
  Privileges = 0LL;
  P = 0LL;
  if ( a2 != IoFileObjectType )
    return 3221225508LL;
  CurrentThread = KeGetCurrentThread();
  v14 = (unsigned __int8)v203 & 0xE9 | 4;
  v179 = v14;
  RtlInitUnicodeString(&ObjectTypeName, L"File");
  *a11 = 0LL;
  v178 = 0LL;
  if ( !v13 )
    return 3221225508LL;
  while ( 2 )
  {
    v15 = 0x60010000110040LL;
    v16 = 2684354563LL;
    v17 = 0x1080020084LL;
    if ( *(_WORD *)v13 != 8 || *(_WORD *)(v13 + 2) != 224 )
      return 3221225508LL;
    v18 = v12;
    Object = v12;
    if ( *(_DWORD *)(v13 + 32) == 1 )
    {
      *(_DWORD *)(v13 + 32) = -1096154543;
      *(_QWORD *)(v13 + 40) = v12;
      *(_DWORD *)(v13 + 16) = 0;
      ObfReferenceObject(v12);
      return 0LL;
    }
    if ( (*(_DWORD *)(v13 + 152) & 0x10) != 0 )
    {
      v19 = v12[18];
      if ( *(_QWORD *)(v13 + 24) == 2684354563LL )
      {
        if ( (unsigned int)v19 > 0x24 || !_bittest64(&v17, v19) )
        {
LABEL_10:
          *(_DWORD *)(v13 + 16) = -1073741192;
          return 3221226104LL;
        }
      }
      else
      {
        LOBYTE(v17) = (unsigned int)v19 <= 0x24 && _bittest64(&v17, v19);
        v21 = (unsigned int)v19 <= 0x36 && _bittest64(&v15, v19);
        if ( !(_BYTE)v17 && !v21 )
          goto LABEL_10;
        result = IopSymlinkEnforceEnabledTypes(*(_BYTE *)(v13 + 152) & 8, v17, *(_QWORD *)(v13 + 168));
        AccessStatus = result;
        if ( (int)result < 0 )
        {
LABEL_447:
          *(_DWORD *)(v13 + 16) = result;
          return result;
        }
      }
    }
    v22 = *(_QWORD *)(v13 + 40);
    if ( v22 )
    {
      v18 = *(PVOID *)(v22 + 8);
      Object = v18;
    }
    result = IopCheckDeviceAndDriver(v13, (ULONG_PTR)v18, v16);
    AccessStatus = result;
    if ( (int)result < 0 )
      goto LABEL_447;
    if ( (*(_DWORD *)(*((_QWORD *)v18 + 39) + 32LL) & 0x400) != 0 && !*(_QWORD *)(v13 + 40) )
    {
      CurrentServerSilo = PsGetCurrentServerSilo();
      ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId(CurrentServerSilo);
      if ( ServerSiloServiceSessionId != (unsigned int)PsGetCurrentProcessSessionId()
        || IopSessionZeroAccessCheckEnabled && (*(_DWORD *)(v13 + 64) & 0x40000) == 0 )
      {
        DevicePDO = IopGetDevicePDO((__int64)v18);
        v26 = DevicePDO;
        if ( DevicePDO )
        {
          v27 = IopCheckSessionDeviceAccess((__int64)DevicePDO);
          ObfDereferenceObject(v26);
          if ( !v27 )
          {
            IopDecrementDeviceObjectRef((ULONG_PTR)v18, 0, 0LL);
            *(_DWORD *)(v13 + 16) = -1073741790;
            return 3221225506LL;
          }
        }
      }
      v14 = v179;
    }
    p_RemainingDesiredAccess = &v11->RemainingDesiredAccess;
    RtlMapGenericMask(&v11->RemainingDesiredAccess, (PGENERIC_MAPPING)((char *)IoFileObjectType + 76));
    RtlMapGenericMask(&v11->OriginalDesiredAccess, (PGENERIC_MAPPING)((char *)IoFileObjectType + 76));
    SeSetAccessStateGenericMapping(v11, (PGENERIC_MAPPING)((char *)IoFileObjectType + 76));
    RemainingDesiredAccess = v11->RemainingDesiredAccess;
    v30 = v205 || (*(_DWORD *)(v13 + 84) & 1) != 0;
    IopCheckBackupRestorePrivilege(v11, (_DWORD *)(v13 + 64), v30, *(_DWORD *)(v13 + 88));
    v31 = *(_BYTE *)(v13 + 136);
    if ( v31 && !SourceString->Length || (v11->Flags & 0x100) != 0 )
      RemainingDesiredAccess |= v11->PreviouslyGrantedAccess;
    v32 = *(_QWORD *)(v13 + 40);
    LOBYTE(v33) = v182;
    if ( v32 && (*(_DWORD *)(v32 + 80) & 0x400000) != 0 )
    {
      v33 = (unsigned __int8)v182;
      if ( !SourceString->Length )
        v33 = 1;
      v182 = v33;
    }
    v34 = v205;
    if ( (v205 || (*(_DWORD *)(v13 + 84) & 1) != 0) && (!v32 || (_BYTE)v33) && !v31 )
    {
      LOBYTE(v14) = v14 & 0xDF;
      v179 = v14;
      if ( SourceString->Length )
      {
        p_SubjectSecurityContext = &v11->SubjectSecurityContext;
        if ( IopDoFullTraverseCheck((__int64)v18, v205, &v11->SubjectSecurityContext) )
        {
          LOBYTE(v14) = (v14 ^ IopCreateSecurityCheck(
                                 (__int64)v18,
                                 0LL,
                                 v11,
                                 RemainingDesiredAccess | 0x20,
                                 1,
                                 Privileges,
                                 &GrantedAccess,
                                 AbsoluteObjectName,
                                 &ObjectTypeName,
                                 (__int64)CurrentThread,
                                 0)) & 1 ^ v14;
        }
        else if ( (v11->Flags & 1) != 0 )
        {
          LOBYTE(v14) = v14 | 1;
        }
        else
        {
          v44 = CurrentThread;
          KeEnterCriticalRegionThread((__int64)CurrentThread);
          ExAcquireResourceSharedLite(&IopSecurityResource, 1u);
          LOBYTE(v14) = (v14 ^ SeFastTraverseCheck(*((_QWORD *)v18 + 34), (__int64)v11, 32)) & 1 ^ v14;
          if ( (v14 & 1) == 0 )
          {
            Privileges = 0LL;
            SeLockSubjectContext(p_SubjectSecurityContext);
            LOBYTE(v14) = ((v14 | 0x20) ^ SeAccessCheck(
                                            *((PSECURITY_DESCRIPTOR *)v18 + 34),
                                            p_SubjectSecurityContext,
                                            1u,
                                            0x20u,
                                            0,
                                            &Privileges,
                                            (PGENERIC_MAPPING)((char *)IoFileObjectType + 76),
                                            1,
                                            &GrantedAccess,
                                            &AccessStatus)) & 1 ^ (v14 | 0x20);
            v11 = AccessState;
            if ( Privileges )
            {
              SeAppendPrivileges(AccessState, Privileges);
              CmSiFreeMemory(Privileges);
            }
          }
          ExReleaseResourceLite(&IopSecurityResource);
          KeLeaveCriticalRegionThread((__int64)v44);
        }
      }
      else
      {
        v38 = 0;
        if ( (*((_DWORD *)v18 + 13) & 0x40001) != 0 && (RemainingDesiredAccess & 0xFFEDFF7F) != 0 )
        {
          ActiveConsoleId = RtlGetActiveConsoleId();
          if ( ActiveConsoleId != (unsigned int)PsGetCurrentProcessSessionId() )
          {
            v36 = PsGetCurrentServerSilo();
            v37 = PsGetServerSiloServiceSessionId(v36);
            if ( v37 != (unsigned int)PsGetCurrentProcessSessionId() && !IopAllowRemoteDASD() )
              v38 = 1;
          }
        }
        Privileges = 0LL;
        KeEnterCriticalRegionThread((__int64)CurrentThread);
        ExAcquireResourceSharedLite(&IopSecurityResource, 1u);
        p_SubjectSecurityContext = &AccessState->SubjectSecurityContext;
        SeLockSubjectContext(&AccessState->SubjectSecurityContext);
        v40 = v179;
        LOBYTE(v40) = v179 | 0x20;
        v179 = v40;
        if ( !v38 )
          goto LABEL_64;
        ClientToken = p_SubjectSecurityContext->ClientToken;
        if ( !p_SubjectSecurityContext->ClientToken )
          ClientToken = AccessState->SubjectSecurityContext.PrimaryToken;
        if ( SeTokenIsAdmin(ClientToken) )
        {
LABEL_64:
          v14 = v179;
          v18 = Object;
          LOBYTE(v14) = (v14 ^ SeAccessCheck(
                                 *((PSECURITY_DESCRIPTOR *)Object + 34),
                                 p_SubjectSecurityContext,
                                 (v179 & 0x20) != 0,
                                 RemainingDesiredAccess,
                                 0,
                                 &Privileges,
                                 (PGENERIC_MAPPING)((char *)IoFileObjectType + 76),
                                 1,
                                 &GrantedAccess,
                                 &AccessStatus)) & 1 ^ v14;
          v42 = AccessState;
          if ( Privileges )
          {
            SeAppendPrivileges(AccessState, Privileges);
            CmSiFreeMemory(Privileges);
          }
          if ( (v14 & 1) != 0 )
          {
            v43 = GrantedAccess;
            v42->PreviouslyGrantedAccess |= GrantedAccess;
            *p_RemainingDesiredAccess &= ~(v43 | 0x2000000);
            *(_BYTE *)(v13 + 136) = 1;
          }
        }
        else
        {
          v14 = v179;
          LOBYTE(v14) = v179 & 0xFE;
          AccessStatus = -1073741790;
          v18 = Object;
        }
        v11 = AccessState;
        SeOpenObjectAuditAlarm(
          &ObjectTypeName,
          v18,
          AbsoluteObjectName,
          *((PSECURITY_DESCRIPTOR *)v18 + 34),
          AccessState,
          0,
          v14 & 1,
          1,
          &AccessState->GenerateOnClose);
        ExReleaseResourceLite(&IopSecurityResource);
        KeLeaveCriticalRegionThread((__int64)CurrentThread);
      }
      if ( (v14 & 0x20) != 0 )
        SeUnlockSubjectContext(p_SubjectSecurityContext);
      if ( (v14 & 1) == 0 )
        goto LABEL_338;
      v34 = v205;
    }
    if ( *(_BYTE *)(v13 + 137) || *(_BYTE *)(v13 + 138) )
      v45 = 64;
    else
      v45 = 0;
    v46 = v45 | v14 & 0xBF;
    Length = SourceString->Length;
    if ( SourceString->Length
      || (v48 = *(_QWORD *)(v13 + 40)) != 0
      || (RemainingDesiredAccess & 0xFEE1FF7F) != 0
      || (v46 & 0x40) != 0 )
    {
      LOBYTE(v14) = v46 & 0xF7;
      v48 = *(_QWORD *)(v13 + 40);
    }
    else
    {
      LOBYTE(v14) = v46 | 8;
    }
    v179 = v14;
    v49 = 0LL;
    v193 = 0LL;
    if ( !v48 || (*(_DWORD *)(v48 + 80) & 0x800) != 0 )
    {
      AttachedDevice = (PDEVICE_OBJECT)v18;
      DeviceObject = (PDEVICE_OBJECT)v18;
      if ( *((_QWORD *)v18 + 7) && (v14 & 8) == 0 )
      {
        if ( (*((_DWORD *)v18 + 13) & 0x100) != 0
          && (*(_DWORD *)(*((_QWORD *)v18 + 39) + 32LL) & 0x800) == 0
          && (v34 || (*(_DWORD *)(v13 + 84) & 1) != 0)
          && (v48 || Length)
          && !(_BYTE)v182 )
        {
          Privileges = 0LL;
          if ( !IopCreateSecurityCheck(
                  (__int64)v18,
                  v18,
                  v11,
                  RemainingDesiredAccess,
                  *(_DWORD *)(v13 + 88),
                  0LL,
                  &GrantedAccess,
                  AbsoluteObjectName,
                  &ObjectTypeName,
                  (__int64)CurrentThread,
                  0) )
            goto LABEL_338;
        }
        v51 = IopCheckVpbMounted(v13, (ULONG_PTR)v18, (__int64)SourceString, &AccessStatus);
        v49 = v51;
        v193 = v51;
        if ( !v51 )
          return (unsigned int)AccessStatus;
        AttachedDevice = *(PDEVICE_OBJECT *)(v51 + 8);
        DeviceObject = AttachedDevice;
      }
      if ( (*(_DWORD *)(v13 + 152) & 1) != 0 )
      {
        LOBYTE(v14) = v14 | 2;
        v179 = v14;
      }
      else if ( AttachedDevice->AttachedDevice )
      {
        AttachedDevice = IoGetAttachedDevice(AttachedDevice);
        DeviceObject = AttachedDevice;
      }
    }
    else
    {
      AttachedDevice = BugCheckParameter2;
      DeviceObject = BugCheckParameter2;
      if ( *(_QWORD *)(v48 + 16) )
      {
        v49 = *(_QWORD *)(v48 + 16);
        v193 = v49;
        if ( (*((_DWORD *)v18 + 13) & 0x100) != 0
          && (*(_DWORD *)(*((_QWORD *)v18 + 39) + 32LL) & 0x800) == 0
          && (v34 || (*(_DWORD *)(v13 + 84) & 1) != 0)
          && !(_BYTE)v182 )
        {
          Privileges = 0LL;
          if ( !IopCreateSecurityCheck(
                  (__int64)v18,
                  v18,
                  v11,
                  RemainingDesiredAccess,
                  *(_DWORD *)(v13 + 88),
                  0LL,
                  &GrantedAccess,
                  AbsoluteObjectName,
                  &ObjectTypeName,
                  (__int64)CurrentThread,
                  0) )
            goto LABEL_338;
        }
        IopIncrementVpbRefCount(v49, 1);
        AttachedDevice = DeviceObject;
      }
      if ( (*(_DWORD *)(v13 + 152) & 1) != 0 )
      {
        if ( v49 )
        {
          AttachedDevice = *(PDEVICE_OBJECT *)(v49 + 8);
          DeviceObject = AttachedDevice;
        }
        LOBYTE(v14) = v14 | 2;
        v179 = v14;
      }
    }
    v52 = *((_DWORD *)v18 + 13);
    if ( (v52 & 0x40001) != 0 && (*((_DWORD *)v18 + 12) & 0x600100) == 0 && (v52 & 0x100) == 0 )
    {
      LOBYTE(v203) = 0;
      SeIsAppContainerOrIdentifyLevelContext(&v11->SubjectSecurityContext, &v203);
      if ( !(_BYTE)v203 )
      {
LABEL_127:
        AttachedDevice = DeviceObject;
        goto LABEL_128;
      }
      if ( v49 )
      {
        if ( (*(_DWORD *)(*(_QWORD *)(v49 + 8) + 48LL) & 0x20000) != 0 )
          goto LABEL_127;
        IopDereferenceVpbAndFree(v49, v53, v54);
      }
LABEL_338:
      IopDecrementDeviceObjectRef((ULONG_PTR)v18, 0, 0LL);
      return 3221225506LL;
    }
LABEL_128:
    if ( (v14 & 2) == 0 )
      goto LABEL_131;
    AccessStatus = IopCheckTopDeviceHint((unsigned int **)&DeviceObject, v13, (v14 & 8) != 0, SourceString);
    if ( AccessStatus < 0 )
    {
      if ( v49 )
        IopDereferenceVpbAndFree(v49, v55, v56);
      IopDecrementDeviceObjectRef((ULONG_PTR)v18, 0, 0LL);
      return (unsigned int)AccessStatus;
    }
    AttachedDevice = DeviceObject;
LABEL_131:
    v57 = *(_DWORD *)(v13 + 152);
    if ( (v57 & 0x10) != 0 )
      *(_DWORD *)(v13 + 152) = v57 & 0xFFFFFFEF;
    if ( ((AttachedDevice->Characteristics & 0x100) != 0
       || IopRequireDeviceAccessCheck && (*((_DWORD *)v18 + 13) & 0x100000) != 0)
      && (v205 || (*(_DWORD *)(v13 + 84) & 1) != 0)
      && (*(_QWORD *)(v13 + 40) || SourceString->Length)
      && !(_BYTE)v182 )
    {
      Privileges = 0LL;
      if ( !IopCreateSecurityCheck(
              (__int64)v18,
              AttachedDevice,
              v11,
              RemainingDesiredAccess,
              *(_DWORD *)(v13 + 88),
              0LL,
              &GrantedAccess,
              AbsoluteObjectName,
              &ObjectTypeName,
              (__int64)CurrentThread,
              1) )
      {
        IopDecrementDeviceObjectRef((ULONG_PTR)v18, 0, 0LL);
        if ( v49 )
          IopDereferenceVpbAndFree(v49, v134, v135);
        return 3221225506LL;
      }
      AttachedDevice = DeviceObject;
    }
    Irp = IopAllocateIrpExReturn((__int64)AttachedDevice, (unsigned __int8)AttachedDevice->StackSize, 0LL, retaddr);
    v59 = Irp;
    if ( !Irp )
    {
      IopDecrementDeviceObjectRef((ULONG_PTR)v18, 0, 0LL);
      if ( v49 )
        IopDereferenceVpbAndFree(v49, v175, v176);
      return 3221225626LL;
    }
    *(_QWORD *)(Irp + 152) = CurrentThread;
    v60 = v205;
    *(_BYTE *)(Irp + 64) = v205;
    *(_DWORD *)(Irp + 16) = 2180;
    v198[0] = a9;
    v198[1] = AccessState;
    v199 = RemainingDesiredAccess;
    v200 = *(_DWORD *)(v13 + 64);
    v61 = *(_QWORD *)(Irp + 184);
    *(_BYTE *)(v61 - 69) = 0;
    v62 = *(_DWORD *)(v13 + 120);
    v63 = a5;
    if ( v62 )
    {
      if ( v62 == 1 )
        *(_BYTE *)(v61 - 72) = 1;
      else
        *(_BYTE *)(v61 - 72) = 19;
      *(_QWORD *)(v61 - 40) = *(_QWORD *)(v13 + 128);
    }
    else
    {
      *(_BYTE *)(v61 - 72) = 0;
      *(_DWORD *)(v61 - 40) = *(_DWORD *)(v13 + 80);
      v64 = *(_BYTE *)(v13 + 84);
      *(_BYTE *)(v61 - 70) = v64;
      if ( (v63 & 0x40) == 0 )
        *(_BYTE *)(v61 - 70) = v64 | 0x80;
    }
    *(_QWORD *)(v59 + 88) = *(_QWORD *)(v13 + 56);
    *(_QWORD *)(v59 + 24) = *(_QWORD *)(v13 + 72);
    *(_DWORD *)(v61 - 56) = (*(_DWORD *)(v13 + 88) << 24) | *(_DWORD *)(v13 + 64) & 0xFFFFFF;
    *(_WORD *)(v61 - 48) = *(_WORD *)(v13 + 68);
    *(_WORD *)(v61 - 46) = *(_WORD *)(v13 + 70);
    *(_QWORD *)(v61 - 64) = v198;
    *(_QWORD *)(v59 + 112) = *(_QWORD *)(v13 + 168);
    *(_QWORD *)(v59 + 72) = BugCheckParameter4;
    *(_QWORD *)(v59 + 8) = 0LL;
    *(_BYTE *)(v59 + 65) = 0;
    *(_BYTE *)(v59 + 68) = 0;
    *(_QWORD *)(v59 + 80) = 0LL;
    *(_QWORD *)(v59 + 104) = 0LL;
    *(_QWORD *)(v59 + 160) = 0LL;
    if ( *(_BYTE *)(v13 + 137) )
    {
      v67 = *(_BYTE **)(v13 + 144);
      memset(v67, 0, 0x110uLL);
      v178 = v67 + 48;
      v67[24] = ObHeaderCookie ^ *((_BYTE *)IoFileObjectType + 40) ^ BYTE1(v67);
      *(_QWORD *)v67 = 1LL;
      if ( (a5 & 0x40) == 0 )
        *((_DWORD *)v178 + 20) |= 0x20000u;
      *(_WORD *)v178 = 5;
      *((_WORD *)v178 + 1) = 216;
      *((_QWORD *)v178 + 8) = *(_QWORD *)(v13 + 40);
      v68 = Object;
      *((_QWORD *)v178 + 1) = Object;
      if ( (*(_DWORD *)(v13 + 152) & 0x20) != 0
        && v205
        && ((DeviceObject->Flags & 0x40000) != 0
         || (DeviceType = DeviceObject->DeviceType, (unsigned int)DeviceType <= 0x35)
         && (v70 = 0x20000100100108LL, _bittest64(&v70, DeviceType)))
        && (AccessStatus = IopRetrieveTransactionParameters(
                             (__int64)DeviceObject,
                             v13,
                             RemainingDesiredAccess,
                             (__int64)v178),
            AccessStatus < 0) )
      {
        IoFreeIrp((PIRP)v59);
        v136 = v68;
      }
      else
      {
        v71 = a10;
        if ( PsIsHostSilo(*(_QWORD *)(a10 + 8)) )
        {
          v72 = *((_QWORD *)v178 + 8);
          if ( !v72 )
            goto LABEL_177;
          Silo = IoGetSilo(v72);
          if ( PsIsHostSilo(Silo) )
            goto LABEL_177;
        }
        v194 = 0LL;
        if ( *((_QWORD *)v178 + 8) && PsIsServerSilo(*(_QWORD *)(v71 + 8)) )
          v74 = (_DWORD *)IoGetSilo(*((_QWORD *)v178 + 8));
        else
          v74 = *(_DWORD **)(v71 + 8);
        if ( PsIsHostSilo((__int64)v74) )
          goto LABEL_177;
        AccessStatus = PsAcquireSiloHardReference(v74);
        if ( AccessStatus >= 0 )
        {
          LOBYTE(v75) = 1;
          AccessStatus = IopGetSetSpecificExtension((__int64)v178, 7u, 0x10u, v75, &v194, 0LL);
          if ( AccessStatus >= 0 || (PsReleaseSiloHardReference(v74), AccessStatus >= 0) )
          {
            *(_DWORD *)v194 = 16;
            *(_QWORD *)(v194 + 8) = v74;
            *(_DWORD *)(v194 + 4) |= 1u;
            ObfReferenceObjectWithTag(v74, 0x70536F49u);
LABEL_177:
            v14 = v179;
            goto LABEL_178;
          }
        }
        IoFreeIrp((PIRP)v59);
        v136 = Object;
      }
      IopDecrementDeviceObjectRef((ULONG_PTR)v136, 0, 0LL);
      if ( v49 )
      {
        IopDereferenceVpbAndFree(v49, v137, v138);
        result = (unsigned int)AccessStatus;
        *(_DWORD *)(v13 + 16) = AccessStatus;
        return result;
      }
      goto LABEL_446;
    }
    AccessStatus = IopAllocRealFileObject(
                     (__int64)&v178,
                     (__int64)DeviceObject,
                     (__int64)Object,
                     v63,
                     v60,
                     v13,
                     a10,
                     0,
                     RemainingDesiredAccess);
    if ( AccessStatus < 0 )
    {
      IoFreeIrp((PIRP)v59);
      IopDecrementDeviceObjectRef((ULONG_PTR)Object, 0, 0LL);
      if ( v49 )
        IopDereferenceVpbAndFree(v49, v65, v66);
      if ( v178 )
      {
        *((_QWORD *)v178 + 1) = 0LL;
        ObfDereferenceObject(v178);
        result = (unsigned int)AccessStatus;
        *(_DWORD *)(v13 + 16) = AccessStatus;
        return result;
      }
LABEL_446:
      result = (unsigned int)AccessStatus;
      goto LABEL_447;
    }
LABEL_178:
    if ( (v14 & 8) != 0 )
      *((_DWORD *)v178 + 20) |= 0x800u;
    if ( (EnableFeatureServicing_43969648 == 1
       || EnableFeatureServicing_43969648 && FeatureServicing_43969648_EnableKey())
      && (*(_BYTE *)(v13 + 216) & 2) != 0 )
    {
      IopSetFileObjectExtensionFlag((__int64)v178, 64, 1);
    }
    *(_QWORD *)(v59 + 192) = v178;
    *(_QWORD *)(v61 - 24) = v178;
    v76 = SourceString->Length;
    if ( SourceString->Length )
    {
      if ( v76 >= 0x38u )
      {
        if ( v76 >= 0x78u )
        {
          v77 = 248;
          if ( v76 >= 0xF8u )
            v77 = SourceString->Length;
        }
        else
        {
          v77 = 120;
        }
      }
      else
      {
        v77 = 56;
      }
      *((_WORD *)v178 + 45) = v77;
      *((_QWORD *)v178 + 12) = ExAllocatePoolWithTag(PagedPool, v77, 0x6D4E6F49u);
      v78 = (char *)v178;
      if ( !*((_QWORD *)v178 + 12) )
      {
        IoFreeIrp((PIRP)v59);
        IopDecrementDeviceObjectRef((ULONG_PTR)Object, 0, 0LL);
        if ( v49 )
          IopDereferenceVpbAndFree(v49, v79, v80);
        *((_QWORD *)v178 + 1) = 0LL;
        if ( !*(_BYTE *)(v13 + 137) )
        {
          ObfDereferenceObject(v178);
          return 3221225626LL;
        }
        return 3221225626LL;
      }
    }
    else
    {
      v78 = (char *)v178;
    }
    RtlCopyUnicodeString((PUNICODE_STRING)(v78 + 88), SourceString);
    if ( !*(_BYTE *)(v13 + 137) )
      goto LABEL_215;
    AccessStatus = IopQueryInformation(v13, (_DWORD)DeviceObject, v59, (int)v61 - 72, (__int64)v181);
    if ( AccessStatus < 0 || v181[0] )
    {
      v143 = *(_DWORD *)(v59 + 48);
      *(_DWORD *)(v13 + 16) = v143;
      *(_QWORD *)(v13 + 24) = *(_QWORD *)(v59 + 56);
      if ( v143 == 260 )
      {
        v144 = *(void **)(v59 + 160);
        if ( v144 )
        {
          ExFreePoolWithTag(v144, 0);
          *(_QWORD *)(v59 + 160) = 0LL;
          *(_QWORD *)(v13 + 40) = 0LL;
        }
      }
      v145 = v178;
      if ( *((_WORD *)v178 + 44) )
      {
        ExFreePoolWithTag(*((PVOID *)v178 + 12), 0);
        v145 = v178;
      }
      if ( v145[26] )
        IopDeleteFileObjectExtension((__int64)v145);
      v142 = Object;
      goto LABEL_368;
    }
    v81 = SourceString;
    if ( !RtlEqualUnicodeString((PCUNICODE_STRING)((char *)v178 + 88), SourceString, 0) )
    {
      v82 = v178;
      v83 = (void *)*((_QWORD *)v178 + 12);
      if ( v83 )
      {
        ExFreePoolWithTag(v83, 0);
        RtlInitUnicodeString((PUNICODE_STRING)((char *)v178 + 88), 0LL);
        v82 = v178;
      }
      v84 = v81->Length;
      if ( v81->Length )
      {
        if ( v84 >= 0x38u )
        {
          if ( v84 >= 0x78u )
          {
            if ( v84 < 0xF8u )
              v84 = 248;
          }
          else
          {
            v84 = 120;
          }
        }
        else
        {
          v84 = 56;
        }
        v82[45] = v84;
        *((_QWORD *)v178 + 12) = ExAllocatePoolWithTag(PagedPool, v84, 0x6D4E6F49u);
        if ( !*((_QWORD *)v178 + 12) )
        {
          if ( *((_QWORD *)v178 + 26) )
            IopDeleteFileObjectExtension((__int64)v178);
          IopDecrementDeviceObjectRef((ULONG_PTR)Object, 0, 0LL);
          if ( v49 )
            IopDereferenceVpbAndFree(v49, v139, v140);
          IoFreeIrp((PIRP)v59);
          return 3221225626LL;
        }
        RtlCopyUnicodeString((PUNICODE_STRING)((char *)v178 + 88), v81);
      }
    }
    v85 = Object;
    AccessStatus = IopAllocRealFileObject(
                     (__int64)&v178,
                     (__int64)DeviceObject,
                     (__int64)Object,
                     a5,
                     v205,
                     v13,
                     a10,
                     1,
                     RemainingDesiredAccess);
    if ( AccessStatus < 0 )
    {
      v141 = v178;
      if ( *((_WORD *)v178 + 44) )
      {
        ExFreePoolWithTag(*((PVOID *)v178 + 12), 0);
        v141 = v178;
      }
      if ( v141[26] )
        IopDeleteFileObjectExtension((__int64)v141);
      v142 = v85;
LABEL_368:
      IopDecrementDeviceObjectRef((ULONG_PTR)v142, 0, 0LL);
      if ( v49 )
        IopDereferenceVpbAndFree(v49, v146, v147);
      IoFreeIrp((PIRP)v59);
      return (unsigned int)AccessStatus;
    }
    *(_QWORD *)(v61 - 24) = v178;
    *(_QWORD *)(v59 + 192) = v178;
LABEL_215:
    if ( !*(_DWORD *)(v13 + 120) )
    {
      AccessStatus = IoGetIrpExtraCreateParameter((PIRP)v59, ExtraCreateParameter);
      if ( ExtraCreateParameter[0] )
      {
        if ( IopSymlinkGetECP(ExtraCreateParameter[0], &Src) != -1073741275 )
        {
          MostRecentlyUsedName = (__int16 *)IopSymlinkGetMostRecentlyUsedName((__int64)Src);
          if ( !MostRecentlyUsedName[2] )
          {
            updated = IopSymlinkUpdateECP(
                        (PIRP)v59,
                        MostRecentlyUsedName,
                        AbsoluteObjectName->Length - SourceString->Length,
                        MostRecentlyUsedName[1]);
            AccessStatus = updated;
            if ( updated < 0 )
            {
              *(_DWORD *)(v59 + 48) = updated;
              *(_QWORD *)(v59 + 56) = 0LL;
              LOBYTE(v14) = v14 & 0xFB;
              v179 = v14;
            }
          }
        }
      }
    }
    KeInitializeEvent((PRKEVENT)((char *)v178 + 152), NotificationEvent, 0);
    *(_QWORD *)(v13 + 8) = v178;
    if ( (v14 & 4) != 0 )
    {
      IopQueueThreadIrp(v59, v88, v89);
      v90 = IoCallDriverWithTracing(DeviceObject, v59);
      AccessStatus = v90;
    }
    else
    {
      v90 = AccessStatus;
    }
    if ( v90 != 259 )
      goto LABEL_271;
    v91 = v14 | 0x80;
    v92 = v14 & 0x7F;
    if ( (KeGetCurrentThread()->MiscFlags & 0x400) == 0 )
      v92 = v91;
    v179 = v92;
    v93 = (unsigned __int8)v92 >> 7;
    AccessStatus = KeWaitForSingleObject((char *)v178 + 152, Executive, 0, (unsigned __int8)v92 >> 7, 0LL);
    if ( AccessStatus != 257 )
      goto LABEL_270;
    while ( 1 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(1uLL);
      if ( PsIsThreadTerminating(KeGetCurrentThread())
        || !KeReadStateSemaphore((PRKSEMAPHORE)((char *)v178 + 152)) && *(_BYTE *)(v59 + 68) )
      {
        break;
      }
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          SchedulerAssist = (int *)CurrentPrcb->SchedulerAssist;
          v97 = *SchedulerAssist;
          if ( (*SchedulerAssist & 0x190000) == 0 && !SchedulerAssist[5] )
          {
            PriorityState = CurrentPrcb->PriorityState;
            if ( PriorityState )
            {
              v99 = *PriorityState;
              if ( *PriorityState
                || (NextThread = CurrentPrcb->NextThread, IdleThread = CurrentPrcb->IdleThread, NextThread != IdleThread)
                && (CurrentPrcb->CurrentThread != IdleThread || NextThread) )
              {
                if ( v99 == 127 )
                {
                  v99 = 0;
LABEL_244:
                  if ( (unsigned int)(unsigned __int8)v97 - 1 <= 0x1E
                    && (unsigned __int8)v97 > v99
                    && (unsigned __int8)v97 >= KiVpThreadSystemWorkPriority )
                  {
                    SchedulerAssist[3] = 3;
                    __writemsr(0x400000C2u, 0xFFFFFFFEuLL);
                  }
                  goto LABEL_248;
                }
              }
              else
              {
                v99 = KiVpThreadSystemWorkPriority;
              }
              if ( v99 < 16 )
                goto LABEL_244;
            }
          }
        }
      }
LABEL_248:
      __writecr8(CurrentIrql);
      AccessStatus = KeWaitForSingleObject((char *)v178 + 152, Executive, 0, v93, 0LL);
      if ( AccessStatus != 257 )
        goto LABEL_270;
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
      {
        v102 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v102->SchedulerAssist, 0xFFFEFFFF);
        v103 = (int *)v102->SchedulerAssist;
        v104 = *v103;
        if ( (*v103 & 0x190000) == 0 && !v103[5] )
        {
          v105 = v102->PriorityState;
          if ( v105 )
          {
            v106 = *v105;
            if ( !*v105 )
            {
              v107 = v102->NextThread;
              v108 = v102->IdleThread;
              if ( v107 == v108 || v102->CurrentThread == v108 && !v107 )
              {
                v106 = KiVpThreadSystemWorkPriority;
                goto LABEL_264;
              }
            }
            if ( v106 == 127 )
            {
              v106 = 0;
LABEL_265:
              if ( (unsigned int)(unsigned __int8)v104 - 1 <= 0x1E
                && (unsigned __int8)v104 > v106
                && (unsigned __int8)v104 >= KiVpThreadSystemWorkPriority )
              {
                v103[3] = 3;
                __writemsr(0x400000C2u, 0xFFFFFFFEuLL);
              }
            }
            else
            {
LABEL_264:
              if ( v106 < 16 )
                goto LABEL_265;
            }
          }
        }
      }
    }
    __writecr8(CurrentIrql);
    IopCancelAlertedRequest((char *)v178 + 152, (PIRP)v59);
LABEL_270:
    AccessStatus = BugCheckParameter4[0];
LABEL_271:
    AccessStatus = IoGetIrpExtraCreateParameter((PIRP)v59, &v189);
    v111 = *(_DWORD *)(v13 + 84) & 8;
    v112 = v111 != 0;
    if ( *(_DWORD *)(v59 + 48) == 260 )
    {
      P = *(PVOID *)(v59 + 160);
      if ( !v189 || IopSymlinkGetECP(v189, &Src) == -1073741275 )
      {
        AccessStatus = IopSymlinkCreateECP((PIRP)v59, (__int64)&Src);
        if ( AccessStatus >= 0 )
        {
          if ( !v189 )
            AccessStatus = IoGetIrpExtraCreateParameter((PIRP)v59, &v189);
        }
        else
        {
          *(_QWORD *)(v59 + 56) = 0LL;
          *(_DWORD *)(v59 + 48) = AccessStatus;
        }
      }
      v112 = v111 != 0;
      if ( *(_DWORD *)(v59 + 48) == 260 )
      {
        if ( v111 )
        {
          v113 = P;
          if ( v189 )
            v112 = IopCheckAndUpdateStopOnSymlinkEcp(v189, *(unsigned int *)(v59 + 56), P);
        }
        else
        {
          v113 = P;
        }
        IopSymlinkProcessReparse(v59, v178, v113, v112);
        v114 = *(_QWORD *)(v59 + 56) - 2684354563LL;
        if ( v114 <= 0x16 )
        {
          v115 = 4194817LL;
          if ( _bittest64(&v115, v114) )
          {
            if ( *(int *)(v59 + 48) >= 0 )
            {
              v116 = *((unsigned __int16 *)v113 + 3);
              v117 = 0;
              if ( !(_WORD)v116 )
                v117 = 16;
              v110 = v179;
              LOBYTE(v110) = v117 | v179 & 0xEF;
              v179 = v110;
              v109 = (__int64)SourceString->Buffer - v116;
              if ( (v110 & 0x10) != 0 || *(_WORD *)(v109 + SourceString->Length) == 58 )
              {
                v118 = *(_DWORD *)(v13 + 64);
                if ( (v118 & 0x41) == 0 && !*(_BYTE *)(v61 - 72) )
                {
                  v109 = 2684354563LL;
                  if ( *v113 == -1610612733 )
                    goto LABEL_299;
                  if ( *v113 != -1610612724 )
                    goto LABEL_301;
                  if ( (int)v113[4] < 0 )
                  {
LABEL_299:
                    v119 = v118 | 1;
LABEL_300:
                    *(_DWORD *)(v13 + 64) = v119;
                  }
                  else if ( (v113[4] & 0x40000000) != 0 )
                  {
                    v119 = v118 | 0x40;
                    goto LABEL_300;
                  }
                }
              }
            }
LABEL_301:
            if ( !v112 )
            {
              ExFreePoolWithTag(v113, 0);
              P = 0LL;
            }
          }
        }
      }
    }
    v120 = AbsoluteObjectName;
    if ( !*(_DWORD *)(v59 + 48) && !*(_DWORD *)(v13 + 120) )
    {
      AccessStatus = IopSymlinkPropagateToExtensionIfNeeded((__int64)v178, v189, &AbsoluteObjectName->Length);
      if ( AccessStatus < 0 )
      {
        IoCancelFileOpen(DeviceObject, (PFILE_OBJECT)v178);
        *(_QWORD *)(v59 + 56) = 0LL;
        *(_DWORD *)(v59 + 48) = AccessStatus;
      }
    }
    if ( v189 )
      *(_QWORD *)(v13 + 168) = v189;
    *(_OWORD *)BugCheckParameter4 = *(_OWORD *)(v59 + 48);
    AccessStatus = _mm_cvtsi128_si32(*(__m128i *)BugCheckParameter4);
    *((_DWORD *)v178 + 39) = 1;
    v121 = v179;
    if ( (v179 & 4) != 0 )
    {
      *(_QWORD *)(v59 + 152) = CurrentThread;
      IopDequeueIrpFromThread((_QWORD *)v59, (volatile signed __int32 *)v109, v110);
    }
    if ( (*(_BYTE *)(v59 + 16) & 0x30) == 0x30 )
      ExFreePoolWithTag(*(PVOID *)(v59 + 24), 0);
    IoFreeIrp((PIRP)v59);
    v122 = BugCheckParameter4[1];
    *(_QWORD *)(v13 + 24) = BugCheckParameter4[1];
    if ( AccessStatus < 0 )
    {
      v172 = v178;
      if ( (*((_DWORD *)v178 + 20) & 0x200000) != 0 )
      {
        ObfDereferenceObject(v178);
        *(_QWORD *)(v13 + 8) = 0LL;
        result = (unsigned int)AccessStatus;
        *(_DWORD *)(v13 + 16) = AccessStatus;
        return result;
      }
      if ( *((_WORD *)v178 + 44) )
      {
        ExFreePoolWithTag(*((PVOID *)v178 + 12), 0);
        *((_WORD *)v178 + 44) = 0;
        v172 = v178;
      }
      v172[1] = 0LL;
      ObfDereferenceObject(v178);
      IopDecrementDeviceObjectRef((ULONG_PTR)Object, 0, 0LL);
      if ( v193 )
        IopDereferenceVpbAndFree(v193, v173, v174);
      *(_QWORD *)(v13 + 8) = 0LL;
      goto LABEL_446;
    }
    if ( AccessStatus != 260 )
    {
      RelatedDeviceObject = IoGetRelatedDeviceObject((PFILE_OBJECT)v178);
      if ( DeviceObject != RelatedDeviceObject )
      {
        v157 = *((_QWORD *)v178 + 2);
        v158 = v193;
        if ( v157 != v193 )
        {
          if ( v157 )
            IopIncrementVpbRefCount(v157, 1);
          if ( v158 )
            IopDereferenceVpbAndFree(v158, v154, v156);
        }
      }
      if ( (v121 & 0x40) == 0 )
      {
        v159 = v178;
        *a11 = v178;
        *(_DWORD *)(v13 + 32) = -1096154543;
        ObfReferenceObject(v159);
        v160 = *((_QWORD *)v178 + 8);
        if ( (!v160 || (*(_DWORD *)(v160 + 80) & 0x400000) != 0) && !*((_WORD *)v178 + 44) )
        {
          v161 = RelatedDeviceObject->DeviceType;
          if ( (unsigned int)v161 <= 0x20 )
          {
            v162 = 0x100000308LL;
            if ( _bittest64(&v162, v161) )
              *((_DWORD *)v178 + 20) |= 0x400000u;
          }
        }
        result = LODWORD(BugCheckParameter4[0]);
        *(_DWORD *)(v13 + 16) = BugCheckParameter4[0];
        return result;
      }
      if ( *(_BYTE *)(v13 + 137) )
      {
        if ( *(_BYTE *)(v13 + 208) )
        {
          FileInformation = IoQueryFileInformation(
                              (PFILE_OBJECT)v178,
                              *(FILE_INFORMATION_CLASS *)(v13 + 200),
                              *(_DWORD *)(v13 + 204),
                              *(PVOID *)(v13 + 112),
                              (PULONG)(v13 + 204));
        }
        else
        {
          v164 = 0;
          FastIoDispatch = RelatedDeviceObject->DriverObject->FastIoDispatch;
          if ( !*(_BYTE *)(v13 + 139) )
          {
            Src = 0LL;
            if ( FastIoDispatch )
              FastIoQueryBasicInfo = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))FastIoDispatch->FastIoQueryBasicInfo;
            else
              FastIoQueryBasicInfo = 0LL;
            v203 = FastIoQueryBasicInfo;
            if ( FastIoQueryBasicInfo )
            {
              v167 = (MmVerifierData & 0x10) != 0 ? (struct _ECP_LIST *)VfFastIoSnapState() : 0LL;
              ExtraCreateParameter[1] = v167;
              LOBYTE(v154) = 1;
              v164 = FastIoQueryBasicInfo(v178, v154, *(_QWORD *)(v13 + 96), BugCheckParameter4, RelatedDeviceObject);
              v188 = v164;
              if ( v167 )
                VfFastIoCheckState(v167);
            }
            if ( v164 )
            {
              AccessStatus = BugCheckParameter4[0];
            }
            else
            {
              Pool_0 = IopVerifierExAllocatePool_0(NonPagedPoolNx, 0x28uLL);
              Src = Pool_0;
              if ( Pool_0 )
              {
                AccessStatus = IoQueryFileInformation(
                                 (PFILE_OBJECT)v178,
                                 FileBasicInformation,
                                 0x28u,
                                 Pool_0,
                                 &ReturnedLength);
                if ( AccessStatus >= 0 )
                  memmove(*(void **)(v13 + 96), Src, ReturnedLength);
                ExFreePoolWithTag(Src, 0);
              }
              else
              {
                AccessStatus = -1073741670;
              }
            }
            goto LABEL_438;
          }
          if ( FastIoDispatch )
          {
            if ( FastIoDispatch->SizeOfFastIoDispatch > 0x70 )
            {
              FastIoQueryNetworkOpenInfo = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))FastIoDispatch->FastIoQueryNetworkOpenInfo;
              if ( FastIoQueryNetworkOpenInfo )
              {
                v170 = (MmVerifierData & 0x10) != 0 ? (void *)VfFastIoSnapState() : 0LL;
                LOBYTE(v154) = 1;
                v164 = FastIoQueryNetworkOpenInfo(
                         v178,
                         v154,
                         *(_QWORD *)(v13 + 104),
                         BugCheckParameter4,
                         RelatedDeviceObject);
                if ( v170 )
                  VfFastIoCheckState(v170);
              }
            }
          }
          if ( v164 )
            goto LABEL_438;
          v171 = IoQueryFileInformation(
                   (PFILE_OBJECT)v178,
                   FileNetworkOpenInformation,
                   0x38u,
                   *(PVOID *)(v13 + 104),
                   &ReturnedLength);
          AccessStatus = v171;
          if ( v171 != -1073741811 && v171 != -1073741822 )
            goto LABEL_438;
          FileInformation = IopGetNetworkOpenInformation(v178);
        }
        AccessStatus = FileInformation;
      }
LABEL_438:
      *(_DWORD *)(v13 + 32) = -1096154543;
      IopCloseFile(0LL, (struct _FILE_OBJECT *)v178, 1LL, 1LL);
      ObfDereferenceObject(v178);
      *(_QWORD *)(v13 + 8) = 0LL;
      result = (unsigned int)AccessStatus;
      *(_DWORD *)(v13 + 16) = AccessStatus;
      return result;
    }
    if ( (v122 & 0xFFFFFFFFFFFFFFFDuLL) == 0 )
    {
      v123 = 4194817LL;
      goto LABEL_321;
    }
    if ( v122 - 2684354563u > 0x16 )
      goto LABEL_329;
    v123 = 4194817LL;
    if ( !_bittest64(&v123, v122 - 2684354563u) || v112 )
      goto LABEL_329;
LABEL_321:
    v124 = (const UNICODE_STRING *)((char *)v178 + 88);
    v125 = *((_WORD *)v178 + 44);
    if ( v120->MaximumLength >= v125 )
      goto LABEL_326;
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v125, 0x63466F49u);
    if ( PoolWithTag )
    {
      Buffer = v120->Buffer;
      if ( Buffer )
        ExFreePoolWithTag(Buffer, 0);
      v120->Buffer = PoolWithTag;
      v124 = (const UNICODE_STRING *)((char *)v178 + 88);
      v120->MaximumLength = *((_WORD *)v178 + 44);
LABEL_326:
      RtlCopyUnicodeString(v120, v124);
      if ( BugCheckParameter4[1] - 2684354563u <= 0x16 && _bittest64(&v123, BugCheckParameter4[1] - 2684354563u) )
        *(_QWORD *)(v13 + 40) = 0LL;
LABEL_329:
      v128 = v178;
      if ( *((_WORD *)v178 + 44) )
      {
        ExFreePoolWithTag(*((PVOID *)v178 + 12), 0);
        *((_WORD *)v178 + 44) = 0;
        v128 = v178;
      }
      v128[1] = 0LL;
      ObfDereferenceObject(v178);
      *(_QWORD *)(v13 + 8) = 0LL;
      v129 = Object;
      IopDecrementDeviceObjectRef((ULONG_PTR)Object, 0, 0LL);
      if ( v193 )
        IopDereferenceVpbAndFree(v193, v130, v131);
      v133 = BugCheckParameter4[1];
      if ( BugCheckParameter4[1] == 1 )
      {
        if ( (unsigned int)++v191 <= 0x20 )
        {
          *a11 = 0LL;
          v178 = 0LL;
          v14 = v179;
          v11 = AccessState;
          v12 = (unsigned int *)BugCheckParameter2;
          continue;
        }
        return 3221225473LL;
      }
      else
      {
        *(_QWORD *)(v13 + 40) = 0LL;
        v148 = 4194817LL;
        if ( v133 - 2684354563u <= 0x16 && _bittest64(&v148, v133 - 2684354563u) )
        {
          *(_DWORD *)(v13 + 152) |= 0x10u;
          v149 = *(_DWORD *)(v13 + 152);
          v150 = *((unsigned int *)v129 + 18);
          if ( (unsigned int)v150 <= 0x24 && (v132 = 0x1080020084LL, _bittest64(&v132, v150)) )
            v151 = v149 | 8;
          else
            v151 = v149 & 0xFFFFFFF7;
          *(_DWORD *)(v13 + 152) = v151;
        }
        if ( *(_BYTE *)(v13 + 136) )
          KeBugCheckEx(0xF9u, (ULONG_PTR)v129, (ULONG_PTR)DeviceObject, (ULONG_PTR)AbsoluteObjectName, v133);
        if ( (*(_DWORD *)(v129[39] + 32LL) & 0x800) == 0 )
        {
          v152 = AccessState;
          *(_QWORD *)&AccessState->RemainingDesiredAccess = AccessState->OriginalDesiredAccess;
          v152->Flags &= ~0x100u;
        }
        if ( v133 - 2684354563u <= 0x16 && _bittest64(&v148, v133 - 2684354563u) && v112 )
        {
          *(_QWORD *)(v13 + 24) = P;
          *(_DWORD *)(v13 + 16) = -2147483603;
          return 2147483693LL;
        }
        else if ( v133 == 2684354585 || v133 == 2 )
        {
          v153 = a10;
          *(_QWORD *)(v153 + 8) = PsGetParentSilo(*(_QWORD *)(a10 + 8), v133, 4194817LL, v132);
          return 872LL;
        }
        else
        {
          return 260LL;
        }
      }
    }
    else
    {
      *(_DWORD *)(v13 + 16) = -1073741670;
      return 3221225626LL;
    }
  }
}
