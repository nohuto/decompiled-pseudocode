/*
 * XREFs of NtCreateUserProcess @ 0x14060B950
 * Callers:
 *     <none>
 * Callees:
 *     PsGetProcessServerSilo @ 0x14004D260 (PsGetProcessServerSilo.c)
 *     SepDeleteAccessState @ 0x14004D950 (SepDeleteAccessState.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x140051600 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     RtlGetExtendedContextLength @ 0x1400A1C84 (RtlGetExtendedContextLength.c)
 *     RtlInitializeExtendedContext @ 0x1400A1CDC (RtlInitializeExtendedContext.c)
 *     ObfReferenceObjectWithTag @ 0x1400ACD30 (ObfReferenceObjectWithTag.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1401C5F20 (_alloca_probe.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     SeReleaseSubjectContext @ 0x1405E2240 (SeReleaseSubjectContext.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405E9390 (ObpReferenceObjectByHandleWithTag.c)
 *     ObCloseHandle @ 0x1405F6700 (ObCloseHandle.c)
 *     PspAllocateThread @ 0x1405F8E84 (PspAllocateThread.c)
 *     PspRundownSingleProcess @ 0x140604A48 (PspRundownSingleProcess.c)
 *     PspGetProcessProtectionRequirementsFromImage @ 0x140609F94 (PspGetProcessProtectionRequirementsFromImage.c)
 *     PspValidateCreateProcessProtection @ 0x140609FC4 (PspValidateCreateProcessProtection.c)
 *     PspCaptureProcessParameters @ 0x14060A028 (PspCaptureProcessParameters.c)
 *     PsTestProtectedProcessIncompatibility @ 0x14060A21C (PsTestProtectedProcessIncompatibility.c)
 *     PspCheckForInvalidAccessByProtection @ 0x14060A270 (PspCheckForInvalidAccessByProtection.c)
 *     PspInsertProcess @ 0x14060A3A8 (PspInsertProcess.c)
 *     MmCreateSpecialImageSection @ 0x14060B404 (MmCreateSpecialImageSection.c)
 *     PspCaptureCreateInfo @ 0x14060B7E0 (PspCaptureCreateInfo.c)
 *     IoCreateFileEx @ 0x14060C870 (IoCreateFileEx.c)
 *     FsRtlFreeExtraCreateParameterList @ 0x14060DEF0 (FsRtlFreeExtraCreateParameterList.c)
 *     PspUpdateCreateInfo @ 0x14060E104 (PspUpdateCreateInfo.c)
 *     PspCreateUserProcessEcp @ 0x14060E368 (PspCreateUserProcessEcp.c)
 *     PspGetMemoryPartitionContext @ 0x14060E560 (PspGetMemoryPartitionContext.c)
 *     SeQuerySigningPolicy @ 0x14060E5D0 (SeQuerySigningPolicy.c)
 *     PspReferenceTokenForNewProcess @ 0x14060EA9C (PspReferenceTokenForNewProcess.c)
 *     PspEstimateNewProcessServerSilo @ 0x14060EB18 (PspEstimateNewProcessServerSilo.c)
 *     PspGetContextThreadInternal @ 0x140621C00 (PspGetContextThreadInternal.c)
 *     PspInsertThread @ 0x140622450 (PspInsertThread.c)
 *     PspCreateObjectHandle @ 0x140622C88 (PspCreateObjectHandle.c)
 *     PspCreateUserContext @ 0x140622CFC (PspCreateUserContext.c)
 *     PspMapThreadCreationFlags @ 0x1406230A4 (PspMapThreadCreationFlags.c)
 *     PspBuildCreateProcessContext @ 0x140623378 (PspBuildCreateProcessContext.c)
 *     PspDeleteCreateProcessContext @ 0x140624608 (PspDeleteCreateProcessContext.c)
 *     PspAllocateProcess @ 0x14064CE78 (PspAllocateProcess.c)
 *     SeQueryServerSiloToken @ 0x1406C67A0 (SeQueryServerSiloToken.c)
 *     PsTerminateProcess @ 0x1406CAB74 (PsTerminateProcess.c)
 *     SeDuplicateTokenAndAddOriginClaim @ 0x1408A2C7C (SeDuplicateTokenAndAddOriginClaim.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
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
  _KPROCESS *Process; // r15
  char PreviousMode; // r13
  ULONG v14; // r12d
  unsigned __int64 Dr7; // rcx
  unsigned __int64 Dr6; // rcx
  ULONG v17; // eax
  __int64 v18; // rdx
  NTSTATUS result; // eax
  NTSTATUS Info; // edi
  KPROCESSOR_MODE v21; // r14
  __int64 v22; // r8
  int v23; // r9d
  int v24; // eax
  char v25; // r15
  int v26; // ebx
  __int64 High; // rax
  char P2Home; // cl
  char P1Home; // bl
  int v30; // r9d
  PS_PROTECTION *v31; // r11
  int v32; // edx
  int v33; // r9d
  __int64 *v34; // r12
  char v35; // r11
  char v36; // bl
  char v37; // r15
  __int64 v38; // rbx
  ULONG v39; // edi
  unsigned __int64 v40; // rax
  void *v41; // rsp
  int v42; // r9d
  __int64 Low_high; // rax
  unsigned __int64 Low; // rax
  __int64 v45; // rcx
  unsigned __int64 P4Home; // rdi
  bool v47; // al
  unsigned int P5Home_high; // r8d
  unsigned int P5Home; // r13d
  __int64 v50; // rax
  int inserted; // r15d
  void *Rax; // r12
  __int64 ProcessServerSilo; // rax
  _M128A *v54; // rax
  unsigned __int64 v55; // r15
  char v56; // r13
  __int64 v57; // rcx
  unsigned __int64 Rcx; // rax
  int v59; // eax
  __int64 v60; // rdx
  __int64 v61; // rcx
  PS_PROTECTION v62; // r11
  KPROCESSOR_MODE v63; // dl
  __int64 FileAttributes; // [rsp+28h] [rbp-58h]
  CONTEXT Context; // [rsp+80h] [rbp+0h] BYREF
  ULONG v66; // [rsp+580h] [rbp+500h]
  char v67; // [rsp+584h] [rbp+504h]
  HANDLE Handle; // [rsp+588h] [rbp+508h]
  __int64 v69[48]; // [rsp+590h] [rbp+510h] BYREF
  int v70; // [rsp+710h] [rbp+690h]
  HANDLE v71; // [rsp+718h] [rbp+698h]
  __int64 v72; // [rsp+720h] [rbp+6A0h] BYREF

  LODWORD(Context.P5Home) = ThreadDesiredAccess;
  HIDWORD(Context.P5Home) = ProcessDesiredAccess;
  Context.Dr6 = (unsigned __int64)ThreadHandle;
  Context.Dr7 = (unsigned __int64)ProcessHandle;
  Context.Rsp = (unsigned __int64)ProcessObjectAttributes;
  Context.Rbp = (unsigned __int64)ThreadObjectAttributes;
  Context.P6Home = (unsigned __int64)ProcessParameters;
  CurrentThread = KeGetCurrentThread();
  Context.Dr0 = (unsigned __int64)CurrentThread;
  Process = CurrentThread->ApcState.Process;
  Context.P4Home = (unsigned __int64)Process;
  Context.Rsi = (unsigned __int64)Process;
  PreviousMode = CurrentThread->PreviousMode;
  BYTE5(Context.P2Home) = PreviousMode;
  Context.Dr2 = 0LL;
  *(_QWORD *)&Context.SegCs = 0LL;
  LOBYTE(CurrentThread) = 0;
  HIDWORD(Context.P1Home) = (_DWORD)CurrentThread;
  BYTE3(Context.P2Home) = 0;
  memset(&Context.Rip, 0, 0x28uLL);
  memset(&Context.Legacy[2], 0, 0x48uLL);
  v14 = ProcessFlags;
  if ( (ProcessFlags & 0xFFFB6838) != 0 || (ThreadFlags & 0xFFFFFFFE) != 0 )
    return -1073741811;
  if ( (ProcessFlags & 0x8400) == 0x8400 )
    return -1073741776;
  v66 = 0;
  v67 = PreviousMode;
  if ( PreviousMode )
  {
    Dr7 = Context.Dr7;
    if ( Context.Dr7 >= 0x7FFFFFFF0000LL )
      Dr7 = 0x7FFFFFFF0000LL;
    *(_QWORD *)Dr7 = *(_QWORD *)Dr7;
    Dr6 = Context.Dr6;
    if ( Context.Dr6 >= 0x7FFFFFFF0000LL )
      Dr6 = 0x7FFFFFFF0000LL;
    *(_QWORD *)Dr6 = *(_QWORD *)Dr6;
  }
  if ( ProcessObjectAttributes )
  {
    if ( PreviousMode && ((unsigned __int8)ProcessObjectAttributes & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( PreviousMode )
      v17 = ProcessObjectAttributes->Attributes & 0x1DF2;
    else
      v17 = ProcessObjectAttributes->Attributes & 0x11FF2;
    v66 = v17;
  }
  memset(&Context.Legacy[7], 0, 0x1E8uLL);
  if ( !AttributeList
    || (LOBYTE(v18) = PreviousMode,
        result = PspBuildCreateProcessContext(AttributeList, v18, 0LL, &Context.Legacy[7]),
        result >= 0) )
  {
    if ( (ProcessFlags & 0x40) != 0
      && (Context.Legacy[7].Low & 0x2000000000000LL) != 0
      && !LOBYTE(Context.VectorRegister[0].High) )
    {
      v14 = ProcessFlags & 0xFFFFFFBF;
      ProcessFlags &= ~0x40u;
      HIDWORD(Context.Legacy[7].Low) &= ~0x20000u;
    }
    if ( (v14 & 4) == 0 && (Context.Legacy[7].Low & 0x80000000000LL) != 0
      || (Context.Legacy[7].Low & 0x2000000000000LL) != 0 && (v14 & 0x40) == 0 )
    {
      goto LABEL_133;
    }
    Info = PspCaptureCreateInfo(PreviousMode, (unsigned __int64)CreateInfo, (__int64)&Context.FltSave.FloatRegisters[7]);
    if ( Info >= 0 )
    {
      v21 = 1;
      if ( (Context.Legacy[7].Low & 0x100000000LL) != 0 )
      {
        Info = ObpReferenceObjectByHandleWithTag(
                 Context.FltSave.XmmRegisters[6].High,
                 128,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x72437350u,
                 &Context.SegGs,
                 0LL,
                 0LL);
        if ( Info < 0 )
          goto LABEL_102;
        Process = *(_KPROCESS **)&Context.SegGs;
        Context.FltSave.XmmRegisters[7].Low = *(_QWORD *)&Context.SegGs;
      }
      else
      {
        *(_QWORD *)&Context.SegGs = Process;
      }
      Context.VectorRegister[5].High = PspEstimateNewProcessServerSilo(
                                         Process,
                                         Context.VectorRegister[1].High,
                                         HIDWORD(Context.VectorRegister[2].Low));
      if ( (BYTE1(Context.Legacy[7].High) & 0xC) == 4
        && (Process != (_KPROCESS *)Context.P4Home || (*(_DWORD *)(Context.P4Home + 1740) & 0x1000) != 0) )
      {
LABEL_133:
        Info = -1073741811;
        goto LABEL_102;
      }
      LOBYTE(v22) = PreviousMode;
      Info = PspReferenceTokenForNewProcess(Process, Context.FltSave.XmmRegisters[8].Low, v22, &Context.Xmm8.High);
      if ( Info >= 0 )
      {
        if ( Context.FltSave.XmmRegisters[8].Low )
        {
          if ( (int)SeQueryServerSiloToken(Context.FltSave.XmmRegisters[8].High, &Context.Rcx) >= 0 )
          {
            Rcx = Context.Rcx;
            if ( Context.VectorRegister[5].High )
            {
              while ( Rcx )
              {
                if ( Rcx == Context.VectorRegister[5].High )
                  goto LABEL_28;
                Rcx = *(_QWORD *)(Rcx + 1072);
              }
              goto LABEL_133;
            }
          }
        }
LABEL_28:
        if ( (Context.Legacy[7].Low & 0x2000000000LL) != 0 )
        {
          LOBYTE(v23) = (Context.Legacy[7].Low & 0x2000000000000LL) != 0 ? LOBYTE(Context.VectorRegister[0].High) : 0;
          LOBYTE(Context.P1Home) = v23;
          Info = SeQuerySigningPolicy(
                   Context.Xmm8.High,
                   (int)&Context.Xmm13.High,
                   (v14 >> 6) & 1,
                   v23,
                   (ULONG_PTR)&Context.P2Home,
                   (__int64)&Context.P2Home + 1,
                   (__int64)&Context);
          if ( Info >= 0 )
          {
            LODWORD(Context.Rdi) = 48;
            Context.R8 = 0LL;
            v24 = 1600;
            if ( PreviousMode != 1 )
              v24 = 576;
            LODWORD(Context.R10) = v24;
            Context.R9 = (unsigned __int64)&Context.FltSave.XmmRegisters[13].High;
            *(_OWORD *)&Context.R11 = 0LL;
            Info = 0;
            if ( qword_14096E3D0 )
              Info = qword_14096E3D0(Context.FltSave.XmmRegisters[8].High);
            if ( Info >= 0 )
            {
              Info = PspGetMemoryPartitionContext(
                       (_DWORD)Process,
                       v14,
                       Context.VectorRegister[1].High,
                       HIDWORD(Context.VectorRegister[2].Low),
                       (__int64)&Context.Dr2);
              if ( Info >= 0 )
              {
                Info = PspCreateUserProcessEcp(&Context.Rip, Context.FltSave.XmmRegisters[8].High);
                if ( Info >= 0 )
                {
                  Info = IoCreateFileEx(
                           (PHANDLE)&Context.FltSave.XmmRegisters[9].High,
                           LODWORD(Context.Xmm9.Low) | 0x100020,
                           (POBJECT_ATTRIBUTES)&Context.Rdi,
                           (PIO_STATUS_BLOCK)&Context.R14,
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
                           (PIO_DRIVER_CREATE_CONTEXT)&Context.Rip);
                  if ( Info < 0 && LODWORD(Context.Xmm9.Low) )
                    Info = IoCreateFileEx(
                             (PHANDLE)&Context.FltSave.XmmRegisters[9].High,
                             0x100020u,
                             (POBJECT_ATTRIBUTES)&Context.Rdi,
                             (PIO_STATUS_BLOCK)&Context.R14,
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
                             (PIO_DRIVER_CREATE_CONTEXT)&Context.Rip);
                  if ( Info < 0 )
                  {
                    Context.FltSave.XmmRegisters[9].High = 0LL;
                    v57 = 1LL;
LABEL_101:
                    PspUpdateCreateInfo(v57, &Context.Legacy[7], 0LL);
                  }
                  else
                  {
                    Info = ObReferenceObjectByHandle(
                             (HANDLE)Context.FltSave.XmmRegisters[9].High,
                             0x100020u,
                             (POBJECT_TYPE)IoFileObjectType,
                             0,
                             (PVOID *)&Context.Rdx,
                             0LL);
                    Context.FltSave.XmmRegisters[10].Low = Context.Rdx;
                    if ( Info < 0 )
                    {
                      Context.FltSave.XmmRegisters[10].Low = 0LL;
                    }
                    else
                    {
                      Context.R9 = 0LL;
                      v25 = 1;
                      if ( Context.VectorRegister[1].Low )
                        v25 = 5;
                      if ( Context.VectorRegister[3].Low )
                      {
                        v59 = SeDuplicateTokenAndAddOriginClaim(
                                Context.FltSave.XmmRegisters[8].High,
                                Context.VectorRegister[3].Low,
                                LODWORD(Context.VectorRegister[3].High),
                                &Context.SegCs);
                        v26 = BYTE4(Context.P1Home);
                        if ( v59 >= 0 )
                          v26 = 1;
                        HIDWORD(Context.P1Home) = v26;
                        BYTE3(Context.P2Home) = v26;
                      }
                      else
                      {
                        LOBYTE(v26) = BYTE4(Context.P1Home);
                      }
                      High = *(_QWORD *)&Context.SegCs;
                      if ( !(_BYTE)v26 )
                        High = Context.FltSave.XmmRegisters[8].High;
                      *(_QWORD *)&Context.SegCs = High;
                      P2Home = Context.P2Home;
                      while ( 1 )
                      {
                        Info = MmCreateSpecialImageSection(
                                 &Context.FltSave.XmmRegisters[10].High,
                                 (int)&Context.Rdi,
                                 *(__int64 *)&Context.SegCs,
                                 P2Home,
                                 Context.FltSave.XmmRegisters[9].High,
                                 v25);
                        if ( Info < 0 )
                        {
                          Context.FltSave.XmmRegisters[10].High = 0LL;
                          v57 = 2LL;
                          goto LABEL_101;
                        }
                        Info = ObReferenceObjectByHandle(
                                 (HANDLE)Context.FltSave.XmmRegisters[10].High,
                                 8u,
                                 MmSectionObjectType,
                                 0,
                                 (PVOID *)&Context.Rbx,
                                 0LL);
                        Context.FltSave.XmmRegisters[11].High = Context.Rbx;
                        if ( Info < 0 )
                        {
                          Context.FltSave.XmmRegisters[11].High = 0LL;
                          goto LABEL_102;
                        }
                        P1Home = Context.P1Home;
                        Info = PspGetProcessProtectionRequirementsFromImage(Context.Rbx);
                        if ( Info < 0 )
                          goto LABEL_102;
                        LOBYTE(v30) = BYTE4(Context.P2Home);
                        if ( BYTE4(Context.P2Home) == P1Home )
                          break;
                        Info = SeQuerySigningPolicy(
                                 Context.Xmm8.High,
                                 (int)&Context.Xmm13.High,
                                 1,
                                 v30,
                                 (ULONG_PTR)&Context.P2Home + 2,
                                 (__int64)&Context.P2Home + 1,
                                 (__int64)&Context);
                        if ( Info < 0 )
                          goto LABEL_102;
                        LOBYTE(v61) = BYTE2(Context.P2Home);
                        if ( BYTE2(Context.P2Home) == LOBYTE(Context.P2Home) )
                          break;
                        if ( (Context.P2Home & 0x30) != 0 && (BYTE2(Context.P2Home) & 0x30) != (Context.P2Home & 0x30) )
                          goto LABEL_133;
                        if ( !qword_14040EE00 )
                          goto LABEL_133;
                        LOBYTE(v60) = Context.P2Home;
                        if ( !(unsigned int)qword_14040EE00(v61, v60) )
                          goto LABEL_133;
                        ObCloseHandle((HANDLE)Context.FltSave.XmmRegisters[10].High, 0);
                        ObfDereferenceObject((PVOID)Context.FltSave.XmmRegisters[11].High);
                        Context.FltSave.XmmRegisters[10].High = 0LL;
                        Context.FltSave.XmmRegisters[11].High = 0LL;
                        P2Home = BYTE2(Context.P2Home);
                        LOBYTE(Context.P2Home) = BYTE2(Context.P2Home);
                      }
                      Info = PspValidateCreateProcessProtection(
                               Context.P4Home,
                               (__int64)&Context.FltSave.FloatRegisters[7],
                               PreviousMode,
                               v14,
                               (PS_PROTECTION)Context.P1Home);
                      if ( Info < 0 )
                        goto LABEL_102;
                      if ( (v14 & 0x40000) != 0
                        || (Context.P1Home & 7) != 1
                        && PspCheckForInvalidAccessByProtection(PreviousMode, v31[1738], (PS_PROTECTION)Context.P1Home) )
                      {
                        LOBYTE(Context.Legacy[7].High) |= 8u;
                      }
                      Info = PspCaptureProcessParameters(
                               PreviousMode,
                               Context.P6Home,
                               (__int64)&Context.FltSave.FloatRegisters[7]);
                      if ( Info >= 0 )
                      {
                        v34 = &v72;
                        v35 = Context.P1Home;
                        v36 = BYTE1(Context.P2Home);
                        v37 = Context.P2Home;
                        goto LABEL_57;
                      }
                      LOBYTE(Context.Legacy[7].High) &= ~4u;
                    }
                  }
                }
              }
            }
          }
          goto LABEL_102;
        }
        if ( Process != (_KPROCESS *)Context.P4Home
          || !PreviousMode
          || Context.P6Home
          || (Context.Legacy[7].High & 0xC00) != 0
          || (Context.Legacy[7].Low & 0x8000000000LL) != 0
          || (Context.Legacy[7].Low & 0x2000000000000LL) != 0
          || (Context.Legacy[7].High & 0x10) != 0 )
        {
          goto LABEL_133;
        }
        LOBYTE(Context.Legacy[7].High) &= ~4u;
        v62.Level = BYTE2(Process[2].ActiveProcessors.Bitmap[0]);
        LOBYTE(Context.P1Home) = v62;
        v36 = BYTE1(Process[2].ActiveProcessors.Bitmap[0]);
        BYTE1(Context.P2Home) = v36;
        v37 = Process[2].ActiveProcessors.Bitmap[0];
        LOBYTE(Context.P2Home) = v37;
        if ( (v14 & 0x40) != 0 && (v62.Level & 7) == 0 )
        {
          Info = -1073741790;
          goto LABEL_102;
        }
        Info = PspValidateCreateProcessProtection(
                 Context.P4Home,
                 (__int64)&Context.FltSave.FloatRegisters[7],
                 PreviousMode,
                 v14,
                 v62);
        if ( Info < 0 )
          goto LABEL_102;
        v34 = 0LL;
LABEL_57:
        LOBYTE(v33) = v35;
        LOBYTE(v32) = PreviousMode;
        Info = PspAllocateProcess(
                 *(_DWORD *)&Context.SegGs,
                 v32,
                 Context.Rsp,
                 v33,
                 v37,
                 v36,
                 Context.FltSave.XmmRegisters[11].High,
                 Context.FltSave.XmmRegisters[8].High,
                 ProcessFlags,
                 0,
                 (__int64)&Context.FltSave.FloatRegisters[7],
                 Context.FltSave.XmmRegisters[8].Low != 0,
                 Context.Dr2,
                 (__int64)&Context.Dr3,
                 (__int64)&Context.ContextFlags);
        if ( Info < 0 )
          goto LABEL_102;
        v38 = *(_QWORD *)&Context.ContextFlags;
        if ( Context.FltSave.XmmRegisters[11].High )
          v39 = (*(_DWORD *)(*(_QWORD *)&Context.ContextFlags + 2084LL) & 0x4000 | 0x10000B00u) >> 8;
        else
          v39 = 1048603;
        RtlGetExtendedContextLength(v39, (PULONG)&Context.Dr1);
        v40 = LODWORD(Context.Dr1) + 15LL;
        if ( v40 <= LODWORD(Context.Dr1) )
          v40 = 0xFFFFFFFFFFFFFF0LL;
        v41 = alloca(v40 & 0xFFFFFFFFFFFFFFF0uLL);
        memset(&Context, 0, LODWORD(Context.Dr1));
        RtlInitializeExtendedContext(&Context, v39, (PCONTEXT_EX *)&Context.R13);
        if ( Context.FltSave.XmmRegisters[11].High )
        {
          Low_high = HIDWORD(Context.Xmm13.Low);
          if ( !*(_QWORD *)(v38 + 1064) )
            Low_high = *(_QWORD *)(v38 + 1016);
          PspCreateUserContext((unsigned int)&Context, 1, PspUserThreadStart, Context.Xmm2.Low, Low_high);
        }
        else
        {
          LOBYTE(v42) = 1;
          Info = PspGetContextThreadInternal(Context.Dr0, (unsigned int)&Context, 0, v42, 1);
          if ( Info < 0 )
          {
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v38 + 728), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)(v38 + 728));
            KeAbPostRelease(v38 + 728);
            KeLeaveCriticalRegionThread(Context.Dr0);
            PspRundownSingleProcess(*(__int64 *)&Context.ContextFlags, 0);
            goto LABEL_102;
          }
          Context.Rax = 297LL;
        }
        ObfReferenceObjectWithTag((PVOID)v38, 0x72437350u);
        if ( v34 )
        {
          *(_BYTE *)v34 = 0;
          Low = Context.FltSave.XmmRegisters[3].Low;
          if ( Context.FltSave.XmmRegisters[3].Low < 0x40000 )
            Low = 0x40000LL;
          v34[3] = Low;
          v34[2] = Context.FltSave.XmmRegisters[3].High;
          v34[1] = LODWORD(Context.Xmm2.High);
        }
        LODWORD(Context.P6Home) = 0;
        PspMapThreadCreationFlags(ThreadFlags, &Context.P3Home);
        if ( LODWORD(Context.Dr3) )
        {
          LODWORD(Context.P6Home) = 2;
          LODWORD(Context.P3Home) |= 0x10u;
        }
        if ( HIDWORD(Context.Dr3) )
          ProcessFlags |= 0x400u;
        Context.FltSave.FloatRegisters[0].Low = (unsigned __int64)&Context.FltSave.FloatRegisters[2];
        LODWORD(Context.P3Home) |= 0x60u;
        Info = PspAllocateThread(
                 (_KPROCESS *)v38,
                 Context.Rbp,
                 PreviousMode,
                 (__int64)&Context.FltSave.FloatRegisters[7],
                 &Context,
                 (__int64 *)Context.FltSave.FloatRegisters,
                 0LL,
                 0LL,
                 (int *)&Context.P3Home,
                 &Context.Rax,
                 v34,
                 (__int64)v69);
        if ( Info < 0 )
        {
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v38 + 728), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v38 + 728));
          KeAbPostRelease(v38 + 728);
          KeLeaveCriticalRegionThread(Context.Dr0);
          v38 = *(_QWORD *)&Context.ContextFlags;
          PspRundownSingleProcess(*(__int64 *)&Context.ContextFlags, 0);
          v56 = BYTE4(Context.P1Home);
          goto LABEL_89;
        }
        P4Home = Context.P4Home;
        LOBYTE(v45) = PreviousMode;
        v47 = PsTestProtectedProcessIncompatibility(v45, Context.P4Home, v38);
        P5Home_high = HIDWORD(Context.P5Home);
        if ( v47 )
        {
          if ( (Context.P5Home & 0x200000000000000LL) != 0 )
          {
            P5Home_high = ~*(_DWORD *)&RtlProtectedAccess[12 * ((unsigned __int64)LOBYTE(Context.P1Home) >> 4) + 4] & 0x1FFFFF | HIDWORD(Context.P5Home) & 0xFDFFFFFF;
            if ( !Context.FltSave.XmmRegisters[7].Low || P4Home == Context.FltSave.XmmRegisters[7].Low )
              P5Home_high |= 1u;
          }
          P5Home = Context.P5Home;
          if ( (Context.P5Home & 0x2000000) != 0 )
          {
            P5Home = ~*(_DWORD *)&RtlProtectedAccess[12 * ((unsigned __int64)LOBYTE(Context.P1Home) >> 4) + 8] & 0x1FFFFF | Context.P5Home & 0xFDFFFFFF;
            if ( !Context.FltSave.XmmRegisters[7].Low || P4Home == Context.FltSave.XmmRegisters[7].Low )
              P5Home |= 1u;
          }
        }
        else
        {
          P5Home = Context.P5Home;
        }
        if ( Context.FltSave.XmmRegisters[12].Low )
          v50 = Context.FltSave.XmmRegisters[12].Low + 112;
        else
          v50 = 0LL;
        inserted = PspInsertProcess(
                     (char *)v38,
                     *(struct _KPROCESS **)&Context.SegGs,
                     P5Home_high,
                     ProcessFlags,
                     (HANDLE)Context.FltSave.XmmRegisters[7].High,
                     Context.P6Home,
                     v50,
                     (PACCESS_STATE)&Context.VectorRegister[8]);
        FileAttributes = (__int64)v34;
        Rax = (void *)Context.Rax;
        Info = PspInsertThread(
                 Context.Rax,
                 (PEPROCESS)v38,
                 P5Home,
                 FileAttributes,
                 (__int64)&Context.FltSave.FloatRegisters[7],
                 0LL,
                 (__int64)v69,
                 Context.Dr6,
                 Context.FltSave.XmmRegisters[0].Low);
        KiLeaveCriticalRegionUnsafe(Context.Dr0);
        if ( inserted < 0 )
        {
          PspRundownSingleProcess(v38, 0);
          Info = inserted;
          v56 = BYTE4(Context.P1Home);
          goto LABEL_88;
        }
        if ( Info < 0 )
        {
          v56 = BYTE4(Context.P1Home);
LABEL_87:
          if ( Info >= 0 )
          {
LABEL_88:
            ObfDereferenceObject(Rax);
LABEL_89:
            ObfDereferenceObjectWithTag((PVOID)v38, 0x72437350u);
LABEL_90:
            if ( Context.Dr2 )
              ObfDereferenceObjectWithTag((PVOID)Context.Dr2, 0x624A7350u);
            PspDeleteCreateProcessContext(&Context.Legacy[7]);
            if ( Context.Header[0].Low )
              FsRtlFreeExtraCreateParameterList((PECP_LIST)Context.Header[0].Low);
            if ( v56 )
              ObfDereferenceObject(*(PVOID *)&Context.SegCs);
            return Info;
          }
LABEL_173:
          PsTerminateProcess(v38, (unsigned int)Info);
          goto LABEL_88;
        }
        ProcessServerSilo = PsGetProcessServerSilo(v38);
        if ( ProcessServerSilo != Context.VectorRegister[5].High )
        {
          Info = -1073741267;
          v56 = BYTE4(Context.P1Home);
          goto LABEL_173;
        }
        Info = PspCreateObjectHandle(v38, &Context.VectorRegister[8], PsProcessType);
        if ( Info < 0 )
        {
          v56 = BYTE4(Context.P1Home);
        }
        else
        {
          v54 = (_M128A *)Context.FltSave.XmmRegisters[1].Low;
          if ( Context.FltSave.XmmRegisters[1].Low )
          {
            *(_M128A *)Context.FltSave.XmmRegisters[1].Low = Context.Xmm2;
            v54[1] = Context.FltSave.XmmRegisters[3];
            v54[2] = Context.FltSave.XmmRegisters[4];
            v54[3] = Context.FltSave.XmmRegisters[5];
          }
          *(_QWORD *)Context.Dr7 = Handle;
          v55 = Context.P4Home;
          v56 = BYTE4(Context.P1Home);
          Info = PspUpdateCreateInfo(6LL, &Context.Legacy[7], v38);
          if ( Info >= 0 )
            goto LABEL_86;
          if ( (v66 & 0x200) != 0 || (v63 = 1, (*(_DWORD *)(v55 + 1740) & 0x1000) != 0) )
            v63 = 0;
          ObCloseHandle(Handle, v63);
        }
        if ( (v70 & 0x200) != 0 || (*(_DWORD *)(Context.P4Home + 1740) & 0x1000) != 0 )
          v21 = 0;
        ObCloseHandle(v71, v21);
LABEL_86:
        SepDeleteAccessState((__int64)&Context.VectorRegister[8]);
        SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)&Context.VectorRegister[10]);
        goto LABEL_87;
      }
      Context.FltSave.XmmRegisters[8].High = 0LL;
    }
LABEL_102:
    v56 = BYTE4(Context.P1Home);
    goto LABEL_90;
  }
  return result;
}
