/*
 * XREFs of NtQueryInformationJobObject @ 0x1405FF8F0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetServerSiloServiceSessionId @ 0x1400067D0 (PsGetServerSiloServiceSessionId.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     PsGetHostSilo @ 0x140091BB0 (PsGetHostSilo.c)
 *     PsGetServerSiloGlobals @ 0x1400922CC (PsGetServerSiloGlobals.c)
 *     ObfReferenceObjectWithTag @ 0x1400ACD30 (ObfReferenceObjectWithTag.c)
 *     PsIsHostSilo @ 0x1400B89C0 (PsIsHostSilo.c)
 *     KeIsSingleGroupAffinityEx @ 0x1401316D0 (KeIsSingleGroupAffinityEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     PspGetJobSilo @ 0x1402E984C (PspGetJobSilo.c)
 *     PspIsSiloInServerSilo @ 0x1402E9900 (PspIsSiloInServerSilo.c)
 *     PsGetJobServerSilo @ 0x1402EA2E0 (PsGetJobServerSilo.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PspGetJobLimitInformationValidFlags @ 0x140583884 (PspGetJobLimitInformationValidFlags.c)
 *     PspQueryRateControlHistory @ 0x1405A8F5C (PspQueryRateControlHistory.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405E9390 (ObpReferenceObjectByHandleWithTag.c)
 *     PspQueryJobHierarchyAccountingInformation @ 0x1405FE228 (PspQueryJobHierarchyAccountingInformation.c)
 *     PspUnlockJob @ 0x1405FF0C0 (PspUnlockJob.c)
 *     PspLockJobExclusive @ 0x1405FF100 (PspLockJobExclusive.c)
 *     PspLockJobShared @ 0x1405FF128 (PspLockJobShared.c)
 *     PspUnlockJobMemoryLimitsShared @ 0x1405FF2B4 (PspUnlockJobMemoryLimitsShared.c)
 *     PspLockJobMemoryLimitsShared @ 0x1405FF360 (PspLockJobMemoryLimitsShared.c)
 *     PspRateControlLimitFlag @ 0x140601714 (PspRateControlLimitFlag.c)
 *     PspUnlockJobListShared @ 0x140601A50 (PspUnlockJobListShared.c)
 *     PspNotificationLimitRateControlToleranceIntervalField @ 0x140604400 (PspNotificationLimitRateControlToleranceIntervalField.c)
 *     PspNotificationLimitRateControlToleranceField @ 0x140604428 (PspNotificationLimitRateControlToleranceField.c)
 *     PspQueryJobIoAttribution @ 0x14068E044 (PspQueryJobIoAttribution.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1406ADDA4 (PspAllocateAndQueryNotificationChannel.c)
 *     PspQueryJobHierarchyProcessIdList @ 0x1406B89B0 (PspQueryJobHierarchyProcessIdList.c)
 *     PspLimitViolationRateControlToleranceLimitField @ 0x1406C559C (PspLimitViolationRateControlToleranceLimitField.c)
 *     PsGetParentSilo @ 0x140887970 (PsGetParentSilo.c)
 *     PspQueryJobHierarchyInterferenceCount @ 0x14088B0BC (PspQueryJobHierarchyInterferenceCount.c)
 *     EtwTraceJobSetQuery @ 0x1408B8AB8 (EtwTraceJobSetQuery.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 *     ObGetSiloRootDirectoryPath @ 0x1409074D8 (ObGetSiloRootDirectoryPath.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall NtQueryInformationJobObject(
        HANDLE JobHandle,
        JOBOBJECTINFOCLASS JobInformationClass,
        PVOID JobInformation,
        ULONG JobInformationLength,
        PULONG ReturnLength)
{
  __int64 v5; // r10
  unsigned __int64 v6; // r13
  unsigned int v8; // r12d
  int v9; // r15d
  bool v10; // zf
  struct _KTHREAD *CurrentThread; // r9
  char PreviousMode; // r11
  ULONG v13; // eax
  NTSTATUS result; // eax
  __int64 v15; // rcx
  char *v16; // rbx
  char *v17; // rcx
  __int64 *v18; // r14
  NTSTATUS JobIoAttribution; // esi
  PULONG v20; // r15
  PVOID v21; // r13
  int v22; // r12d
  unsigned __int16 v23; // cx
  unsigned __int16 v24; // r8
  _QWORD *v25; // rdx
  int v26; // ecx
  __int64 v27; // rax
  int v28; // r8d
  unsigned int v29; // edx
  int v30; // ecx
  int v31; // eax
  int *v32; // rax
  unsigned __int16 v33; // si
  unsigned __int16 v34; // dx
  _BYTE *v35; // rcx
  _QWORD *v36; // r8
  ULONG v37; // eax
  __int64 ParentSilo; // rsi
  int v39; // eax
  _DWORD *v40; // rax
  _QWORD *v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rdx
  _DWORD *v48; // rax
  int v49; // edx
  int *v50; // r8
  _BYTE *v51; // r9
  int v52; // ecx
  __int64 v53; // rdx
  int v54; // edx
  int v55; // r14d
  char *v56; // rsi
  __int64 v57; // r8
  __int64 v58; // rdx
  int v59; // eax
  _DWORD *v60; // rdx
  __int64 v61; // r8
  int v62; // edx
  char *v63; // rcx
  __int64 v64; // rax
  __int64 v65; // rcx
  __int64 v66; // rdx
  _DWORD *v67; // r8
  _DWORD *v68; // rax
  __int64 v69; // r8
  _DWORD *v70; // rax
  _DWORD *v71; // r8
  int v72; // edx
  __int64 v73; // rcx
  int v74; // edx
  int v75; // eax
  __int64 JobSilo; // rax
  unsigned __int16 v77; // ax
  int v78; // r13d
  int v79; // r13d
  int v80; // r13d
  int v81; // r13d
  int v82; // r13d
  int v83; // r13d
  int v84; // r13d
  char *v85; // rax
  unsigned int v86; // ecx
  unsigned __int8 *v87; // rdx
  char *v88; // r8
  __int64 HostSilo; // rax
  const void **ServerSiloGlobals; // rax
  size_t v91; // r8
  __int64 v92; // rsi
  __int64 v93; // r8
  char v94; // [rsp+40h] [rbp-8E8h]
  __int64 v97; // [rsp+60h] [rbp-8C8h]
  bool v98; // [rsp+68h] [rbp-8C0h] BYREF
  bool v99; // [rsp+69h] [rbp-8BFh] BYREF
  bool v100; // [rsp+6Ah] [rbp-8BEh] BYREF
  ULONG v101; // [rsp+6Ch] [rbp-8BCh]
  size_t Size; // [rsp+70h] [rbp-8B8h]
  PVOID Object; // [rsp+78h] [rbp-8B0h] BYREF
  __int16 v104; // [rsp+80h] [rbp-8A8h] BYREF
  char v105; // [rsp+82h] [rbp-8A6h]
  __int64 v106; // [rsp+88h] [rbp-8A0h]
  unsigned __int16 v107; // [rsp+90h] [rbp-898h] BYREF
  __int64 v108; // [rsp+98h] [rbp-890h] BYREF
  int v109; // [rsp+A0h] [rbp-888h] BYREF
  PVOID v110; // [rsp+B0h] [rbp-878h]
  __int64 v111; // [rsp+B8h] [rbp-870h] BYREF
  int v112; // [rsp+C0h] [rbp-868h] BYREF
  int v113; // [rsp+C4h] [rbp-864h] BYREF
  int v114; // [rsp+C8h] [rbp-860h] BYREF
  int v115; // [rsp+CCh] [rbp-85Ch] BYREF
  int v116; // [rsp+D0h] [rbp-858h] BYREF
  unsigned __int16 v117; // [rsp+D8h] [rbp-850h] BYREF
  PVOID P; // [rsp+E0h] [rbp-848h]
  __int64 v119; // [rsp+E8h] [rbp-840h] BYREF
  __int64 v120; // [rsp+F0h] [rbp-838h] BYREF
  _QWORD v121[7]; // [rsp+F8h] [rbp-830h] BYREF
  __int64 v122; // [rsp+130h] [rbp-7F8h] BYREF
  __int64 v123; // [rsp+138h] [rbp-7F0h]
  __int64 v124; // [rsp+140h] [rbp-7E8h]
  __int64 v125; // [rsp+148h] [rbp-7E0h]
  __int64 v126; // [rsp+150h] [rbp-7D8h]
  __int64 v127; // [rsp+158h] [rbp-7D0h]
  __int64 v128; // [rsp+160h] [rbp-7C8h]
  __int64 v129; // [rsp+168h] [rbp-7C0h]
  __int64 v130; // [rsp+170h] [rbp-7B8h]
  int v131; // [rsp+178h] [rbp-7B0h] BYREF
  int v132; // [rsp+17Ch] [rbp-7ACh]
  __int64 v133; // [rsp+180h] [rbp-7A8h]
  char v134; // [rsp+188h] [rbp-7A0h] BYREF
  char v135; // [rsp+190h] [rbp-798h] BYREF
  __int64 v136; // [rsp+1A0h] [rbp-788h] BYREF
  __int64 v137; // [rsp+1A8h] [rbp-780h]
  int v138; // [rsp+1B0h] [rbp-778h] BYREF
  bool v139; // [rsp+1B4h] [rbp-774h]
  bool v140; // [rsp+1B5h] [rbp-773h]
  __int16 v141; // [rsp+1B6h] [rbp-772h]
  __int64 v142; // [rsp+1B8h] [rbp-770h]
  int v143; // [rsp+1C0h] [rbp-768h] BYREF
  int v144; // [rsp+1C4h] [rbp-764h]
  int v145; // [rsp+1C8h] [rbp-760h]
  bool IsSiloInServerSilo; // [rsp+1CCh] [rbp-75Ch]
  _QWORD v147[10]; // [rsp+1D0h] [rbp-758h] BYREF
  _DWORD v148[4]; // [rsp+220h] [rbp-708h] BYREF
  _QWORD v149[6]; // [rsp+230h] [rbp-6F8h] BYREF
  _QWORD v150[8]; // [rsp+260h] [rbp-6C8h] BYREF
  _QWORD v151[9]; // [rsp+2A0h] [rbp-688h] BYREF
  int v152; // [rsp+2E8h] [rbp-640h]
  int v153; // [rsp+2ECh] [rbp-63Ch]
  _QWORD v154[10]; // [rsp+2F0h] [rbp-638h] BYREF
  int v155; // [rsp+340h] [rbp-5E8h]
  int v156; // [rsp+344h] [rbp-5E4h]
  __int128 v157; // [rsp+350h] [rbp-5D8h] BYREF
  _QWORD v158[5]; // [rsp+360h] [rbp-5C8h] BYREF
  _OWORD v159[2]; // [rsp+388h] [rbp-5A0h] BYREF
  int v160; // [rsp+3A8h] [rbp-580h]
  _QWORD v161[20]; // [rsp+3B0h] [rbp-578h] BYREF
  __int128 v162; // [rsp+450h] [rbp-4D8h] BYREF
  int v163; // [rsp+460h] [rbp-4C8h]
  char v164; // [rsp+464h] [rbp-4C4h] BYREF
  _BYTE v165[80]; // [rsp+490h] [rbp-498h] BYREF
  _BYTE v166[64]; // [rsp+4E0h] [rbp-448h] BYREF
  _OWORD v167[10]; // [rsp+520h] [rbp-408h] BYREF
  __int64 v168; // [rsp+5C0h] [rbp-368h]
  _QWORD v169[54]; // [rsp+5D0h] [rbp-358h] BYREF
  _BYTE v170[320]; // [rsp+780h] [rbp-1A8h] BYREF
  _WORD Src[20]; // [rsp+8C0h] [rbp-68h] BYREF

  v5 = JobInformationLength;
  v6 = JobInformationClass;
  v110 = JobInformation;
  v106 = (__int64)ReturnLength;
  if ( (unsigned int)(JobInformationClass - 1) > 0x31 )
    return -1073741821;
  switch ( JobInformationClass )
  {
    case JobObjectExtendedLimitInformation:
      if ( JobInformationLength == 144 || JobInformationLength == 152 )
        goto LABEL_19;
      return -1073741820;
    case JobObjectNotificationLimitInformation:
      v13 = JobInformationLength - 48;
      goto LABEL_30;
    case JobObjectLimitViolationInformation:
      v13 = JobInformationLength - 80;
LABEL_30:
      v10 = (v13 & 0xFFFFFFF7) == 0;
      goto LABEL_18;
    case JobObjectWakeInformation:
      if ( JobInformationLength == 40 )
        goto LABEL_19;
      v10 = JobInformationLength == 64;
      goto LABEL_18;
    case JobObjectMemoryUsageInformation:
      if ( JobInformationLength == 16 )
        goto LABEL_19;
      v10 = JobInformationLength == 40;
      goto LABEL_18;
    case JobObjectContainerId:
      if ( JobInformationLength == 16 )
        goto LABEL_19;
      v10 = JobInformationLength == 36;
LABEL_18:
      if ( !v10 )
        return -1073741820;
LABEL_19:
      v8 = JobInformationLength;
      goto LABEL_20;
    case JobObjectMemoryPartitionInformation:
      if ( JobInformationLength == 1 )
      {
        v9 = 1;
        v8 = 1;
        goto LABEL_21;
      }
      return -1073741820;
  }
  v8 = dword_14090CA8C[JobInformationClass];
  if ( JobInformationLength != v8 )
  {
    if ( (unsigned int)JobInformationClass <= JobObjectSiloRootDirectory )
    {
      *(_QWORD *)&JobInformationClass = 0x2080004828LL;
      if ( _bittest64((const __int64 *)&JobInformationClass, v6) )
      {
        if ( JobInformationLength >= v8 )
          goto LABEL_19;
      }
    }
    return -1073741820;
  }
LABEL_20:
  v9 = 1;
LABEL_21:
  LODWORD(Size) = v8;
  CurrentThread = KeGetCurrentThread();
  v97 = (__int64)CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    if ( (_DWORD)v5 )
    {
      if ( ((dword_14090CB5C[v6] - 1) & (unsigned int)JobInformation) != 0 )
        ExRaiseDatatypeMisalignment();
      *(_QWORD *)&JobInformationClass = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)JobInformation + v5 > 0x7FFFFFFF0000LL || (char *)JobInformation + v5 < JobInformation )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    else
    {
      *(_QWORD *)&JobInformationClass = 0x7FFFFFFF0000LL;
    }
    if ( ReturnLength )
    {
      v15 = (__int64)ReturnLength;
      if ( (unsigned __int64)ReturnLength >= 0x7FFFFFFF0000LL )
        v15 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v15 = *(_DWORD *)v15;
    }
  }
  if ( JobHandle )
  {
    result = ObpReferenceObjectByHandleWithTag(
               (ULONG_PTR)JobHandle,
               4,
               (__int64)PsJobType,
               PreviousMode,
               0x79517350u,
               &Object,
               0LL,
               0LL);
    if ( result < 0 )
      return result;
    v16 = (char *)Object;
    goto LABEL_48;
  }
  v17 = (char *)CurrentThread->ApcState.Process[1].Affinity.Bitmap[16];
  Object = v17;
  v16 = v17;
  if ( v17 )
  {
    ObfReferenceObjectWithTag(v17, 0x79517350u);
LABEL_48:
    LODWORD(v5) = JobInformationLength;
    CurrentThread = (struct _KTHREAD *)v97;
    goto LABEL_49;
  }
  if ( (((_DWORD)v6 - 31) & 0xFFFFFFF7) != 0 )
    return -1073741790;
LABEL_49:
  v101 = v8;
  v94 = 0;
  v18 = 0LL;
  JobIoAttribution = 0;
  if ( (int)v6 > 21 )
  {
    if ( (int)v6 > 37 )
    {
      v78 = v6 - 38;
      if ( v78 )
      {
        v79 = v78 - 1;
        if ( !v79 )
        {
          if ( v16 )
          {
            PsGetJobServerSilo((__int64)v16, &v108);
            HostSilo = v108;
          }
          else
          {
            HostSilo = PsGetHostSilo();
          }
          ServerSiloGlobals = (const void **)PsGetServerSiloGlobals(HostSilo);
          v21 = JobInformation;
          memmove(JobInformation, ServerSiloGlobals[140], v91);
          v94 = 1;
          v20 = ReturnLength;
          goto LABEL_245;
        }
        v80 = v79 - 3;
        if ( !v80 )
        {
          memset(v165, 0, 0x48uLL);
          PspLockJobShared((__int64)v16, v97);
          JobIoAttribution = PspQueryJobIoAttribution(v16, v165);
          PspUnlockJob((__int64)v16, v97);
          v18 = (__int64 *)v165;
          goto LABEL_243;
        }
        v81 = v80 - 1;
        if ( !v81 )
        {
          v100 = (unsigned __int64)(*((_QWORD *)v16 + 193) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL;
          v18 = (__int64 *)&v100;
          goto LABEL_242;
        }
        v82 = v81 - 1;
        if ( !v82 )
        {
          v157 = *(_OWORD *)(v16 + 1240);
          v18 = (__int64 *)&v157;
          goto LABEL_242;
        }
        v83 = v82 - 2;
        if ( !v83 )
        {
          PspLockJobShared((__int64)v16, (__int64)CurrentThread);
          v120 = *((_QWORD *)v16 + 195);
          PspUnlockJob((__int64)v16, v97);
          v18 = &v120;
          goto LABEL_242;
        }
        v84 = v83 - 1;
        if ( !v84 )
        {
          v99 = (*((_DWORD *)v16 + 327) & 2) != 0;
          v18 = (__int64 *)&v99;
          goto LABEL_242;
        }
        if ( v84 != 3 )
          goto LABEL_224;
        PsGetJobServerSilo((__int64)v16, &v108);
        if ( !PsIsHostSilo(v108) )
        {
          v85 = (char *)PsGetServerSiloGlobals(v108);
          if ( *((_DWORD *)v85 + 292) )
          {
            v162 = *(_OWORD *)(v85 + 1192);
            v163 = *((_DWORD *)v85 + 293);
            v86 = 0;
            v87 = (unsigned __int8 *)(v85 + 1176);
            v88 = &v164;
            do
            {
              *(_WORD *)v88 = *v87;
              ++v86;
              ++v87;
              v88 += 2;
            }
            while ( v86 < 0xF );
            v18 = (__int64 *)&v162;
            goto LABEL_242;
          }
          JobIoAttribution = -2147483614;
LABEL_243:
          v20 = ReturnLength;
          goto LABEL_244;
        }
      }
      else
      {
        PsGetJobServerSilo((__int64)v16, &v108);
        v92 = v108;
        if ( !PsIsHostSilo(v108) )
        {
          v93 = *(_QWORD *)(v92 + 1256);
          v148[1] = *(_DWORD *)(v93 + 1104);
          v148[2] = *(_DWORD *)(v93 + 1108);
          v148[0] = PsGetServerSiloServiceSessionId(v92);
          v18 = (__int64 *)v148;
          goto LABEL_242;
        }
      }
    }
    else
    {
      switch ( (_DWORD)v6 )
      {
        case 0x25:
          JobSilo = PspGetJobSilo((__int64)v16);
          if ( JobSilo )
          {
            P = 0LL;
            JobIoAttribution = ObGetSiloRootDirectoryPath(JobSilo, &v117);
            if ( JobIoAttribution >= 0 )
            {
              v94 = 1;
              v77 = v117;
              v8 = v117 + 16;
              if ( v8 > JobInformationLength )
              {
                JobIoAttribution = -1073741789;
                v21 = JobInformation;
                v20 = ReturnLength;
              }
              else
              {
                v21 = JobInformation;
                *(_WORD *)JobInformation = v117;
                *((_WORD *)JobInformation + 1) = v77;
                *((_QWORD *)JobInformation + 1) = (char *)JobInformation + 16;
                memmove((char *)JobInformation + 16, P, v77);
                v20 = ReturnLength;
                if ( ReturnLength )
                  *ReturnLength = v8;
              }
              ExFreePoolWithTag(P, 0);
              goto LABEL_245;
            }
            goto LABEL_243;
          }
          break;
        case 0x1A:
          v21 = JobInformation;
          JobIoAttribution = PspQueryJobHierarchyInterferenceCount(v16);
          if ( JobIoAttribution < 0 )
          {
            v75 = 0;
          }
          else
          {
            v94 = 1;
            v75 = 8;
          }
          v101 = v75;
          goto LABEL_69;
        case 0x1C:
          memset(v158, 0, sizeof(v158));
          PspLockJobMemoryLimitsShared((__int64)v16, v97);
          v158[1] = *((_QWORD *)v16 + 76) << 12;
          v158[0] = *((_QWORD *)v16 + 122) << 12;
          v158[2] = *((_QWORD *)v16 + 165) << 12;
          v16 = (char *)Object;
          PspUnlockJobMemoryLimitsShared((__int64)Object, v97);
          v18 = v158;
          goto LABEL_242;
        case 0x1D:
          v119 = *((_QWORD *)v16 + 165);
          v18 = &v119;
          v16 = (char *)Object;
          goto LABEL_242;
        case 0x1E:
          v159[0] = *(_OWORD *)(v16 + 1224);
          if ( (_DWORD)v5 == 36 )
          {
            v159[1] = *(_OWORD *)(v16 + 1240);
            v160 = *((_DWORD *)v16 + 305);
          }
          v18 = (__int64 *)v159;
          goto LABEL_242;
        case 0x1F:
          JobIoAttribution = -1073741822;
          goto LABEL_243;
        case 0x20:
          PspLockJobShared((__int64)v16, (__int64)CurrentThread);
          v136 = 0LL;
          v137 = 0LL;
          v73 = *((_QWORD *)v16 + 162);
          if ( v73 )
          {
            LODWORD(v137) = 1;
            v74 = *(_DWORD *)(v73 + 48);
            if ( (v74 & 1) != 0 )
            {
              v9 = 3;
              LODWORD(v137) = 3;
              v136 = *(_QWORD *)(v73 + 40);
            }
            if ( (v74 & 2) != 0 )
            {
              LODWORD(v137) = v9 | 4;
              BYTE4(v137) = *(_BYTE *)(v73 + 64);
            }
          }
          PspUnlockJob((__int64)v16, v97);
          v18 = &v136;
          goto LABEL_242;
        case 0x21:
          goto LABEL_184;
        case 0x22:
          goto LABEL_142;
        case 0x24:
          if ( (*((_DWORD *)v16 + 326) & 0x40000000) != 0 )
          {
            v143 = *((_DWORD *)v16 + 305);
            ParentSilo = PsGetParentSilo(v16, *(_QWORD *)&JobInformationClass, JobInformation, CurrentThread);
            if ( PsIsHostSilo(ParentSilo) )
              v144 = 0;
            else
              v144 = *(_DWORD *)(ParentSilo + 1220);
            v145 = *((_DWORD *)v16 + 302);
            IsSiloInServerSilo = PspIsSiloInServerSilo((__int64)v16);
            v18 = (__int64 *)&v143;
            goto LABEL_242;
          }
          break;
        default:
LABEL_224:
          JobIoAttribution = -1073741821;
          goto LABEL_243;
      }
    }
    JobIoAttribution = -1073740535;
    goto LABEL_243;
  }
  if ( (_DWORD)v6 == 21 )
  {
    v98 = (*((_DWORD *)v16 + 326) & 0x400) != 0;
    v18 = (__int64 *)&v98;
    goto LABEL_242;
  }
  if ( (int)v6 > 11 )
  {
    if ( (_DWORD)v6 != 12 )
    {
      if ( (_DWORD)v6 != 13 )
      {
        if ( (_DWORD)v6 != 14 )
        {
          switch ( (_DWORD)v6 )
          {
            case 0xF:
              PspLockJobShared((__int64)v16, (__int64)CurrentThread);
              v27 = *((_QWORD *)v16 + 126);
              if ( !v27 || (v28 = *(_DWORD *)(v27 + 40), (v28 & 0x40) != 0) )
              {
                v111 = 0LL;
              }
              else
              {
                HIDWORD(v111) = *(_DWORD *)(v27 + 44);
                v29 = ((v28 & 4 | 2u) >> 1) | 4;
                if ( (v28 & 1) == 0 )
                  v29 = (v28 & 4 | 2u) >> 1;
                v30 = v29 | 8;
                if ( (v28 & 2) == 0 )
                  v30 = v29;
                v31 = v30 | 0x10;
                if ( (v28 & 0x20) == 0 )
                  v31 = v30;
                LODWORD(v111) = v31;
              }
              PspUnlockJob((__int64)v16, v97);
              v18 = &v111;
              goto LABEL_242;
            case 0x10:
              v115 = *((_DWORD *)v16 + 219);
              v18 = (__int64 *)&v115;
              goto LABEL_242;
            case 0x11:
              v121[0] = *((_QWORD *)v16 + 59);
              v18 = v121;
              goto LABEL_242;
            case 0x12:
              v138 = 7;
              v141 = 0;
              PspLockJobShared((__int64)v16, (__int64)CurrentThread);
              v26 = *((_DWORD *)v16 + 326);
              v139 = (v26 & 0x200) != 0;
              v140 = (v26 & 0x80000) != 0;
              v142 = *((_QWORD *)v16 + 119);
              PspUnlockJob((__int64)v16, v97);
              v18 = (__int64 *)&v138;
              goto LABEL_242;
          }
          if ( (_DWORD)v6 != 19 )
          {
            JobIoAttribution = PspAllocateAndQueryNotificationChannel(CurrentThread, v16, v166);
            v21 = JobInformation;
            v20 = ReturnLength;
            if ( JobIoAttribution >= 0 )
            {
              v18 = (__int64 *)v166;
              JobIoAttribution = 0;
            }
            goto LABEL_245;
          }
          goto LABEL_98;
        }
        if ( ReturnLength && (v5 & 0xF) == 0 )
        {
          PspLockJobShared((__int64)v16, (__int64)CurrentThread);
          if ( (*((_DWORD *)v16 + 64) & 0x10) != 0 )
            v32 = (int *)(v16 + 264);
          else
            v32 = KeActiveProcessors;
          v167[0] = *(_OWORD *)v32;
          v167[1] = *((_OWORD *)v32 + 1);
          v167[2] = *((_OWORD *)v32 + 2);
          v167[3] = *((_OWORD *)v32 + 3);
          v167[4] = *((_OWORD *)v32 + 4);
          v167[5] = *((_OWORD *)v32 + 5);
          v167[6] = *((_OWORD *)v32 + 6);
          v167[7] = *((_OWORD *)v32 + 7);
          v167[8] = *((_OWORD *)v32 + 8);
          v167[9] = *((_OWORD *)v32 + 9);
          v168 = *((_QWORD *)v32 + 20);
          PspUnlockJob((__int64)v16, v97);
          v33 = v167[0];
          memset(v170, 0, 16LL * LOWORD(v167[0]));
          v34 = 0;
          if ( v33 )
          {
            v35 = v170;
            v36 = (_QWORD *)v167 + 1;
            do
            {
              *((_WORD *)v35 + 4) = v34;
              *(_QWORD *)v35 = *v36;
              ++v34;
              ++v36;
              v35 += 16;
            }
            while ( v34 < v33 );
          }
          v37 = 16 * v33;
          v101 = v37;
          JobIoAttribution = JobInformationLength < v37 ? 0xC0000023 : 0;
          v8 = JobInformationLength;
          if ( JobInformationLength >= v37 )
            v8 = v37;
          LODWORD(Size) = v8;
          v94 = 1;
          v21 = JobInformation;
          memmove(JobInformation, v170, v8);
          v20 = ReturnLength;
          goto LABEL_245;
        }
        goto LABEL_87;
      }
LABEL_142:
      v104 = 0;
      v105 = 0;
      PspQueryJobHierarchyAccountingInformation(v16, (__int64)v169);
      v123 = v169[9];
      v125 = v169[10];
      v127 = v169[0];
      PspLockJobExclusive((__int64)v16, v97);
      v39 = *((_DWORD *)v16 + 326);
      if ( (v39 & 8) == 0 || (v39 & 0x4000) == 0 )
      {
        _InterlockedAnd((volatile signed __int32 *)v16 + 326, 0xFFFFFFFB);
        v16 = (char *)Object;
      }
      ExAcquirePushLockSharedEx((ULONG_PTR)(v16 + 1032), 0LL);
      v129 = *((_QWORD *)v16 + 122) << 12;
      PspUnlockJobMemoryLimitsShared((__int64)v16, 0LL);
      v40 = (_DWORD *)*((_QWORD *)v16 + 123);
      if ( v40 )
      {
        LODWORD(v122) = *v40;
        HIDWORD(v122) = *(_DWORD *)(*((_QWORD *)v16 + 123) + 4LL);
        v41 = (_QWORD *)*((_QWORD *)v16 + 123);
        v42 = v41[9];
        if ( !v42 )
          v42 = v41[1];
        v124 = v42;
        v43 = v41[10];
        if ( !v43 )
          v43 = v41[2];
        v126 = v43;
        v44 = v41[11];
        if ( !v44 )
          v44 = v41[3];
        v128 = v44;
        v45 = v41[12];
        if ( !v45 )
          v45 = v41[4];
        v133 = v45 << 12;
        v46 = v41[13];
        if ( !v46 )
          v46 = v41[5];
        v130 = v46 << 12;
        v47 = 0LL;
        do
        {
          v48 = (_DWORD *)PspLimitViolationRateControlToleranceLimitField(&v122, v47);
          v52 = v50[16];
          if ( v52 )
            *v51 = 1;
          else
            v52 = *v50;
          *v48 = v52;
          v47 = (unsigned int)(v49 + 1);
        }
        while ( (int)v47 < 3 );
      }
      else
      {
        v122 = 0LL;
        v124 = 0LL;
        v126 = 0LL;
        v128 = 0LL;
        v133 = 0LL;
        v130 = 0LL;
        v53 = 0LL;
        do
        {
          *(_DWORD *)PspLimitViolationRateControlToleranceLimitField(&v122, v53) = 0;
          v53 = (unsigned int)(v54 + 1);
        }
        while ( (int)v53 < 3 );
      }
      v55 = 0;
      v56 = (char *)&v104;
      v57 = 60LL;
      v106 = 60LL;
      do
      {
        v58 = *((_QWORD *)v16 + 123);
        if ( v58 && (v59 = PspRateControlLimitFlag((unsigned int)v55, v58, v57), (v59 & *v60) != 0) )
          v62 = *(_DWORD *)((char *)v60 + v61);
        else
          v62 = 1;
        v109 = v62;
        PspQueryRateControlHistory((__int64)v16, v62, *v56, &v116, v55);
        if ( v55 )
        {
          if ( v55 == 1 )
            v63 = &v134;
          else
            v63 = (char *)&v131;
        }
        else
        {
          v63 = &v135;
        }
        *(_DWORD *)v63 = v116;
        ++v55;
        v57 = v106 + 4;
        v106 += 4LL;
        ++v56;
      }
      while ( v55 < 3 );
      v64 = *((_QWORD *)v16 + 123);
      if ( v64 )
      {
        *(_DWORD *)(v64 + 4) = 0;
        memset((void *)(*((_QWORD *)v16 + 123) + 72LL), 0, 0x40uLL);
      }
      PspUnlockJob((__int64)v16, v97);
      if ( JobInformationLength == 88 )
      {
        v154[1] = v123;
        v154[2] = v124;
        v154[3] = v125;
        v154[4] = v126;
        v154[5] = v127;
        v154[6] = v128;
        v154[7] = v129;
        v154[8] = v133;
        v154[9] = v130;
        v155 = v131;
        v156 = v132;
        v154[0] = v122 & 0x27820400278204LL;
        v18 = v154;
      }
      else if ( JobInformationLength == 80 )
      {
        v151[1] = v123;
        v151[2] = v124;
        v151[3] = v125;
        v151[4] = v126;
        v151[5] = v127;
        v151[6] = v128;
        v151[7] = v129;
        v151[8] = v130;
        v152 = v131;
        v153 = v132;
        v151[0] = v122 & 0x7020400070204LL;
        v18 = v151;
      }
      else
      {
        v18 = &v122;
      }
      JobIoAttribution = 0;
      if ( (PerfGlobalGroupMask & 0x80000) != 0 )
        EtwTraceJobSetQuery((_DWORD)v16, v6, (unsigned int)&v122, (unsigned int)&v109, 0, 1830);
      goto LABEL_243;
    }
LABEL_184:
    memset(v147, 0, 0x48uLL);
    PspLockJobShared((__int64)v16, v97);
    v65 = *((_QWORD *)v16 + 123);
    if ( v65 )
    {
      LODWORD(v147[5]) = *(_DWORD *)v65;
      v147[0] = *(_QWORD *)(v65 + 8);
      v147[1] = *(_QWORD *)(v65 + 16);
      v147[2] = *(_QWORD *)(v65 + 24);
      v147[6] = *(_QWORD *)(v65 + 32) << 12;
      v147[3] = *(_QWORD *)(v65 + 40) << 12;
      v66 = 0LL;
      v67 = (_DWORD *)(v65 + 60);
      do
      {
        v68 = (_DWORD *)PspNotificationLimitRateControlToleranceField(v147, v66, v67);
        *v68 = *(_DWORD *)(v69 - 12);
        v70 = (_DWORD *)PspNotificationLimitRateControlToleranceIntervalField(v147);
        *v70 = *v71;
        v66 = (unsigned int)(v72 + 1);
        v67 = v71 + 1;
      }
      while ( (int)v66 < 3 );
    }
    PspUnlockJob((__int64)v16, v97);
    if ( JobInformationLength == 48 )
    {
      memset(v149, 0, sizeof(v149));
      v149[0] = v147[0];
      v149[1] = v147[1];
      v149[2] = v147[2];
      v149[3] = v147[3];
      v149[4] = v147[4];
      LODWORD(v149[5]) = v147[5] & 0x70204;
      v18 = v149;
    }
    else if ( JobInformationLength == 56 )
    {
      memset(v150, 0, 0x38uLL);
      v150[0] = v147[0];
      v150[1] = v147[1];
      v150[2] = v147[2];
      v150[3] = v147[6];
      v150[4] = v147[3];
      v150[5] = v147[4];
      LODWORD(v150[6]) = v147[5] & 0x278204;
      v18 = v150;
    }
    else
    {
      v18 = v147;
    }
    goto LABEL_242;
  }
  switch ( (_DWORD)v6 )
  {
    case 0xB:
      if ( ReturnLength && (v5 & 1) == 0 )
      {
        PspLockJobShared((__int64)v16, (__int64)CurrentThread);
        v22 = 0;
        v23 = 0;
        v24 = *((_WORD *)v16 + 132);
        if ( v24 )
        {
          v25 = v16 + 272;
          do
          {
            if ( *v25 )
              Src[v22++] = v23;
            ++v23;
            ++v25;
          }
          while ( v23 < v24 );
        }
        PspUnlockJob((__int64)v16, v97);
        v8 = 2 * v22;
        v101 = v8;
        v94 = 1;
        JobIoAttribution = JobInformationLength < v8 ? 0xC0000023 : 0;
        if ( v8 > JobInformationLength )
          v8 = Size;
        LODWORD(Size) = v8;
        v21 = JobInformation;
        memmove(JobInformation, Src, v8);
        v20 = ReturnLength;
        goto LABEL_245;
      }
LABEL_87:
      JobIoAttribution = -1073741811;
      goto LABEL_243;
    case 1:
      goto LABEL_98;
    case 2:
      goto LABEL_70;
  }
  if ( (_DWORD)v6 != 3 )
  {
    switch ( (_DWORD)v6 )
    {
      case 4:
        PspLockJobShared((__int64)v16, (__int64)CurrentThread);
        v114 = *((_DWORD *)v16 + 112);
        PspUnlockJob((__int64)v16, v97);
        v18 = (__int64 *)&v114;
        goto LABEL_242;
      case 5:
        memset(&v121[1], 0, 0x28uLL);
        v94 = 1;
        *(_OWORD *)JobInformation = *(_OWORD *)&v121[1];
        *((_OWORD *)JobInformation + 1) = *(_OWORD *)&v121[3];
        *((_QWORD *)JobInformation + 4) = v121[5];
        v20 = ReturnLength;
LABEL_244:
        v21 = JobInformation;
        goto LABEL_245;
      case 6:
        v113 = *((_DWORD *)v16 + 113);
        v18 = (__int64 *)&v113;
        goto LABEL_242;
    }
    if ( (_DWORD)v6 != 8 )
    {
      if ( (_DWORD)v6 != 9 )
      {
        if ( (_DWORD)v6 == 10 )
        {
          --CurrentThread->SpecialApcDisable;
          ExAcquirePushLockSharedEx((ULONG_PTR)&PspJobListLock, 0LL);
          v112 = 0;
          PspUnlockJobListShared(v97);
          v18 = (__int64 *)&v112;
LABEL_242:
          JobIoAttribution = 0;
          goto LABEL_243;
        }
        goto LABEL_224;
      }
LABEL_70:
      memset(v161, 0, 0x98uLL);
      PspLockJobShared((__int64)v16, v97);
      v161[3] = *((_QWORD *)v16 + 30);
      v161[4] = *((_QWORD *)v16 + 31);
      LODWORD(v161[5]) = *((_DWORD *)v16 + 65);
      LODWORD(v161[7]) = (unsigned __int8)v16[873];
      HIDWORD(v161[7]) = *((_DWORD *)v16 + 121);
      if ( KeIsSingleGroupAffinityEx((unsigned __int16 *)v16 + 132, &v107) )
        v161[6] = *(_QWORD *)&v16[8 * v107 + 272];
      else
        v161[6] = 0LL;
      v161[0] = *((_QWORD *)v16 + 28);
      v161[1] = *((_QWORD *)v16 + 29);
      LODWORD(v161[2]) = (PspGetJobLimitInformationValidFlags(v6, JobInformationLength) | 0x7FFF) & *((_DWORD *)v16 + 64);
      if ( (_DWORD)v6 == 9 )
      {
        ExAcquirePushLockSharedEx((ULONG_PTR)(v16 + 1032), 0LL);
        v161[14] = *((_QWORD *)v16 + 72) << 12;
        v161[15] = *((_QWORD *)v16 + 73) << 12;
        v161[17] = *((_QWORD *)v16 + 76) << 12;
        v161[18] = *((_QWORD *)v16 + 74) << 12;
        PspUnlockJobMemoryLimitsShared((__int64)v16, 0LL);
        PspUnlockJob((__int64)v16, v97);
        v161[16] = *((_QWORD *)v16 + 75) << 12;
      }
      else
      {
        PspUnlockJob((__int64)v16, v97);
      }
      v18 = v161;
      goto LABEL_242;
    }
LABEL_98:
    PspQueryJobHierarchyAccountingInformation(v16, (__int64)v169);
    v18 = v169;
    goto LABEL_242;
  }
  v101 = 0;
  v21 = JobInformation;
  JobIoAttribution = PspQueryJobHierarchyProcessIdList(v16);
  v94 = 1;
LABEL_69:
  v20 = ReturnLength;
LABEL_245:
  if ( v16 )
    ObfDereferenceObjectWithTag(v16, 0x79517350u);
  if ( JobIoAttribution >= 0 && !v94 )
    memmove(v21, v18, v8);
  if ( v20 )
    *v20 = v101;
  return JobIoAttribution;
}
