/*
 * XREFs of IopParseDevice @ 0x1405FFEA0
 * Callers:
 *     IopParseFile @ 0x1406C6FB0 (IopParseFile.c)
 * Callees:
 *     RtlGetActiveConsoleId @ 0x140001C60 (RtlGetActiveConsoleId.c)
 *     PsGetServerSiloServiceSessionId @ 0x140002320 (PsGetServerSiloServiceSessionId.c)
 *     PsGetCurrentServerSilo @ 0x1400064D0 (PsGetCurrentServerSilo.c)
 *     IoGetSilo @ 0x140009A50 (IoGetSilo.c)
 *     PsIsHostSilo @ 0x14000A920 (PsIsHostSilo.c)
 *     IopDequeueIrpFromThread @ 0x14000A940 (IopDequeueIrpFromThread.c)
 *     KeInitializeEvent @ 0x14000AA80 (KeInitializeEvent.c)
 *     ObfReferenceObjectWithTag @ 0x14000D6B0 (ObfReferenceObjectWithTag.c)
 *     PsIsThreadTerminating @ 0x1400159A0 (PsIsThreadTerminating.c)
 *     IopDecrementDeviceObjectRef @ 0x140036EA0 (IopDecrementDeviceObjectRef.c)
 *     IoGetRelatedDeviceObject @ 0x140037070 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x140037180 (IopAllocateIrpExReturn.c)
 *     IopQueueThreadIrp @ 0x14003BA80 (IopQueueThreadIrp.c)
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003C730 (ExAcquireResourceSharedLite.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14003E330 (ObfReferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     IopCheckDeviceAndDriver @ 0x140043CA0 (IopCheckDeviceAndDriver.c)
 *     RtlCopyUnicodeString @ 0x140043E20 (RtlCopyUnicodeString.c)
 *     IoFreeIrp @ 0x140043EA0 (IoFreeIrp.c)
 *     IoGetAttachedDevice @ 0x1400440D0 (IoGetAttachedDevice.c)
 *     IopCheckVpbMounted @ 0x1400440F0 (IopCheckVpbMounted.c)
 *     IopDoFullTraverseCheck @ 0x140044310 (IopDoFullTraverseCheck.c)
 *     KeEnterCriticalRegionThread @ 0x140053970 (KeEnterCriticalRegionThread.c)
 *     IopIncrementVpbRefCount @ 0x14007A734 (IopIncrementVpbRefCount.c)
 *     IopDeleteFileObjectExtension @ 0x1400840D0 (IopDeleteFileObjectExtension.c)
 *     IopVerifierExAllocatePool_0 @ 0x1400884F4 (IopVerifierExAllocatePool_0.c)
 *     CmSiFreeMemory @ 0x14008BCE0 (CmSiFreeMemory.c)
 *     KeReadStateSemaphore @ 0x14009AF50 (KeReadStateSemaphore.c)
 *     IopDereferenceVpbAndFree @ 0x1400B4D40 (IopDereferenceVpbAndFree.c)
 *     IopGetSetSpecificExtension @ 0x1400BA3C8 (IopGetSetSpecificExtension.c)
 *     SeAccessCheck @ 0x1400C6350 (SeAccessCheck.c)
 *     PsIsServerSilo @ 0x1400E5F70 (PsIsServerSilo.c)
 *     IopGetDevicePDO @ 0x1400EC010 (IopGetDevicePDO.c)
 *     PsGetCurrentProcessSessionId @ 0x1400EC3B0 (PsGetCurrentProcessSessionId.c)
 *     IoCallDriverWithTracing @ 0x14010A3D0 (IoCallDriverWithTracing.c)
 *     IopCreateSecurityCheck @ 0x140115D10 (IopCreateSecurityCheck.c)
 *     IopSymlinkGetMostRecentlyUsedName @ 0x140126714 (IopSymlinkGetMostRecentlyUsedName.c)
 *     IopSymlinkGetECP @ 0x140126730 (IopSymlinkGetECP.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     IopCheckSessionDeviceAccess @ 0x1402990E8 (IopCheckSessionDeviceAccess.c)
 *     IopAllowRemoteDASD @ 0x14029C038 (IopAllowRemoteDASD.c)
 *     IopIsSecurityContextAppContainer @ 0x14029C0F0 (IopIsSecurityContextAppContainer.c)
 *     PsAcquireSiloHardReference @ 0x140306B40 (PsAcquireSiloHardReference.c)
 *     PsReleaseSiloHardReference @ 0x140306C00 (PsReleaseSiloHardReference.c)
 *     SeFastTraverseCheck @ 0x14031C9B0 (SeFastTraverseCheck.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     IopAllocRealFileObject @ 0x1405D8060 (IopAllocRealFileObject.c)
 *     IopRetrieveTransactionParameters @ 0x1405D8490 (IopRetrieveTransactionParameters.c)
 *     IopCloseFile @ 0x1405D8630 (IopCloseFile.c)
 *     SeLockSubjectContext @ 0x1405F5DB0 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x1405F5E10 (SeUnlockSubjectContext.c)
 *     RtlMapGenericMask @ 0x140601F00 (RtlMapGenericMask.c)
 *     IoGetIrpExtraCreateParameter @ 0x140601F50 (IoGetIrpExtraCreateParameter.c)
 *     IopCheckBackupRestorePrivilege @ 0x140601F70 (IopCheckBackupRestorePrivilege.c)
 *     SeSetAccessStateGenericMapping @ 0x140602140 (SeSetAccessStateGenericMapping.c)
 *     IopSymlinkPropagateToExtensionIfNeeded @ 0x140602F60 (IopSymlinkPropagateToExtensionIfNeeded.c)
 *     SeTokenIsAdmin @ 0x14061A1E0 (SeTokenIsAdmin.c)
 *     RtlEqualUnicodeString @ 0x140653D20 (RtlEqualUnicodeString.c)
 *     IopQueryInformation @ 0x1406BB8D0 (IopQueryInformation.c)
 *     SeOpenObjectAuditAlarm @ 0x1406BEF00 (SeOpenObjectAuditAlarm.c)
 *     SeAppendPrivileges @ 0x1406BEF60 (SeAppendPrivileges.c)
 *     IopCheckTopDeviceHint @ 0x1406CB31C (IopCheckTopDeviceHint.c)
 *     IopSymlinkUpdateECP @ 0x1406CE888 (IopSymlinkUpdateECP.c)
 *     IopSymlinkCreateECP @ 0x1406CEBA4 (IopSymlinkCreateECP.c)
 *     IopSymlinkProcessReparse @ 0x1406CEE5C (IopSymlinkProcessReparse.c)
 *     IoQueryFileInformation @ 0x1406EC700 (IoQueryFileInformation.c)
 *     IopSymlinkEnforceEnabledTypes @ 0x1406EFE24 (IopSymlinkEnforceEnabledTypes.c)
 *     IopCancelAlertedRequest @ 0x14085385C (IopCancelAlertedRequest.c)
 *     IoCancelFileOpen @ 0x140855E20 (IoCancelFileOpen.c)
 *     IopCheckAndUpdateStopOnSymlinkEcp @ 0x140856E10 (IopCheckAndUpdateStopOnSymlinkEcp.c)
 *     IopGetNetworkOpenInformation @ 0x14085CAAC (IopGetNetworkOpenInformation.c)
 *     PsGetParentSilo @ 0x1408C4AD0 (PsGetParentSilo.c)
 *     VfFastIoCheckState @ 0x1409675F4 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x1409676CC (VfFastIoSnapState.c)
 */

__int64 __fastcall IopParseDevice(
        struct _DEVICE_OBJECT *BugCheckParameter2,
        POBJECT_TYPE *a2,
        __int64 a3,
        char a4,
        int a5,
        PUNICODE_STRING AbsoluteObjectName,
        PCUNICODE_STRING SourceString,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        PVOID *a11)
{
  struct _ACCESS_STATE *v11; // rsi
  unsigned int *v12; // r14
  unsigned __int8 v13; // bl
  __int64 v14; // r9
  __int64 v15; // rdx
  struct _DEVICE_OBJECT *v16; // r13
  unsigned __int64 v17; // rax
  __int64 result; // rax
  unsigned __int64 v19; // rcx
  bool v20; // al
  __int64 v21; // rax
  unsigned __int64 CurrentServerSilo; // rax
  int ServerSiloServiceSessionId; // edi
  _DWORD *DevicePDO; // rax
  void *v25; // rdi
  ACCESS_MASK *p_RemainingDesiredAccess; // r14
  ACCESS_MASK RemainingDesiredAccess; // r12d
  char v28; // dl
  __int64 v29; // rcx
  int v30; // r10d
  char v31; // r9
  char v32; // bl
  ULONG ActiveConsoleId; // edi
  unsigned __int64 v34; // rax
  int v35; // edi
  bool v36; // di
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectSecurityContext; // rsi
  char v38; // bl
  PACCESS_TOKEN ClientToken; // rcx
  unsigned __int8 v40; // di
  ACCESS_MASK v41; // eax
  char v42; // al
  char v43; // bl
  unsigned __int16 Length; // r8
  __int64 v45; // rdx
  __int64 v46; // rsi
  PDEVICE_OBJECT AttachedDevice; // r10
  __int64 v48; // rax
  ULONG Characteristics; // ecx
  int v50; // eax
  __int64 Irp; // rax
  __int64 v52; // r13
  __int64 v53; // rdi
  int v54; // eax
  char v55; // al
  _BYTE *v56; // rdi
  PVOID v57; // rdi
  unsigned __int64 DeviceType; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // rax
  _DWORD *Silo; // rdi
  __int64 v63; // r9
  unsigned __int16 v64; // ax
  unsigned __int16 v65; // cx
  char *v66; // rcx
  _WORD *v67; // rdx
  void *v68; // rcx
  unsigned __int16 v69; // ax
  PVOID v70; // r14
  __int16 *MostRecentlyUsedName; // rax
  NTSTATUS updated; // eax
  __int64 v73; // rdx
  NTSTATUS v74; // eax
  BOOLEAN v75; // di
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *CurrentPrcb; // rdx
  int *SchedulerAssist; // r10
  int v79; // r9d
  char *PriorityState; // rax
  int v81; // ecx
  _KTHREAD *NextThread; // r8
  _KTHREAD *IdleThread; // rax
  struct _KPRCB *v84; // rdx
  int *v85; // r10
  int v86; // r9d
  char *v87; // rax
  int v88; // ecx
  _KTHREAD *v89; // r8
  _KTHREAD *v90; // rax
  unsigned __int64 v91; // rdx
  int v92; // esi
  char v93; // r14
  __int64 v94; // rax
  PVOID v95; // r8
  char v96; // cl
  int v97; // ecx
  int v98; // ecx
  ULONG_PTR v99; // rax
  __int64 v100; // r13
  _QWORD *v101; // rax
  _QWORD *v102; // rsi
  ULONG_PTR v103; // rdx
  const UNICODE_STRING *v104; // rdx
  unsigned __int16 v105; // ax
  wchar_t *PoolWithTag; // rdi
  wchar_t *Buffer; // rcx
  PVOID v108; // rcx
  _QWORD *v109; // rcx
  PVOID v110; // rcx
  int v111; // ecx
  void *v112; // rcx
  _QWORD *v113; // rcx
  __int64 v114; // r8
  int v115; // ecx
  unsigned __int64 v116; // rax
  __int64 v117; // r9
  unsigned int v118; // ecx
  __int64 v119; // rdx
  PDEVICE_OBJECT RelatedDeviceObject; // rsi
  ULONG_PTR v121; // rcx
  __int64 v122; // rdi
  PVOID v123; // rcx
  __int64 v124; // rax
  unsigned __int64 v125; // rax
  __int64 v126; // rdx
  NTSTATUS FileInformation; // eax
  char v128; // di
  PFAST_IO_DISPATCH FastIoDispatch; // rcx
  __int64 (__fastcall *FastIoQueryBasicInfo)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // rbx
  struct _ECP_LIST *v131; // r14
  PVOID Pool_0; // rax
  __int64 (__fastcall *FastIoQueryNetworkOpenInfo)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // r14
  void *v134; // rbx
  NTSTATUS v135; // eax
  _QWORD *v136; // rcx
  NTSTATUS AccessStatus; // [rsp+60h] [rbp-108h] BYREF
  PVOID v138; // [rsp+68h] [rbp-100h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+70h] [rbp-F8h] BYREF
  char v140[4]; // [rsp+78h] [rbp-F0h] BYREF
  int v141; // [rsp+7Ch] [rbp-ECh]
  PVOID Object; // [rsp+80h] [rbp-E8h]
  ACCESS_MASK GrantedAccess; // [rsp+88h] [rbp-E0h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+90h] [rbp-D8h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+98h] [rbp-D0h]
  void *Src; // [rsp+A0h] [rbp-C8h] BYREF
  char v147; // [rsp+A8h] [rbp-C0h]
  PVOID P; // [rsp+B0h] [rbp-B8h]
  struct _ECP_LIST *v149; // [rsp+B8h] [rbp-B0h] BYREF
  int v150; // [rsp+C0h] [rbp-A8h]
  ULONG ReturnedLength; // [rsp+C4h] [rbp-A4h] BYREF
  _BYTE *v152; // [rsp+C8h] [rbp-A0h]
  __int64 v153; // [rsp+D0h] [rbp-98h]
  ULONG_PTR BugCheckParameter4[2]; // [rsp+D8h] [rbp-90h] BYREF
  __int64 v155; // [rsp+E8h] [rbp-80h] BYREF
  UNICODE_STRING ObjectTypeName; // [rsp+F0h] [rbp-78h] BYREF
  __int64 v157; // [rsp+100h] [rbp-68h] BYREF
  __int64 v158; // [rsp+108h] [rbp-60h]
  __int64 v159; // [rsp+110h] [rbp-58h]
  struct _ECP_LIST *ExtraCreateParameter[10]; // [rsp+118h] [rbp-50h] BYREF
  unsigned __int8 v162; // [rsp+178h] [rbp+10h]
  unsigned __int8 v163; // [rsp+178h] [rbp+10h]

  v11 = (struct _ACCESS_STATE *)a3;
  v12 = (unsigned int *)BugCheckParameter2;
  BugCheckParameter4[0] = 0LL;
  BugCheckParameter4[1] = 0LL;
  v157 = 0LL;
  v158 = 0LL;
  v159 = 0LL;
  v150 = 0;
  LOBYTE(v141) = 0;
  *(_QWORD *)&ObjectTypeName.Length = 0LL;
  ObjectTypeName.Buffer = 0LL;
  Privileges = 0LL;
  P = 0LL;
  Src = 0LL;
  if ( a2 != IoFileObjectType )
    return 3221225508LL;
  CurrentThread = KeGetCurrentThread();
  v13 = 4;
  RtlInitUnicodeString(&ObjectTypeName, L"File");
  *a11 = 0LL;
  v138 = 0LL;
  if ( !a8 )
    return 3221225508LL;
  while ( 1 )
  {
    v14 = 0x60010000110040LL;
    v15 = 0x1080020084LL;
    if ( *(_WORD *)a8 != 8 || *(_WORD *)(a8 + 2) != 216 )
      return 3221225508LL;
    v16 = (struct _DEVICE_OBJECT *)v12;
    Object = v12;
    if ( *(_DWORD *)(a8 + 32) == 1 )
    {
      *(_DWORD *)(a8 + 32) = -1096154543;
      *(_QWORD *)(a8 + 40) = v12;
      *(_DWORD *)(a8 + 16) = 0;
      ObfReferenceObject(v12);
      return 0LL;
    }
    if ( (*(_DWORD *)(a8 + 152) & 0x10) != 0 )
    {
      if ( *(_QWORD *)(a8 + 24) == 2684354563LL )
      {
        v17 = v12[18];
        if ( (unsigned int)v17 > 0x24 || !_bittest64(&v15, v17) )
          goto LABEL_10;
      }
      else
      {
        v19 = v12[18];
        LOBYTE(v15) = (unsigned int)v19 <= 0x24 && _bittest64(&v15, v19);
        v20 = (unsigned int)v19 <= 0x36 && _bittest64(&v14, v19);
        if ( !(_BYTE)v15 && !v20 )
        {
LABEL_10:
          *(_DWORD *)(a8 + 16) = -1073741192;
          return 3221226104LL;
        }
        result = IopSymlinkEnforceEnabledTypes(*(_BYTE *)(a8 + 152) & 8, v15, *(_QWORD *)(a8 + 168));
        AccessStatus = result;
        if ( (int)result < 0 )
          goto LABEL_154;
      }
    }
    v21 = *(_QWORD *)(a8 + 40);
    if ( v21 )
    {
      v16 = *(struct _DEVICE_OBJECT **)(v21 + 8);
      Object = v16;
    }
    result = IopCheckDeviceAndDriver(a8, (ULONG_PTR)v16);
    AccessStatus = result;
    if ( (int)result < 0 )
      goto LABEL_154;
    if ( (v16->DeviceObjectExtension->ExtensionFlags & 0x400) != 0 && !*(_QWORD *)(a8 + 40) )
    {
      CurrentServerSilo = PsGetCurrentServerSilo();
      ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId(CurrentServerSilo);
      if ( ServerSiloServiceSessionId != (unsigned int)PsGetCurrentProcessSessionId()
        || IopSessionZeroAccessCheckEnabled && (*(_DWORD *)(a8 + 64) & 0x40000) == 0 )
      {
        DevicePDO = IopGetDevicePDO((__int64)v16);
        v25 = DevicePDO;
        if ( DevicePDO )
        {
          if ( !IopCheckSessionDeviceAccess((__int64)DevicePDO) )
          {
            ObfDereferenceObject(v25);
            IopDecrementDeviceObjectRef((ULONG_PTR)v16, 0);
            *(_DWORD *)(a8 + 16) = -1073741790;
            return 3221225506LL;
          }
          ObfDereferenceObject(v25);
        }
      }
    }
    p_RemainingDesiredAccess = &v11->RemainingDesiredAccess;
    RtlMapGenericMask(&v11->RemainingDesiredAccess, (PGENERIC_MAPPING)((char *)IoFileObjectType + 76));
    RtlMapGenericMask(&v11->OriginalDesiredAccess, (PGENERIC_MAPPING)((char *)IoFileObjectType + 76));
    SeSetAccessStateGenericMapping(v11, (PGENERIC_MAPPING)((char *)IoFileObjectType + 76));
    RemainingDesiredAccess = v11->RemainingDesiredAccess;
    IopCheckBackupRestorePrivilege(v11);
    v28 = *(_BYTE *)(a8 + 136);
    if ( v28 && !SourceString->Length || (v11->Flags & 0x100) != 0 )
      RemainingDesiredAccess |= v11->PreviouslyGrantedAccess;
    v29 = *(_QWORD *)(a8 + 40);
    LOBYTE(v30) = v141;
    if ( v29 && (*(_DWORD *)(v29 + 80) & 0x400000) != 0 )
    {
      v30 = (unsigned __int8)v141;
      if ( !SourceString->Length )
        v30 = 1;
      v141 = v30;
    }
    v31 = a4;
    if ( (a4 || (*(_DWORD *)(a8 + 84) & 1) != 0) && (!v29 || (_BYTE)v30) && !v28 )
    {
      v32 = v13 & 0xDF;
      if ( !SourceString->Length )
      {
        v36 = 0;
        if ( (v16->Characteristics & 0x40001) != 0 && (RemainingDesiredAccess & 0xFFEDFF7F) != 0 )
        {
          ActiveConsoleId = RtlGetActiveConsoleId();
          if ( ActiveConsoleId != (unsigned int)PsGetCurrentProcessSessionId() )
          {
            v34 = PsGetCurrentServerSilo();
            v35 = PsGetServerSiloServiceSessionId(v34);
            if ( v35 != (unsigned int)PsGetCurrentProcessSessionId() && !IopAllowRemoteDASD() )
              v36 = 1;
          }
        }
        Privileges = 0LL;
        KeEnterCriticalRegionThread((__int64)CurrentThread);
        ExAcquireResourceSharedLite(&IopSecurityResource, 1u);
        p_SubjectSecurityContext = &v11->SubjectSecurityContext;
        SeLockSubjectContext(p_SubjectSecurityContext);
        v38 = v32 | 0x20;
        if ( !v36 )
          goto LABEL_60;
        ClientToken = p_SubjectSecurityContext->ClientToken;
        if ( !p_SubjectSecurityContext->ClientToken )
          ClientToken = *(PACCESS_TOKEN *)(a3 + 48);
        if ( SeTokenIsAdmin(ClientToken) )
        {
LABEL_60:
          v16 = (struct _DEVICE_OBJECT *)Object;
          v13 = v38 ^ (SeAccessCheck(
                         *((PSECURITY_DESCRIPTOR *)Object + 34),
                         p_SubjectSecurityContext,
                         (v38 & 0x20) != 0,
                         RemainingDesiredAccess,
                         0,
                         &Privileges,
                         (PGENERIC_MAPPING)((char *)IoFileObjectType + 76),
                         1,
                         &GrantedAccess,
                         &AccessStatus) ^ v38) & 1;
          v40 = v13;
          if ( Privileges )
          {
            SeAppendPrivileges((PACCESS_STATE)a3, Privileges);
            CmSiFreeMemory(Privileges);
          }
          if ( (v13 & 1) != 0 )
          {
            v41 = GrantedAccess;
            *(_DWORD *)(a3 + 20) |= GrantedAccess;
            *p_RemainingDesiredAccess &= ~(v41 | 0x2000000);
            *(_BYTE *)(a8 + 136) = 1;
          }
        }
        else
        {
          v13 = v38 & 0xFE;
          AccessStatus = -1073741790;
          v40 = v13;
          v16 = (struct _DEVICE_OBJECT *)Object;
        }
        SeOpenObjectAuditAlarm(
          &ObjectTypeName,
          v16,
          AbsoluteObjectName,
          v16->SecurityDescriptor,
          (PACCESS_STATE)a3,
          0,
          v40 & 1,
          1,
          (PBOOLEAN)(a3 + 10));
LABEL_71:
        ExReleaseResourceLite(&IopSecurityResource);
        KeLeaveCriticalRegionThread((__int64)CurrentThread);
LABEL_74:
        if ( (v40 & 0x20) != 0 )
          SeUnlockSubjectContext(p_SubjectSecurityContext);
        if ( (v40 & 1) == 0 )
          goto LABEL_330;
        v31 = a4;
        goto LABEL_78;
      }
      p_SubjectSecurityContext = &v11->SubjectSecurityContext;
      if ( IopDoFullTraverseCheck((__int64)v16, a4, p_SubjectSecurityContext) )
      {
        v13 = v32 ^ (IopCreateSecurityCheck(
                       (__int64)v16,
                       0LL,
                       (struct _ACCESS_STATE *)a3,
                       RemainingDesiredAccess | 0x20,
                       1,
                       Privileges,
                       &GrantedAccess,
                       AbsoluteObjectName,
                       &ObjectTypeName,
                       (__int64)CurrentThread,
                       0) ^ v32) & 1;
      }
      else
      {
        if ( (*(_DWORD *)(a3 + 12) & 1) == 0 )
        {
          KeEnterCriticalRegionThread((__int64)CurrentThread);
          ExAcquireResourceSharedLite(&IopSecurityResource, 1u);
          v13 = v32 ^ (SeFastTraverseCheck((__int64)v16->SecurityDescriptor, a3, 32) ^ v32) & 1;
          v40 = v13;
          if ( (v13 & 1) == 0 )
          {
            Privileges = 0LL;
            SeLockSubjectContext(p_SubjectSecurityContext);
            v16 = (struct _DEVICE_OBJECT *)Object;
            v13 = (v13 | 0x20) ^ ((v13 | 0x20) ^ SeAccessCheck(
                                                   *((PSECURITY_DESCRIPTOR *)Object + 34),
                                                   p_SubjectSecurityContext,
                                                   1u,
                                                   0x20u,
                                                   0,
                                                   &Privileges,
                                                   (PGENERIC_MAPPING)((char *)IoFileObjectType + 76),
                                                   1,
                                                   &GrantedAccess,
                                                   &AccessStatus)) & 1;
            v40 = v13;
            if ( Privileges )
            {
              SeAppendPrivileges((PACCESS_STATE)a3, Privileges);
              CmSiFreeMemory(Privileges);
            }
          }
          goto LABEL_71;
        }
        v13 = v32 | 1;
      }
      v40 = v13;
      goto LABEL_74;
    }
LABEL_78:
    if ( *(_BYTE *)(a8 + 137) || *(_BYTE *)(a8 + 138) )
      v42 = 64;
    else
      v42 = 0;
    v43 = v42 | v13 & 0xBF;
    Length = SourceString->Length;
    if ( SourceString->Length
      || (v45 = *(_QWORD *)(a8 + 40)) != 0
      || (RemainingDesiredAccess & 0xFEE1FF7F) != 0
      || (v43 & 0x40) != 0 )
    {
      v13 = v43 & 0xF7;
      v45 = *(_QWORD *)(a8 + 40);
    }
    else
    {
      v13 = v43 | 8;
    }
    v162 = v13;
    v46 = 0LL;
    v153 = 0LL;
    if ( !v45 || (*(_DWORD *)(v45 + 80) & 0x800) != 0 )
    {
      AttachedDevice = v16;
      DeviceObject = v16;
      if ( v16->Vpb && (v13 & 8) == 0 )
      {
        if ( (v16->Characteristics & 0x100) != 0
          && (v16->DeviceObjectExtension->ExtensionFlags & 0x800) == 0
          && (v31 || (*(_DWORD *)(a8 + 84) & 1) != 0)
          && (v45 || Length)
          && !(_BYTE)v141 )
        {
          Privileges = 0LL;
          if ( !IopCreateSecurityCheck(
                  (__int64)v16,
                  v16,
                  (struct _ACCESS_STATE *)a3,
                  RemainingDesiredAccess,
                  *(_DWORD *)(a8 + 88),
                  0LL,
                  &GrantedAccess,
                  AbsoluteObjectName,
                  &ObjectTypeName,
                  (__int64)CurrentThread,
                  0) )
            goto LABEL_330;
        }
        v48 = IopCheckVpbMounted(a8, (ULONG_PTR)v16, (__int64)SourceString, &AccessStatus);
        v46 = v48;
        v153 = v48;
        if ( !v48 )
          return (unsigned int)AccessStatus;
        AttachedDevice = *(PDEVICE_OBJECT *)(v48 + 8);
        DeviceObject = AttachedDevice;
      }
      if ( (*(_DWORD *)(a8 + 152) & 1) != 0 )
      {
        v13 |= 2u;
        v162 = v13;
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
      if ( *(_QWORD *)(v45 + 16) )
      {
        v46 = *(_QWORD *)(v45 + 16);
        v153 = v46;
        if ( (v16->Characteristics & 0x100) != 0
          && (v16->DeviceObjectExtension->ExtensionFlags & 0x800) == 0
          && (v31 || (*(_DWORD *)(a8 + 84) & 1) != 0)
          && !(_BYTE)v141 )
        {
          Privileges = 0LL;
          if ( !IopCreateSecurityCheck(
                  (__int64)v16,
                  v16,
                  (struct _ACCESS_STATE *)a3,
                  RemainingDesiredAccess,
                  *(_DWORD *)(a8 + 88),
                  0LL,
                  &GrantedAccess,
                  AbsoluteObjectName,
                  &ObjectTypeName,
                  (__int64)CurrentThread,
                  0) )
            goto LABEL_330;
        }
        IopIncrementVpbRefCount(v46, 1);
        AttachedDevice = DeviceObject;
      }
      if ( (*(_DWORD *)(a8 + 152) & 1) != 0 )
      {
        if ( v46 )
        {
          AttachedDevice = *(PDEVICE_OBJECT *)(v46 + 8);
          DeviceObject = AttachedDevice;
        }
        v13 |= 2u;
        v162 = v13;
      }
    }
    Characteristics = v16->Characteristics;
    if ( (Characteristics & 0x40001) != 0 && (v16->Flags & 0x600100) == 0 && (Characteristics & 0x100) == 0 )
    {
      if ( IopIsSecurityContextAppContainer((struct _SECURITY_SUBJECT_CONTEXT *)(a3 + 32)) )
      {
        if ( !v46 )
          goto LABEL_330;
        if ( (*(_DWORD *)(*(_QWORD *)(v46 + 8) + 48LL) & 0x20000) == 0 )
        {
          IopDereferenceVpbAndFree(v46);
LABEL_330:
          IopDecrementDeviceObjectRef((ULONG_PTR)v16, 0);
          return 3221225506LL;
        }
      }
      AttachedDevice = DeviceObject;
    }
    if ( (v13 & 2) != 0 )
    {
      AccessStatus = IopCheckTopDeviceHint(&DeviceObject, a8, (v13 & 8) != 0, SourceString);
      if ( AccessStatus < 0 )
      {
        if ( v46 )
          IopDereferenceVpbAndFree(v46);
        IopDecrementDeviceObjectRef((ULONG_PTR)v16, 0);
        return (unsigned int)AccessStatus;
      }
      AttachedDevice = DeviceObject;
    }
    v50 = *(_DWORD *)(a8 + 152);
    if ( (v50 & 0x10) != 0 )
      *(_DWORD *)(a8 + 152) = v50 & 0xFFFFFFEF;
    if ( ((AttachedDevice->Characteristics & 0x100) != 0
       || IopRequireDeviceAccessCheck && (v16->Characteristics & 0x100000) != 0)
      && (a4 || (*(_DWORD *)(a8 + 84) & 1) != 0)
      && (*(_QWORD *)(a8 + 40) || SourceString->Length)
      && !(_BYTE)v141 )
    {
      Privileges = 0LL;
      if ( !IopCreateSecurityCheck(
              (__int64)v16,
              AttachedDevice,
              (struct _ACCESS_STATE *)a3,
              RemainingDesiredAccess,
              *(_DWORD *)(a8 + 88),
              0LL,
              &GrantedAccess,
              AbsoluteObjectName,
              &ObjectTypeName,
              (__int64)CurrentThread,
              1) )
      {
        IopDecrementDeviceObjectRef((ULONG_PTR)v16, 0);
        if ( v46 )
          IopDereferenceVpbAndFree(v46);
        return 3221225506LL;
      }
    }
    Irp = IopAllocateIrpExReturn();
    v52 = Irp;
    if ( !Irp )
    {
      IopDecrementDeviceObjectRef((ULONG_PTR)Object, 0);
      if ( v46 )
        IopDereferenceVpbAndFree(v46);
      return 3221225626LL;
    }
    *(_QWORD *)(Irp + 152) = CurrentThread;
    *(_BYTE *)(Irp + 64) = a4;
    *(_DWORD *)(Irp + 16) = 2180;
    v157 = a9;
    v158 = a3;
    LODWORD(v159) = RemainingDesiredAccess;
    HIDWORD(v159) = *(_DWORD *)(a8 + 64);
    v53 = *(_QWORD *)(Irp + 184) - 72LL;
    v152 = (_BYTE *)v53;
    *(_BYTE *)(v53 + 3) = 0;
    v54 = *(_DWORD *)(a8 + 120);
    if ( v54 )
    {
      if ( v54 == 1 )
        *(_BYTE *)v53 = 1;
      else
        *(_BYTE *)v53 = 19;
      *(_QWORD *)(v53 + 32) = *(_QWORD *)(a8 + 128);
    }
    else
    {
      *(_BYTE *)v53 = 0;
      *(_DWORD *)(v53 + 32) = *(_DWORD *)(a8 + 80);
      v55 = *(_BYTE *)(a8 + 84);
      *(_BYTE *)(v53 + 2) = v55;
      if ( (a5 & 0x40) == 0 )
        *(_BYTE *)(v53 + 2) = v55 | 0x80;
    }
    *(_QWORD *)(v52 + 88) = *(_QWORD *)(a8 + 56);
    *(_QWORD *)(v52 + 24) = *(_QWORD *)(a8 + 72);
    *(_DWORD *)(v53 + 16) = (*(_DWORD *)(a8 + 88) << 24) | *(_DWORD *)(a8 + 64) & 0xFFFFFF;
    *(_WORD *)(v53 + 24) = *(_WORD *)(a8 + 68);
    *(_WORD *)(v53 + 26) = *(_WORD *)(a8 + 70);
    *(_QWORD *)(v53 + 8) = &v157;
    *(_QWORD *)(v52 + 112) = *(_QWORD *)(a8 + 168);
    *(_QWORD *)(v52 + 72) = BugCheckParameter4;
    *(_QWORD *)(v52 + 8) = 0LL;
    *(_BYTE *)(v52 + 65) = 0;
    *(_BYTE *)(v52 + 68) = 0;
    *(_QWORD *)(v52 + 80) = 0LL;
    *(_QWORD *)(v52 + 104) = 0LL;
    *(_QWORD *)(v52 + 160) = 0LL;
    if ( !*(_BYTE *)(a8 + 137) )
    {
      AccessStatus = IopAllocRealFileObject(
                       (__int64)&v138,
                       (__int64)DeviceObject,
                       (__int64)Object,
                       a5,
                       a4,
                       a8,
                       a10,
                       0,
                       RemainingDesiredAccess);
      if ( AccessStatus < 0 )
      {
        IoFreeIrp((PIRP)v52);
        IopDecrementDeviceObjectRef((ULONG_PTR)Object, 0);
        if ( v46 )
          IopDereferenceVpbAndFree(v46);
        if ( v138 )
        {
          *((_QWORD *)v138 + 1) = 0LL;
          ObfDereferenceObject(v138);
        }
LABEL_153:
        result = (unsigned int)AccessStatus;
LABEL_154:
        *(_DWORD *)(a8 + 16) = result;
        return result;
      }
      goto LABEL_176;
    }
    v56 = *(_BYTE **)(a8 + 144);
    memset(v56, 0, 0x110uLL);
    v138 = v56 + 48;
    v56[24] = ObHeaderCookie ^ *((_BYTE *)IoFileObjectType + 40) ^ BYTE1(v56);
    *(_QWORD *)v56 = 1LL;
    if ( (a5 & 0x40) == 0 )
      *((_DWORD *)v138 + 20) |= 0x20000u;
    *(_WORD *)v138 = 5;
    *((_WORD *)v138 + 1) = 216;
    *((_QWORD *)v138 + 8) = *(_QWORD *)(a8 + 40);
    v57 = Object;
    *((_QWORD *)v138 + 1) = Object;
    if ( (*(_DWORD *)(a8 + 152) & 0x20) != 0 )
    {
      if ( a4 )
      {
        if ( (DeviceObject->Flags & 0x40000) != 0
          || (DeviceType = DeviceObject->DeviceType, (unsigned int)DeviceType <= 0x35)
          && (v59 = 0x20000100100108LL, _bittest64(&v59, DeviceType)) )
        {
          AccessStatus = IopRetrieveTransactionParameters(
                           (__int64)DeviceObject,
                           a8,
                           RemainingDesiredAccess,
                           (__int64)v138);
          if ( AccessStatus < 0 )
          {
            IoFreeIrp((PIRP)v52);
            v108 = v57;
            goto LABEL_339;
          }
        }
      }
    }
    if ( !PsIsHostSilo(*(_QWORD *)(a10 + 8))
      || (v60 = *((_QWORD *)v138 + 8)) != 0 && (v61 = IoGetSilo(v60), !PsIsHostSilo(v61)) )
    {
      v155 = 0LL;
      if ( *((_QWORD *)v138 + 8) && PsIsServerSilo(*(_QWORD *)(a10 + 8)) )
        Silo = (_DWORD *)IoGetSilo(*((_QWORD *)v138 + 8));
      else
        Silo = *(_DWORD **)(a10 + 8);
      if ( !PsIsHostSilo((__int64)Silo) )
      {
        AccessStatus = PsAcquireSiloHardReference(Silo);
        if ( AccessStatus < 0
          || (LOBYTE(v63) = 1,
              AccessStatus = IopGetSetSpecificExtension((__int64)v138, 7u, 16LL, v63, &v155, 0LL),
              AccessStatus < 0)
          && (PsReleaseSiloHardReference(Silo), AccessStatus < 0) )
        {
          IoFreeIrp((PIRP)v52);
          v108 = Object;
LABEL_339:
          IopDecrementDeviceObjectRef((ULONG_PTR)v108, 0);
          if ( v46 )
          {
            IopDereferenceVpbAndFree(v46);
            result = (unsigned int)AccessStatus;
            *(_DWORD *)(a8 + 16) = AccessStatus;
            return result;
          }
          goto LABEL_153;
        }
        *(_DWORD *)v155 = 16;
        *(_QWORD *)(v155 + 8) = Silo;
        *(_DWORD *)(v155 + 4) |= 1u;
        ObfReferenceObjectWithTag(Silo, 0x70536F49u);
      }
    }
    v53 = (__int64)v152;
LABEL_176:
    if ( (v13 & 8) != 0 )
      *((_DWORD *)v138 + 20) |= 0x800u;
    *(_QWORD *)(v52 + 192) = v138;
    *(_QWORD *)(v53 + 48) = v138;
    v64 = SourceString->Length;
    if ( SourceString->Length )
    {
      if ( v64 >= 0x38u )
      {
        if ( v64 >= 0x78u )
        {
          v65 = 248;
          if ( v64 >= 0xF8u )
            v65 = SourceString->Length;
        }
        else
        {
          v65 = 120;
        }
      }
      else
      {
        v65 = 56;
      }
      *((_WORD *)v138 + 45) = v65;
      *((_QWORD *)v138 + 12) = ExAllocatePoolWithTag(PagedPool, v65, 0x6D4E6F49u);
      v66 = (char *)v138;
      if ( !*((_QWORD *)v138 + 12) )
      {
        IoFreeIrp((PIRP)v52);
        IopDecrementDeviceObjectRef((ULONG_PTR)Object, 0);
        if ( v46 )
          IopDereferenceVpbAndFree(v46);
        *((_QWORD *)v138 + 1) = 0LL;
        if ( !*(_BYTE *)(a8 + 137) )
        {
          ObfDereferenceObject(v138);
          return 3221225626LL;
        }
        return 3221225626LL;
      }
    }
    else
    {
      v66 = (char *)v138;
    }
    RtlCopyUnicodeString((PUNICODE_STRING)(v66 + 88), SourceString);
    if ( *(_BYTE *)(a8 + 137) )
    {
      AccessStatus = IopQueryInformation(a8, DeviceObject, v52, v53, v140);
      if ( AccessStatus < 0 || v140[0] )
      {
        v111 = *(_DWORD *)(v52 + 48);
        *(_DWORD *)(a8 + 16) = v111;
        *(_QWORD *)(a8 + 24) = *(_QWORD *)(v52 + 56);
        if ( v111 == 260 )
        {
          v112 = *(void **)(v52 + 160);
          if ( v112 )
          {
            ExFreePoolWithTag(v112, 0);
            *(_QWORD *)(v52 + 160) = 0LL;
            *(_QWORD *)(a8 + 40) = 0LL;
          }
        }
        v113 = v138;
        if ( *((_WORD *)v138 + 44) )
        {
          ExFreePoolWithTag(*((PVOID *)v138 + 12), 0);
          v113 = v138;
        }
        if ( v113[26] )
          IopDeleteFileObjectExtension((__int64)v113);
        v110 = Object;
        goto LABEL_360;
      }
      if ( !RtlEqualUnicodeString((PCUNICODE_STRING)((char *)v138 + 88), SourceString, 0) )
      {
        v67 = v138;
        v68 = (void *)*((_QWORD *)v138 + 12);
        if ( v68 )
        {
          ExFreePoolWithTag(v68, 0);
          RtlInitUnicodeString((PUNICODE_STRING)((char *)v138 + 88), 0LL);
          v67 = v138;
        }
        v69 = SourceString->Length;
        if ( SourceString->Length )
        {
          if ( v69 >= 0x38u )
          {
            if ( v69 >= 0x78u )
            {
              if ( v69 < 0xF8u )
                v69 = 248;
            }
            else
            {
              v69 = 120;
            }
          }
          else
          {
            v69 = 56;
          }
          v67[45] = v69;
          *((_QWORD *)v138 + 12) = ExAllocatePoolWithTag(PagedPool, v69, 0x6D4E6F49u);
          if ( !*((_QWORD *)v138 + 12) )
          {
            if ( *((_QWORD *)v138 + 26) )
              IopDeleteFileObjectExtension((__int64)v138);
            IopDecrementDeviceObjectRef((ULONG_PTR)Object, 0);
            if ( v46 )
              IopDereferenceVpbAndFree(v46);
            IoFreeIrp((PIRP)v52);
            return 3221225626LL;
          }
          RtlCopyUnicodeString((PUNICODE_STRING)((char *)v138 + 88), SourceString);
        }
      }
      v70 = Object;
      AccessStatus = IopAllocRealFileObject(
                       (__int64)&v138,
                       (__int64)DeviceObject,
                       (__int64)Object,
                       a5,
                       a4,
                       a8,
                       a10,
                       1,
                       RemainingDesiredAccess);
      if ( AccessStatus < 0 )
      {
        v109 = v138;
        if ( *((_WORD *)v138 + 44) )
        {
          ExFreePoolWithTag(*((PVOID *)v138 + 12), 0);
          v109 = v138;
        }
        if ( v109[26] )
          IopDeleteFileObjectExtension((__int64)v109);
        v110 = v70;
LABEL_360:
        IopDecrementDeviceObjectRef((ULONG_PTR)v110, 0);
        if ( v46 )
          IopDereferenceVpbAndFree(v46);
        IoFreeIrp((PIRP)v52);
        return (unsigned int)AccessStatus;
      }
      *(_QWORD *)(v53 + 48) = v138;
      *(_QWORD *)(v52 + 192) = v138;
    }
    if ( !*(_DWORD *)(a8 + 120) )
    {
      AccessStatus = IoGetIrpExtraCreateParameter((PIRP)v52, ExtraCreateParameter);
      if ( ExtraCreateParameter[0] )
      {
        if ( IopSymlinkGetECP(ExtraCreateParameter[0], &Src) != -1073741275 )
        {
          MostRecentlyUsedName = (__int16 *)IopSymlinkGetMostRecentlyUsedName((__int64)Src);
          if ( !MostRecentlyUsedName[2] )
          {
            updated = IopSymlinkUpdateECP(
                        (PIRP)v52,
                        MostRecentlyUsedName,
                        AbsoluteObjectName->Length - SourceString->Length,
                        MostRecentlyUsedName[1]);
            AccessStatus = updated;
            if ( updated < 0 )
            {
              *(_DWORD *)(v52 + 48) = updated;
              *(_QWORD *)(v52 + 56) = 0LL;
              v13 &= ~4u;
              v162 = v13;
            }
          }
        }
      }
    }
    KeInitializeEvent((PRKEVENT)((char *)v138 + 152), NotificationEvent, 0);
    *(_QWORD *)(a8 + 8) = v138;
    if ( (v13 & 4) != 0 )
    {
      IopQueueThreadIrp(v52, v73);
      v74 = IoCallDriverWithTracing(DeviceObject, v52);
      AccessStatus = v74;
    }
    else
    {
      v74 = AccessStatus;
    }
    if ( v74 != 259 )
      goto LABEL_266;
    if ( (KeGetCurrentThread()->MiscFlags & 0x400) != 0 )
      v13 = v162 & 0x7F;
    else
      v13 = v162 | 0x80;
    v163 = v13;
    v75 = v13 >> 7;
    AccessStatus = KeWaitForSingleObject((char *)v138 + 152, Executive, 0, v13 >> 7, 0LL);
    if ( AccessStatus != 257 )
      goto LABEL_265;
    while ( 1 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(1uLL);
      if ( PsIsThreadTerminating(KeGetCurrentThread())
        || !KeReadStateSemaphore((PRKSEMAPHORE)((char *)v138 + 152)) && *(_BYTE *)(v52 + 68) )
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
          v79 = *SchedulerAssist;
          if ( (*SchedulerAssist & 0x190000) == 0 && !SchedulerAssist[5] )
          {
            PriorityState = CurrentPrcb->PriorityState;
            if ( PriorityState )
            {
              v81 = *PriorityState;
              if ( *PriorityState
                || (NextThread = CurrentPrcb->NextThread, IdleThread = CurrentPrcb->IdleThread, NextThread != IdleThread)
                && (CurrentPrcb->CurrentThread != IdleThread || NextThread) )
              {
                if ( v81 == 127 )
                {
                  v81 = 0;
LABEL_238:
                  if ( (unsigned int)(unsigned __int8)v79 - 1 <= 0x1E
                    && (unsigned __int8)v79 > v81
                    && (unsigned __int8)v79 >= KiVpThreadSystemWorkPriority )
                  {
                    SchedulerAssist[3] = 3;
                    __writemsr(0x400000C2u, 0xFFFFFFFEuLL);
                  }
                  goto LABEL_242;
                }
              }
              else
              {
                v81 = KiVpThreadSystemWorkPriority;
              }
              if ( v81 < 16 )
                goto LABEL_238;
            }
          }
        }
      }
LABEL_242:
      __writecr8(CurrentIrql);
      AccessStatus = KeWaitForSingleObject((char *)v138 + 152, Executive, 0, v75, 0LL);
      if ( AccessStatus != 257 )
        goto LABEL_264;
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
      {
        v84 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v84->SchedulerAssist, 0xFFFEFFFF);
        v85 = (int *)v84->SchedulerAssist;
        v86 = *v85;
        if ( (*v85 & 0x190000) == 0 && !v85[5] )
        {
          v87 = v84->PriorityState;
          if ( v87 )
          {
            v88 = *v87;
            if ( !*v87 )
            {
              v89 = v84->NextThread;
              v90 = v84->IdleThread;
              if ( v89 == v90 || v84->CurrentThread == v90 && !v89 )
              {
                v88 = KiVpThreadSystemWorkPriority;
                goto LABEL_258;
              }
            }
            if ( v88 == 127 )
            {
              v88 = 0;
LABEL_259:
              if ( (unsigned int)(unsigned __int8)v86 - 1 <= 0x1E
                && (unsigned __int8)v86 > v88
                && (unsigned __int8)v86 >= KiVpThreadSystemWorkPriority )
              {
                v85[3] = 3;
                __writemsr(0x400000C2u, 0xFFFFFFFEuLL);
              }
            }
            else
            {
LABEL_258:
              if ( v88 < 16 )
                goto LABEL_259;
            }
          }
        }
      }
    }
    __writecr8(CurrentIrql);
    IopCancelAlertedRequest((char *)v138 + 152, (PIRP)v52);
LABEL_264:
    v13 = v163;
LABEL_265:
    AccessStatus = BugCheckParameter4[0];
LABEL_266:
    AccessStatus = IoGetIrpExtraCreateParameter((PIRP)v52, &v149);
    v92 = *(_DWORD *)(a8 + 84) & 8;
    v93 = v92 != 0;
    if ( *(_DWORD *)(v52 + 48) == 260 )
    {
      P = *(PVOID *)(v52 + 160);
      if ( !v149 || IopSymlinkGetECP(v149, &Src) == -1073741275 )
      {
        AccessStatus = IopSymlinkCreateECP((PIRP)v52, (__int64)&Src);
        if ( AccessStatus >= 0 )
        {
          if ( !v149 )
            AccessStatus = IoGetIrpExtraCreateParameter((PIRP)v52, &v149);
        }
        else
        {
          *(_QWORD *)(v52 + 56) = 0LL;
          *(_DWORD *)(v52 + 48) = AccessStatus;
        }
      }
      v93 = v92 != 0;
      if ( *(_DWORD *)(v52 + 48) == 260 )
      {
        if ( v92 && v149 )
          v93 = IopCheckAndUpdateStopOnSymlinkEcp(v149, *(unsigned int *)(v52 + 56), P);
        IopSymlinkProcessReparse((PIRP)v52);
        v91 = *(_QWORD *)(v52 + 56) - 2684354563LL;
        if ( v91 <= 0x16 )
        {
          v94 = 4194817LL;
          if ( _bittest64(&v94, v91) )
          {
            v95 = P;
            v91 = *((unsigned __int16 *)P + 3);
            v96 = 0;
            if ( !(_WORD)v91 )
              v96 = 16;
            v13 = v13 & 0xEF | v96;
            if ( (v13 & 0x10) != 0 || *(wchar_t *)((char *)SourceString->Buffer + SourceString->Length - v91) == 58 )
            {
              v97 = *(_DWORD *)(a8 + 64);
              if ( (v97 & 0x41) == 0 && !*v152 )
              {
                v91 = 2684354563LL;
                if ( *(_DWORD *)P == -1610612733 )
                  goto LABEL_292;
                if ( *(_DWORD *)P != -1610612724 )
                  goto LABEL_294;
                if ( *((int *)P + 4) < 0 )
                {
LABEL_292:
                  v98 = v97 | 1;
LABEL_293:
                  *(_DWORD *)(a8 + 64) = v98;
                }
                else if ( (*((_DWORD *)P + 4) & 0x40000000) != 0 )
                {
                  v98 = v97 | 0x40;
                  goto LABEL_293;
                }
              }
            }
LABEL_294:
            if ( !v93 )
            {
              ExFreePoolWithTag(v95, 0);
              P = 0LL;
            }
          }
        }
      }
    }
    if ( !*(_DWORD *)(v52 + 48) && !*(_DWORD *)(a8 + 120) )
    {
      AccessStatus = IopSymlinkPropagateToExtensionIfNeeded(v138, v149, AbsoluteObjectName);
      if ( AccessStatus < 0 )
      {
        IoCancelFileOpen(DeviceObject, (PFILE_OBJECT)v138);
        *(_QWORD *)(v52 + 56) = 0LL;
        *(_DWORD *)(v52 + 48) = AccessStatus;
      }
    }
    if ( v149 )
      *(_QWORD *)(a8 + 168) = v149;
    *(_OWORD *)BugCheckParameter4 = *(_OWORD *)(v52 + 48);
    AccessStatus = _mm_cvtsi128_si32(*(__m128i *)BugCheckParameter4);
    *((_DWORD *)v138 + 39) = 1;
    if ( (v13 & 4) != 0 )
    {
      *(_QWORD *)(v52 + 152) = CurrentThread;
      IopDequeueIrpFromThread((_QWORD *)v52, (volatile signed __int32 *)v91);
    }
    if ( (*(_BYTE *)(v52 + 16) & 0x30) == 0x30 )
      ExFreePoolWithTag(*(PVOID *)(v52 + 24), 0);
    IoFreeIrp((PIRP)v52);
    v99 = BugCheckParameter4[1];
    *(_QWORD *)(a8 + 24) = BugCheckParameter4[1];
    if ( AccessStatus < 0 )
    {
      v136 = v138;
      if ( (*((_DWORD *)v138 + 20) & 0x200000) != 0 )
      {
        ObfDereferenceObject(v138);
        *(_QWORD *)(a8 + 8) = 0LL;
        result = (unsigned int)AccessStatus;
        *(_DWORD *)(a8 + 16) = AccessStatus;
      }
      else
      {
        if ( *((_WORD *)v138 + 44) )
        {
          ExFreePoolWithTag(*((PVOID *)v138 + 12), 0);
          *((_WORD *)v138 + 44) = 0;
          v136 = v138;
        }
        v136[1] = 0LL;
        ObfDereferenceObject(v138);
        IopDecrementDeviceObjectRef((ULONG_PTR)Object, 0);
        if ( v153 )
          IopDereferenceVpbAndFree(v153);
        *(_QWORD *)(a8 + 8) = 0LL;
        result = (unsigned int)AccessStatus;
        *(_DWORD *)(a8 + 16) = AccessStatus;
      }
      return result;
    }
    if ( AccessStatus != 260 )
    {
      RelatedDeviceObject = IoGetRelatedDeviceObject((PFILE_OBJECT)v138);
      if ( DeviceObject != RelatedDeviceObject )
      {
        v121 = *((_QWORD *)v138 + 2);
        v122 = v153;
        if ( v121 != v153 )
        {
          if ( v121 )
            IopIncrementVpbRefCount(v121, 1);
          if ( v122 )
            IopDereferenceVpbAndFree(v122);
        }
      }
      if ( (v13 & 0x40) == 0 )
      {
        v123 = v138;
        *a11 = v138;
        *(_DWORD *)(a8 + 32) = -1096154543;
        ObfReferenceObject(v123);
        v124 = *((_QWORD *)v138 + 8);
        if ( (!v124 || (*(_DWORD *)(v124 + 80) & 0x400000) != 0) && !*((_WORD *)v138 + 44) )
        {
          v125 = RelatedDeviceObject->DeviceType;
          if ( (unsigned int)v125 <= 0x20 )
          {
            v126 = 0x100000308LL;
            if ( _bittest64(&v126, v125) )
              *((_DWORD *)v138 + 20) |= 0x400000u;
          }
        }
        result = BugCheckParameter4[0];
        *(_DWORD *)(a8 + 16) = BugCheckParameter4[0];
        return result;
      }
      if ( *(_BYTE *)(a8 + 137) )
      {
        if ( *(_BYTE *)(a8 + 208) )
        {
          FileInformation = IoQueryFileInformation(
                              (PFILE_OBJECT)v138,
                              *(FILE_INFORMATION_CLASS *)(a8 + 200),
                              *(_DWORD *)(a8 + 204),
                              *(PVOID *)(a8 + 112),
                              (PULONG)(a8 + 204));
          goto LABEL_429;
        }
        v128 = 0;
        FastIoDispatch = RelatedDeviceObject->DriverObject->FastIoDispatch;
        if ( *(_BYTE *)(a8 + 139) )
        {
          if ( FastIoDispatch )
          {
            if ( FastIoDispatch->SizeOfFastIoDispatch > 0x70 )
            {
              FastIoQueryNetworkOpenInfo = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))FastIoDispatch->FastIoQueryNetworkOpenInfo;
              if ( FastIoQueryNetworkOpenInfo )
              {
                v134 = (MmVerifierData & 0x10) != 0 ? (void *)VfFastIoSnapState() : 0LL;
                LOBYTE(v119) = 1;
                v128 = FastIoQueryNetworkOpenInfo(
                         v138,
                         v119,
                         *(_QWORD *)(a8 + 104),
                         BugCheckParameter4,
                         RelatedDeviceObject);
                if ( v134 )
                  VfFastIoCheckState(v134);
              }
            }
          }
          if ( !v128 )
          {
            v135 = IoQueryFileInformation(
                     (PFILE_OBJECT)v138,
                     FileNetworkOpenInformation,
                     0x38u,
                     *(PVOID *)(a8 + 104),
                     &ReturnedLength);
            AccessStatus = v135;
            if ( v135 == -1073741811 || v135 == -1073741822 )
            {
              FileInformation = IopGetNetworkOpenInformation(v138);
LABEL_429:
              AccessStatus = FileInformation;
            }
          }
        }
        else
        {
          Src = 0LL;
          if ( FastIoDispatch )
            FastIoQueryBasicInfo = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))FastIoDispatch->FastIoQueryBasicInfo;
          else
            FastIoQueryBasicInfo = 0LL;
          if ( FastIoQueryBasicInfo )
          {
            v131 = (MmVerifierData & 0x10) != 0 ? (struct _ECP_LIST *)VfFastIoSnapState() : 0LL;
            ExtraCreateParameter[1] = v131;
            LOBYTE(v119) = 1;
            v128 = FastIoQueryBasicInfo(v138, v119, *(_QWORD *)(a8 + 96), BugCheckParameter4, RelatedDeviceObject);
            v147 = v128;
            if ( v131 )
              VfFastIoCheckState(v131);
          }
          if ( v128 )
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
                               (PFILE_OBJECT)v138,
                               FileBasicInformation,
                               0x28u,
                               Pool_0,
                               &ReturnedLength);
              if ( AccessStatus >= 0 )
                memmove(*(void **)(a8 + 96), Src, ReturnedLength);
              ExFreePoolWithTag(Src, 0);
            }
            else
            {
              AccessStatus = -1073741670;
            }
          }
        }
      }
      *(_DWORD *)(a8 + 32) = -1096154543;
      IopCloseFile(0LL, (struct _FILE_OBJECT *)v138, 1LL, 1LL);
      ObfDereferenceObject(v138);
      *(_QWORD *)(a8 + 8) = 0LL;
      result = (unsigned int)AccessStatus;
      *(_DWORD *)(a8 + 16) = AccessStatus;
      return result;
    }
    if ( (v99 & 0xFFFFFFFFFFFFFFFDuLL) != 0 )
    {
      if ( v99 - 2684354563u > 0x16 )
        goto LABEL_312;
      v100 = 4194817LL;
      if ( !_bittest64(&v100, v99 - 2684354563u) || v93 )
        goto LABEL_312;
    }
    else
    {
      v100 = 4194817LL;
    }
    v104 = (const UNICODE_STRING *)((char *)v138 + 88);
    v105 = *((_WORD *)v138 + 44);
    if ( AbsoluteObjectName->MaximumLength < v105 )
      break;
LABEL_325:
    RtlCopyUnicodeString(AbsoluteObjectName, v104);
    if ( BugCheckParameter4[1] - 2684354563u <= 0x16 && _bittest64(&v100, BugCheckParameter4[1] - 2684354563u) )
      *(_QWORD *)(a8 + 40) = 0LL;
LABEL_312:
    v101 = v138;
    if ( *((_WORD *)v138 + 44) )
    {
      ExFreePoolWithTag(*((PVOID *)v138 + 12), 0);
      *((_WORD *)v138 + 44) = 0;
      v101 = v138;
    }
    v101[1] = 0LL;
    ObfDereferenceObject(v138);
    *(_QWORD *)(a8 + 8) = 0LL;
    v102 = Object;
    IopDecrementDeviceObjectRef((ULONG_PTR)Object, 0);
    if ( v153 )
      IopDereferenceVpbAndFree(v153);
    v103 = BugCheckParameter4[1];
    if ( BugCheckParameter4[1] != 1 )
    {
      *(_QWORD *)(a8 + 40) = 0LL;
      v114 = 4194817LL;
      if ( v103 - 2684354563u <= 0x16 && _bittest64(&v114, v103 - 2684354563u) )
      {
        *(_DWORD *)(a8 + 152) |= 0x10u;
        v115 = *(_DWORD *)(a8 + 152);
        v116 = *((unsigned int *)v102 + 18);
        if ( (unsigned int)v116 <= 0x24 && (v117 = 0x1080020084LL, _bittest64(&v117, v116)) )
          v118 = v115 | 8;
        else
          v118 = v115 & 0xFFFFFFF7;
        *(_DWORD *)(a8 + 152) = v118;
      }
      if ( *(_BYTE *)(a8 + 136) )
        KeBugCheckEx(0xF9u, (ULONG_PTR)v102, (ULONG_PTR)DeviceObject, (ULONG_PTR)AbsoluteObjectName, v103);
      if ( (*(_DWORD *)(v102[39] + 32LL) & 0x800) == 0 )
      {
        *(_QWORD *)(a3 + 16) = *(unsigned int *)(a3 + 24);
        *(_DWORD *)(a3 + 12) &= ~0x100u;
      }
      if ( v103 - 2684354563u <= 0x16 && _bittest64(&v114, v103 - 2684354563u) && v93 )
      {
        *(_QWORD *)(a8 + 24) = P;
        *(_DWORD *)(a8 + 16) = -2147483603;
        return 2147483693LL;
      }
      else if ( v103 == 2684354585 || v103 == 2 )
      {
        *(_QWORD *)(a10 + 8) = PsGetParentSilo(*(_QWORD *)(a10 + 8));
        return 872LL;
      }
      else
      {
        return 260LL;
      }
    }
    if ( (unsigned int)++v150 > 0x20 )
      return 3221225473LL;
    *a11 = 0LL;
    v138 = 0LL;
    v11 = (struct _ACCESS_STATE *)a3;
    v12 = (unsigned int *)BugCheckParameter2;
  }
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v105, 0x63466F49u);
  if ( PoolWithTag )
  {
    Buffer = AbsoluteObjectName->Buffer;
    if ( Buffer )
      ExFreePoolWithTag(Buffer, 0);
    AbsoluteObjectName->Buffer = PoolWithTag;
    v104 = (const UNICODE_STRING *)((char *)v138 + 88);
    AbsoluteObjectName->MaximumLength = *((_WORD *)v138 + 44);
    goto LABEL_325;
  }
  *(_DWORD *)(a8 + 16) = -1073741670;
  return 3221225626LL;
}
