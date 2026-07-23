/*
 * XREFs of NtCreateUserProcess @ 0x140615E10
 * Callers:
 *     <none>
 * Callees:
 *     PsGetProcessServerSilo @ 0x140006520 (PsGetProcessServerSilo.c)
 *     ObfReferenceObjectWithTag @ 0x14000D6B0 (ObfReferenceObjectWithTag.c)
 *     RtlGetExtendedContextLength @ 0x140016C60 (RtlGetExtendedContextLength.c)
 *     RtlInitializeExtendedContext @ 0x140016CB8 (RtlInitializeExtendedContext.c)
 *     SepDeleteAccessState @ 0x14003B0B0 (SepDeleteAccessState.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1401CC4E0 (_alloca_probe.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PspCreateUserContext @ 0x1405E7480 (PspCreateUserContext.c)
 *     PspGetContextThreadInternal @ 0x1405E7D40 (PspGetContextThreadInternal.c)
 *     PspInsertThread @ 0x1405E8D54 (PspInsertThread.c)
 *     PspCreateObjectHandle @ 0x1405E95CC (PspCreateObjectHandle.c)
 *     SeReleaseSubjectContext @ 0x1405F3180 (SeReleaseSubjectContext.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405FA4A0 (ObpReferenceObjectByHandleWithTag.c)
 *     PspDeleteCreateProcessContext @ 0x14060B5A0 (PspDeleteCreateProcessContext.c)
 *     PspBuildCreateProcessContext @ 0x14060B770 (PspBuildCreateProcessContext.c)
 *     PspMapThreadCreationFlags @ 0x14060D05C (PspMapThreadCreationFlags.c)
 *     PspAllocateThread @ 0x14060DC44 (PspAllocateThread.c)
 *     ObCloseHandle @ 0x14060F280 (ObCloseHandle.c)
 *     IoCreateFileEx @ 0x140616F50 (IoCreateFileEx.c)
 *     FsRtlFreeExtraCreateParameterList @ 0x140617DA0 (FsRtlFreeExtraCreateParameterList.c)
 *     PspUpdateCreateInfo @ 0x140617F64 (PspUpdateCreateInfo.c)
 *     PspCreateUserProcessEcp @ 0x1406181DC (PspCreateUserProcessEcp.c)
 *     PspGetMemoryPartitionContext @ 0x1406183C0 (PspGetMemoryPartitionContext.c)
 *     SeQuerySigningPolicy @ 0x140618430 (SeQuerySigningPolicy.c)
 *     PspReferenceTokenForNewProcess @ 0x1406188FC (PspReferenceTokenForNewProcess.c)
 *     PspEstimateNewProcessServerSilo @ 0x140618978 (PspEstimateNewProcessServerSilo.c)
 *     PspCaptureCreateInfo @ 0x1406189E0 (PspCaptureCreateInfo.c)
 *     MmCreateSpecialImageSection @ 0x140618DD8 (MmCreateSpecialImageSection.c)
 *     PsTestProtectedProcessIncompatibility @ 0x14067222C (PsTestProtectedProcessIncompatibility.c)
 *     PspCheckForInvalidAccessByProtection @ 0x140672280 (PspCheckForInvalidAccessByProtection.c)
 *     PspInsertProcess @ 0x1406724A4 (PspInsertProcess.c)
 *     PspAllocateProcess @ 0x14068E52C (PspAllocateProcess.c)
 *     PspRundownSingleProcess @ 0x140693078 (PspRundownSingleProcess.c)
 *     PspCaptureProcessParameters @ 0x1406B08A0 (PspCaptureProcessParameters.c)
 *     SeQueryServerSiloToken @ 0x1406DDE80 (SeQueryServerSiloToken.c)
 *     PspValidateCreateProcessProtection @ 0x1406DE9C8 (PspValidateCreateProcessProtection.c)
 *     PspGetProcessProtectionRequirementsFromImage @ 0x1406E14E4 (PspGetProcessProtectionRequirementsFromImage.c)
 *     PsTerminateProcess @ 0x1406E7FD0 (PsTerminateProcess.c)
 *     SeDuplicateTokenAndAddOriginClaim @ 0x1408E02FC (SeDuplicateTokenAndAddOriginClaim.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913EC0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtCreateUserProcess(
        PHANDLE ProcessHandle,
        PHANDLE ThreadHandle,
        ACCESS_MASK ProcessDesiredAccess,
        ACCESS_MASK ThreadDesiredAccess,
        POBJECT_ATTRIBUTES ProcessObjectAttributes,
        POBJECT_ATTRIBUTES ThreadObjectAttributes,
        ULONG ProcessFlags,
        ULONG ThreadFlags,
        PVOID ProcessParameters,
        PPS_CREATE_INFO CreateInfo,
        PPS_ATTRIBUTE_LIST AttributeList)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 Process; // rbx
  char PreviousMode; // r15
  ULONG v14; // r12d
  __int64 v15; // rcx
  __int64 v16; // rcx
  ULONG v17; // eax
  __int64 v18; // rcx
  NTSTATUS result; // eax
  NTSTATUS Info; // esi
  KPROCESSOR_MODE v21; // r14
  __int64 v22; // r13
  __int64 v23; // r8
  int v24; // r8d
  int v25; // r9d
  ULONG v26; // eax
  int v27; // r9d
  int v28; // r8d
  int v29; // ebx
  PVOID v30; // rax
  char v31; // cl
  __int64 v32; // rdx
  unsigned __int8 Level; // bl
  int v34; // r8d
  int v35; // r9d
  __int64 v36; // rbx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rcx
  int v41; // edx
  int v42; // r9d
  unsigned __int8 v43; // r11
  PVOID v44; // rbx
  ULONG v45; // esi
  unsigned __int64 v46; // rax
  void *v47; // rsp
  ULONG v48; // edx
  PCONTEXT v49; // rsi
  __int64 v50; // rax
  _QWORD *v51; // r9
  __int64 v52; // rax
  _BYTE *v53; // r9
  __int64 v54; // rcx
  __int64 v55; // rsi
  __int64 v56; // rax
  int inserted; // r15d
  PVOID v58; // r12
  __int64 ProcessServerSilo; // rax
  _OWORD *v60; // rax
  __int64 v61; // r15
  char v62; // r13
  __int64 v63; // rcx
  __int64 v64; // rax
  unsigned int v65; // r8d
  int v66; // eax
  __int64 v67; // rdx
  __int64 v68; // rcx
  unsigned __int8 v69; // r11
  char v70; // al
  char v71; // al
  KPROCESSOR_MODE v72; // dl
  PS_PROTECTION Source; // [rsp+80h] [rbp+0h] BYREF
  int v74; // [rsp+84h] [rbp+4h]
  __int16 v75; // [rsp+88h] [rbp+8h] BYREF
  char v76; // [rsp+8Ah] [rbp+Ah] BYREF
  char v77; // [rsp+8Bh] [rbp+Bh] BYREF
  __int16 v78; // [rsp+8Ch] [rbp+Ch]
  char v79; // [rsp+8Eh] [rbp+Eh]
  int v80; // [rsp+90h] [rbp+10h] BYREF
  ACCESS_MASK v81; // [rsp+94h] [rbp+14h]
  PCONTEXT Context; // [rsp+98h] [rbp+18h]
  __int64 v83; // [rsp+A0h] [rbp+20h]
  ACCESS_MASK v84; // [rsp+A8h] [rbp+28h]
  PVOID v85; // [rsp+B0h] [rbp+30h] BYREF
  PVOID v86; // [rsp+B8h] [rbp+38h] BYREF
  struct _KTHREAD *v87; // [rsp+C0h] [rbp+40h]
  int v88[2]; // [rsp+C8h] [rbp+48h]
  PVOID v89; // [rsp+D0h] [rbp+50h] BYREF
  ULONG ContextLength; // [rsp+D8h] [rbp+58h] BYREF
  __int64 v91; // [rsp+E0h] [rbp+60h] BYREF
  __int64 v92; // [rsp+E8h] [rbp+68h] BYREF
  __int64 v93; // [rsp+F0h] [rbp+70h]
  PHANDLE v94; // [rsp+F8h] [rbp+78h]
  PVOID v95; // [rsp+100h] [rbp+80h] BYREF
  __int64 v96; // [rsp+108h] [rbp+88h] BYREF
  PVOID Object; // [rsp+110h] [rbp+90h] BYREF
  PVOID v98; // [rsp+118h] [rbp+98h] BYREF
  POBJECT_ATTRIBUTES v99; // [rsp+120h] [rbp+A0h]
  POBJECT_ATTRIBUTES v100; // [rsp+128h] [rbp+A8h]
  __int64 v101; // [rsp+130h] [rbp+B0h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+138h] [rbp+B8h] BYREF
  __int64 v103[3]; // [rsp+148h] [rbp+C8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+160h] [rbp+E0h] BYREF
  _QWORD v105[2]; // [rsp+190h] [rbp+110h] BYREF
  PCONTEXT_EX ContextEx; // [rsp+1A0h] [rbp+120h] BYREF
  _BYTE DriverContext[40]; // [rsp+1A8h] [rbp+128h] BYREF
  _BYTE v108[80]; // [rsp+1D0h] [rbp+150h] BYREF
  __int64 v109[62]; // [rsp+220h] [rbp+1A0h] BYREF
  _BYTE v110[400]; // [rsp+410h] [rbp+390h] BYREF
  _BYTE AccessState[400]; // [rsp+5A0h] [rbp+520h] BYREF
  _BYTE v112[32]; // [rsp+730h] [rbp+6B0h] BYREF

  v81 = ThreadDesiredAccess;
  v84 = ProcessDesiredAccess;
  v93 = (__int64)ThreadHandle;
  v94 = ProcessHandle;
  v99 = ProcessObjectAttributes;
  v100 = ThreadObjectAttributes;
  v83 = (__int64)ProcessParameters;
  v91 = 0LL;
  memset(v109, 0, sizeof(v109));
  v80 = 0;
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  memset(v110, 0, sizeof(v110));
  Source.Level = 0;
  v76 = 0;
  memset(v112, 0, sizeof(v112));
  memset(AccessState, 0, sizeof(AccessState));
  memset(v103, 0, sizeof(v103));
  CurrentThread = KeGetCurrentThread();
  v87 = CurrentThread;
  Process = (__int64)CurrentThread->ApcState.Process;
  *(_QWORD *)v88 = Process;
  v101 = Process;
  PreviousMode = CurrentThread->PreviousMode;
  v79 = PreviousMode;
  v89 = 0LL;
  v86 = 0LL;
  LOBYTE(CurrentThread) = 0;
  v74 = (int)CurrentThread;
  v78 = 0;
  memset(DriverContext, 0, sizeof(DriverContext));
  memset(v108, 0, 0x48uLL);
  v14 = ProcessFlags;
  if ( (ProcessFlags & 0xFFFB6838) != 0 || (ThreadFlags & 0xFFFFFFFE) != 0 )
    return -1073741811;
  if ( (ProcessFlags & 0x8400) == 0x8400 )
    return -1073741776;
  v110[388] = PreviousMode;
  if ( PreviousMode )
  {
    v15 = (__int64)v94;
    if ( (unsigned __int64)v94 >= 0x7FFFFFFF0000LL )
      v15 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v15 = *(_QWORD *)v15;
    v16 = v93;
    if ( (unsigned __int64)v93 >= 0x7FFFFFFF0000LL )
      v16 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v16 = *(_QWORD *)v16;
  }
  if ( ProcessObjectAttributes )
  {
    if ( PreviousMode && ((unsigned __int8)ProcessObjectAttributes & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( PreviousMode )
      v17 = ProcessObjectAttributes->Attributes & 0x1DF2;
    else
      v17 = ProcessObjectAttributes->Attributes & 0x11FF2;
    *(_DWORD *)&v110[384] = v17;
  }
  memset(v109, 0, sizeof(v109));
  if ( !AttributeList
    || (result = PspBuildCreateProcessContext(&AttributeList->TotalLength, PreviousMode, 0, (__int64)v109), result >= 0) )
  {
    if ( (ProcessFlags & 0x40) != 0 && (v109[0] & 0x2000000000000LL) != 0 && !LOBYTE(v109[47]) )
    {
      v14 = ProcessFlags & 0xFFFFFFBF;
      HIDWORD(v109[0]) &= ~0x20000u;
    }
    if ( (v14 & 4) == 0 && (v109[0] & 0x80000000000LL) != 0 || (v109[0] & 0x2000000000000LL) != 0 && (v14 & 0x40) == 0 )
      goto LABEL_125;
    LOBYTE(v18) = PreviousMode;
    Info = PspCaptureCreateInfo(v18, CreateInfo, v109);
    if ( Info >= 0 )
    {
      v21 = 1;
      if ( (v109[0] & 0x100000000LL) != 0 )
      {
        Info = ObpReferenceObjectByHandleWithTag(
                 v109[15],
                 128,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x72437350u,
                 &v92,
                 0LL,
                 0LL);
        if ( Info < 0 )
          goto LABEL_97;
        v22 = v92;
        v109[16] = v92;
      }
      else
      {
        v22 = Process;
        v92 = Process;
      }
      v109[57] = PspEstimateNewProcessServerSilo(v22, v109[49], HIDWORD(v109[50]));
      if ( (BYTE1(v109[1]) & 0xC) == 4 && (v22 != Process || (*(_DWORD *)(Process + 1788) & 0x1000) != 0) )
      {
LABEL_125:
        Info = -1073741811;
        goto LABEL_97;
      }
      LOBYTE(v23) = PreviousMode;
      Info = PspReferenceTokenForNewProcess(v22, v109[18], v23, &v109[19]);
      if ( Info >= 0 )
      {
        if ( v109[18] )
        {
          if ( (int)SeQueryServerSiloToken(v109[19], &v96) >= 0 )
          {
            v64 = v96;
            if ( v109[57] )
            {
              while ( v64 )
              {
                if ( v64 == v109[57] )
                  goto LABEL_28;
                v64 = *(_QWORD *)(v64 + 1072);
              }
              goto LABEL_125;
            }
          }
        }
LABEL_28:
        if ( (v109[0] & 0x2000000000LL) != 0 )
        {
          LOBYTE(v25) = (v109[0] & 0x2000000000000LL) != 0 ? LOBYTE(v109[47]) : 0;
          Source.Level = v25;
          Info = SeQuerySigningPolicy(
                   v109[19],
                   (int)&v109[29],
                   (v14 >> 6) & 1,
                   v25,
                   (ULONG_PTR)&v75,
                   (__int64)&v75 + 1,
                   (__int64)&Source);
          if ( Info >= 0 )
          {
            ObjectAttributes.Length = 48;
            ObjectAttributes.RootDirectory = 0LL;
            v26 = 1600;
            if ( PreviousMode != 1 )
              v26 = 576;
            ObjectAttributes.Attributes = v26;
            ObjectAttributes.ObjectName = (PUNICODE_STRING)&v109[29];
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            Info = 0;
            if ( qword_1409AD460 )
              Info = qword_1409AD460(v109[19]);
            if ( Info >= 0 )
            {
              Info = PspGetMemoryPartitionContext(v22, v14, v109[49], HIDWORD(v109[50]), (__int64)&v89);
              if ( Info >= 0 )
              {
                Info = PspCreateUserProcessEcp(DriverContext, v109[19]);
                if ( Info >= 0 )
                {
                  Info = IoCreateFileEx(
                           (PHANDLE)&v109[21],
                           LODWORD(v109[20]) | 0x100020,
                           &ObjectAttributes,
                           &IoStatusBlock,
                           0LL,
                           0x80u,
                           5u,
                           1u,
                           0x60u,
                           0LL,
                           0,
                           CreateFileTypeNone,
                           0LL,
                           0,
                           (PIO_DRIVER_CREATE_CONTEXT)DriverContext);
                  if ( Info < 0 && LODWORD(v109[20]) )
                    Info = IoCreateFileEx(
                             (PHANDLE)&v109[21],
                             0x100020u,
                             &ObjectAttributes,
                             &IoStatusBlock,
                             0LL,
                             0x80u,
                             5u,
                             1u,
                             0x60u,
                             0LL,
                             0,
                             CreateFileTypeNone,
                             0LL,
                             0,
                             (PIO_DRIVER_CREATE_CONTEXT)DriverContext);
                  if ( Info < 0 )
                  {
                    v109[21] = 0LL;
                    v63 = 1LL;
LABEL_96:
                    PspUpdateCreateInfo(v63, v109, 0LL);
                  }
                  else
                  {
                    Info = ObReferenceObjectByHandle(
                             (HANDLE)v109[21],
                             0x100020u,
                             (POBJECT_TYPE)IoFileObjectType,
                             0,
                             &Object,
                             0LL);
                    v109[22] = (__int64)Object;
                    if ( Info < 0 )
                    {
                      v109[22] = 0LL;
                    }
                    else
                    {
                      ObjectAttributes.ObjectName = 0LL;
                      v28 = 1;
                      if ( v109[48] )
                        v28 = 5;
                      LODWORD(Context) = v28;
                      if ( v109[52] )
                      {
                        v66 = SeDuplicateTokenAndAddOriginClaim(v109[19], v109[52], LODWORD(v109[53]), &v86);
                        v29 = (unsigned __int8)v74;
                        if ( v66 >= 0 )
                          v29 = 1;
                        v74 = v29;
                        LOBYTE(v78) = v29;
                        v28 = (int)Context;
                      }
                      else
                      {
                        LOBYTE(v29) = v74;
                      }
                      v30 = v86;
                      if ( !(_BYTE)v29 )
                        v30 = (PVOID)v109[19];
                      v86 = v30;
                      v31 = v75;
                      while ( 1 )
                      {
                        LOBYTE(v27) = v31;
                        Info = MmCreateSpecialImageSection(
                                 (unsigned int)&v109[23],
                                 (unsigned int)&ObjectAttributes,
                                 (_DWORD)v86,
                                 v27,
                                 v109[21],
                                 v28);
                        if ( Info < 0 )
                        {
                          v109[23] = 0LL;
                          v63 = 2LL;
                          goto LABEL_96;
                        }
                        Info = ObReferenceObjectByHandle((HANDLE)v109[23], 8u, MmSectionObjectType, 0, &v98, 0LL);
                        v109[25] = (__int64)v98;
                        if ( Info < 0 )
                        {
                          v109[25] = 0LL;
                          goto LABEL_97;
                        }
                        Level = Source.Level;
                        LOBYTE(v32) = Source;
                        Info = PspGetProcessProtectionRequirementsFromImage(v98, v32, &v76);
                        if ( Info < 0 )
                          goto LABEL_97;
                        LOBYTE(v35) = v76;
                        if ( v76 == Level )
                          break;
                        Info = SeQuerySigningPolicy(
                                 v109[19],
                                 (int)&v109[29],
                                 1,
                                 v35,
                                 (ULONG_PTR)&v77,
                                 (__int64)&v75 + 1,
                                 (__int64)&Source);
                        if ( Info < 0 )
                          goto LABEL_97;
                        LOBYTE(v68) = v77;
                        if ( v77 == (_BYTE)v75 )
                          break;
                        if ( (v75 & 0x30) != 0 && (v77 & 0x30) != (v75 & 0x30) )
                          goto LABEL_125;
                        if ( !qword_1404364C0 )
                          goto LABEL_125;
                        LOBYTE(v67) = v75;
                        if ( !(unsigned int)qword_1404364C0(v68, v67) )
                          goto LABEL_125;
                        ObCloseHandle((HANDLE)v109[23], 0);
                        ObfDereferenceObject((PVOID)v109[25]);
                        v109[23] = 0LL;
                        v109[25] = 0LL;
                        v31 = v77;
                        LOBYTE(v75) = v77;
                        v28 = (int)Context;
                      }
                      LOBYTE(v34) = PreviousMode;
                      v36 = *(_QWORD *)v88;
                      Info = PspValidateCreateProcessProtection(v88[0], (int)v109, v34, v14, Source);
                      if ( Info < 0 )
                        goto LABEL_97;
                      if ( (v14 & 0x40000) != 0
                        || (LOBYTE(v37) = *(_BYTE *)(v36 + 1786), HIBYTE(v78) = v37, (Source.Level & 7) != 1)
                        && (LOBYTE(v39) = Source,
                            LOBYTE(v38) = PreviousMode,
                            (unsigned __int8)PspCheckForInvalidAccessByProtection(v38, v37, v39)) )
                      {
                        LOBYTE(v109[1]) |= 8u;
                      }
                      v105[0] = &v109[29];
                      v105[1] = v89;
                      PsGetProcessParameterOverrides(v105, &v109[61]);
                      LOBYTE(v40) = PreviousMode;
                      Info = PspCaptureProcessParameters(v40, v83, v109);
                      if ( Info >= 0 )
                      {
                        v83 = (__int64)v112;
                        v43 = Source.Level;
                        goto LABEL_57;
                      }
                      LOBYTE(v109[1]) &= ~4u;
                    }
                  }
                }
              }
            }
          }
          goto LABEL_97;
        }
        if ( v22 != Process
          || !PreviousMode
          || v83
          || (v109[1] & 0xC00) != 0
          || (v109[0] & 0x8000000000LL) != 0
          || (v109[0] & 0x2000000000000LL) != 0
          || (v109[1] & 0x10) != 0 )
        {
          goto LABEL_125;
        }
        LOBYTE(v109[1]) &= ~4u;
        v69 = *(_BYTE *)(v22 + 1786);
        Source.Level = v69;
        v75 = *(_WORD *)(v22 + 1784);
        if ( (v14 & 0x40) != 0 && (v69 & 7) == 0 )
        {
          Info = -1073741790;
          goto LABEL_97;
        }
        LOBYTE(v24) = PreviousMode;
        Info = PspValidateCreateProcessProtection(Process, (int)v109, v24, v14, (PS_PROTECTION)v69);
        if ( Info < 0 )
          goto LABEL_97;
        v83 = 0LL;
LABEL_57:
        LOBYTE(v42) = v43;
        LOBYTE(v41) = PreviousMode;
        Info = PspAllocateProcess(
                 v22,
                 v41,
                 (_DWORD)v99,
                 v42,
                 v75,
                 SHIBYTE(v75),
                 v109[25],
                 v109[19],
                 v14,
                 0,
                 (__int64)v109,
                 v109[18] != 0,
                 (__int64)v89,
                 (__int64)&v91,
                 (__int64)&v85);
        if ( Info < 0 )
          goto LABEL_97;
        v44 = v85;
        if ( v109[25] )
          v45 = ((*((_DWORD *)v85 + 533) >> 8) & 0x40) + 1048587;
        else
          v45 = 1048603;
        RtlGetExtendedContextLength(v45, &ContextLength);
        v46 = ContextLength + 15LL;
        if ( v46 <= ContextLength )
          v46 = 0xFFFFFFFFFFFFFF0LL;
        v47 = alloca(v46 & 0xFFFFFFFFFFFFFFF0uLL);
        Context = (PCONTEXT)&Source;
        memset(&Source, 0, ContextLength);
        v48 = v45;
        v49 = Context;
        RtlInitializeExtendedContext(Context, v48, &ContextEx);
        if ( v109[25] )
        {
          v50 = HIDWORD(v109[28]);
          if ( !*((_QWORD *)v44 + 133) )
            v50 = *((_QWORD *)v44 + 127);
          PspCreateUserContext((__int64)v49, 1, PspUserThreadStart, v109[6], v50);
        }
        else
        {
          Info = PspGetContextThreadInternal((__int64)v87, (__int64)v49, 0, 1, 1);
          if ( Info < 0 )
          {
            v70 = _InterlockedExchangeAdd64((volatile signed __int64 *)v44 + 92, 0xFFFFFFFFFFFFFFFFuLL);
            if ( (v70 & 2) != 0 && (v70 & 4) == 0 )
              ExfTryToWakePushLock((volatile signed __int64 *)v44 + 92);
            KeAbPostRelease((ULONG_PTR)v44 + 736);
            KeLeaveCriticalRegionThread((__int64)v87);
            PspRundownSingleProcess((ULONG_PTR)v85);
            goto LABEL_97;
          }
          v49 = Context;
          Context->Rax = 297LL;
        }
        ObfReferenceObjectWithTag(v44, 0x72437350u);
        v51 = (_QWORD *)v83;
        if ( v83 )
        {
          *(_BYTE *)v83 = 0;
          v52 = v109[8];
          if ( v109[8] < 0x40000uLL )
            v52 = 0x40000LL;
          v51[3] = v52;
          v51[2] = v109[9];
          v51[1] = LODWORD(v109[7]);
        }
        LODWORD(Context) = 0;
        PspMapThreadCreationFlags(ThreadFlags, &v80);
        if ( (_DWORD)v91 )
        {
          LODWORD(Context) = 2;
          v80 |= 0x10u;
        }
        v103[0] = (__int64)v108;
        v80 |= 0x60u;
        Info = PspAllocateThread(
                 (ULONG_PTR)v44,
                 (ULONG_PTR)v100,
                 PreviousMode,
                 (__int64)v109,
                 v49,
                 v103,
                 0LL,
                 0LL,
                 &v80,
                 &v95,
                 v53,
                 (__int64)AccessState);
        if ( Info < 0 )
        {
          v71 = _InterlockedExchangeAdd64((volatile signed __int64 *)v44 + 92, 0xFFFFFFFFFFFFFFFFuLL);
          if ( (v71 & 2) != 0 && (v71 & 4) == 0 )
            ExfTryToWakePushLock((volatile signed __int64 *)v44 + 92);
          KeAbPostRelease((ULONG_PTR)v44 + 736);
          KeLeaveCriticalRegionThread((__int64)v87);
          v44 = v85;
          PspRundownSingleProcess((ULONG_PTR)v85);
          v62 = v74;
          goto LABEL_86;
        }
        v55 = *(_QWORD *)v88;
        LOBYTE(v54) = PreviousMode;
        if ( (unsigned __int8)PsTestProtectedProcessIncompatibility(v54, *(_QWORD *)v88, v44) )
        {
          if ( (v81 & 0x2000000) != 0 )
          {
            v65 = ~*(_DWORD *)&RtlProtectedAccess[12 * ((unsigned __int64)Source.Level >> 4) + 8] & 0x1FFFFF | v81 & 0xFDFFFFFF;
            v81 = v65;
            if ( !v109[16] || v55 == v109[16] )
              v81 = v65 | 1;
          }
        }
        if ( v109[26] )
          v56 = v109[26] + 112;
        else
          v56 = 0LL;
        inserted = PspInsertProcess(v44, (HANDLE)v109[17], (char)Context, v56, (PACCESS_STATE)v110);
        v58 = v95;
        Info = PspInsertThread(
                 (char *)v95,
                 (PEPROCESS)v44,
                 (__int64)v108,
                 &v80,
                 v81,
                 (_BYTE *)v83,
                 (__int64)v109,
                 0LL,
                 (PACCESS_STATE)AccessState,
                 (PVOID *)v93,
                 (_OWORD *)v109[2]);
        KeLeaveCriticalRegionThread((__int64)v87);
        if ( inserted < 0 )
        {
          PspRundownSingleProcess((ULONG_PTR)v44);
          Info = inserted;
          v62 = v74;
          goto LABEL_85;
        }
        if ( Info < 0 )
        {
          v62 = v74;
LABEL_84:
          if ( Info >= 0 )
          {
LABEL_85:
            ObfDereferenceObject(v58);
LABEL_86:
            ObfDereferenceObjectWithTag(v44, 0x72437350u);
LABEL_87:
            if ( v89 )
              ObfDereferenceObjectWithTag(v89, 0x624A7350u);
            PspDeleteCreateProcessContext((__int64)v109);
            if ( *(_QWORD *)&DriverContext[8] )
              FsRtlFreeExtraCreateParameterList(*(PECP_LIST *)&DriverContext[8]);
            if ( v62 )
              ObfDereferenceObject(v86);
            return Info;
          }
LABEL_167:
          PsTerminateProcess(v44, (unsigned int)Info);
          goto LABEL_85;
        }
        ProcessServerSilo = PsGetProcessServerSilo((__int64)v44);
        if ( ProcessServerSilo != v109[57] )
        {
          Info = -1073741267;
          v62 = v74;
          goto LABEL_167;
        }
        Info = PspCreateObjectHandle(v44, (__int64)v110, (struct _OBJECT_TYPE *)PsProcessType);
        if ( Info < 0 )
        {
          v61 = *(_QWORD *)v88;
          v62 = v74;
        }
        else
        {
          v60 = (_OWORD *)v109[4];
          if ( v109[4] )
          {
            *(_OWORD *)v109[4] = *(_OWORD *)&v109[6];
            v60[1] = *(_OWORD *)&v109[8];
            v60[2] = *(_OWORD *)&v109[10];
            v60[3] = *(_OWORD *)&v109[12];
          }
          *v94 = *(HANDLE *)&v110[392];
          v61 = *(_QWORD *)v88;
          v62 = v74;
          Info = PspUpdateCreateInfo(6LL, v109, v44);
          if ( Info >= 0 )
            goto LABEL_83;
          if ( (*(_WORD *)&v110[384] & 0x200) != 0 || (v72 = 1, (*(_DWORD *)(v61 + 1788) & 0x1000) != 0) )
            v72 = 0;
          ObCloseHandle(*(HANDLE *)&v110[392], v72);
        }
        if ( (*(_WORD *)&AccessState[384] & 0x200) != 0 || (*(_DWORD *)(v61 + 1788) & 0x1000) != 0 )
          v21 = 0;
        ObCloseHandle(*(HANDLE *)&AccessState[392], v21);
LABEL_83:
        SepDeleteAccessState((__int64)v110);
        SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)&v110[32]);
        goto LABEL_84;
      }
      v109[19] = 0LL;
    }
LABEL_97:
    v62 = v74;
    goto LABEL_87;
  }
  return result;
}
