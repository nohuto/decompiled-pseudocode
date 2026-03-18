/*
 * XREFs of NtCreateUserProcess @ 0x14060A950
 * Callers:
 *     <none>
 * Callees:
 *     PsGetProcessServerSilo @ 0x14004D260 (PsGetProcessServerSilo.c)
 *     SepDeleteAccessState @ 0x14004D950 (SepDeleteAccessState.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x140051600 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1400915C0 (ExfTryToWakePushLock.c)
 *     RtlGetExtendedContextLength @ 0x1400A1D44 (RtlGetExtendedContextLength.c)
 *     RtlInitializeExtendedContext @ 0x1400A1D9C (RtlInitializeExtendedContext.c)
 *     ObfReferenceObjectWithTag @ 0x1400ACDD0 (ObfReferenceObjectWithTag.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B7990 (KiLeaveCriticalRegionUnsafe.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1401C5DA0 (_alloca_probe.c)
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1780 (memset.c)
 *     SeReleaseSubjectContext @ 0x1405E1240 (SeReleaseSubjectContext.c)
 *     ObReferenceObjectByHandle @ 0x1405E8350 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405E8390 (ObpReferenceObjectByHandleWithTag.c)
 *     ObCloseHandle @ 0x1405F5700 (ObCloseHandle.c)
 *     PspAllocateThread @ 0x1405F7E84 (PspAllocateThread.c)
 *     PspRundownSingleProcess @ 0x140603A48 (PspRundownSingleProcess.c)
 *     PspGetProcessProtectionRequirementsFromImage @ 0x140608F94 (PspGetProcessProtectionRequirementsFromImage.c)
 *     PspValidateCreateProcessProtection @ 0x140608FC4 (PspValidateCreateProcessProtection.c)
 *     PspCaptureProcessParameters @ 0x140609028 (PspCaptureProcessParameters.c)
 *     PsTestProtectedProcessIncompatibility @ 0x14060921C (PsTestProtectedProcessIncompatibility.c)
 *     PspCheckForInvalidAccessByProtection @ 0x140609270 (PspCheckForInvalidAccessByProtection.c)
 *     PspInsertProcess @ 0x1406093A8 (PspInsertProcess.c)
 *     MmCreateSpecialImageSection @ 0x14060A404 (MmCreateSpecialImageSection.c)
 *     PspCaptureCreateInfo @ 0x14060A7E0 (PspCaptureCreateInfo.c)
 *     IoCreateFileEx @ 0x14060B870 (IoCreateFileEx.c)
 *     FsRtlFreeExtraCreateParameterList @ 0x14060CEF0 (FsRtlFreeExtraCreateParameterList.c)
 *     PspUpdateCreateInfo @ 0x14060D104 (PspUpdateCreateInfo.c)
 *     PspCreateUserProcessEcp @ 0x14060D368 (PspCreateUserProcessEcp.c)
 *     PspGetMemoryPartitionContext @ 0x14060D560 (PspGetMemoryPartitionContext.c)
 *     SeQuerySigningPolicy @ 0x14060D5D0 (SeQuerySigningPolicy.c)
 *     PspReferenceTokenForNewProcess @ 0x14060DA9C (PspReferenceTokenForNewProcess.c)
 *     PspEstimateNewProcessServerSilo @ 0x14060DB18 (PspEstimateNewProcessServerSilo.c)
 *     PspGetContextThreadInternal @ 0x140620C00 (PspGetContextThreadInternal.c)
 *     PspInsertThread @ 0x140621450 (PspInsertThread.c)
 *     PspCreateObjectHandle @ 0x140621C88 (PspCreateObjectHandle.c)
 *     PspCreateUserContext @ 0x140621CFC (PspCreateUserContext.c)
 *     PspMapThreadCreationFlags @ 0x1406220A4 (PspMapThreadCreationFlags.c)
 *     PspBuildCreateProcessContext @ 0x140622378 (PspBuildCreateProcessContext.c)
 *     PspDeleteCreateProcessContext @ 0x140623608 (PspDeleteCreateProcessContext.c)
 *     PspAllocateProcess @ 0x14064BCD8 (PspAllocateProcess.c)
 *     SeQueryServerSiloToken @ 0x1406C5520 (SeQueryServerSiloToken.c)
 *     PsTerminateProcess @ 0x1406C98F4 (PsTerminateProcess.c)
 *     SeDuplicateTokenAndAddOriginClaim @ 0x1408A1A3C (SeDuplicateTokenAndAddOriginClaim.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D65E0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtCreateUserProcess(
        HANDLE *a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7,
        unsigned int a8,
        __int64 a9,
        unsigned __int64 a10,
        __int64 a11)
{
  struct _KTHREAD *CurrentThread; // rax
  _BYTE *Process; // r15
  char PreviousMode; // r13
  unsigned int v14; // r12d
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rdx
  __int64 result; // rax
  int Info; // edi
  KPROCESSOR_MODE v21; // r14
  __int64 v22; // r8
  int v23; // r9d
  ULONG v24; // eax
  char v25; // r15
  int v26; // ebx
  PVOID v27; // rax
  char v28; // cl
  char v29; // bl
  int v30; // r9d
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r11
  int v34; // edx
  int v35; // r9d
  __int64 *v36; // r12
  char v37; // r11
  char v38; // bl
  char v39; // r15
  PVOID v40; // rbx
  unsigned int v41; // edi
  unsigned __int64 v42; // rax
  void *v43; // rsp
  int v44; // r9d
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rdi
  bool v49; // al
  unsigned int v50; // r8d
  int v51; // r13d
  __int64 v52; // rax
  int inserted; // r15d
  PVOID v54; // r12
  __int64 ProcessServerSilo; // rax
  _OWORD *v56; // rax
  __int64 v57; // r15
  char v58; // r13
  __int64 v59; // rcx
  __int64 v60; // rax
  int v61; // eax
  __int64 v62; // rdx
  __int64 v63; // rcx
  char v64; // r11
  KPROCESSOR_MODE v65; // dl
  __int64 FileAttributes; // [rsp+28h] [rbp-58h]
  int v67; // [rsp+80h] [rbp+0h] BYREF
  int v68; // [rsp+84h] [rbp+4h]
  char v69; // [rsp+88h] [rbp+8h] BYREF
  char v70; // [rsp+89h] [rbp+9h] BYREF
  char v71; // [rsp+8Ah] [rbp+Ah] BYREF
  char v72; // [rsp+8Bh] [rbp+Bh]
  char v73; // [rsp+8Ch] [rbp+Ch]
  char v74; // [rsp+8Dh] [rbp+Dh]
  __int64 v75; // [rsp+90h] [rbp+10h] BYREF
  _BYTE *v76; // [rsp+98h] [rbp+18h]
  int v77; // [rsp+A0h] [rbp+20h]
  unsigned int v78; // [rsp+A4h] [rbp+24h]
  char v79[8]; // [rsp+A8h] [rbp+28h]
  PVOID v80; // [rsp+B0h] [rbp+30h] BYREF
  PVOID v81; // [rsp+B8h] [rbp+38h] BYREF
  __int64 v82; // [rsp+C0h] [rbp+40h] BYREF
  struct _KTHREAD *v83; // [rsp+C8h] [rbp+48h]
  unsigned int v84; // [rsp+D0h] [rbp+50h]
  PVOID v85; // [rsp+D8h] [rbp+58h] BYREF
  _DWORD v86[2]; // [rsp+E0h] [rbp+60h] BYREF
  __int64 v87; // [rsp+E8h] [rbp+68h]
  HANDLE *v88; // [rsp+F0h] [rbp+70h]
  PVOID v89; // [rsp+F8h] [rbp+78h] BYREF
  __int64 v90; // [rsp+100h] [rbp+80h] BYREF
  PVOID Object; // [rsp+108h] [rbp+88h] BYREF
  PVOID v92; // [rsp+110h] [rbp+90h] BYREF
  __int64 v93; // [rsp+118h] [rbp+98h]
  __int64 v94; // [rsp+120h] [rbp+A0h]
  _BYTE *v95; // [rsp+128h] [rbp+A8h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+130h] [rbp+B0h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+168h] [rbp+E8h] BYREF
  _BYTE DriverContext[40]; // [rsp+178h] [rbp+F8h] BYREF
  __int64 v99[4]; // [rsp+1A0h] [rbp+120h] BYREF
  _BYTE v100[80]; // [rsp+1C0h] [rbp+140h] BYREF
  __int64 v101[62]; // [rsp+210h] [rbp+190h] BYREF
  struct _ACCESS_STATE v102[2]; // [rsp+400h] [rbp+380h] BYREF
  int v103; // [rsp+580h] [rbp+500h]
  char v104; // [rsp+584h] [rbp+504h]
  HANDLE v105; // [rsp+588h] [rbp+508h]
  __int64 v106[48]; // [rsp+590h] [rbp+510h] BYREF
  int v107; // [rsp+710h] [rbp+690h]
  HANDLE v108; // [rsp+718h] [rbp+698h]
  __int64 v109; // [rsp+720h] [rbp+6A0h] BYREF

  v77 = a4;
  v78 = a3;
  v87 = a2;
  v88 = a1;
  v93 = a5;
  v94 = a6;
  *(_QWORD *)v79 = a9;
  CurrentThread = KeGetCurrentThread();
  v83 = CurrentThread;
  Process = CurrentThread->ApcState.Process;
  v76 = Process;
  v95 = Process;
  PreviousMode = CurrentThread->PreviousMode;
  v74 = PreviousMode;
  v85 = 0LL;
  v81 = 0LL;
  LOBYTE(CurrentThread) = 0;
  v68 = (int)CurrentThread;
  v72 = 0;
  memset(DriverContext, 0, sizeof(DriverContext));
  memset(v100, 0, 0x48uLL);
  v14 = a7;
  if ( (a7 & 0xFFFB6838) != 0 || (a8 & 0xFFFFFFFE) != 0 )
    return 3221225485LL;
  if ( (a7 & 0x8400) == 0x8400 )
    return 3221225520LL;
  v103 = 0;
  v104 = PreviousMode;
  if ( PreviousMode )
  {
    v15 = (__int64)v88;
    if ( (unsigned __int64)v88 >= 0x7FFFFFFF0000LL )
      v15 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v15 = *(_QWORD *)v15;
    v16 = v87;
    if ( (unsigned __int64)v87 >= 0x7FFFFFFF0000LL )
      v16 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v16 = *(_QWORD *)v16;
  }
  if ( a5 )
  {
    if ( PreviousMode && (a5 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( PreviousMode )
      v17 = *(_DWORD *)(a5 + 24) & 0x1DF2;
    else
      v17 = *(_DWORD *)(a5 + 24) & 0x11FF2;
    v103 = v17;
  }
  memset(v101, 0, 0x1E8uLL);
  if ( !a11
    || (LOBYTE(v18) = PreviousMode, result = PspBuildCreateProcessContext(a11, v18, 0LL, v101), (int)result >= 0) )
  {
    if ( (a7 & 0x40) != 0 && (v101[0] & 0x2000000000000LL) != 0 && !LOBYTE(v101[47]) )
    {
      v14 = a7 & 0xFFFFFFBF;
      a7 &= ~0x40u;
      HIDWORD(v101[0]) &= ~0x20000u;
    }
    if ( (v14 & 4) == 0 && (v101[0] & 0x80000000000LL) != 0 || (v101[0] & 0x2000000000000LL) != 0 && (v14 & 0x40) == 0 )
      goto LABEL_133;
    Info = PspCaptureCreateInfo(PreviousMode, a10, (__int64)v101);
    if ( Info >= 0 )
    {
      v21 = 1;
      if ( (v101[0] & 0x100000000LL) != 0 )
      {
        Info = ObpReferenceObjectByHandleWithTag(
                 v101[15],
                 128,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x72437350u,
                 &v82,
                 0LL,
                 0LL);
        if ( Info < 0 )
          goto LABEL_102;
        Process = (_BYTE *)v82;
        v101[16] = v82;
      }
      else
      {
        v82 = (__int64)Process;
      }
      v101[57] = PspEstimateNewProcessServerSilo(Process, v101[49], HIDWORD(v101[50]));
      if ( (BYTE1(v101[1]) & 0xC) == 4 && (Process != v76 || (*((_DWORD *)v76 + 435) & 0x1000) != 0) )
      {
LABEL_133:
        Info = -1073741811;
        goto LABEL_102;
      }
      LOBYTE(v22) = PreviousMode;
      Info = PspReferenceTokenForNewProcess(Process, v101[18], v22, &v101[19]);
      if ( Info >= 0 )
      {
        if ( v101[18] )
        {
          if ( (int)SeQueryServerSiloToken(v101[19], &v90) >= 0 )
          {
            v60 = v90;
            if ( v101[57] )
            {
              while ( v60 )
              {
                if ( v60 == v101[57] )
                  goto LABEL_28;
                v60 = *(_QWORD *)(v60 + 1072);
              }
              goto LABEL_133;
            }
          }
        }
LABEL_28:
        if ( (v101[0] & 0x2000000000LL) != 0 )
        {
          LOBYTE(v23) = (v101[0] & 0x2000000000000LL) != 0 ? LOBYTE(v101[47]) : 0;
          LOBYTE(v67) = v23;
          Info = SeQuerySigningPolicy(
                   v101[19],
                   (int)&v101[29],
                   (v14 >> 6) & 1,
                   v23,
                   (ULONG_PTR)&v69,
                   (__int64)&v70,
                   (__int64)&v67);
          if ( Info >= 0 )
          {
            ObjectAttributes.Length = 48;
            ObjectAttributes.RootDirectory = 0LL;
            v24 = 1600;
            if ( PreviousMode != 1 )
              v24 = 576;
            ObjectAttributes.Attributes = v24;
            ObjectAttributes.ObjectName = (PUNICODE_STRING)&v101[29];
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            Info = 0;
            if ( qword_14096D3D0 )
              Info = qword_14096D3D0(v101[19]);
            if ( Info >= 0 )
            {
              Info = PspGetMemoryPartitionContext((_DWORD)Process, v14, v101[49], HIDWORD(v101[50]), (__int64)&v85);
              if ( Info >= 0 )
              {
                Info = PspCreateUserProcessEcp(DriverContext, v101[19]);
                if ( Info >= 0 )
                {
                  Info = IoCreateFileEx(
                           (PHANDLE)&v101[21],
                           LODWORD(v101[20]) | 0x100020,
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
                  if ( Info < 0 && LODWORD(v101[20]) )
                    Info = IoCreateFileEx(
                             (PHANDLE)&v101[21],
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
                    v101[21] = 0LL;
                    v59 = 1LL;
LABEL_101:
                    PspUpdateCreateInfo(v59, v101, 0LL);
                  }
                  else
                  {
                    Info = ObReferenceObjectByHandle(
                             (HANDLE)v101[21],
                             0x100020u,
                             (POBJECT_TYPE)IoFileObjectType,
                             0,
                             &Object,
                             0LL);
                    v101[22] = (__int64)Object;
                    if ( Info < 0 )
                    {
                      v101[22] = 0LL;
                    }
                    else
                    {
                      ObjectAttributes.ObjectName = 0LL;
                      v25 = 1;
                      if ( v101[48] )
                        v25 = 5;
                      if ( v101[52] )
                      {
                        v61 = SeDuplicateTokenAndAddOriginClaim(v101[19], v101[52], LODWORD(v101[53]), &v81);
                        v26 = (unsigned __int8)v68;
                        if ( v61 >= 0 )
                          v26 = 1;
                        v68 = v26;
                        v72 = v26;
                      }
                      else
                      {
                        LOBYTE(v26) = v68;
                      }
                      v27 = v81;
                      if ( !(_BYTE)v26 )
                        v27 = (PVOID)v101[19];
                      v81 = v27;
                      v28 = v69;
                      while ( 1 )
                      {
                        Info = MmCreateSpecialImageSection(
                                 &v101[23],
                                 (int)&ObjectAttributes,
                                 (__int64)v81,
                                 v28,
                                 v101[21],
                                 v25);
                        if ( Info < 0 )
                        {
                          v101[23] = 0LL;
                          v59 = 2LL;
                          goto LABEL_101;
                        }
                        Info = ObReferenceObjectByHandle((HANDLE)v101[23], 8u, MmSectionObjectType, 0, &v92, 0LL);
                        v101[25] = (__int64)v92;
                        if ( Info < 0 )
                        {
                          v101[25] = 0LL;
                          goto LABEL_102;
                        }
                        v29 = v67;
                        Info = PspGetProcessProtectionRequirementsFromImage((__int64)v92);
                        if ( Info < 0 )
                          goto LABEL_102;
                        LOBYTE(v30) = v73;
                        if ( v73 == v29 )
                          break;
                        Info = SeQuerySigningPolicy(
                                 v101[19],
                                 (int)&v101[29],
                                 1,
                                 v30,
                                 (ULONG_PTR)&v71,
                                 (__int64)&v70,
                                 (__int64)&v67);
                        if ( Info < 0 )
                          goto LABEL_102;
                        LOBYTE(v63) = v71;
                        if ( v71 == v69 )
                          break;
                        if ( (v69 & 0x30) != 0 && (v71 & 0x30) != (v69 & 0x30) )
                          goto LABEL_133;
                        if ( !qword_14040DDC0 )
                          goto LABEL_133;
                        LOBYTE(v62) = v69;
                        if ( !(unsigned int)qword_14040DDC0(v63, v62) )
                          goto LABEL_133;
                        ObCloseHandle((HANDLE)v101[23], 0);
                        ObfDereferenceObject((PVOID)v101[25]);
                        v101[23] = 0LL;
                        v101[25] = 0LL;
                        v28 = v71;
                        v69 = v71;
                      }
                      Info = PspValidateCreateProcessProtection((__int64)v76, (__int64)v101, PreviousMode, v14, v67);
                      if ( Info < 0 )
                        goto LABEL_102;
                      if ( (v14 & 0x40000) != 0
                        || (v67 & 7) != 1
                        && (LOBYTE(v32) = PreviousMode,
                            LOBYTE(v31) = *(_BYTE *)(v33 + 1738),
                            PspCheckForInvalidAccessByProtection(v32, v31, v67)) )
                      {
                        LOBYTE(v101[1]) |= 8u;
                      }
                      Info = PspCaptureProcessParameters(PreviousMode, *(__int64 *)v79, (__int64)v101);
                      if ( Info >= 0 )
                      {
                        v36 = &v109;
                        v37 = v67;
                        v38 = v70;
                        v39 = v69;
                        goto LABEL_57;
                      }
                      LOBYTE(v101[1]) &= ~4u;
                    }
                  }
                }
              }
            }
          }
          goto LABEL_102;
        }
        if ( Process != v76
          || !PreviousMode
          || *(_QWORD *)v79
          || (v101[1] & 0xC00) != 0
          || (v101[0] & 0x8000000000LL) != 0
          || (v101[0] & 0x2000000000000LL) != 0
          || (v101[1] & 0x10) != 0 )
        {
          goto LABEL_133;
        }
        LOBYTE(v101[1]) &= ~4u;
        v64 = Process[1738];
        LOBYTE(v67) = v64;
        v38 = Process[1737];
        v70 = v38;
        v39 = Process[1736];
        v69 = v39;
        if ( (v14 & 0x40) != 0 && (v64 & 7) == 0 )
        {
          Info = -1073741790;
          goto LABEL_102;
        }
        Info = PspValidateCreateProcessProtection((__int64)v76, (__int64)v101, PreviousMode, v14, v64);
        if ( Info < 0 )
          goto LABEL_102;
        v36 = 0LL;
LABEL_57:
        LOBYTE(v35) = v37;
        LOBYTE(v34) = PreviousMode;
        Info = PspAllocateProcess(
                 v82,
                 v34,
                 v93,
                 v35,
                 v39,
                 v38,
                 v101[25],
                 v101[19],
                 a7,
                 0,
                 (__int64)v101,
                 v101[18] != 0,
                 (__int64)v85,
                 (__int64)v86,
                 (__int64)&v80);
        if ( Info < 0 )
          goto LABEL_102;
        v40 = v80;
        if ( v101[25] )
          v41 = (*((_DWORD *)v80 + 521) & 0x4000 | 0x10000B00u) >> 8;
        else
          v41 = 1048603;
        RtlGetExtendedContextLength(v41);
        v42 = v84 + 15LL;
        if ( v42 <= v84 )
          v42 = 0xFFFFFFFFFFFFFF0LL;
        v43 = alloca(v42 & 0xFFFFFFFFFFFFFFF0uLL);
        memset(&v67, 0, v84);
        RtlInitializeExtendedContext((__int64)&v67, v41);
        if ( v101[25] )
        {
          v45 = HIDWORD(v101[28]);
          if ( !*((_QWORD *)v40 + 133) )
            v45 = *((_QWORD *)v40 + 127);
          PspCreateUserContext((unsigned int)&v67, 1, PspUserThreadStart, v101[6], v45);
        }
        else
        {
          LOBYTE(v44) = 1;
          Info = PspGetContextThreadInternal((_DWORD)v83, (unsigned int)&v67, 0, v44, 1);
          if ( Info < 0 )
          {
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v40 + 91, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)v40 + 91);
            KeAbPostRelease((ULONG_PTR)v40 + 728);
            KeLeaveCriticalRegionThread((__int64)v83);
            PspRundownSingleProcess((__int64)v80, 0);
            goto LABEL_102;
          }
          v89 = (PVOID)297;
        }
        ObfReferenceObjectWithTag(v40, 0x72437350u);
        if ( v36 )
        {
          *(_BYTE *)v36 = 0;
          v46 = v101[8];
          if ( v101[8] < 0x40000uLL )
            v46 = 0x40000LL;
          v36[3] = v46;
          v36[2] = v101[9];
          v36[1] = LODWORD(v101[7]);
        }
        *(_DWORD *)v79 = 0;
        PspMapThreadCreationFlags(a8, &v75);
        if ( v86[0] )
        {
          *(_DWORD *)v79 = 2;
          LODWORD(v75) = v75 | 0x10;
        }
        if ( v86[1] )
          a7 |= 0x400u;
        v99[0] = (__int64)v100;
        LODWORD(v75) = v75 | 0x60;
        Info = PspAllocateThread(
                 (_KPROCESS *)v40,
                 v94,
                 PreviousMode,
                 (__int64)v101,
                 &v67,
                 v99,
                 0LL,
                 0LL,
                 (int *)&v75,
                 &v89,
                 v36,
                 (__int64)v106);
        if ( Info < 0 )
        {
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v40 + 91, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)v40 + 91);
          KeAbPostRelease((ULONG_PTR)v40 + 728);
          KeLeaveCriticalRegionThread((__int64)v83);
          v40 = v80;
          PspRundownSingleProcess((__int64)v80, 0);
          v58 = v68;
          goto LABEL_89;
        }
        v48 = (__int64)v76;
        LOBYTE(v47) = PreviousMode;
        v49 = PsTestProtectedProcessIncompatibility(v47, (__int64)v76, (__int64)v40);
        v50 = v78;
        if ( v49 )
        {
          if ( (v78 & 0x2000000) != 0 )
          {
            v50 = ~*(_DWORD *)&RtlProtectedAccess[12 * ((unsigned __int64)(unsigned __int8)v67 >> 4) + 4] & 0x1FFFFF | v78 & 0xFDFFFFFF;
            if ( !v101[16] || v48 == v101[16] )
              v50 |= 1u;
          }
          v51 = v77;
          if ( (v77 & 0x2000000) != 0 )
          {
            v51 = ~*(_DWORD *)&RtlProtectedAccess[12 * ((unsigned __int64)(unsigned __int8)v67 >> 4) + 8] & 0x1FFFFF | v77 & 0xFDFFFFFF;
            if ( !v101[16] || v48 == v101[16] )
              v51 |= 1u;
          }
        }
        else
        {
          v51 = v77;
        }
        if ( v101[26] )
          v52 = v101[26] + 112;
        else
          v52 = 0LL;
        inserted = PspInsertProcess((char *)v40, (struct _KPROCESS *)v82, v50, a7, (HANDLE)v101[17], v79[0], v52, v102);
        FileAttributes = (__int64)v36;
        v54 = v89;
        Info = PspInsertThread(
                 (ULONG_PTR)v89,
                 (PEPROCESS)v40,
                 v51,
                 FileAttributes,
                 (__int64)v101,
                 0LL,
                 (__int64)v106,
                 v87,
                 v101[2]);
        KiLeaveCriticalRegionUnsafe((__int64)v83);
        if ( inserted < 0 )
        {
          PspRundownSingleProcess((__int64)v40, 0);
          Info = inserted;
          v58 = v68;
          goto LABEL_88;
        }
        if ( Info < 0 )
        {
          v58 = v68;
LABEL_87:
          if ( Info >= 0 )
          {
LABEL_88:
            ObfDereferenceObject(v54);
LABEL_89:
            ObfDereferenceObjectWithTag(v40, 0x72437350u);
LABEL_90:
            if ( v85 )
              ObfDereferenceObjectWithTag(v85, 0x624A7350u);
            PspDeleteCreateProcessContext(v101);
            if ( *(_QWORD *)&DriverContext[8] )
              FsRtlFreeExtraCreateParameterList(*(PECP_LIST *)&DriverContext[8]);
            if ( v58 )
              ObfDereferenceObject(v81);
            return (unsigned int)Info;
          }
LABEL_173:
          PsTerminateProcess(v40, (unsigned int)Info);
          goto LABEL_88;
        }
        ProcessServerSilo = PsGetProcessServerSilo((__int64)v40);
        if ( ProcessServerSilo != v101[57] )
        {
          Info = -1073741267;
          v58 = v68;
          goto LABEL_173;
        }
        Info = PspCreateObjectHandle(v40, v102, PsProcessType);
        if ( Info < 0 )
        {
          v58 = v68;
        }
        else
        {
          v56 = (_OWORD *)v101[4];
          if ( v101[4] )
          {
            *(_OWORD *)v101[4] = *(_OWORD *)&v101[6];
            v56[1] = *(_OWORD *)&v101[8];
            v56[2] = *(_OWORD *)&v101[10];
            v56[3] = *(_OWORD *)&v101[12];
          }
          *v88 = v105;
          v57 = (__int64)v76;
          v58 = v68;
          Info = PspUpdateCreateInfo(6LL, v101, v40);
          if ( Info >= 0 )
            goto LABEL_86;
          if ( (v103 & 0x200) != 0 || (v65 = 1, (*(_DWORD *)(v57 + 1740) & 0x1000) != 0) )
            v65 = 0;
          ObCloseHandle(v105, v65);
        }
        if ( (v107 & 0x200) != 0 || (*((_DWORD *)v76 + 435) & 0x1000) != 0 )
          v21 = 0;
        ObCloseHandle(v108, v21);
LABEL_86:
        SepDeleteAccessState((__int64)v102);
        SeReleaseSubjectContext(&v102[0].SubjectSecurityContext);
        goto LABEL_87;
      }
      v101[19] = 0LL;
    }
LABEL_102:
    v58 = v68;
    goto LABEL_90;
  }
  return result;
}
