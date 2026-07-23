/*
 * XREFs of NtSetInformationThread @ 0x1405F0AF0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetProcessServerSilo @ 0x140006520 (PsGetProcessServerSilo.c)
 *     IoThreadToProcess @ 0x14000E240 (IoThreadToProcess.c)
 *     KeSetPriorityThread @ 0x140010B30 (KeSetPriorityThread.c)
 *     KeSetBasePriorityThread @ 0x140012110 (KeSetBasePriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x140012650 (KeSetActualBasePriorityThread.c)
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x140013C10 (KeSetThreadChargeOnlySchedulingGroup.c)
 *     PspRevertContainerImpersonation @ 0x140036810 (PspRevertContainerImpersonation.c)
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003C730 (ExAcquireResourceSharedLite.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseRundownProtection_0 @ 0x140043820 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1400438A0 (ExAcquireRundownProtection_0.c)
 *     PsImpersonateContainerOfThread @ 0x1400471A0 (PsImpersonateContainerOfThread.c)
 *     PsSetIoPriorityThread @ 0x14007FF38 (PsSetIoPriorityThread.c)
 *     PsSetPagePriorityThread @ 0x140080854 (PsSetPagePriorityThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14008BD80 (PsAttachSiloToCurrentThread.c)
 *     PsGetServerSiloGlobals @ 0x14008D470 (PsGetServerSiloGlobals.c)
 *     MmGetDefaultPagePriority @ 0x140097564 (MmGetDefaultPagePriority.c)
 *     MiCreateSystemWsles @ 0x1400E5550 (MiCreateSystemWsles.c)
 *     PsGetEffectiveServerSilo @ 0x1400E5F40 (PsGetEffectiveServerSilo.c)
 *     IoBoostThreadIoPriority @ 0x1400E61EC (IoBoostThreadIoPriority.c)
 *     KeSetLegacyAffinityThread @ 0x1400F7C30 (KeSetLegacyAffinityThread.c)
 *     KeSetIdealProcessorThread @ 0x140126A00 (KeSetIdealProcessorThread.c)
 *     KeSetIdealProcessorThreadByNumber @ 0x140126A54 (KeSetIdealProcessorThreadByNumber.c)
 *     PspUnlockThreadSecurityExclusive @ 0x14012937C (PspUnlockThreadSecurityExclusive.c)
 *     PspLockThreadSecurityExclusive @ 0x14012D9BC (PspLockThreadSecurityExclusive.c)
 *     KeSetAffinityThread @ 0x14015A184 (KeSetAffinityThread.c)
 *     KeVerifyGroupAffinity @ 0x14015A778 (KeVerifyGroupAffinity.c)
 *     PspUnlockProcessShared @ 0x14015A960 (PspUnlockProcessShared.c)
 *     PspLockProcessShared @ 0x14015B684 (PspLockProcessShared.c)
 *     KeUpdateThreadCpuSets @ 0x1401964C4 (KeUpdateThreadCpuSets.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     KeSetUserHeteroCpuPolicyThread @ 0x1402A4BEC (KeSetUserHeteroCpuPolicyThread.c)
 *     KeDisableProfiling @ 0x1402AC350 (KeDisableProfiling.c)
 *     KeSetSelectedCpuSetsThread @ 0x1402AD280 (KeSetSelectedCpuSetsThread.c)
 *     PsGetProcessSilo @ 0x1403070E0 (PsGetProcessSilo.c)
 *     PspAttachThreadToUmsCompletionList @ 0x140307414 (PspAttachThreadToUmsCompletionList.c)
 *     PspDetachThreadFromUmsCompletionList @ 0x140307584 (PspDetachThreadFromUmsCompletionList.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PspThreadFromTicket @ 0x1405D0800 (PspThreadFromTicket.c)
 *     PsAssignImpersonationToken @ 0x1405DE260 (PsAssignImpersonationToken.c)
 *     PspWriteTebIdealProcessor @ 0x1405E7130 (PspWriteTebIdealProcessor.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1405F0AB0 (ObReferenceObjectByHandleWithTag.c)
 *     RtlTestProtectedAccess @ 0x1406722B0 (RtlTestProtectedAccess.c)
 *     SeSinglePrivilegeCheck @ 0x140672D30 (SeSinglePrivilegeCheck.c)
 *     PsGetNextProcessThread @ 0x1406772C0 (PsGetNextProcessThread.c)
 *     PspWow64SetContextThread @ 0x1406C980C (PspWow64SetContextThread.c)
 *     EtwTraceThreadSetName @ 0x1406CAEA4 (EtwTraceThreadSetName.c)
 *     KeSetDisableBoostThread @ 0x14071E0E4 (KeSetDisableBoostThread.c)
 *     PspSetThreadPpmPolicy @ 0x14071EE00 (PspSetThreadPpmPolicy.c)
 *     SeCheckPrivilegedObject @ 0x140746AB8 (SeCheckPrivilegedObject.c)
 *     KeEnableProfiling @ 0x14087F7E8 (KeEnableProfiling.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913EC0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtSetInformationThread(
        HANDLE ThreadHandle,
        THREADINFOCLASS ThreadInformationClass,
        PVOID ThreadInformation,
        ULONG ThreadInformationLength)
{
  unsigned __int64 v5; // rbx
  HANDLE v6; // r10
  NTSTATUS v7; // edi
  struct _KTHREAD *CurrentThread; // r13
  unsigned __int8 v9; // r12
  unsigned int v10; // r14d
  __int64 v11; // rax
  void *v12; // rbx
  NTSTATUS v13; // esi
  PVOID v14; // rcx
  NTSTATUS result; // eax
  void *v16; // rbx
  NTSTATUS v17; // eax
  NTSTATUS v18; // ebx
  unsigned int v19; // ebx
  void *v20; // r10
  PVOID v21; // rcx
  ULONG v22; // edx
  KPRIORITY v23; // esi
  PVOID v24; // rbx
  __int64 v25; // r8
  unsigned __int64 v26; // rax
  __int64 v27; // rcx
  _DWORD *v28; // rax
  LONG v29; // edx
  PVOID v30; // rbx
  int v31; // ebx
  PVOID v32; // rdi
  _QWORD *v33; // r14
  _PROCESSOR_NUMBER v34; // eax
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // rdx
  unsigned __int16 v37; // bx
  char *PoolWithTag; // rax
  void *v39; // rax
  PVOID v40; // rbx
  unsigned int v41; // r14d
  NTSTATUS v42; // r12d
  struct _KTHREAD *v43; // rbx
  struct _KTHREAD *Process; // rsi
  struct _EX_RUNDOWN_REF *i; // rax
  struct _EX_RUNDOWN_REF *v46; // rbx
  unsigned __int64 Count; // rcx
  _RTL_BALANCED_NODE *Min; // rax
  bool v49; // dl
  unsigned __int64 v50; // r8
  __int64 v51; // rdx
  unsigned __int64 v52; // rax
  __int16 v53; // dx
  __int16 v54; // dx
  __int64 v55; // rdx
  __int16 Right; // dx
  unsigned __int64 v57; // rbx
  unsigned __int64 v58; // rsi
  PVOID v59; // rdi
  KPRIORITY v60; // ebx
  unsigned int v61; // ebx
  UCHAR v62; // dl
  _DWORD *v63; // rbx
  NTSTATUS v64; // edi
  PVOID v65; // rdi
  NTSTATUS v66; // ebx
  __int64 v67; // rbx
  PVOID v68; // r14
  struct _EX_RUNDOWN_REF *v69; // r15
  __int64 v70; // r14
  __int64 v71; // rax
  __int64 v72; // rbx
  PVOID v73; // rsi
  _QWORD *ServerSiloGlobals; // rax
  __int64 v75; // rdx
  LONG v76; // esi
  NTSTATUS v77; // ebx
  PVOID v78; // rcx
  LONG v79; // ebx
  int v80; // edx
  struct _KTHREAD *v81; // rcx
  char v82; // bl
  __int64 v83; // rcx
  unsigned __int64 v84; // rcx
  PVOID v85; // rdi
  NTSTATUS v86; // ebx
  struct _KTHREAD *v87; // rbx
  struct _LIST_ENTRY *v89; // rbx
  __int64 v90; // rdx
  unsigned int v91; // ebx
  int v92; // edi
  LONG v93; // ebx
  PS_PROTECTION *v94; // rax
  LONG v95; // ebx
  struct _KTHREAD *v96; // rax
  struct _LIST_ENTRY *v97; // rax
  struct _LIST_ENTRY *v98; // rdi
  PEPROCESS v99; // rsi
  __int64 ProcessSilo; // rax
  struct _LIST_ENTRY *Flink; // rcx
  __int64 EffectiveServerSilo; // rbx
  PVOID Object; // [rsp+40h] [rbp-228h] BYREF
  NTSTATUS v104; // [rsp+48h] [rbp-220h]
  char v105; // [rsp+4Ch] [rbp-21Ch]
  char v106; // [rsp+4Dh] [rbp-21Bh]
  bool v107; // [rsp+4Eh] [rbp-21Ah]
  char v108; // [rsp+51h] [rbp-217h]
  _PROCESSOR_NUMBER v109; // [rsp+54h] [rbp-214h] BYREF
  char v110; // [rsp+58h] [rbp-210h]
  LONG Increment; // [rsp+5Ch] [rbp-20Ch]
  HANDLE Handle; // [rsp+60h] [rbp-208h]
  _QWORD *v113; // [rsp+68h] [rbp-200h]
  struct _KTHREAD *v114; // [rsp+70h] [rbp-1F8h]
  PVOID v115; // [rsp+78h] [rbp-1F0h] BYREF
  LONG v116; // [rsp+80h] [rbp-1E8h]
  unsigned int v117; // [rsp+84h] [rbp-1E4h]
  PVOID P; // [rsp+88h] [rbp-1E0h]
  __int128 v119; // [rsp+90h] [rbp-1D8h]
  unsigned __int64 v120; // [rsp+A0h] [rbp-1C8h]
  void *v121; // [rsp+A8h] [rbp-1C0h] BYREF
  void *Src[2]; // [rsp+B0h] [rbp-1B8h]
  __int128 v123; // [rsp+C0h] [rbp-1A8h]
  __int128 v124; // [rsp+D0h] [rbp-198h] BYREF
  __int64 v125; // [rsp+E0h] [rbp-188h]
  KPRIORITY v126; // [rsp+E8h] [rbp-180h]
  unsigned int v127; // [rsp+ECh] [rbp-17Ch]
  LONG v128; // [rsp+F0h] [rbp-178h]
  LONG v129; // [rsp+F4h] [rbp-174h]
  LONG v130; // [rsp+F8h] [rbp-170h]
  unsigned int v131; // [rsp+FCh] [rbp-16Ch]
  LONG v132; // [rsp+100h] [rbp-168h]
  LONG v133; // [rsp+104h] [rbp-164h]
  LONG v134; // [rsp+108h] [rbp-160h]
  int v135; // [rsp+10Ch] [rbp-15Ch]
  unsigned __int64 v136; // [rsp+110h] [rbp-158h]
  PVOID v137; // [rsp+118h] [rbp-150h] BYREF
  HANDLE v138; // [rsp+130h] [rbp-138h]
  PVOID v139; // [rsp+138h] [rbp-130h] BYREF
  __int64 v140; // [rsp+140h] [rbp-128h]
  __int64 v141; // [rsp+150h] [rbp-118h]
  HANDLE v142; // [rsp+158h] [rbp-110h]
  void *v143; // [rsp+160h] [rbp-108h]
  __int128 v144; // [rsp+168h] [rbp-100h] BYREF
  char v145[160]; // [rsp+180h] [rbp-E8h] BYREF

  v5 = (unsigned __int64)ThreadInformation;
  v6 = ThreadHandle;
  Handle = ThreadHandle;
  v144 = 0uLL;
  v7 = 0;
  v136 = 0LL;
  v117 = 0;
  v119 = 0uLL;
  v120 = 0LL;
  v109 = 0;
  v108 = 0;
  Src[0] = 0LL;
  Src[1] = 0LL;
  v121 = 0LL;
  v124 = 0uLL;
  v125 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v114 = CurrentThread;
  v9 = CurrentThread->$42514DC6747B59BF81E16C40547B231E::gap0[10];
  if ( v9 )
  {
    if ( ThreadInformationClass >= ThreadSelectedCpuSets
      && ThreadInformationClass < ThreadManageWritesToExecutableMemory
      || ThreadInformationClass < ThreadEnableAlignmentFaultFixup && ThreadInformationClass >= ThreadImpersonationToken )
    {
LABEL_4:
      v10 = 3;
      v11 = 3LL;
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
        case ThreadManageWritesToExecutableMemory:
          v11 = 7LL;
          v10 = 3;
          break;
        case ThreadEnableAlignmentFaultFixup:
        case ThreadCounterProfiling:
          v11 = 0LL;
          v10 = 3;
          break;
        default:
          goto LABEL_4;
      }
    }
    if ( ThreadInformationLength )
    {
      if ( ((unsigned __int64)ThreadInformation & v11) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)ThreadInformation + ThreadInformationLength > 0x7FFFFFFF0000LL
        || (char *)ThreadInformation + ThreadInformationLength < ThreadInformation )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
  }
  else
  {
    v10 = 3;
  }
  if ( ThreadInformationClass == ThreadWorkOnBehalfTicket )
  {
    if ( ThreadHandle == (HANDLE)-2LL )
    {
      if ( ThreadInformationLength == 8 )
      {
        v12 = *(void **)ThreadInformation;
        v121 = *(void **)ThreadInformation;
        v13 = ObReferenceObjectByHandleWithTag(
                (HANDLE)0xFFFFFFFFFFFFFFFELL,
                0x400u,
                (POBJECT_TYPE)PsThreadType,
                v9,
                0x79517350u,
                &Object,
                0LL);
        if ( v13 < 0 )
          return v13;
        if ( v12 )
        {
          v13 = PspThreadFromTicket(&v121, (PETHREAD *)&v139);
          if ( v13 >= 0 )
          {
            PspRevertContainerImpersonation((ULONG_PTR)CurrentThread);
            PsImpersonateContainerOfThread((__int64)v139);
            ObfDereferenceObject(v139);
          }
        }
        else
        {
          PspRevertContainerImpersonation((ULONG_PTR)CurrentThread);
        }
        v14 = Object;
LABEL_24:
        ObfDereferenceObjectWithTag(v14, 0x79517350u);
        return v13;
      }
      return -1073741820;
    }
    return -1073741811;
  }
  if ( ThreadInformationClass == ThreadImpersonationToken )
  {
    if ( ThreadInformationLength != 8 )
      return -1073741820;
    v16 = *(void **)ThreadInformation;
    v143 = *(void **)ThreadInformation;
    result = ObReferenceObjectByHandleWithTag(
               ThreadHandle,
               0x80u,
               (POBJECT_TYPE)PsThreadType,
               v9,
               0x79517350u,
               &Object,
               0LL);
    if ( result >= 0 )
    {
      v17 = PsAssignImpersonationToken((PETHREAD)Object, v16);
LABEL_31:
      v18 = v17;
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      return v18;
    }
    return result;
  }
  switch ( ThreadInformationClass )
  {
    case ThreadPriority:
      if ( ThreadInformationLength != 4 )
        return -1073741820;
      v60 = *(_DWORD *)ThreadInformation;
      v126 = v60;
      if ( (unsigned int)(v60 - 1) > 0x1E )
        return -1073741811;
      if ( v60 < 16 )
        goto LABEL_138;
      if ( !(unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))SeCheckPrivilegedObject)(
                               SeIncreaseBasePriorityPrivilege,
                               ThreadHandle,
                               1024LL,
                               v9) )
        return -1073741727;
      v6 = Handle;
LABEL_138:
      result = ObReferenceObjectByHandleWithTag(v6, 0x400u, (POBJECT_TYPE)PsThreadType, v9, 0x79517350u, &Object, 0LL);
      if ( result < 0 )
        return result;
      KeSetPriorityThread((PKTHREAD)Object, v60);
LABEL_39:
      v21 = Object;
LABEL_40:
      v22 = 2035381072;
      goto LABEL_41;
    case ThreadBasePriority:
      if ( ThreadInformationLength != 4 )
        return -1073741820;
      v23 = *(_DWORD *)ThreadInformation;
      Increment = *(_DWORD *)ThreadInformation;
      result = ObReferenceObjectByHandleWithTag(
                 ThreadHandle,
                 0x400u,
                 (POBJECT_TYPE)PsThreadType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      v104 = result;
      if ( result < 0 )
        return result;
      v24 = Object;
      v25 = *((_QWORD *)Object + 68);
      v26 = (unsigned int)(v23 + 16);
      if ( (unsigned int)v26 > 0x20 || (v27 = 0x10007C001LL, !_bittest64(&v27, v26)) )
      {
        ServerSiloGlobals = PsGetServerSiloGlobals(0LL);
        if ( v75 != ServerSiloGlobals[110] && *(_BYTE *)(v25 + 1119) != 4 )
        {
          v13 = -1073741811;
          v14 = v24;
          goto LABEL_24;
        }
      }
      v28 = *(_DWORD **)(v25 + 952);
      v115 = v28;
      if ( v28 && (v28[212] & 0x20) != 0 && *(_BYTE *)(v25 + 1119) != 4 )
      {
        v29 = Increment;
        if ( Increment > 0 )
        {
          v30 = Object;
          goto LABEL_50;
        }
      }
      else
      {
        v29 = Increment;
      }
      v30 = Object;
      KeSetBasePriorityThread((PKTHREAD)Object, v29);
LABEL_50:
      v13 = v104;
      v14 = v30;
      goto LABEL_24;
    case ThreadAffinityMask:
      if ( ThreadInformationLength != 8 )
        return -1073741820;
      v67 = *(_QWORD *)ThreadInformation;
      *(_QWORD *)&v144 = v67;
      if ( !v67 )
        return -1073741811;
      result = ObReferenceObjectByHandleWithTag(
                 ThreadHandle,
                 0x400u,
                 (POBJECT_TYPE)PsThreadType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result >= 0 )
      {
        v68 = Object;
        v69 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)Object + 68);
        if ( ExAcquireRundownProtection_0(v69 + 96) )
        {
          if ( !KeSetLegacyAffinityThread((__int64)v68, v67) )
            v7 = -1073741811;
          ExReleaseRundownProtection_0(v69 + 96);
        }
        else
        {
          v7 = -1073741558;
        }
        ObfDereferenceObjectWithTag(v68, 0x79517350u);
        return v7;
      }
      return result;
    case ThreadEnableAlignmentFaultFixup:
      if ( ThreadInformationLength != 1 )
        return -1073741820;
      v82 = *(_BYTE *)ThreadInformation;
      v110 = *(_BYTE *)ThreadInformation;
      result = ObReferenceObjectByHandleWithTag(
                 ThreadHandle,
                 0x20u,
                 (POBJECT_TYPE)PsThreadType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      v104 = result;
      if ( result < 0 )
        return result;
      if ( v82 )
        _interlockedbittestandset((volatile signed __int32 *)Object + 30, 2u);
      else
        _interlockedbittestandreset((volatile signed __int32 *)Object + 30, 2u);
      goto LABEL_39;
    case ThreadQuerySetWin32StartAddress:
      return -1073741811;
    case ThreadZeroTlsCell:
      if ( ThreadInformationLength != 4 )
        return -1073741820;
      v41 = *(_DWORD *)ThreadInformation;
      v116 = *(_DWORD *)ThreadInformation;
      result = ObReferenceObjectByHandleWithTag(
                 ThreadHandle,
                 0x20u,
                 (POBJECT_TYPE)PsThreadType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      v42 = result;
      v104 = result;
      if ( result < 0 )
        return result;
      v43 = (struct _KTHREAD *)Object;
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      if ( v43 != CurrentThread )
        return -1073741811;
      Process = (struct _KTHREAD *)v43->Process;
      v114 = Process;
      for ( i = (struct _EX_RUNDOWN_REF *)PsGetNextProcessThread(Process, 0LL);
            ;
            i = (struct _EX_RUNDOWN_REF *)PsGetNextProcessThread(Process, v46) )
      {
        Object = i;
        v46 = i;
        if ( !i )
          break;
        if ( ExAcquireRundownProtection_0(i + 217) )
        {
          Count = v46[30].Count;
          if ( Count )
          {
            Min = Process->LockEntries[2].WaiterTree.Min;
            v49 = 0;
            if ( Min )
            {
              Right = (__int16)Min->Right;
              if ( Right == 332 || Right == 452 )
                v49 = 1;
            }
            v107 = v49;
            v50 = Count + 0x2000;
            if ( !v49 )
              v50 = 0LL;
            if ( v41 >= 0x40 )
            {
              if ( v41 < 0x440 )
              {
                if ( Min && ((v54 = (__int16)Min->Right, v54 == 332) || v54 == 452) )
                {
                  if ( v50 )
                  {
                    v55 = *(unsigned int *)(v50 + 3988);
                    if ( (_DWORD)v55 )
                      *(_DWORD *)(v55 + 4LL * (v41 - 64)) = 0;
                  }
                }
                else
                {
                  v51 = *(_QWORD *)(Count + 6016);
                  v141 = v51;
                  if ( v51 )
                  {
                    v52 = v51 + 8LL * (v41 - 64);
                    if ( v52 >= 0x7FFFFFFF0000LL )
                      v52 = 0x7FFFFFFF0000LL;
                    *(_QWORD *)v52 = 0LL;
                  }
                }
              }
            }
            else if ( Min && ((v53 = (__int16)Min->Right, v53 == 332) || v53 == 452) )
            {
              if ( v50 )
                *(_DWORD *)(v50 + 4LL * v41 + 3600) = 0;
            }
            else
            {
              *(_QWORD *)(Count + 8LL * v41 + 5248) = 0LL;
            }
          }
          ExReleaseRundownProtection_0(v46 + 217);
        }
      }
      return v42;
    case ThreadIdealProcessor:
      if ( ThreadInformationLength != 4 )
        return -1073741820;
      v61 = *(_DWORD *)ThreadInformation;
      v127 = v61;
      if ( v61 > 0x40 )
        return -1073741811;
      result = ObReferenceObjectByHandleWithTag(
                 ThreadHandle,
                 0x20u,
                 (POBJECT_TYPE)PsThreadType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result >= 0 )
      {
        v62 = v61;
        v63 = Object;
        v64 = KeSetIdealProcessorThread((PKTHREAD)Object, v62);
        if ( (v63[29] & 0x400) == 0 )
          PspWriteTebIdealProcessor((__int64)CurrentThread, (__int64)v63);
        ObfDereferenceObjectWithTag(v63, 0x79517350u);
        return v64;
      }
      return result;
    case ThreadPriorityBoost:
      if ( ThreadInformationLength != 4 )
        return -1073741820;
      v76 = *(_DWORD *)ThreadInformation;
      v128 = *(_DWORD *)ThreadInformation;
      result = ObReferenceObjectByHandleWithTag(
                 ThreadHandle,
                 0x400u,
                 (POBJECT_TYPE)PsThreadType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      v77 = result;
      if ( result >= 0 )
      {
        KeSetDisableBoostThread(Object, v76 != 0);
        ObfDereferenceObjectWithTag(v78, 0x79517350u);
        return v77;
      }
      return result;
    case ThreadSetTlsArrayAddress:
      return -1073741822;
    case ThreadHideFromDebugger:
      if ( ThreadInformationLength )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ThreadHandle,
                 0x20u,
                 (POBJECT_TYPE)PsThreadType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      v104 = result;
      if ( result < 0 )
        return result;
      _InterlockedOr((volatile signed __int32 *)Object + 440, 4u);
      goto LABEL_222;
    case ThreadBreakOnTermination:
      if ( ThreadInformationLength != 4 )
        return -1073741820;
      v79 = *(_DWORD *)ThreadInformation;
      v129 = *(_DWORD *)ThreadInformation;
      if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, v9) )
        return -1073741727;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x20u,
                 (POBJECT_TYPE)PsThreadType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      v104 = result;
      if ( result < 0 )
        return result;
      if ( v79 )
        _InterlockedOr((volatile signed __int32 *)Object + 440, 0x20u);
      else
        _InterlockedAnd((volatile signed __int32 *)Object + 440, 0xFFFFFFDF);
      goto LABEL_39;
    case ThreadSwitchLegacyState:
      if ( ThreadHandle != (HANDLE)-2LL )
        return -1073741811;
      result = ObReferenceObjectByHandleWithTag(
                 (HANDLE)0xFFFFFFFFFFFFFFFELL,
                 0x20u,
                 (POBJECT_TYPE)PsThreadType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v21 = Object;
      *((_QWORD *)Object + 74) |= MEMORY[0xFFFFF780000003D8] | 3LL;
      goto LABEL_40;
    case ThreadIoPriority:
      if ( ((ThreadInformationLength - 4) & 0xFFFFFFFB) != 0 )
        return -1073741820;
      if ( ThreadInformationLength == 4 )
      {
        LODWORD(v57) = *(_DWORD *)ThreadInformation;
        v130 = *(_DWORD *)ThreadInformation;
        LOBYTE(v58) = 0;
      }
      else
      {
        v57 = *(_QWORD *)ThreadInformation;
        v136 = v57;
        v58 = HIDWORD(v57);
      }
      if ( (unsigned int)v57 >= 4 )
        return -1073741811;
      if ( (unsigned int)v57 < 3 )
        goto LABEL_132;
      if ( !(unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))SeCheckPrivilegedObject)(
                               SeIncreaseBasePriorityPrivilege,
                               ThreadHandle,
                               32LL,
                               v9) )
        return -1073741727;
      v6 = Handle;
LABEL_132:
      result = ObReferenceObjectByHandleWithTag(v6, 0x20u, (POBJECT_TYPE)PsThreadType, v9, 0x79517350u, &Object, 0LL);
      if ( result >= 0 )
      {
        v59 = Object;
        if ( (_BYTE)v58 == 1 && ((*((_DWORD *)Object + 440) >> 9) & 7) < (int)v57 )
          IoBoostThreadIoPriority((KSPIN_LOCK *)Object, v57, 0);
        PsSetIoPriorityThread((__int64)v59, v57);
        ObfDereferenceObjectWithTag(v59, 0x79517350u);
        return 0;
      }
      return result;
    case ThreadPagePriority:
      if ( ThreadInformationLength != 4 )
        return -1073741820;
      v19 = *(_DWORD *)ThreadInformation;
      v117 = v19;
      if ( v19 > (unsigned int)MmGetDefaultPagePriority() || v19 < (unsigned int)MiCreateSystemWsles() )
        return -1073741811;
      result = ObReferenceObjectByHandleWithTag(v20, 0x20u, (POBJECT_TYPE)PsThreadType, v9, 0x79517350u, &Object, 0LL);
      if ( result < 0 )
        return result;
      PsSetPagePriorityThread((__int64)Object, v19);
      goto LABEL_39;
    case ThreadActualBasePriority:
      if ( ThreadInformationLength != 4 )
        return -1073741820;
      v31 = *(_DWORD *)ThreadInformation;
      Increment = v31;
      if ( (unsigned int)(v31 - 1) > 0x1E )
        return -1073741811;
      result = ObReferenceObjectByHandleWithTag(
                 ThreadHandle,
                 0x400u,
                 (POBJECT_TYPE)PsThreadType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      v13 = result;
      if ( result < 0 )
        return result;
      v32 = Object;
      if ( v31 < 16
        || *(_BYTE *)(*((_QWORD *)Object + 68) + 1119LL) == 4
        || SeSinglePrivilegeCheck(SeIncreaseBasePriorityPrivilege, v9) )
      {
        KeSetActualBasePriorityThread((__int64)v32, (unsigned int)v31);
      }
      else
      {
        v13 = -1073741727;
      }
LABEL_56:
      v14 = v32;
      goto LABEL_24;
    case ThreadWow64Context:
      result = ObReferenceObjectByHandleWithTag(
                 ThreadHandle,
                 0x10u,
                 (POBJECT_TYPE)PsThreadType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result >= 0 )
      {
        v65 = Object;
        if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 217) )
        {
          v66 = PspWow64SetContextThread((PETHREAD)v65);
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)v65 + 217);
          ObfDereferenceObjectWithTag(v65, 0x79517350u);
          return v66;
        }
        else
        {
          ObfDereferenceObjectWithTag(v65, 0x79517350u);
          return -1073741749;
        }
      }
      return result;
    case ThreadGroupInformation:
      if ( ThreadInformationLength != 16 )
        return -1073741820;
      v144 = *(_OWORD *)ThreadInformation;
      if ( !KeVerifyGroupAffinity((__int64)&v144, 1) )
        return -1073741811;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x20u,
                 (POBJECT_TYPE)PsThreadType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result >= 0 )
      {
        v70 = *((_QWORD *)Object + 68);
        PspLockProcessShared(v70, (__int64)CurrentThread);
        v71 = *(_QWORD *)(v70 + 952);
        v115 = (PVOID)v71;
        v72 = v71;
        if ( !v71
          || (ExAcquireResourceSharedLite((PERESOURCE)(v71 + 56), 1u), (*(_DWORD *)(v72 + 848) & 0x10) == 0)
          || (v83 = *(_QWORD *)(v72 + 8LL * WORD4(v144) + 624)) != 0 && ((unsigned __int64)v144 & v83) == (_QWORD)v144 )
        {
          v73 = Object;
          KeSetAffinityThread((__int64)Object, (__int64)&v144);
        }
        else
        {
          v7 = -1073741823;
          v73 = Object;
        }
        if ( v72 )
          ExReleaseResourceLite((PERESOURCE)(v72 + 56));
        PspUnlockProcessShared(v70, (__int64)CurrentThread);
        ObfDereferenceObjectWithTag(v73, 0x79517350u);
        return v7;
      }
      return result;
    case ThreadUmsInformation:
      if ( ThreadInformationLength != 24 )
        return -1073741820;
      v124 = *(_OWORD *)ThreadInformation;
      v125 = *((_QWORD *)ThreadInformation + 2);
      if ( ThreadHandle == (HANDLE)-2LL )
      {
        v87 = CurrentThread;
      }
      else
      {
        result = ObReferenceObjectByHandleWithTag(
                   ThreadHandle,
                   0x20u,
                   (POBJECT_TYPE)PsThreadType,
                   v9,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        v87 = (struct _KTHREAD *)Object;
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
      }
      if ( v87 != CurrentThread )
        return -1073741811;
      if ( (_DWORD)v124 == 1 )
        return PspAttachThreadToUmsCompletionList(v87, (__int64)&v124, v9);
      if ( (_DWORD)v124 != 2 )
        return -1073741811;
      return PspDetachThreadFromUmsCompletionList(v87);
    case ThreadCounterProfiling:
      if ( ThreadInformationLength != 24 )
        return -1073741820;
      v119 = *(_OWORD *)ThreadInformation;
      v120 = *((_QWORD *)ThreadInformation + 2);
      v84 = v120;
      if ( (v120 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v120 >= 0x7FFFFFFF0000LL )
        v84 = 0x7FFFFFFF0000LL;
      *(_BYTE *)v84 = *(_BYTE *)v84;
      *(_BYTE *)(v84 + 447) = *(_BYTE *)(v84 + 447);
      result = ObReferenceObjectByHandleWithTag(v6, 0x20u, (POBJECT_TYPE)PsThreadType, v9, 0x79517350u, &Object, 0LL);
      if ( result >= 0 )
      {
        v85 = Object;
        if ( Object == KeGetCurrentThread() )
        {
          if ( HIDWORD(v119) )
            v86 = KeEnableProfiling(Object, DWORD2(v119), v119, v120);
          else
            v86 = KeDisableProfiling((__int64)Object, v120);
        }
        else
        {
          v86 = -1073741637;
        }
        ObfDereferenceObjectWithTag(v85, 0x79517350u);
        return v86;
      }
      return result;
    case ThreadIdealProcessorEx:
      if ( ThreadInformationLength != 4 )
        return -1073741820;
      v109 = *(_PROCESSOR_NUMBER *)ThreadInformation;
      result = ObReferenceObjectByHandleWithTag(
                 ThreadHandle,
                 0x20u,
                 (POBJECT_TYPE)PsThreadType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v32 = Object;
      v13 = KeSetIdealProcessorThreadByNumber((struct _KTHREAD *)Object, &v109, &v109);
      if ( v13 >= 0 )
      {
        if ( (*((_DWORD *)v32 + 29) & 0x400) == 0 )
          PspWriteTebIdealProcessor((__int64)CurrentThread, (__int64)v32);
        *(_PROCESSOR_NUMBER *)v5 = v109;
      }
      goto LABEL_56;
    case ThreadCpuAccountingInformation:
      if ( ThreadHandle != (HANDLE)-2LL )
        return -1073741811;
      if ( ThreadInformationLength != 8 )
        return -1073741820;
      v142 = *(HANDLE *)ThreadInformation;
      if ( v142 )
      {
        result = ObReferenceObjectByHandleWithTag(v142, 2u, MmSessionObjectType, v9, 0x79517350u, &v137, 0LL);
        if ( result < 0 )
          return result;
        v89 = (struct _LIST_ENTRY *)v137;
        v90 = *((_QWORD *)v137 + 4);
        if ( !v90 )
        {
          ObfDereferenceObjectWithTag(v137, 0x79517350u);
          return -1073740715;
        }
        if ( !KeSetThreadChargeOnlySchedulingGroup((__int64)CurrentThread, v90) )
        {
          ObfDereferenceObjectWithTag(v89, 0x79517350u);
          return -1073740714;
        }
        CurrentThread[1].ApcState.ApcListHead[1].Flink = v89;
      }
      else
      {
        if ( !KeSetThreadChargeOnlySchedulingGroup((__int64)CurrentThread, 0LL) )
          return -1073740713;
        ObfDereferenceObject(CurrentThread[1].ApcState.ApcListHead[1].Flink);
        CurrentThread[1].ApcState.ApcListHead[1].Flink = 0LL;
      }
      return 0;
    case ThreadHeterogeneousCpuPolicy:
      if ( ThreadInformationLength != 4 )
        return -1073741820;
      v91 = MEMORY[4];
      v135 = MEMORY[4];
      if ( MEMORY[4] > 8u )
        return -1073741811;
      v92 = ObReferenceObjectByHandleWithTag(
              ThreadHandle,
              0x400u,
              (POBJECT_TYPE)PsThreadType,
              v9,
              0x79517350u,
              &Object,
              0LL);
      if ( v92 >= 0 )
      {
        KeSetUserHeteroCpuPolicyThread((__int64)Object, v91);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
      }
      return v92;
    case ThreadNameInformation:
      v106 = 0;
      v33 = 0LL;
      v113 = 0LL;
      P = 0LL;
      Object = 0LL;
      v105 = 0;
      if ( ThreadInformationLength == 16 )
      {
        v13 = ObReferenceObjectByHandleWithTag(
                ThreadHandle,
                0x400u,
                (POBJECT_TYPE)PsThreadType,
                v9,
                0x79517350u,
                &Object,
                0LL);
        v104 = v13;
        if ( v13 < 0 )
          goto LABEL_80;
        v106 = 1;
        if ( v9 )
        {
          v123 = 0uLL;
          if ( v5 >= 0x7FFFFFFF0000LL )
            v5 = 0x7FFFFFFF0000LL;
          v34 = *(_PROCESSOR_NUMBER *)v5;
          LODWORD(v123) = v34;
          v35 = *(_QWORD *)(v5 + 8);
          *((_QWORD *)&v123 + 1) = v35;
          *(_OWORD *)Src = v123;
          if ( v34.Group )
          {
            if ( (v35 & 1) != 0 )
              ExRaiseDatatypeMisalignment();
            v36 = v34.Group + v35;
            if ( v36 > 0x7FFFFFFF0000LL || v36 < v35 )
              MEMORY[0x7FFFFFFF0000] = 0;
          }
          v13 = v104;
          v33 = v113;
        }
        else
        {
          *(_OWORD *)Src = *(_OWORD *)v5;
        }
        v37 = (unsigned __int16)Src[0];
        if ( ((__int64)Src[0] & 1) != 0 || LOWORD(Src[0]) > WORD1(Src[0]) )
        {
          v13 = -1073741811;
        }
        else
        {
          PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, LOWORD(Src[0]) + 16LL, 0x6D4E6854u);
          v33 = PoolWithTag;
          v113 = PoolWithTag;
          if ( PoolWithTag )
          {
            v39 = PoolWithTag + 16;
            v33[1] = v39;
            *(_WORD *)v33 = v37;
            *((_WORD *)v33 + 1) = v37;
            memmove(v39, Src[1], v37);
            v40 = Object;
            PspLockThreadSecurityExclusive((__int64)Object, (__int64)CurrentThread);
            v105 = 1;
            P = (PVOID)*((_QWORD *)v40 + 252);
            *((_QWORD *)v40 + 252) = v33;
            v33 = 0LL;
            v113 = 0LL;
            EtwTraceThreadSetName(v40);
            goto LABEL_80;
          }
          v13 = -1073741670;
        }
      }
      else
      {
        v13 = -1073741820;
      }
      v104 = v13;
LABEL_80:
      if ( v105 )
        PspUnlockThreadSecurityExclusive((__int64)Object, (__int64)CurrentThread);
      if ( v106 )
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
      if ( P )
        ExFreePoolWithTag(P, 0x6D4E6854u);
      if ( v33 )
        ExFreePoolWithTag(v33, 0x6D4E6854u);
      return v13;
    case ThreadSelectedCpuSets:
      if ( (ThreadInformationLength & 7) != 0 || ThreadInformationLength > 0xA0 )
        return -1073741820;
      memmove(v145, ThreadInformation, ThreadInformationLength);
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x400u,
                 (POBJECT_TYPE)PsThreadType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v17 = KeSetSelectedCpuSetsThread((__int64)Object, ThreadInformationLength >> 3, v145);
      goto LABEL_31;
    case ThreadDynamicCodePolicyInfo:
      if ( ThreadHandle != (HANDLE)-2LL )
        return -1073741811;
      if ( ThreadInformationLength != 4 )
        return -1073741820;
      v134 = *(_DWORD *)ThreadInformation;
      if ( v134 == 1 )
      {
        if ( (*(_DWORD *)&CurrentThread->Process[2].Spare2[7] & 0x200) != 0 )
        {
          _InterlockedOr((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x40000u);
          return 0;
        }
        return -1073741790;
      }
      if ( v134 )
        return -1073741811;
      _InterlockedAnd((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0xFFFBFFFF);
      return 0;
    case ThreadExplicitCaseSensitivity:
      if ( ThreadInformationLength != 4 )
        return -1073741820;
      v93 = *(_DWORD *)ThreadInformation;
      v133 = *(_DWORD *)ThreadInformation;
      if ( !v9 )
        goto LABEL_291;
      if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, v9) )
        return -1073741727;
      v94 = (PS_PROTECTION *)CurrentThread->Process;
      v108 = 81;
      if ( !RtlTestProtectedAccess(v94[1786], (PS_PROTECTION)81) )
        return -1073741790;
      v6 = Handle;
LABEL_291:
      result = ObReferenceObjectByHandleWithTag(v6, 0x20u, (POBJECT_TYPE)PsThreadType, v9, 0x79517350u, &Object, 0LL);
      v104 = result;
      if ( result >= 0 )
      {
        if ( v93 )
          _InterlockedOr((volatile signed __int32 *)Object + 440, 0x80000u);
        else
          _InterlockedAnd((volatile signed __int32 *)Object + 440, 0xFFF7FFFF);
LABEL_222:
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return v104;
      }
      return result;
    case ThreadDbgkWerReportActive:
      if ( ThreadInformationLength != 4 )
        return -1073741820;
      v95 = *(_DWORD *)ThreadInformation;
      v132 = *(_DWORD *)ThreadInformation;
      result = ObReferenceObjectByHandleWithTag(
                 ThreadHandle,
                 0x20u,
                 (POBJECT_TYPE)PsThreadType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      v104 = result;
      if ( result < 0 )
        return result;
      if ( v95 )
        _InterlockedOr((volatile signed __int32 *)Object + 440, 0x200000u);
      else
        _InterlockedAnd((volatile signed __int32 *)Object + 440, 0xFFDFFFFF);
      goto LABEL_222;
    case ThreadAttachContainer:
      if ( ThreadHandle != (HANDLE)-2LL )
        return -1073741811;
      if ( ThreadInformationLength != 8 )
        return -1073741820;
      v138 = *(HANDLE *)ThreadInformation;
      v96 = KeGetCurrentThread();
      if ( !v138 )
      {
        if ( v96[1].WaitBlock[3].WaitListEntry.Blink == (struct _LIST_ENTRY *)-3LL )
          return -1073741811;
        v97 = PsAttachSiloToCurrentThread((struct _LIST_ENTRY *)0xFFFFFFFFFFFFFFFDLL);
        v22 = 1833530192;
        v21 = v97;
LABEL_41:
        ObfDereferenceObjectWithTag(v21, v22);
        return 0;
      }
      Object = v96;
      if ( v96[1].WaitBlock[3].WaitListEntry.Blink != (struct _LIST_ENTRY *)-3LL )
        return -1073741811;
      result = ObReferenceObjectByHandleWithTag(v138, 0x20u, (POBJECT_TYPE)PsJobType, v9, 0x6D497350u, &v115, 0LL);
      if ( result >= 0 )
      {
        v98 = (struct _LIST_ENTRY *)v115;
        if ( (*((_DWORD *)v115 + 327) & 2) == 0 )
        {
LABEL_310:
          ObfDereferenceObjectWithTag(v98, 0x6D497350u);
          return -1073741811;
        }
        v99 = IoThreadToProcess((PETHREAD)Object);
        ProcessSilo = PsGetProcessSilo((__int64)v99);
        Flink = v98;
        if ( ProcessSilo )
        {
          while ( Flink != (struct _LIST_ENTRY *)ProcessSilo )
          {
            Flink = Flink[67].Flink;
            if ( !Flink )
              goto LABEL_310;
          }
        }
        EffectiveServerSilo = PsGetEffectiveServerSilo((__int64)v98);
        if ( PsGetProcessServerSilo((__int64)v99) != EffectiveServerSilo )
        {
          ObfDereferenceObjectWithTag(v98, 0x6D497350u);
          return -1073741811;
        }
        PsAttachSiloToCurrentThread(v98);
        return 0;
      }
      return result;
    case ThreadManageWritesToExecutableMemory:
      return -1073741637;
    case ThreadPowerThrottlingState:
      if ( ThreadInformationLength != 12 )
        return -1073741820;
      v140 = *(_QWORD *)ThreadInformation;
      v80 = *((_DWORD *)ThreadInformation + 2);
      if ( (_DWORD)v140 != 1 || (v140 & 0xFFFFFFFE00000000uLL) != 0 || (~HIDWORD(v140) & v80) != 0 )
        return -1073741811;
      if ( (v140 & 0x100000000LL) != 0 )
      {
        if ( (v80 & 1) != 0 )
          v10 = 1;
      }
      else
      {
        v10 = 0;
      }
      result = ObReferenceObjectByHandleWithTag(
                 ThreadHandle,
                 0x20u,
                 (POBJECT_TYPE)PsThreadType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      PspSetThreadPpmPolicy(Object, v10);
      goto LABEL_39;
    case ThreadWorkloadClass:
      if ( ThreadHandle != (HANDLE)-2LL || v9 )
        return -1073741790;
      if ( ThreadInformationLength != 4 )
        return -1073741820;
      v131 = *(_DWORD *)ThreadInformation;
      if ( v131 >= 2 )
        return -1073741811;
      v81 = KeGetCurrentThread();
      *((_DWORD *)&v81[1].SwapListEntry + 3) ^= (*((_DWORD *)&v81[1].SwapListEntry + 3) ^ (v131 << 11)) & 0x800;
      KeUpdateThreadCpuSets((__int64)v81);
      return 0;
    default:
      return -1073741821;
  }
}
