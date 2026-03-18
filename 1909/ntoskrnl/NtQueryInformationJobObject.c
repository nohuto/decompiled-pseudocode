/*
 * XREFs of NtQueryInformationJobObject @ 0x140613C40
 * Callers:
 *     <none>
 * Callees:
 *     PsGetServerSiloServiceSessionId @ 0x140002320 (PsGetServerSiloServiceSessionId.c)
 *     PsIsHostSilo @ 0x14000A9B0 (PsIsHostSilo.c)
 *     ObfReferenceObjectWithTag @ 0x14000D8E0 (ObfReferenceObjectWithTag.c)
 *     PsGetHostSilo @ 0x140015DF0 (PsGetHostSilo.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     PsGetServerSiloGlobals @ 0x1400C9B10 (PsGetServerSiloGlobals.c)
 *     KeIsSingleGroupAffinityEx @ 0x140131B10 (KeIsSingleGroupAffinityEx.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     PspGetJobSilo @ 0x1403066EC (PspGetJobSilo.c)
 *     PspIsSiloInServerSilo @ 0x1403067A0 (PspIsSiloInServerSilo.c)
 *     PsGetJobServerSilo @ 0x140307690 (PsGetJobServerSilo.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405FB4F0 (ObpReferenceObjectByHandleWithTag.c)
 *     PspQueryJobHierarchyAccountingInformation @ 0x14061251C (PspQueryJobHierarchyAccountingInformation.c)
 *     PspUnlockJob @ 0x140613420 (PspUnlockJob.c)
 *     PspLockJobExclusive @ 0x140613460 (PspLockJobExclusive.c)
 *     PspLockJobShared @ 0x140613488 (PspLockJobShared.c)
 *     PspUnlockJobMemoryLimitsShared @ 0x140613614 (PspUnlockJobMemoryLimitsShared.c)
 *     PspLockJobMemoryLimitsShared @ 0x1406136C0 (PspLockJobMemoryLimitsShared.c)
 *     PspRateControlLimitFlag @ 0x140614E80 (PspRateControlLimitFlag.c)
 *     PspUnlockJobListShared @ 0x140615440 (PspUnlockJobListShared.c)
 *     PspNotificationLimitRateControlToleranceIntervalField @ 0x140616E98 (PspNotificationLimitRateControlToleranceIntervalField.c)
 *     PspNotificationLimitRateControlToleranceField @ 0x140616EC0 (PspNotificationLimitRateControlToleranceField.c)
 *     PspQueryRateControlHistory @ 0x140616FFC (PspQueryRateControlHistory.c)
 *     PspLimitViolationRateControlToleranceLimitField @ 0x14061723C (PspLimitViolationRateControlToleranceLimitField.c)
 *     PspQueryJobHierarchyProcessIdList @ 0x1406172E4 (PspQueryJobHierarchyProcessIdList.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1406173EC (PspAllocateAndQueryNotificationChannel.c)
 *     PspQueryJobIoAttribution @ 0x14068AE20 (PspQueryJobIoAttribution.c)
 *     PspGetJobLimitInformationValidFlags @ 0x1406E5324 (PspGetJobLimitInformationValidFlags.c)
 *     PsGetParentSilo @ 0x1408C43A0 (PsGetParentSilo.c)
 *     PspQueryJobHierarchyInterferenceCount @ 0x1408C766C (PspQueryJobHierarchyInterferenceCount.c)
 *     EtwTraceJobSetQuery @ 0x1408F3B3C (EtwTraceJobSetQuery.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913920 (ExRaiseDatatypeMisalignment.c)
 *     ObGetSiloRootDirectoryPath @ 0x1409442CC (ObGetSiloRootDirectoryPath.c)
 */

NTSTATUS __stdcall NtQueryInformationJobObject(
        HANDLE JobHandle,
        JOBOBJECTINFOCLASS JobInformationClass,
        PVOID JobInformation,
        ULONG JobInformationLength,
        PULONG ReturnLength)
{
  __int64 v5; // rbx
  __int32 v8; // edx
  unsigned int v9; // r14d
  int v10; // r15d
  struct _KTHREAD *CurrentThread; // r9
  char PreviousMode; // r10
  __int64 v13; // rcx
  NTSTATUS result; // eax
  __int64 v15; // rbx
  bool *v16; // r12
  NTSTATUS JobIoAttribution; // esi
  PULONG v18; // r15
  PVOID v19; // r13
  bool v20; // zf
  void *v21; // rcx
  int v22; // eax
  _DWORD *v23; // rax
  _QWORD *v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rdx
  int v31; // edx
  _DWORD *v32; // rcx
  int *v33; // r8
  _BYTE *v34; // r9
  int v35; // eax
  int v36; // r12d
  __int16 *v37; // rsi
  __int64 v38; // r8
  __int64 v39; // rdx
  int v40; // eax
  _DWORD *v41; // rdx
  int v42; // edx
  _QWORD *v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rdx
  _DWORD *v47; // r8
  _DWORD *v48; // rax
  __int64 v49; // r8
  _DWORD *v50; // rax
  _DWORD *v51; // r8
  int v52; // edx
  __int32 v53; // r13d
  __int32 v54; // r13d
  __int32 v55; // r13d
  int v56; // r13d
  __int64 v57; // rax
  int v58; // r8d
  __int64 v59; // rdx
  int v60; // edx
  int v61; // r14d
  unsigned __int16 v62; // cx
  unsigned __int16 v63; // r8
  _QWORD *v64; // rdx
  int v65; // ecx
  unsigned int v66; // edx
  int v67; // ecx
  int v68; // eax
  int *v69; // rax
  unsigned __int16 v70; // si
  unsigned __int16 v71; // dx
  _BYTE *v72; // rcx
  _QWORD *v73; // r8
  ULONG v74; // eax
  __int64 v75; // rcx
  int v76; // edx
  __int64 ParentSilo; // rsi
  int v78; // r13d
  int v79; // r13d
  int v80; // r13d
  __int64 HostSilo; // rax
  const void **ServerSiloGlobals; // rax
  size_t v83; // r8
  __int64 v84; // rsi
  __int64 v85; // rdx
  __int64 JobSilo; // rax
  unsigned __int16 v87; // dx
  char v88; // [rsp+40h] [rbp-898h]
  int v91; // [rsp+60h] [rbp-878h]
  __int64 v92; // [rsp+68h] [rbp-870h]
  bool v93; // [rsp+70h] [rbp-868h] BYREF
  bool v94; // [rsp+71h] [rbp-867h] BYREF
  bool v95; // [rsp+72h] [rbp-866h] BYREF
  _DWORD Size[3]; // [rsp+74h] [rbp-864h] BYREF
  __int16 v97; // [rsp+80h] [rbp-858h] BYREF
  char v98; // [rsp+82h] [rbp-856h]
  unsigned __int16 v99; // [rsp+84h] [rbp-854h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+88h] [rbp-850h]
  __int64 v101; // [rsp+90h] [rbp-848h] BYREF
  int v102; // [rsp+98h] [rbp-840h] BYREF
  int v103; // [rsp+9Ch] [rbp-83Ch] BYREF
  int v104; // [rsp+A0h] [rbp-838h] BYREF
  PVOID v105; // [rsp+A8h] [rbp-830h]
  PULONG v106; // [rsp+B0h] [rbp-828h]
  int v107; // [rsp+B8h] [rbp-820h] BYREF
  int v108; // [rsp+BCh] [rbp-81Ch] BYREF
  int v109; // [rsp+C0h] [rbp-818h] BYREF
  __int64 v110; // [rsp+C8h] [rbp-810h] BYREF
  __int64 v111; // [rsp+D0h] [rbp-808h] BYREF
  __int64 v112; // [rsp+D8h] [rbp-800h] BYREF
  PVOID P; // [rsp+E0h] [rbp-7F8h]
  __int64 v114; // [rsp+E8h] [rbp-7F0h] BYREF
  _QWORD v115[6]; // [rsp+F0h] [rbp-7E8h] BYREF
  _QWORD v116[14]; // [rsp+120h] [rbp-7B8h] BYREF
  __int64 v117; // [rsp+190h] [rbp-748h] BYREF
  int v118; // [rsp+198h] [rbp-740h]
  __int64 v119; // [rsp+1A0h] [rbp-738h] BYREF
  __int64 v120; // [rsp+1A8h] [rbp-730h]
  __int64 v121; // [rsp+1B0h] [rbp-728h] BYREF
  __int64 v122; // [rsp+1B8h] [rbp-720h]
  __int64 v123; // [rsp+1C0h] [rbp-718h] BYREF
  __int64 v124; // [rsp+1C8h] [rbp-710h]
  _QWORD v125[10]; // [rsp+1D0h] [rbp-708h] BYREF
  __int128 v126; // [rsp+220h] [rbp-6B8h] BYREF
  _QWORD v127[6]; // [rsp+230h] [rbp-6A8h] BYREF
  _QWORD v128[8]; // [rsp+260h] [rbp-678h] BYREF
  _QWORD v129[10]; // [rsp+2A0h] [rbp-638h] BYREF
  _QWORD v130[12]; // [rsp+2F0h] [rbp-5E8h] BYREF
  _QWORD v131[5]; // [rsp+350h] [rbp-588h] BYREF
  _BYTE v132[36]; // [rsp+378h] [rbp-560h] BYREF
  _QWORD v133[20]; // [rsp+3A0h] [rbp-538h] BYREF
  _BYTE v134[64]; // [rsp+440h] [rbp-498h] BYREF
  _OWORD v135[16]; // [rsp+480h] [rbp-458h] BYREF
  _QWORD Src[54]; // [rsp+580h] [rbp-358h] BYREF
  _BYTE v137[320]; // [rsp+730h] [rbp-1A8h] BYREF
  _WORD v138[20]; // [rsp+870h] [rbp-68h] BYREF

  v5 = JobInformationLength;
  BugCheckParameter1 = (ULONG_PTR)JobHandle;
  v105 = JobInformation;
  v106 = ReturnLength;
  memset(Src, 0, sizeof(Src));
  memset(&v135[5], 0, 0xA8uLL);
  v103 = 0;
  memset(v132, 0, sizeof(v132));
  v126 = 0uLL;
  v110 = 0LL;
  v102 = 0;
  v111 = 0LL;
  memset(v133, 0, 0x98uLL);
  v119 = 0LL;
  v120 = 0LL;
  memset(v135, 0, 0x48uLL);
  v107 = 0;
  memset(v116, 0, 0x68uLL);
  memset(v129, 0, sizeof(v129));
  memset(v130, 0, 0x58uLL);
  memset(v131, 0, sizeof(v131));
  v121 = 0LL;
  v122 = 0LL;
  memset(v125, 0, 0x48uLL);
  memset(v127, 0, sizeof(v127));
  memset(v128, 0, 0x38uLL);
  v112 = 0LL;
  P = 0LL;
  memset(&v115[1], 0, 0x28uLL);
  memset(v134, 0, sizeof(v134));
  v123 = 0LL;
  v124 = 0LL;
  v117 = 0LL;
  v118 = 0;
  v8 = JobInformationClass - 1;
  if ( (unsigned int)(JobInformationClass - 1) > 0x2E )
    return -1073741821;
  switch ( JobInformationClass )
  {
    case JobObjectExtendedLimitInformation:
      if ( (_DWORD)v5 == 144 )
        goto LABEL_65;
      v20 = (_DWORD)v5 == 152;
      goto LABEL_64;
    case JobObjectNotificationLimitInformation:
      if ( (_DWORD)v5 == 48 )
        goto LABEL_65;
      v20 = (_DWORD)v5 == 56;
      goto LABEL_64;
    case JobObjectLimitViolationInformation:
      if ( (_DWORD)v5 == 80 )
        goto LABEL_65;
      v20 = (_DWORD)v5 == 88;
      goto LABEL_64;
    case JobObjectWakeInformation:
      if ( (_DWORD)v5 == 40 )
        goto LABEL_65;
      v20 = (_DWORD)v5 == 64;
      goto LABEL_64;
    case JobObjectMemoryUsageInformation:
      if ( (_DWORD)v5 == 16 )
        goto LABEL_65;
      v20 = (_DWORD)v5 == 40;
      goto LABEL_64;
    case JobObjectContainerId:
      if ( (_DWORD)v5 == 16 )
        goto LABEL_65;
      v20 = (_DWORD)v5 == 36;
LABEL_64:
      if ( !v20 )
        return -1073741820;
      goto LABEL_65;
  }
  if ( JobInformationClass != JobObjectMemoryPartitionInformation )
  {
    v9 = PspJobInfoLengths[v8];
    if ( (_DWORD)v5 == v9 )
    {
LABEL_10:
      v10 = 1;
      goto LABEL_11;
    }
    if ( JobInformationClass != JobObjectBasicProcessIdList
      && JobInformationClass != JobObjectSecurityLimitInformation
      && JobInformationClass != JobObjectGroupInformation
      && JobInformationClass != JobObjectGroupInformationEx
      && JobInformationClass != JobObjectIoRateControlInformation
      && JobInformationClass != JobObjectSiloRootDirectory
      || (unsigned int)v5 < v9 )
    {
      return -1073741820;
    }
LABEL_65:
    v9 = v5;
    goto LABEL_10;
  }
  if ( (_DWORD)v5 != 1 )
    return -1073741820;
  v10 = 1;
  v9 = 1;
LABEL_11:
  Size[0] = v9;
  CurrentThread = KeGetCurrentThread();
  v92 = (__int64)CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    if ( (_DWORD)v5 )
    {
      if ( ((PspJobInfoAlign[v8] - 1) & (unsigned int)JobInformation) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)JobInformation + v5 > 0x7FFFFFFF0000LL || (char *)JobInformation + v5 < JobInformation )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    if ( ReturnLength )
    {
      v13 = (__int64)ReturnLength;
      if ( (unsigned __int64)ReturnLength >= 0x7FFFFFFF0000LL )
        v13 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v13 = *(_DWORD *)v13;
    }
  }
  if ( BugCheckParameter1 )
  {
    result = ObpReferenceObjectByHandleWithTag(
               BugCheckParameter1,
               4,
               (__int64)PsJobType,
               PreviousMode,
               0x79517350u,
               &Size[1],
               0LL,
               0LL);
    if ( result < 0 )
      return result;
    v15 = *(_QWORD *)&Size[1];
    goto LABEL_26;
  }
  v21 = (void *)CurrentThread->ApcState.Process[1].Affinity.Bitmap[16];
  *(_QWORD *)&Size[1] = v21;
  v15 = (__int64)v21;
  if ( v21 )
  {
    ObfReferenceObjectWithTag(v21, 0x79517350u);
LABEL_26:
    CurrentThread = (struct _KTHREAD *)v92;
    goto LABEL_27;
  }
  if ( ((JobInformationClass - 31) & 0xFFFFFFF7) != 0 )
    return -1073741790;
LABEL_27:
  v91 = v9;
  v88 = 0;
  v16 = 0LL;
  JobIoAttribution = 0;
  if ( JobInformationClass > JobObjectWakeInformation )
  {
    if ( JobInformationClass > JobObjectSiloBasicInformation )
    {
      v53 = JobInformationClass - 37;
      if ( v53 )
      {
        v54 = v53 - 1;
        if ( v54 )
        {
          v55 = v54 - 1;
          if ( !v55 )
          {
            if ( v15 )
            {
              PsGetJobServerSilo(v15, &v101);
              HostSilo = v101;
            }
            else
            {
              HostSilo = PsGetHostSilo();
            }
            ServerSiloGlobals = (const void **)PsGetServerSiloGlobals(HostSilo);
            v19 = JobInformation;
            memmove(JobInformation, ServerSiloGlobals[138], v83);
            v88 = 1;
            v18 = ReturnLength;
            goto LABEL_41;
          }
          v56 = v55 - 3;
          if ( !v56 )
          {
            PspLockJobShared(v15, (__int64)CurrentThread);
            JobIoAttribution = PspQueryJobIoAttribution(v15, v135);
            PspUnlockJob(v15, v92);
            v16 = (bool *)v135;
            goto LABEL_39;
          }
          v78 = v56 - 1;
          if ( !v78 )
          {
            JobIoAttribution = 0;
            v95 = (unsigned __int64)(*(_QWORD *)(v15 + 1544) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL;
            v16 = &v95;
            goto LABEL_39;
          }
          v79 = v78 - 1;
          if ( !v79 )
          {
            v126 = *(_OWORD *)(v15 + 1240);
            v16 = (bool *)&v126;
            goto LABEL_38;
          }
          v80 = v79 - 2;
          if ( !v80 )
          {
            PspLockJobShared(v15, (__int64)CurrentThread);
            v111 = *(_QWORD *)(v15 + 1560);
            PspUnlockJob(v15, v92);
            v16 = (bool *)&v111;
            goto LABEL_38;
          }
          if ( v80 == 1 )
          {
            v94 = (*(_BYTE *)(v15 + 1308) & 2) != 0;
            v16 = &v94;
            goto LABEL_38;
          }
          goto LABEL_205;
        }
        PsGetJobServerSilo(v15, &v101);
        v84 = v101;
        if ( !PsIsHostSilo(v101) )
        {
          v85 = *(_QWORD *)(v84 + 1256);
          HIDWORD(v117) = *(_DWORD *)(v85 + 1088);
          v118 = *(_DWORD *)(v85 + 1092);
          LODWORD(v117) = PsGetServerSiloServiceSessionId(v84);
          JobIoAttribution = 0;
          v16 = (bool *)&v117;
          goto LABEL_39;
        }
      }
      else
      {
        JobSilo = PspGetJobSilo(v15);
        if ( JobSilo )
        {
          JobIoAttribution = ObGetSiloRootDirectoryPath(JobSilo, &v112);
          if ( JobIoAttribution >= 0 )
          {
            v88 = 1;
            v87 = v112;
            v9 = (unsigned __int16)v112 + 16;
            if ( v9 > JobInformationLength )
            {
              JobIoAttribution = -1073741789;
              v19 = JobInformation;
              v18 = ReturnLength;
            }
            else
            {
              v19 = JobInformation;
              *(_WORD *)JobInformation = v112;
              *((_WORD *)JobInformation + 1) = v87;
              *((_QWORD *)JobInformation + 1) = (char *)JobInformation + 16;
              memmove((char *)JobInformation + 16, P, v87);
              v18 = ReturnLength;
              if ( ReturnLength )
                *ReturnLength = v9;
            }
            ExFreePoolWithTag(P, 0);
            goto LABEL_41;
          }
          goto LABEL_39;
        }
      }
    }
    else
    {
      if ( JobInformationClass != JobObjectSiloBasicInformation )
      {
        switch ( JobInformationClass )
        {
          case JobObjectBackgroundInformation:
            v93 = (*(_DWORD *)(v15 + 1304) & 0x400) != 0;
            v16 = &v93;
            goto LABEL_38;
          case JobObjectInterferenceInformation:
            v19 = JobInformation;
            JobIoAttribution = PspQueryJobHierarchyInterferenceCount((PVOID)v15);
            if ( JobIoAttribution < 0 )
            {
              v91 = 0;
            }
            else
            {
              v88 = 1;
              v91 = 8;
            }
            goto LABEL_55;
          case JobObjectMemoryUsageInformation:
            *(_OWORD *)&v131[3] = 0LL;
            PspLockJobMemoryLimitsShared(v15, (__int64)CurrentThread);
            v131[1] = *(_QWORD *)(v15 + 608) << 12;
            v131[0] = *(_QWORD *)(v15 + 976) << 12;
            v131[2] = *(_QWORD *)(v15 + 1320) << 12;
            v15 = *(_QWORD *)&Size[1];
            PspUnlockJobMemoryLimitsShared(*(__int64 *)&Size[1], v92);
            v16 = (bool *)v131;
            goto LABEL_38;
          case JobObjectSharedCommit:
            v114 = *(_QWORD *)(v15 + 1320);
            v16 = (bool *)&v114;
            JobIoAttribution = 0;
            v15 = *(_QWORD *)&Size[1];
            goto LABEL_39;
          case JobObjectContainerId:
            *(_OWORD *)v132 = *(_OWORD *)(v15 + 1224);
            if ( JobInformationLength == 36 )
            {
              *(_OWORD *)&v132[16] = *(_OWORD *)(v15 + 1240);
              *(_DWORD *)&v132[32] = *(_DWORD *)(v15 + 1220);
            }
            v16 = v132;
            goto LABEL_38;
          case JobObjectIoRateControlInformation:
            JobIoAttribution = -1073741822;
            goto LABEL_39;
          case JobObjectNetRateControlInformation:
            PspLockJobShared(v15, (__int64)CurrentThread);
            v75 = *(_QWORD *)(v15 + 1296);
            if ( v75 )
            {
              LODWORD(v122) = 1;
              v76 = *(_DWORD *)(v75 + 48);
              if ( (v76 & 1) != 0 )
              {
                v10 = 3;
                LODWORD(v122) = 3;
                v121 = *(_QWORD *)(v75 + 40);
              }
              if ( (v76 & 2) != 0 )
              {
                LODWORD(v122) = v10 | 4;
                BYTE4(v122) = *(_BYTE *)(v75 + 64);
              }
            }
            PspUnlockJob(v15, v92);
            v16 = (bool *)&v121;
            goto LABEL_38;
          case JobObjectNotificationLimitInformation2:
            goto LABEL_117;
          case JobObjectLimitViolationInformation2:
            goto LABEL_86;
        }
        goto LABEL_205;
      }
      if ( (*(_DWORD *)(v15 + 1304) & 0x40000000) != 0 )
      {
        LODWORD(v123) = *(_DWORD *)(v15 + 1220);
        ParentSilo = PsGetParentSilo(v15);
        if ( PsIsHostSilo(ParentSilo) )
          HIDWORD(v123) = 0;
        else
          HIDWORD(v123) = *(_DWORD *)(ParentSilo + 1220);
        LODWORD(v124) = *(_DWORD *)(v15 + 1208);
        BYTE4(v124) = PspIsSiloInServerSilo(v15);
        v16 = (bool *)&v123;
        goto LABEL_38;
      }
    }
    JobIoAttribution = -1073740535;
    goto LABEL_39;
  }
  if ( JobInformationClass == JobObjectWakeInformation )
  {
    JobIoAttribution = PspAllocateAndQueryNotificationChannel(CurrentThread, v15, v134);
    v19 = JobInformation;
    v18 = ReturnLength;
    if ( JobIoAttribution >= 0 )
    {
      v16 = v134;
      JobIoAttribution = 0;
    }
    goto LABEL_41;
  }
  if ( JobInformationClass > JobObjectGroupInformation )
  {
    if ( JobInformationClass != JobObjectNotificationLimitInformation )
    {
      if ( JobInformationClass != JobObjectLimitViolationInformation )
      {
        if ( JobInformationClass != JobObjectGroupInformationEx )
        {
          switch ( JobInformationClass )
          {
            case JobObjectCpuRateControlInformation:
              PspLockJobShared(v15, (__int64)CurrentThread);
              v57 = *(_QWORD *)(v15 + 1008);
              if ( v57 )
              {
                v58 = *(_DWORD *)(v57 + 40);
                if ( (v58 & 0x40) == 0 )
                {
                  HIDWORD(v110) = *(_DWORD *)(v57 + 44);
                  v66 = ((v58 & 4 | 2u) >> 1) | 4;
                  if ( (v58 & 1) == 0 )
                    v66 = (v58 & 4 | 2u) >> 1;
                  v67 = v66 | 8;
                  if ( (v58 & 2) == 0 )
                    v67 = v66;
                  v68 = v67 | 0x10;
                  if ( (v58 & 0x20) == 0 )
                    v68 = v67;
                  LODWORD(v110) = v68;
                }
              }
              PspUnlockJob(v15, v92);
              v16 = (bool *)&v110;
              goto LABEL_38;
            case JobObjectCompletionFilter:
              v108 = *(_DWORD *)(v15 + 876);
              v16 = (bool *)&v108;
              goto LABEL_38;
            case JobObjectCompletionCounter:
              v115[0] = *(_QWORD *)(v15 + 472);
              v16 = (bool *)v115;
              goto LABEL_38;
            case JobObjectFreezeInformation:
              LODWORD(v119) = 7;
              HIWORD(v119) = 0;
              PspLockJobShared(v15, (__int64)CurrentThread);
              v65 = *(_DWORD *)(v15 + 1304);
              BYTE4(v119) = (v65 & 0x200) != 0;
              BYTE5(v119) = (v65 & 0x80000) != 0;
              v120 = *(_QWORD *)(v15 + 952);
              PspUnlockJob(v15, v92);
              v16 = (bool *)&v119;
              goto LABEL_38;
          }
          goto LABEL_37;
        }
        if ( ReturnLength && (JobInformationLength & 0xF) == 0 )
        {
          PspLockJobShared(v15, (__int64)CurrentThread);
          if ( (*(_DWORD *)(v15 + 256) & 0x10) != 0 )
            v69 = (int *)(v15 + 264);
          else
            v69 = KeActiveProcessors;
          v135[5] = *(_OWORD *)v69;
          v135[6] = *((_OWORD *)v69 + 1);
          v135[7] = *((_OWORD *)v69 + 2);
          v135[8] = *((_OWORD *)v69 + 3);
          v135[9] = *((_OWORD *)v69 + 4);
          v135[10] = *((_OWORD *)v69 + 5);
          v135[11] = *((_OWORD *)v69 + 6);
          v135[12] = *((_OWORD *)v69 + 7);
          v135[13] = *((_OWORD *)v69 + 8);
          v135[14] = *((_OWORD *)v69 + 9);
          *(_QWORD *)&v135[15] = *((_QWORD *)v69 + 20);
          PspUnlockJob(v15, v92);
          v70 = v135[5];
          memset(v137, 0, 16LL * LOWORD(v135[5]));
          v71 = 0;
          if ( v70 )
          {
            v72 = v137;
            v73 = (_QWORD *)&v135[5] + 1;
            do
            {
              *((_WORD *)v72 + 4) = v71;
              *(_QWORD *)v72 = *v73;
              ++v71;
              ++v73;
              v72 += 16;
            }
            while ( v71 < v70 );
          }
          v74 = 16 * v70;
          v91 = v74;
          JobIoAttribution = JobInformationLength < v74 ? 0xC0000023 : 0;
          v9 = JobInformationLength;
          if ( JobInformationLength >= v74 )
            v9 = v74;
          Size[0] = v9;
          v88 = 1;
          v19 = JobInformation;
          memmove(JobInformation, v137, v9);
          v18 = ReturnLength;
          goto LABEL_41;
        }
LABEL_181:
        JobIoAttribution = -1073741811;
        goto LABEL_39;
      }
LABEL_86:
      v116[9] = 0LL;
      v116[11] = 0LL;
      v116[12] = 0LL;
      v97 = 0;
      v98 = 0;
      PspQueryJobHierarchyAccountingInformation((char *)v15, (__int64)Src);
      v116[1] = Src[9];
      v116[3] = Src[10];
      v116[5] = Src[0];
      PspLockJobExclusive(v15, v92);
      v22 = *(_DWORD *)(v15 + 1304);
      if ( (v22 & 8) == 0 || (v22 & 0x4000) == 0 )
      {
        _InterlockedAnd((volatile signed __int32 *)(v15 + 1304), 0xFFFFFFFB);
        v15 = *(_QWORD *)&Size[1];
      }
      ExAcquirePushLockSharedEx(v15 + 1032, 0LL);
      v116[7] = *(_QWORD *)(v15 + 976) << 12;
      PspUnlockJobMemoryLimitsShared(v15, 0LL);
      v23 = *(_DWORD **)(v15 + 984);
      if ( v23 )
      {
        LODWORD(v116[0]) = *v23;
        HIDWORD(v116[0]) = *(_DWORD *)(*(_QWORD *)(v15 + 984) + 4LL);
        v24 = *(_QWORD **)(v15 + 984);
        v25 = v24[9];
        if ( !v25 )
          v25 = v24[1];
        v116[2] = v25;
        v26 = v24[10];
        if ( !v26 )
          v26 = v24[2];
        v116[4] = v26;
        v27 = v24[11];
        if ( !v27 )
          v27 = v24[3];
        v116[6] = v27;
        v28 = v24[12];
        if ( !v28 )
          v28 = v24[4];
        v116[10] = v28 << 12;
        v29 = v24[13];
        if ( !v29 )
          v29 = v24[5];
        v116[8] = v29 << 12;
        v30 = 0LL;
        do
        {
          v32 = (_DWORD *)PspLimitViolationRateControlToleranceLimitField(v116, v30);
          v35 = v33[16];
          if ( v35 )
            *v34 = 1;
          else
            v35 = *v33;
          *v32 = v35;
          v30 = (unsigned int)(v31 + 1);
        }
        while ( (int)v30 < 3 );
      }
      else
      {
        v116[0] = 0LL;
        v116[2] = 0LL;
        v116[4] = 0LL;
        v116[6] = 0LL;
        v116[10] = 0LL;
        v116[8] = 0LL;
        v59 = 0LL;
        do
        {
          *(_DWORD *)PspLimitViolationRateControlToleranceLimitField(v116, v59) = 0;
          v59 = (unsigned int)(v60 + 1);
        }
        while ( (int)v59 < 3 );
      }
      v36 = 0;
      v37 = &v97;
      v38 = 60LL;
      v101 = 60LL;
      do
      {
        v39 = *(_QWORD *)(v15 + 984);
        if ( v39 && (v40 = PspRateControlLimitFlag((unsigned int)v36, v39, v38), (v40 & *v41) != 0) )
          v42 = *(_DWORD *)((char *)v41 + v38);
        else
          v42 = 1;
        v104 = v42;
        LOBYTE(v38) = *(_BYTE *)v37;
        PspQueryRateControlHistory(v15, v42, v38, (unsigned int)&v109, v36);
        if ( v36 )
        {
          if ( v36 == 1 )
            v43 = &v116[11];
          else
            v43 = &v116[9];
        }
        else
        {
          v43 = &v116[12];
        }
        *(_DWORD *)v43 = v109;
        ++v36;
        v38 = v101 + 4;
        v101 += 4LL;
        v37 = (__int16 *)((char *)v37 + 1);
      }
      while ( v36 < 3 );
      v44 = *(_QWORD *)(v15 + 984);
      if ( v44 )
      {
        *(_DWORD *)(v44 + 4) = 0;
        memset((void *)(*(_QWORD *)(v15 + 984) + 72LL), 0, 0x40uLL);
      }
      PspUnlockJob(v15, v92);
      if ( JobInformationLength == 88 )
      {
        v130[1] = v116[1];
        v130[2] = v116[2];
        v130[3] = v116[3];
        v130[4] = v116[4];
        v130[5] = v116[5];
        v130[6] = v116[6];
        v130[7] = v116[7];
        v130[8] = v116[10];
        v130[9] = v116[8];
        v130[10] = v116[9];
        v130[0] = v116[0] & 0x27820400278204LL;
        v16 = (bool *)v130;
      }
      else if ( JobInformationLength == 80 )
      {
        v129[1] = v116[1];
        v129[2] = v116[2];
        v129[3] = v116[3];
        v129[4] = v116[4];
        v129[5] = v116[5];
        v129[6] = v116[6];
        v129[7] = v116[7];
        v129[8] = v116[8];
        v129[9] = v116[9];
        v129[0] = v116[0] & 0x7020400070204LL;
        v16 = (bool *)v129;
      }
      else
      {
        v16 = (bool *)v116;
      }
      JobIoAttribution = 0;
      if ( (PerfGlobalGroupMask & 0x80000) != 0 )
        EtwTraceJobSetQuery(v15, JobInformationClass, (unsigned int)v116, (unsigned int)&v104, 0, 1830);
      goto LABEL_39;
    }
LABEL_117:
    PspLockJobShared(v15, (__int64)CurrentThread);
    v45 = *(_QWORD *)(v15 + 984);
    if ( v45 )
    {
      LODWORD(v125[5]) = *(_DWORD *)v45;
      v125[0] = *(_QWORD *)(v45 + 8);
      v125[1] = *(_QWORD *)(v45 + 16);
      v125[2] = *(_QWORD *)(v45 + 24);
      v125[6] = *(_QWORD *)(v45 + 32) << 12;
      v125[3] = *(_QWORD *)(v45 + 40) << 12;
      v46 = 0LL;
      v47 = (_DWORD *)(v45 + 60);
      do
      {
        v48 = (_DWORD *)PspNotificationLimitRateControlToleranceField(v125, v46, v47);
        *v48 = *(_DWORD *)(v49 - 12);
        v50 = (_DWORD *)PspNotificationLimitRateControlToleranceIntervalField(v125);
        *v50 = *v51;
        v46 = (unsigned int)(v52 + 1);
        v47 = v51 + 1;
      }
      while ( (int)v46 < 3 );
    }
    PspUnlockJob(v15, v92);
    if ( JobInformationLength == 56 )
    {
      v128[0] = v125[0];
      v128[1] = v125[1];
      v128[2] = v125[2];
      v128[3] = v125[6];
      v128[4] = v125[3];
      v128[5] = v125[4];
      v128[6] = v125[5] & 0x278204LL;
      v16 = (bool *)v128;
    }
    else if ( JobInformationLength == 48 )
    {
      v127[0] = v125[0];
      v127[1] = v125[1];
      v127[2] = v125[2];
      v127[3] = v125[3];
      v127[4] = v125[4];
      v127[5] = v125[5] & 0x70204LL;
      v16 = (bool *)v127;
    }
    else
    {
      v16 = (bool *)v125;
    }
    goto LABEL_38;
  }
  if ( JobInformationClass == JobObjectGroupInformation )
  {
    if ( ReturnLength && (JobInformationLength & 1) == 0 )
    {
      PspLockJobShared(v15, (__int64)CurrentThread);
      v61 = 0;
      v62 = 0;
      v63 = *(_WORD *)(v15 + 264);
      if ( v63 )
      {
        v64 = (_QWORD *)(v15 + 272);
        do
        {
          if ( *v64 )
            v138[v61++] = v62;
          ++v62;
          ++v64;
        }
        while ( v62 < v63 );
      }
      PspUnlockJob(v15, v92);
      v9 = 2 * v61;
      v91 = v9;
      v88 = 1;
      JobIoAttribution = JobInformationLength < v9 ? 0xC0000023 : 0;
      if ( v9 > JobInformationLength )
        v9 = Size[0];
      Size[0] = v9;
      v19 = JobInformation;
      memmove(JobInformation, v138, v9);
      v18 = ReturnLength;
      goto LABEL_41;
    }
    goto LABEL_181;
  }
  if ( JobInformationClass != JobObjectBasicAccountingInformation )
  {
    switch ( JobInformationClass )
    {
      case JobObjectBasicLimitInformation:
LABEL_77:
        PspLockJobShared(v15, (__int64)CurrentThread);
        v133[3] = *(_QWORD *)(v15 + 240);
        v133[4] = *(_QWORD *)(v15 + 248);
        LODWORD(v133[5]) = *(_DWORD *)(v15 + 260);
        LODWORD(v133[7]) = *(unsigned __int8 *)(v15 + 873);
        HIDWORD(v133[7]) = *(_DWORD *)(v15 + 484);
        if ( KeIsSingleGroupAffinityEx((unsigned __int16 *)(v15 + 264), &v99) )
          v133[6] = *(_QWORD *)(v15 + 8LL * v99 + 272);
        else
          v133[6] = 0LL;
        v133[0] = *(_QWORD *)(v15 + 224);
        v133[1] = *(_QWORD *)(v15 + 232);
        LODWORD(v133[2]) = (PspGetJobLimitInformationValidFlags((unsigned int)JobInformationClass, JobInformationLength) | 0x7FFF) & *(_DWORD *)(v15 + 256);
        if ( JobInformationClass == JobObjectExtendedLimitInformation )
        {
          ExAcquirePushLockSharedEx(v15 + 1032, 0LL);
          v133[14] = *(_QWORD *)(v15 + 576) << 12;
          v133[15] = *(_QWORD *)(v15 + 584) << 12;
          v133[17] = *(_QWORD *)(v15 + 608) << 12;
          v133[18] = *(_QWORD *)(v15 + 592) << 12;
          PspUnlockJobMemoryLimitsShared(v15, 0LL);
          PspUnlockJob(v15, v92);
          v133[16] = *(_QWORD *)(v15 + 600) << 12;
        }
        else
        {
          PspUnlockJob(v15, v92);
        }
        JobIoAttribution = 0;
        v16 = (bool *)v133;
        goto LABEL_39;
      case JobObjectBasicProcessIdList:
        v91 = 0;
        v19 = JobInformation;
        JobIoAttribution = PspQueryJobHierarchyProcessIdList((PVOID)v15);
        v88 = 1;
LABEL_55:
        v18 = ReturnLength;
        goto LABEL_41;
      case JobObjectBasicUIRestrictions:
        PspLockJobShared(v15, (__int64)CurrentThread);
        v103 = *(_DWORD *)(v15 + 448);
        PspUnlockJob(v15, v92);
        v16 = (bool *)&v103;
        goto LABEL_38;
      case JobObjectSecurityLimitInformation:
        v88 = 1;
        *(_OWORD *)JobInformation = *(_OWORD *)&v115[1];
        *((_OWORD *)JobInformation + 1) = *(_OWORD *)&v115[3];
        *((_QWORD *)JobInformation + 4) = v115[5];
        v18 = ReturnLength;
        goto LABEL_40;
      case JobObjectEndOfJobTimeInformation:
        v102 = *(_DWORD *)(v15 + 452);
        v16 = (bool *)&v102;
        goto LABEL_38;
    }
    if ( JobInformationClass != JobObjectBasicAndIoAccountingInformation )
    {
      if ( JobInformationClass == JobObjectExtendedLimitInformation )
        goto LABEL_77;
      if ( JobInformationClass == JobObjectJobSetInformation )
      {
        --CurrentThread->SpecialApcDisable;
        ExAcquirePushLockSharedEx((ULONG_PTR)&PspJobListLock, 0LL);
        PspUnlockJobListShared(v92);
        v16 = (bool *)&v107;
        goto LABEL_38;
      }
LABEL_205:
      JobIoAttribution = -1073741821;
      goto LABEL_39;
    }
  }
LABEL_37:
  PspQueryJobHierarchyAccountingInformation((char *)v15, (__int64)Src);
  v16 = (bool *)Src;
LABEL_38:
  JobIoAttribution = 0;
LABEL_39:
  v18 = ReturnLength;
LABEL_40:
  v19 = JobInformation;
LABEL_41:
  if ( v15 )
    ObfDereferenceObjectWithTag((PVOID)v15, 0x79517350u);
  if ( JobIoAttribution >= 0 && !v88 )
    memmove(v19, v16, v9);
  if ( v18 )
    *v18 = v91;
  return JobIoAttribution;
}
