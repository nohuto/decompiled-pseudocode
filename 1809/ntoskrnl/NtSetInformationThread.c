/*
 * XREFs of NtSetInformationThread @ 0x1405EAEA0
 * Callers:
 *     <none>
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     PsAttachSiloToCurrentThread @ 0x14000FBD0 (PsAttachSiloToCurrentThread.c)
 *     PsGetProcessServerSilo @ 0x14004D260 (PsGetProcessServerSilo.c)
 *     PsGetCurrentServerSilo @ 0x14004D270 (PsGetCurrentServerSilo.c)
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140050860 (ExAcquireResourceSharedLite.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x140051600 (KeLeaveCriticalRegionThread.c)
 *     PsImpersonateContainerOfThread @ 0x14005AE90 (PsImpersonateContainerOfThread.c)
 *     PspRevertContainerImpersonation @ 0x14005B390 (PspRevertContainerImpersonation.c)
 *     PsGetEffectiveServerSilo @ 0x14008FC70 (PsGetEffectiveServerSilo.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     PsGetServerSiloGlobals @ 0x1400922CC (PsGetServerSiloGlobals.c)
 *     IoThreadToProcess @ 0x1400ACE60 (IoThreadToProcess.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     PsIsProcessInSilo @ 0x1400CB1E8 (PsIsProcessInSilo.c)
 *     KeSetActualBasePriorityThread @ 0x1400CCFC0 (KeSetActualBasePriorityThread.c)
 *     KeSetBasePriorityThread @ 0x1400CD3F0 (KeSetBasePriorityThread.c)
 *     KeSetPriorityThread @ 0x1400CD8F0 (KeSetPriorityThread.c)
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x1400D2FF8 (KeSetThreadChargeOnlySchedulingGroup.c)
 *     PsSetPagePriorityThread @ 0x1400DEF80 (PsSetPagePriorityThread.c)
 *     PsSetIoPriorityThread @ 0x1400DEFD8 (PsSetIoPriorityThread.c)
 *     MmGetDefaultPagePriority @ 0x1400E221C (MmGetDefaultPagePriority.c)
 *     MiCreateSystemWsles @ 0x1400F3224 (MiCreateSystemWsles.c)
 *     IoBoostThreadIoPriority @ 0x1401086DC (IoBoostThreadIoPriority.c)
 *     KeSetLegacyAffinityThread @ 0x140115260 (KeSetLegacyAffinityThread.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x14012F3D0 (ExfAcquireReleasePushLockExclusive.c)
 *     KeSetIdealProcessorThread @ 0x14015CE80 (KeSetIdealProcessorThread.c)
 *     KeSetIdealProcessorThreadByNumber @ 0x14015CED0 (KeSetIdealProcessorThreadByNumber.c)
 *     KeSetAffinityThread @ 0x14016B3B0 (KeSetAffinityThread.c)
 *     KeVerifyGroupAffinity @ 0x14016B82C (KeVerifyGroupAffinity.c)
 *     KeUpdateThreadCpuSets @ 0x14018C98C (KeUpdateThreadCpuSets.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     KeSetUserHeteroCpuPolicyThread @ 0x14028E46C (KeSetUserHeteroCpuPolicyThread.c)
 *     KeDisableProfiling @ 0x140295D7C (KeDisableProfiling.c)
 *     KeSetSelectedCpuSetsThread @ 0x140296C70 (KeSetSelectedCpuSetsThread.c)
 *     PsGetProcessSilo @ 0x1402E9CF0 (PsGetProcessSilo.c)
 *     PspAttachThreadToUmsCompletionList @ 0x1402EA044 (PspAttachThreadToUmsCompletionList.c)
 *     PspDetachThreadFromUmsCompletionList @ 0x1402EA198 (PspDetachThreadFromUmsCompletionList.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405E9390 (ObpReferenceObjectByHandleWithTag.c)
 *     PspWriteTebIdealProcessor @ 0x1405F82AC (PspWriteTebIdealProcessor.c)
 *     RtlTestProtectedAccess @ 0x14060A2A0 (RtlTestProtectedAccess.c)
 *     SeSinglePrivilegeCheck @ 0x140613160 (SeSinglePrivilegeCheck.c)
 *     PsImpersonateClient @ 0x140638B90 (PsImpersonateClient.c)
 *     PspReferenceCidTableEntry @ 0x140647D30 (PspReferenceCidTableEntry.c)
 *     PsGetNextProcessThread @ 0x140676AA0 (PsGetNextProcessThread.c)
 *     EtwTraceThreadSetName @ 0x14067BBC8 (EtwTraceThreadSetName.c)
 *     PspWow64SetContextThread @ 0x1406A9C5C (PspWow64SetContextThread.c)
 *     KeSetDisableBoostThread @ 0x1406DCC10 (KeSetDisableBoostThread.c)
 *     SeCheckPrivilegedObject @ 0x14071F504 (SeCheckPrivilegedObject.c)
 *     PspSetThreadPpmPolicy @ 0x1407648A0 (PspSetThreadPpmPolicy.c)
 *     KeEnableProfiling @ 0x140845628 (KeEnableProfiling.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtSetInformationThread(
        HANDLE ThreadHandle,
        THREADINFOCLASS ThreadInformationClass,
        PVOID ThreadInformation,
        ULONG ThreadInformationLength)
{
  size_t v4; // rbx
  unsigned __int64 v5; // r14
  struct _KTHREAD *CurrentThread; // r15
  unsigned __int8 v8; // r13
  __int64 v9; // rax
  int v10; // esi
  char *v11; // rcx
  __int64 v12; // r9
  KPRIORITY v13; // ebx
  NTSTATUS result; // eax
  int v15; // r14d
  PKTHREAD v16; // rbx
  _KPROCESS *Process; // r8
  unsigned __int64 v18; // rax
  __int64 v19; // rcx
  _QWORD *ServerSiloGlobals; // rax
  __int64 v21; // rdx
  NTSTATUS v22; // edi
  _DWORD *v23; // rax
  LONG v24; // edx
  LONG v25; // r14d
  __int64 v26; // r8
  NTSTATUS v27; // ebx
  PKTHREAD v28; // rdi
  char v29; // bl
  __int64 v30; // rbx
  PKTHREAD v31; // r14
  _KPROCESS *v32; // r15
  PKTHREAD v33; // rcx
  _KPROCESS *v34; // rbx
  signed __int64 *p_Lock; // rdi
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rbx
  __int64 v38; // rcx
  UCHAR v39; // bl
  UCHAR v40; // dl
  int v41; // r14d
  NTSTATUS v42; // ebx
  PVOID v43; // rcx
  unsigned int v44; // r14d
  NTSTATUS v45; // r12d
  PKTHREAD v46; // rbx
  _KPROCESS *v47; // r13
  __int64 i; // rax
  struct _EX_RUNDOWN_REF *v49; // rbx
  unsigned __int64 Count; // r8
  unsigned __int64 v51; // rax
  __int16 v52; // cx
  bool v53; // dl
  unsigned __int64 v54; // rcx
  __int16 v55; // dx
  __int64 v56; // rdx
  __int64 v57; // rdx
  unsigned __int64 v58; // rax
  __int16 v59; // dx
  int v60; // ebx
  PKTHREAD v61; // rcx
  unsigned int v62; // ebx
  unsigned __int64 v63; // r14
  PKTHREAD v64; // rdi
  int v65; // ebx
  unsigned __int64 v66; // rcx
  PKTHREAD v67; // rdi
  NTSTATUS v68; // ebx
  PKTHREAD v69; // rdi
  NTSTATUS v70; // ebx
  struct _KTHREAD *v71; // rbx
  struct _LIST_ENTRY *v72; // rbx
  __int64 v73; // rdx
  unsigned int v74; // ebx
  NTSTATUS v75; // ebx
  _QWORD *v76; // r12
  _PROCESSOR_NUMBER v77; // eax
  unsigned __int64 v78; // rcx
  unsigned __int64 v79; // rdx
  unsigned __int16 v80; // bx
  char *PoolWithTag; // rax
  void *v82; // rax
  PKTHREAD v83; // rbx
  PKTHREAD v84; // rbx
  int v85; // ebx
  int v86; // ebx
  struct _KTHREAD *v87; // rax
  struct _LIST_ENTRY *v88; // rax
  struct _LIST_ENTRY *v89; // rdi
  PEPROCESS v90; // rsi
  __int64 ProcessSilo; // rax
  struct _LIST_ENTRY *Flink; // rcx
  __int64 EffectiveServerSilo; // rbx
  int v94; // ecx
  unsigned int v95; // ebx
  struct _KTHREAD *v96; // rcx
  struct _KTHREAD *v97; // rax
  PVOID v98; // rbx
  unsigned __int64 v99; // rbx
  __int64 v100; // rdx
  __int64 v101; // rbx
  struct _KTHREAD *v102; // rdi
  __int64 v103; // rcx
  __int64 v104; // rbx
  __int64 CurrentServerSilo; // r14
  bool v106; // zf
  signed __int32 v107[8]; // [rsp+0h] [rbp-278h] BYREF
  PKTHREAD Thread; // [rsp+40h] [rbp-238h] BYREF
  NTSTATUS v109; // [rsp+48h] [rbp-230h]
  char v110; // [rsp+4Ch] [rbp-22Ch]
  char v111; // [rsp+4Dh] [rbp-22Bh]
  bool v112; // [rsp+4Eh] [rbp-22Ah]
  char v113; // [rsp+51h] [rbp-227h]
  LONG Increment; // [rsp+54h] [rbp-224h]
  _PROCESSOR_NUMBER v115; // [rsp+58h] [rbp-220h] BYREF
  __int64 v116; // [rsp+60h] [rbp-218h]
  _QWORD *v117; // [rsp+68h] [rbp-210h]
  PVOID v118; // [rsp+70h] [rbp-208h] BYREF
  int v119; // [rsp+78h] [rbp-200h]
  PVOID P; // [rsp+80h] [rbp-1F8h]
  ULONG_PTR BugCheckParameter1; // [rsp+88h] [rbp-1F0h]
  PVOID Token; // [rsp+90h] [rbp-1E8h] BYREF
  __int128 v123; // [rsp+98h] [rbp-1E0h]
  unsigned __int64 v124; // [rsp+A8h] [rbp-1D0h]
  int v125; // [rsp+B0h] [rbp-1C8h]
  unsigned int v126; // [rsp+B4h] [rbp-1C4h]
  int v127; // [rsp+B8h] [rbp-1C0h]
  int v128; // [rsp+BCh] [rbp-1BCh]
  int v129; // [rsp+C0h] [rbp-1B8h]
  unsigned int v130; // [rsp+C4h] [rbp-1B4h]
  int v131; // [rsp+C8h] [rbp-1B0h]
  NTSTATUS v132; // [rsp+CCh] [rbp-1ACh]
  int v133; // [rsp+D0h] [rbp-1A8h]
  int v134; // [rsp+D4h] [rbp-1A4h]
  PVOID Object[3]; // [rsp+E0h] [rbp-198h] BYREF
  HANDLE Handle; // [rsp+F8h] [rbp-180h]
  unsigned int v137; // [rsp+100h] [rbp-178h]
  unsigned __int64 v138; // [rsp+108h] [rbp-170h]
  void *Src[2]; // [rsp+120h] [rbp-158h]
  __int128 v140; // [rsp+130h] [rbp-148h]
  __int128 v141; // [rsp+140h] [rbp-138h] BYREF
  __int64 v142; // [rsp+150h] [rbp-128h]
  __int64 v143; // [rsp+158h] [rbp-120h]
  unsigned __int64 v144; // [rsp+160h] [rbp-118h]
  ULONG_PTR v145; // [rsp+168h] [rbp-110h]
  unsigned __int64 v146; // [rsp+170h] [rbp-108h]
  __int64 v147; // [rsp+178h] [rbp-100h]
  __int128 v148; // [rsp+180h] [rbp-F8h] BYREF
  char v149[160]; // [rsp+190h] [rbp-E8h] BYREF

  v4 = ThreadInformationLength;
  v5 = (unsigned __int64)ThreadInformation;
  CurrentThread = KeGetCurrentThread();
  v116 = (__int64)CurrentThread;
  v8 = CurrentThread->$86A1A36C0FEBA810544B2F2B35F40C82::gap0[10];
  if ( v8 )
  {
    if ( (unsigned int)(ThreadInformationClass - 39) <= 8 || (unsigned int)(ThreadInformationClass - 5) <= 1 )
    {
LABEL_7:
      v9 = 3LL;
LABEL_8:
      v10 = 0;
    }
    else
    {
      switch ( ThreadInformationClass )
      {
        case ThreadAffinityMask:
        case ThreadGroupInformation:
        case ThreadUmsInformation:
        case ThreadCpuAccountingInformation:
        case ThreadNameInformation:
          v9 = 7LL;
          goto LABEL_8;
        case ThreadEnableAlignmentFaultFixup:
        case ThreadCounterProfiling:
          v10 = 0;
          v9 = 0LL;
          break;
        default:
          goto LABEL_7;
      }
    }
    if ( ThreadInformationLength )
    {
      if ( ((unsigned __int64)ThreadInformation & v9) != 0 )
        ExRaiseDatatypeMisalignment();
      v11 = (char *)ThreadInformation + ThreadInformationLength;
      v12 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)ThreadInformation + v4 > 0x7FFFFFFF0000LL || v11 < ThreadInformation )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    else
    {
      v12 = 0x7FFFFFFF0000LL;
    }
  }
  else
  {
    v10 = 0;
    v12 = 0x7FFFFFFF0000LL;
  }
  if ( ThreadInformationClass == ThreadWorkOnBehalfTicket )
  {
    if ( ThreadHandle != (HANDLE)-2LL )
      return -1073741811;
    if ( (_DWORD)v4 == 8 )
    {
      v99 = *(_QWORD *)ThreadInformation;
      v146 = *(_QWORD *)ThreadInformation;
      v22 = ObpReferenceObjectByHandleWithTag(
              0xFFFFFFFFFFFFFFFEuLL,
              1024,
              (__int64)PsThreadType,
              v8,
              0x79517350u,
              &Thread,
              0LL,
              0LL);
      v109 = v22;
      if ( v22 >= 0 )
      {
        v147 = 0LL;
        if ( v99 )
        {
          v101 = PspWorkOnBehalfEncodingKey ^ v99;
          v116 = v101;
          v102 = KeGetCurrentThread();
          --v102->SpecialApcDisable;
          LOBYTE(v100) = 6;
          v104 = PspReferenceCidTableEntry((int)v101, v100);
          if ( v104 )
          {
            CurrentServerSilo = PsGetCurrentServerSilo();
            if ( (*(_DWORD *)(v104 + 1744) & 2) == 0 )
            {
              _InterlockedOr(v107, 0);
              if ( (*(_QWORD *)(v104 + 1728) & 1) != 0 )
                ExfAcquireReleasePushLockExclusive((unsigned __int64 *)(v104 + 1728));
              if ( (*(_DWORD *)(v104 + 1744) & 2) == 0 )
                goto LABEL_308;
            }
            if ( !PsIsProcessInSilo(*(struct _KPROCESS **)(v104 + 544), CurrentServerSilo) )
            {
LABEL_308:
              ObfDereferenceObject((PVOID)v104);
              v104 = 0LL;
            }
          }
          v106 = v102->SpecialApcDisable++ == -1;
          if ( v106 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v102->ApcState.ApcListHead[0].Flink != &v102->152 )
            KiCheckForKernelApcDelivery(v103);
          if ( v104 )
          {
            if ( *(_DWORD *)(v104 + 1520) == HIDWORD(v116) )
            {
              v22 = 0;
            }
            else
            {
              ObfDereferenceObject((PVOID)v104);
              v22 = -1073741275;
            }
          }
          else
          {
            v22 = -1073741813;
          }
          if ( v22 < 0 )
          {
LABEL_198:
            v33 = Thread;
          }
          else
          {
            PspRevertContainerImpersonation((ULONG_PTR)CurrentThread);
            PsImpersonateContainerOfThread(v104);
            ObfDereferenceObject((PVOID)v104);
            v33 = Thread;
          }
        }
        else
        {
          PspRevertContainerImpersonation((ULONG_PTR)CurrentThread);
          v33 = Thread;
        }
LABEL_320:
        ObfDereferenceObjectWithTag(v33, 0x79517350u);
      }
      return v22;
    }
    return -1073741820;
  }
  if ( ThreadInformationClass == ThreadImpersonationToken )
  {
    if ( (_DWORD)v4 == 8 )
    {
      Handle = *(HANDLE *)ThreadInformation;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ThreadHandle,
                 128,
                 (__int64)PsThreadType,
                 v8,
                 0x79517350u,
                 &Thread,
                 0LL,
                 0LL);
      if ( result >= 0 )
      {
        v97 = KeGetCurrentThread();
        if ( Handle )
        {
          v10 = ObReferenceObjectByHandle(Handle, 4u, (POBJECT_TYPE)SeTokenObjectType, v97->PreviousMode, &Token, 0LL);
          if ( v10 >= 0 )
          {
            v98 = Token;
            if ( *((_DWORD *)Token + 48) == 2 )
            {
              v10 = PsImpersonateClient(Thread, Token, 0, 0, *((SECURITY_IMPERSONATION_LEVEL *)Token + 49));
              ObfDereferenceObject(v98);
            }
            else
            {
              ObfDereferenceObject(Token);
              v10 = -1073741656;
            }
          }
        }
        else
        {
          PsImpersonateClient(Thread, 0LL, 0, 0, SecurityImpersonation);
        }
        ObfDereferenceObjectWithTag(Thread, 0x79517350u);
        return v10;
      }
      return result;
    }
    return -1073741820;
  }
  switch ( ThreadInformationClass )
  {
    case ThreadPriority:
      if ( (_DWORD)v4 != 4 )
        return -1073741820;
      v125 = *(_DWORD *)ThreadInformation;
      v13 = v125;
      if ( (unsigned int)(v125 - 1) > 0x1E )
        return -1073741811;
      if ( v125 >= 16
        && !(unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))SeCheckPrivilegedObject)(
                               SeIncreaseBasePriorityPrivilege,
                               ThreadHandle,
                               1024LL,
                               v8) )
      {
        return -1073741727;
      }
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ThreadHandle,
                 1024,
                 (__int64)PsThreadType,
                 v8,
                 0x79517350u,
                 &Thread,
                 0LL,
                 0LL);
      if ( result < 0 )
        return result;
      KeSetPriorityThread(Thread, v13);
      goto LABEL_26;
    case ThreadBasePriority:
      if ( (_DWORD)v4 != 4 )
        return -1073741820;
      v15 = *(_DWORD *)ThreadInformation;
      Increment = *(_DWORD *)ThreadInformation;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ThreadHandle,
                 1024,
                 (__int64)PsThreadType,
                 v8,
                 0x79517350u,
                 &Thread,
                 0LL,
                 0LL);
      v109 = result;
      if ( result < 0 )
        return result;
      v16 = Thread;
      Process = Thread->Process;
      v18 = (unsigned int)(v15 + 16);
      if ( (unsigned int)v18 > 0x20 || (v19 = 0x10007C001LL, !_bittest64(&v19, v18)) )
      {
        ServerSiloGlobals = PsGetServerSiloGlobals(0LL);
        if ( v21 != ServerSiloGlobals[110] && HIBYTE(Process[1].ActiveProcessors.Bitmap[13]) != 4 )
        {
          v22 = -1073741811;
          goto LABEL_319;
        }
      }
      v23 = (_DWORD *)Process[1].Affinity.Bitmap[16];
      v118 = v23;
      if ( v23 && (v23[212] & 0x20) != 0 && HIBYTE(Process[1].ActiveProcessors.Bitmap[13]) != 4 )
      {
        v24 = Increment;
        if ( Increment > 0 )
        {
          v16 = Thread;
          v22 = v109;
          goto LABEL_319;
        }
      }
      else
      {
        v24 = Increment;
      }
      v16 = Thread;
      KeSetBasePriorityThread(Thread, v24);
      v22 = v109;
LABEL_319:
      v33 = v16;
      goto LABEL_320;
    case ThreadAffinityMask:
      if ( (_DWORD)v4 != 8 )
        return -1073741820;
      *(_QWORD *)&v148 = *(_QWORD *)ThreadInformation;
      v30 = v148;
      if ( !(_QWORD)v148 )
        return -1073741811;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ThreadHandle,
                 1024,
                 (__int64)PsThreadType,
                 v8,
                 0x79517350u,
                 &Thread,
                 0LL,
                 0LL);
      if ( result < 0 )
        return result;
      v31 = Thread;
      v32 = Thread->Process;
      if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&v32[1].ProfileListHead.Blink) )
      {
        v22 = -1073741811;
        if ( KeSetLegacyAffinityThread((__int64)v31, v30) )
          v22 = 0;
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&v32[1].ProfileListHead.Blink);
        v33 = v31;
      }
      else
      {
        v22 = -1073741558;
        v33 = v31;
      }
      goto LABEL_320;
    case ThreadEnableAlignmentFaultFixup:
      if ( (_DWORD)v4 != 1 )
        return -1073741820;
      v29 = *(_BYTE *)ThreadInformation;
      v113 = *(_BYTE *)ThreadInformation;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ThreadHandle,
                 32,
                 (__int64)PsThreadType,
                 v8,
                 0x79517350u,
                 &Thread,
                 0LL,
                 0LL);
      v109 = result;
      if ( result < 0 )
        return result;
      if ( v29 )
        _interlockedbittestandset((volatile signed __int32 *)&Thread->116 + 1, 2u);
      else
        _interlockedbittestandreset((volatile signed __int32 *)&Thread->116 + 1, 2u);
      goto LABEL_26;
    case ThreadQuerySetWin32StartAddress:
      return -1073741811;
    case ThreadZeroTlsCell:
      if ( (_DWORD)v4 != 4 )
        return -1073741820;
      v44 = *(_DWORD *)ThreadInformation;
      v119 = *(_DWORD *)ThreadInformation;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ThreadHandle,
                 32,
                 (__int64)PsThreadType,
                 v8,
                 0x79517350u,
                 &Thread,
                 0LL,
                 0LL);
      v45 = result;
      v109 = result;
      if ( result < 0 )
        return result;
      v46 = Thread;
      ObfDereferenceObjectWithTag(Thread, 0x79517350u);
      if ( v46 != CurrentThread )
        return -1073741811;
      v47 = v46->Process;
      v116 = (__int64)v47;
      for ( i = PsGetNextProcessThread(v47, 0LL); ; i = PsGetNextProcessThread(v47, v49) )
      {
        Thread = (PKTHREAD)i;
        v49 = (struct _EX_RUNDOWN_REF *)i;
        if ( !i )
          break;
        if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(i + 1720)) )
        {
          Count = v49[30].Count;
          if ( Count )
          {
            v51 = v47[1].ActiveProcessors.Bitmap[7];
            v53 = 0;
            if ( v51 )
            {
              v52 = *(_WORD *)(v51 + 8);
              if ( v52 == 332 || v52 == 452 )
                v53 = 1;
            }
            v112 = v53;
            v54 = Count + 0x2000;
            if ( !v53 )
              v54 = 0LL;
            if ( v44 < 0x40 )
            {
              if ( v51 && ((v59 = *(_WORD *)(v51 + 8), v59 == 332) || v59 == 452) )
              {
                if ( v54 )
                  *(_DWORD *)(v54 + 4LL * v44 + 3600) = 0;
              }
              else
              {
                *(_QWORD *)(Count + 8LL * v44 + 5248) = 0LL;
              }
            }
            else if ( v44 < 0x440 )
            {
              if ( v51 && ((v55 = *(_WORD *)(v51 + 8), v55 == 332) || v55 == 452) )
              {
                if ( v54 )
                {
                  v56 = *(unsigned int *)(v54 + 3988);
                  if ( (_DWORD)v56 )
                    *(_DWORD *)(v56 + 4LL * (v44 - 64)) = 0;
                }
              }
              else
              {
                v57 = *(_QWORD *)(Count + 6016);
                v143 = v57;
                if ( v57 )
                {
                  v58 = v57 + 8LL * (v44 - 64);
                  if ( v58 >= 0x7FFFFFFF0000LL )
                    v58 = 0x7FFFFFFF0000LL;
                  *(_QWORD *)v58 = 0LL;
                }
              }
            }
          }
          ExReleaseRundownProtection_0(v49 + 215);
        }
      }
      return v45;
    case ThreadIdealProcessor:
      if ( (_DWORD)v4 != 4 )
        return -1073741820;
      v126 = *(_DWORD *)ThreadInformation;
      v39 = v126;
      if ( v126 > 0x40 )
        return -1073741811;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ThreadHandle,
                 32,
                 (__int64)PsThreadType,
                 v8,
                 0x79517350u,
                 &Thread,
                 0LL,
                 0LL);
      if ( result < 0 )
        return result;
      v40 = v39;
      v16 = Thread;
      v22 = KeSetIdealProcessorThread(Thread, v40);
      if ( (v16->MiscFlags & 0x400) == 0 )
        PspWriteTebIdealProcessor(CurrentThread, v16);
      goto LABEL_319;
    case ThreadPriorityBoost:
      if ( (_DWORD)v4 != 4 )
        return -1073741820;
      v41 = *(_DWORD *)ThreadInformation;
      v127 = *(_DWORD *)ThreadInformation;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ThreadHandle,
                 1024,
                 (__int64)PsThreadType,
                 v8,
                 0x79517350u,
                 &Thread,
                 0LL,
                 0LL);
      v42 = result;
      if ( result >= 0 )
      {
        LOBYTE(v10) = v41 != 0;
        KeSetDisableBoostThread(Thread, (unsigned int)v10);
        ObfDereferenceObjectWithTag(v43, 0x79517350u);
        return v42;
      }
      return result;
    case ThreadSetTlsArrayAddress:
      return -1073741822;
    case ThreadHideFromDebugger:
      if ( (_DWORD)v4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ThreadHandle,
                 32,
                 (__int64)PsThreadType,
                 v8,
                 0x79517350u,
                 &Thread,
                 0LL,
                 0LL);
      v109 = result;
      if ( result < 0 )
        return result;
      _InterlockedOr((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 4u);
      goto LABEL_76;
    case ThreadBreakOnTermination:
      if ( (_DWORD)v4 != 4 )
        return -1073741820;
      v60 = *(_DWORD *)ThreadInformation;
      v128 = *(_DWORD *)ThreadInformation;
      if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, v8) )
        return -1073741727;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ThreadHandle,
                 32,
                 (__int64)PsThreadType,
                 v8,
                 0x79517350u,
                 &Thread,
                 0LL,
                 0LL);
      v109 = result;
      if ( result < 0 )
        return result;
      if ( v60 )
        _InterlockedOr((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 0x20u);
      else
        _InterlockedAnd((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 0xFFFFFFDF);
      goto LABEL_26;
    case ThreadSwitchLegacyState:
      if ( ThreadHandle != (HANDLE)-2LL )
        return -1073741811;
      result = ObpReferenceObjectByHandleWithTag(
                 0xFFFFFFFFFFFFFFFEuLL,
                 32,
                 (__int64)PsThreadType,
                 v8,
                 0x79517350u,
                 &Thread,
                 0LL,
                 0LL);
      if ( result >= 0 )
      {
        v61 = Thread;
        Thread->NpxState |= MEMORY[0xFFFFF780000003D8] | 3LL;
        ObfDereferenceObjectWithTag(v61, 0x79517350u);
        return 0;
      }
      return result;
    case ThreadIoPriority:
      if ( (((_DWORD)v4 - 4) & 0xFFFFFFFB) != 0 )
        return -1073741820;
      if ( (_DWORD)v4 == 4 )
      {
        v62 = *(_DWORD *)ThreadInformation;
        v129 = *(_DWORD *)ThreadInformation;
        LOBYTE(v63) = 0;
      }
      else
      {
        v144 = *(_QWORD *)ThreadInformation;
        v62 = v144;
        v63 = HIDWORD(v144);
      }
      if ( v62 >= 4 )
        return -1073741811;
      if ( v62 >= 3
        && !(unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))SeCheckPrivilegedObject)(
                               SeIncreaseBasePriorityPrivilege,
                               ThreadHandle,
                               32LL,
                               v8) )
      {
        return -1073741727;
      }
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ThreadHandle,
                 32,
                 (__int64)PsThreadType,
                 v8,
                 0x79517350u,
                 &Thread,
                 0LL,
                 0LL);
      if ( result >= 0 )
      {
        v64 = Thread;
        if ( (_BYTE)v63 == 1 && ((*((_DWORD *)&Thread[1].SwapListEntry + 2) >> 9) & 7) < (int)v62 )
          IoBoostThreadIoPriority((KSPIN_LOCK *)Thread, v62, 0);
        PsSetIoPriorityThread((__int64)v64, v62);
        ObfDereferenceObjectWithTag(v64, 0x79517350u);
        return 0;
      }
      return result;
    case ThreadPagePriority:
      if ( (_DWORD)v4 != 4 )
        return -1073741820;
      v130 = *(_DWORD *)ThreadInformation;
      v65 = v130;
      if ( v130 > (unsigned int)MmGetDefaultPagePriority() || v130 < (unsigned int)MiCreateSystemWsles() )
        return -1073741811;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ThreadHandle,
                 32,
                 (__int64)PsThreadType,
                 v8,
                 0x79517350u,
                 &Thread,
                 0LL,
                 0LL);
      if ( result < 0 )
        return result;
      PsSetPagePriorityThread((__int64)Thread, v65);
      goto LABEL_26;
    case ThreadActualBasePriority:
      if ( (_DWORD)v4 != 4 )
        return -1073741820;
      v25 = *(_DWORD *)ThreadInformation;
      Increment = v25;
      if ( (unsigned int)(v25 - 1) > 0x1E )
        return -1073741811;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ThreadHandle,
                 1024,
                 (__int64)PsThreadType,
                 v8,
                 0x79517350u,
                 &Thread,
                 0LL,
                 0LL);
      v27 = result;
      if ( result >= 0 )
      {
        v28 = Thread;
        if ( HIBYTE(Thread->Process[1].ActiveProcessors.Bitmap[13]) == 4
          || v25 < 16
          || SeSinglePrivilegeCheck(SeIncreaseBasePriorityPrivilege, v8) )
        {
          KeSetActualBasePriorityThread((__int64)v28, (unsigned int)v25, v26);
          ObfDereferenceObjectWithTag(v28, 0x79517350u);
          return v27;
        }
        else
        {
          ObfDereferenceObjectWithTag(v28, 0x79517350u);
          return -1073741727;
        }
      }
      return result;
    case ThreadWow64Context:
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ThreadHandle,
                 16,
                 (__int64)PsThreadType,
                 v8,
                 0x79517350u,
                 &Thread,
                 0LL,
                 0LL);
      if ( result >= 0 )
      {
        v69 = Thread;
        if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&Thread[1].WaitStatus) )
        {
          v70 = PspWow64SetContextThread(v69);
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&v69[1].WaitStatus);
          ObfDereferenceObjectWithTag(v69, 0x79517350u);
          return v70;
        }
        else
        {
          ObfDereferenceObjectWithTag(v69, 0x79517350u);
          return -1073741749;
        }
      }
      return result;
    case ThreadGroupInformation:
      if ( (_DWORD)v4 != 16 )
        return -1073741820;
      v148 = *(_OWORD *)ThreadInformation;
      if ( !KeVerifyGroupAffinity((__int64)&v148, 1) )
        return -1073741811;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ThreadHandle,
                 32,
                 (__int64)PsThreadType,
                 v8,
                 0x79517350u,
                 &Thread,
                 0LL,
                 0LL);
      if ( result < 0 )
        return result;
      v34 = Thread->Process;
      --CurrentThread->KernelApcDisable;
      p_Lock = (signed __int64 *)&v34[1].Header.Lock;
      ExAcquirePushLockSharedEx((ULONG_PTR)&v34[1], 0LL);
      v36 = v34[1].Affinity.Bitmap[16];
      v118 = (PVOID)v36;
      v37 = v36;
      if ( !v36
        || (ExAcquireResourceSharedLite((PERESOURCE)(v36 + 56), 1u), (*(_DWORD *)(v37 + 848) & 0x10) == 0)
        || (v38 = *(_QWORD *)(v37 + 8LL * WORD4(v148) + 624)) != 0 && ((unsigned __int64)v148 & v38) == (_QWORD)v148 )
      {
        KeSetAffinityThread((__int64)Thread, (__int64)&v148);
        v109 = 0;
      }
      else
      {
        v109 = -1073741823;
      }
      if ( v37 )
        ExReleaseResourceLite((PERESOURCE)(v37 + 56));
      if ( _InterlockedCompareExchange64(p_Lock, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(p_Lock);
      KeAbPostRelease((ULONG_PTR)p_Lock);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      goto LABEL_76;
    case ThreadUmsInformation:
      if ( (_DWORD)v4 != 24 )
        return -1073741820;
      v141 = *(_OWORD *)ThreadInformation;
      v142 = *((_QWORD *)ThreadInformation + 2);
      if ( ThreadHandle == (HANDLE)-2LL )
      {
        v71 = CurrentThread;
      }
      else
      {
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)ThreadHandle,
                   32,
                   (__int64)PsThreadType,
                   v8,
                   0x79517350u,
                   &Thread,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        v71 = Thread;
        ObfDereferenceObjectWithTag(Thread, 0x79517350u);
      }
      if ( v71 != CurrentThread )
        return -1073741811;
      if ( (_DWORD)v141 == 1 )
        return PspAttachThreadToUmsCompletionList(v71, (__int64)&v141, v8, v12);
      if ( (_DWORD)v141 == 2 )
        return PspDetachThreadFromUmsCompletionList(v71);
      return -1073741811;
    case ThreadCounterProfiling:
      if ( (_DWORD)v4 != 24 )
        return -1073741820;
      v123 = *(_OWORD *)ThreadInformation;
      v124 = *((_QWORD *)ThreadInformation + 2);
      v66 = v124;
      if ( (v124 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v124 >= 0x7FFFFFFF0000LL )
        v66 = 0x7FFFFFFF0000LL;
      *(_BYTE *)v66 = *(_BYTE *)v66;
      *(_BYTE *)(v66 + 447) = *(_BYTE *)(v66 + 447);
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ThreadHandle,
                 32,
                 (__int64)PsThreadType,
                 v8,
                 0x79517350u,
                 &Thread,
                 0LL,
                 0LL);
      if ( result >= 0 )
      {
        v67 = Thread;
        if ( Thread == KeGetCurrentThread() )
        {
          if ( HIDWORD(v123) )
            v68 = KeEnableProfiling(Thread, DWORD2(v123), v123, v124);
          else
            v68 = KeDisableProfiling((__int64)Thread, v124);
          ObfDereferenceObjectWithTag(v67, 0x79517350u);
          return v68;
        }
        else
        {
          ObfDereferenceObjectWithTag(Thread, 0x79517350u);
          return -1073741637;
        }
      }
      return result;
    case ThreadIdealProcessorEx:
      if ( (_DWORD)v4 != 4 )
        return -1073741820;
      v115 = *(_PROCESSOR_NUMBER *)ThreadInformation;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ThreadHandle,
                 32,
                 (__int64)PsThreadType,
                 v8,
                 0x79517350u,
                 &Thread,
                 0LL,
                 0LL);
      if ( result < 0 )
        return result;
      v16 = Thread;
      v22 = KeSetIdealProcessorThreadByNumber(Thread, &v115, &v115);
      if ( v22 >= 0 )
      {
        if ( (v16->MiscFlags & 0x400) == 0 )
          PspWriteTebIdealProcessor(CurrentThread, v16);
        *(_PROCESSOR_NUMBER *)v5 = v115;
      }
      goto LABEL_319;
    case ThreadCpuAccountingInformation:
      if ( ThreadHandle != (HANDLE)-2LL )
        return -1073741811;
      if ( (_DWORD)v4 != 8 )
        return -1073741820;
      v145 = *(_QWORD *)ThreadInformation;
      if ( v145 )
      {
        result = ObpReferenceObjectByHandleWithTag(
                   v145,
                   2,
                   (__int64)MmSessionObjectType,
                   v8,
                   0x79517350u,
                   Object,
                   0LL,
                   0LL);
        if ( result >= 0 )
        {
          v72 = (struct _LIST_ENTRY *)Object[0];
          v73 = *((_QWORD *)Object[0] + 4);
          if ( v73 )
          {
            if ( KeSetThreadChargeOnlySchedulingGroup((__int64)CurrentThread, v73) )
            {
              CurrentThread[1].ApcState.ApcListHead[1].Flink = v72;
              return 0;
            }
            else
            {
              ObfDereferenceObjectWithTag(v72, 0x79517350u);
              return -1073740714;
            }
          }
          else
          {
            ObfDereferenceObjectWithTag(Object[0], 0x79517350u);
            return -1073740715;
          }
        }
      }
      else if ( KeSetThreadChargeOnlySchedulingGroup((__int64)CurrentThread, 0LL) )
      {
        ObfDereferenceObject(CurrentThread[1].ApcState.ApcListHead[1].Flink);
        CurrentThread[1].ApcState.ApcListHead[1].Flink = 0LL;
        return 0;
      }
      else
      {
        return -1073740713;
      }
      return result;
    case ThreadHeterogeneousCpuPolicy:
      if ( (_DWORD)v4 != 4 )
        return -1073741820;
      v74 = MEMORY[4];
      v131 = MEMORY[4];
      if ( MEMORY[4] > 8u )
        return -1073741811;
      v22 = ObpReferenceObjectByHandleWithTag(
              (ULONG_PTR)ThreadHandle,
              1024,
              (__int64)PsThreadType,
              v8,
              0x79517350u,
              &Thread,
              0LL,
              0LL);
      if ( v22 < 0 )
        return v22;
      KeSetUserHeteroCpuPolicyThread((__int64)Thread, v74);
      goto LABEL_198;
    case ThreadNameInformation:
      v111 = 0;
      v76 = 0LL;
      v117 = 0LL;
      P = 0LL;
      Thread = 0LL;
      v110 = 0;
      if ( (_DWORD)v4 == 16 )
      {
        v22 = ObpReferenceObjectByHandleWithTag(
                (ULONG_PTR)ThreadHandle,
                1024,
                (__int64)PsThreadType,
                v8,
                0x79517350u,
                &Thread,
                0LL,
                0LL);
        v109 = v22;
        if ( v22 < 0 )
          goto LABEL_230;
        v111 = 1;
        if ( v8 )
        {
          if ( v5 >= 0x7FFFFFFF0000LL )
            v5 = 0x7FFFFFFF0000LL;
          v77 = *(_PROCESSOR_NUMBER *)v5;
          LODWORD(v140) = v77;
          v78 = *(_QWORD *)(v5 + 8);
          *((_QWORD *)&v140 + 1) = v78;
          *(_OWORD *)Src = v140;
          if ( v77.Group )
          {
            if ( (v78 & 1) != 0 )
              ExRaiseDatatypeMisalignment();
            v79 = v77.Group + v78;
            if ( v79 > 0x7FFFFFFF0000LL || v79 < v78 )
              MEMORY[0x7FFFFFFF0000] = 0;
          }
          v22 = v109;
          v76 = v117;
        }
        else
        {
          *(_OWORD *)Src = *(_OWORD *)v5;
        }
        v80 = (unsigned __int16)Src[0];
        if ( ((__int64)Src[0] & 1) != 0 || LOWORD(Src[0]) > WORD1(Src[0]) )
        {
          v22 = -1073741811;
        }
        else
        {
          PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, LOWORD(Src[0]) + 16LL, 0x6D4E6854u);
          v76 = PoolWithTag;
          v117 = PoolWithTag;
          if ( PoolWithTag )
          {
            v82 = PoolWithTag + 16;
            v76[1] = v82;
            *(_WORD *)v76 = v80;
            *((_WORD *)v76 + 1) = v80;
            memmove(v82, Src[1], v80);
            --CurrentThread->KernelApcDisable;
            v83 = Thread;
            ExAcquirePushLockExclusiveEx((ULONG_PTR)&Thread[1].WaitBlockList, 0LL);
            v110 = 1;
            P = *(PVOID *)&v83[1].WaitBlockFill11[160];
            *(_QWORD *)&v83[1].WaitBlockFill11[160] = v76;
            v76 = 0LL;
            v117 = 0LL;
            EtwTraceThreadSetName(v83);
            goto LABEL_230;
          }
          v22 = -1073741670;
        }
      }
      else
      {
        v22 = -1073741820;
      }
      v109 = v22;
LABEL_230:
      if ( v110 )
      {
        v84 = Thread;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&Thread[1].WaitBlockList, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&v84[1].WaitBlockList);
        KeAbPostRelease((ULONG_PTR)&v84[1].WaitBlockList);
        KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
        v22 = v109;
        v76 = v117;
      }
      if ( v111 )
        ObfDereferenceObjectWithTag(Thread, 0x79517350u);
      if ( P )
        ExFreePoolWithTag(P, 0x6D4E6854u);
      if ( v76 )
        ExFreePoolWithTag(v76, 0x6D4E6854u);
      return v22;
    case ThreadSelectedCpuSets:
      if ( (v4 & 7) != 0 || (unsigned int)v4 > 0xA0 )
        return -1073741820;
      memmove(v149, ThreadInformation, v4);
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ThreadHandle,
                 1024,
                 (__int64)PsThreadType,
                 v8,
                 0x79517350u,
                 &Thread,
                 0LL,
                 0LL);
      if ( result >= 0 )
      {
        v75 = KeSetSelectedCpuSetsThread((__int64)Thread, (unsigned int)v4 >> 3, v149);
        ObfDereferenceObjectWithTag(Thread, 0x79517350u);
        return v75;
      }
      return result;
    case ThreadDynamicCodePolicyInfo:
      if ( ThreadHandle != (HANDLE)-2LL )
        return -1073741811;
      if ( (_DWORD)v4 != 4 )
        return -1073741820;
      v132 = *(_DWORD *)ThreadInformation;
      result = v132;
      if ( v132 == 1 )
      {
        if ( (CurrentThread->Process[2].UserTime & 0x200) == 0 )
          return -1073741790;
        _InterlockedOr((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x40000u);
        return 0;
      }
      else
      {
        if ( v132 )
          return -1073741811;
        _InterlockedAnd((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0xFFFBFFFF);
      }
      return result;
    case ThreadExplicitCaseSensitivity:
      if ( (_DWORD)v4 != 4 )
        return -1073741820;
      v85 = *(_DWORD *)ThreadInformation;
      v134 = *(_DWORD *)ThreadInformation;
      if ( !v8 )
        goto LABEL_245;
      if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, v8) )
        return -1073741727;
      if ( !RtlTestProtectedAccess(
              (PS_PROTECTION)SBYTE2(CurrentThread->Process[2].ActiveProcessors.Bitmap[0]),
              (PS_PROTECTION)81) )
        return -1073741790;
LABEL_245:
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ThreadHandle,
                 32,
                 (__int64)PsThreadType,
                 v8,
                 0x79517350u,
                 &Thread,
                 0LL,
                 0LL);
      v109 = result;
      if ( result >= 0 )
      {
        if ( v85 )
          _InterlockedOr((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 0x80000u);
        else
          _InterlockedAnd((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 0xFFF7FFFF);
LABEL_76:
        ObfDereferenceObjectWithTag(Thread, 0x79517350u);
        return v109;
      }
      return result;
    case ThreadDbgkWerReportActive:
      if ( (_DWORD)v4 != 4 )
        return -1073741820;
      v86 = *(_DWORD *)ThreadInformation;
      v133 = *(_DWORD *)ThreadInformation;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ThreadHandle,
                 32,
                 (__int64)PsThreadType,
                 v8,
                 0x79517350u,
                 &Thread,
                 0LL,
                 0LL);
      v109 = result;
      if ( result < 0 )
        return result;
      if ( v86 )
        _InterlockedOr((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 0x200000u);
      else
        _InterlockedAnd((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 0xFFDFFFFF);
      goto LABEL_76;
    case ThreadAttachContainer:
      if ( ThreadHandle != (HANDLE)-2LL )
        return -1073741811;
      if ( (_DWORD)v4 != 8 )
        return -1073741820;
      BugCheckParameter1 = *(_QWORD *)ThreadInformation;
      v87 = KeGetCurrentThread();
      if ( BugCheckParameter1 )
      {
        Thread = v87;
        if ( v87[1].WaitBlock[3].WaitListEntry.Blink != (struct _LIST_ENTRY *)-3LL )
          return -1073741811;
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
                   32,
                   (__int64)PsJobType,
                   v8,
                   0x6D497350u,
                   &v118,
                   0LL,
                   0LL);
        if ( result >= 0 )
        {
          v89 = (struct _LIST_ENTRY *)v118;
          if ( (*((_DWORD *)v118 + 327) & 2) == 0 )
          {
LABEL_265:
            ObfDereferenceObjectWithTag(v89, 0x6D497350u);
            return -1073741811;
          }
          v90 = IoThreadToProcess(Thread);
          ProcessSilo = PsGetProcessSilo((__int64)v90);
          Flink = v89;
          if ( ProcessSilo )
          {
            while ( Flink != (struct _LIST_ENTRY *)ProcessSilo )
            {
              Flink = Flink[67].Flink;
              if ( !Flink )
                goto LABEL_265;
            }
          }
          EffectiveServerSilo = PsGetEffectiveServerSilo((__int64)v89);
          if ( PsGetProcessServerSilo((__int64)v90) == EffectiveServerSilo )
          {
            PsAttachSiloToCurrentThread(v89);
            result = 0;
          }
          else
          {
            ObfDereferenceObjectWithTag(v89, 0x6D497350u);
            result = -1073741811;
          }
        }
      }
      else
      {
        if ( v87[1].WaitBlock[3].WaitListEntry.Blink == (struct _LIST_ENTRY *)-3LL )
          return -1073741811;
        v88 = PsAttachSiloToCurrentThread((struct _LIST_ENTRY *)0xFFFFFFFFFFFFFFFDLL);
        ObfDereferenceObjectWithTag(v88, 0x6D497350u);
        result = 0;
      }
      break;
    case ThreadManageWritesToExecutableMemory:
      return -1073741637;
    case ThreadPowerThrottlingState:
      if ( (_DWORD)v4 != 12 )
        return -1073741820;
      v138 = *(_QWORD *)ThreadInformation;
      v94 = *((_DWORD *)ThreadInformation + 2);
      if ( (_DWORD)v138 != 1 || (v138 & 0xFFFFFFFE00000000uLL) != 0 || (~HIDWORD(v138) & v94) != 0 )
        return -1073741811;
      if ( (v138 & 0x100000000LL) != 0 )
        v95 = 2 * ((v94 & 1) == 0) + 1;
      else
        v95 = 0;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ThreadHandle,
                 32,
                 (__int64)PsThreadType,
                 v8,
                 0x79517350u,
                 &Thread,
                 0LL,
                 0LL);
      if ( result < 0 )
        return result;
      PspSetThreadPpmPolicy(Thread, v95);
LABEL_26:
      ObfDereferenceObjectWithTag(Thread, 0x79517350u);
      return 0;
    case ThreadWorkloadClass:
      if ( ThreadHandle != (HANDLE)-2LL || v8 )
        return -1073741790;
      if ( (_DWORD)v4 != 4 )
        return -1073741820;
      v137 = *(_DWORD *)ThreadInformation;
      if ( v137 >= 2 )
        return -1073741811;
      v96 = KeGetCurrentThread();
      *((_DWORD *)&v96[1].SwapListEntry + 3) ^= (*((_DWORD *)&v96[1].SwapListEntry + 3) ^ (v137 << 11)) & 0x800;
      KeUpdateThreadCpuSets((__int64)v96);
      return 0;
    default:
      return -1073741821;
  }
  return result;
}
