/*
 * XREFs of ?AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z @ 0x180020A10
 * Callers:
 *     ?AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEAXPEAUIResourceSetCallback@2@2PEBGPEAT_RM_SID@@KK_KPEAU_RM_ACTIVATOR@@PEA_N6PEAPEAVResourceSet@2@@Z @ 0x18001DCA0 (-AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITIO.c)
 * Callees:
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     ?HampHostCanKillForResourcePressure@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180017FFC (-HampHostCanKillForResourcePressure@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpResourceCheckDestroyPartitionForAcquire@@YAKPEAU_RM_RESOURCE_SET@@@Z @ 0x18001E258 (-RmpResourceCheckDestroyPartitionForAcquire@@YAKPEAU_RM_RESOURCE_SET@@@Z.c)
 *     ?EvaluateResourceRequest@ResourceSet@ExecutionModel@@QEAAJ_KW4Enum@PendType@2@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@PEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@PEA_N5@Z @ 0x18001E2C0 (-EvaluateResourceRequest@ResourceSet@ExecutionModel@@QEAAJ_KW4Enum@PendType@2@PEAU_RM_RESOURCE_U.c)
 *     ?CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x18001E720 (-CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z.c)
 *     ?RmpPolicyComputeUsageLimits@@YAXPEAU_RM_USAGE_LIMIT_SETTINGS@@PEAU_RM_REMEDIATION_ACTIONS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@_KPEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x180020050 (-RmpPolicyComputeUsageLimits@@YAXPEAU_RM_USAGE_LIMIT_SETTINGS@@PEAU_RM_REMEDIATION_ACTIONS@@PEAU.c)
 *     ?RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180020460 (-RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpPolicyDigestCompute@@YA?AT_RM_POLICY_DIGEST@@PEAVResourceSet@ExecutionModel@@@Z @ 0x180020930 (-RmpPolicyDigestCompute@@YA-AT_RM_POLICY_DIGEST@@PEAVResourceSet@ExecutionModel@@@Z.c)
 *     ?RmpPolicyDigestMerge@@YA?AT_RM_POLICY_DIGEST@@T1@0@Z @ 0x180024760 (-RmpPolicyDigestMerge@@YA-AT_RM_POLICY_DIGEST@@T1@0@Z.c)
 *     ?RmpActivityHostCommitDebtCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x180037F40 (-RmpActivityHostCommitDebtCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z.c)
 *     ?RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800390E4 (-RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18004907C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180049094 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180049A1A (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180049A30 (_guard_dispatch_icall_nop.c)
 *     ?RmpPolicyRevokeResourceSetsForAcquire@@YAXPEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@@Z @ 0x180061AF0 (-RmpPolicyRevokeResourceSetsForAcquire@@YAXPEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@@Z.c)
 *     ?CheckUpdatePendStats@ResourceSet@ExecutionModel@@AEAAXKK@Z @ 0x180061C7C (-CheckUpdatePendStats@ResourceSet@ExecutionModel@@AEAAXKK@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::AcquireInternalResources(
        ExecutionModel::ResourceSet *a1,
        int a2,
        char *a3)
{
  __int64 v3; // r13
  __int64 v4; // r12
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // r14
  __int64 v9; // rcx
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rbx
  unsigned int v12; // r8d
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  char v15; // al
  const struct _TraceLoggingMetadata_t *v16; // rdx
  unsigned int v17; // r14d
  unsigned int *v18; // rdi
  unsigned int *Heap; // rsi
  __int64 v20; // r10
  int v21; // eax
  int v22; // ebx
  unsigned int *v23; // rbx
  __int64 v24; // rsi
  unsigned int v25; // r14d
  int v26; // eax
  __int64 v27; // rcx
  int v28; // esi
  __int64 v29; // rbx
  _QWORD *v30; // rdi
  int v31; // ebx
  void *v32; // rcx
  _QWORD *v33; // rdi
  _QWORD *i; // rbx
  _QWORD *v35; // rax
  _QWORD *v36; // rsi
  _QWORD *v37; // rax
  char v38; // r12
  int v39; // esi
  __int64 v40; // rbx
  unsigned __int16 v41; // di
  __int64 v42; // rbx
  unsigned __int16 v44; // ax
  __int64 v45; // rdx
  _QWORD *v46; // rdi
  PVOID ProcessHeap; // rcx
  unsigned int *v49; // rax
  _QWORD *v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rcx
  char v53; // bl
  bool v54; // zf
  _QWORD *v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rcx
  char v58; // [rsp+40h] [rbp-C0h] BYREF
  bool v59; // [rsp+41h] [rbp-BFh] BYREF
  bool v60; // [rsp+42h] [rbp-BEh] BYREF
  char v61; // [rsp+43h] [rbp-BDh] BYREF
  char v62; // [rsp+44h] [rbp-BCh] BYREF
  char v63; // [rsp+45h] [rbp-BBh] BYREF
  char v64; // [rsp+46h] [rbp-BAh] BYREF
  int v65; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v66; // [rsp+4Ch] [rbp-B4h] BYREF
  void *ProcessHandle; // [rsp+50h] [rbp-B0h] BYREF
  int v68; // [rsp+58h] [rbp-A8h]
  __int64 v69; // [rsp+60h] [rbp-A0h] BYREF
  int v70; // [rsp+68h] [rbp-98h] BYREF
  int v71; // [rsp+6Ch] [rbp-94h]
  int v72; // [rsp+70h] [rbp-90h] BYREF
  int v73; // [rsp+74h] [rbp-8Ch] BYREF
  void *Block[2]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v75; // [rsp+88h] [rbp-78h]
  unsigned int *v76; // [rsp+90h] [rbp-70h]
  char *v77; // [rsp+98h] [rbp-68h]
  struct _CLIENT_ID ClientId; // [rsp+A0h] [rbp-60h] BYREF
  ExecutionModel::ResourceSet *v79; // [rsp+B0h] [rbp-50h] BYREF
  void **v80; // [rsp+B8h] [rbp-48h]
  __int64 v81; // [rsp+C0h] [rbp-40h]
  __int64 v82; // [rsp+C8h] [rbp-38h]
  char v83; // [rsp+D0h] [rbp-30h]
  char v84; // [rsp+D4h] [rbp-2Ch]
  __int64 v85; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v86; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v87; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v88; // [rsp+F0h] [rbp-10h] BYREF
  unsigned __int64 v89; // [rsp+F8h] [rbp-8h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+108h] [rbp+8h] BYREF
  EVENT_DESCRIPTOR v91; // [rsp+118h] [rbp+18h] BYREF
  __int64 v92; // [rsp+128h] [rbp+28h] BYREF
  __int64 v93; // [rsp+130h] [rbp+30h] BYREF
  char v94; // [rsp+138h] [rbp+38h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+140h] [rbp+40h] BYREF
  _BYTE v96[128]; // [rsp+170h] [rbp+70h] BYREF
  __int128 v97; // [rsp+1F0h] [rbp+F0h] BYREF
  __int128 v98; // [rsp+200h] [rbp+100h]
  __int128 v99; // [rsp+210h] [rbp+110h]
  __int128 v100; // [rsp+220h] [rbp+120h]
  __int128 v101; // [rsp+230h] [rbp+130h]
  _BYTE v102[4]; // [rsp+240h] [rbp+140h] BYREF
  __int64 v103; // [rsp+244h] [rbp+144h]
  __int64 v104; // [rsp+258h] [rbp+158h]
  __int64 v105; // [rsp+260h] [rbp+160h]
  __int64 v106; // [rsp+270h] [rbp+170h]
  __int64 v107; // [rsp+280h] [rbp+180h]
  __int64 v108; // [rsp+288h] [rbp+188h]
  __int64 v109; // [rsp+298h] [rbp+198h]
  __int64 v110; // [rsp+2A0h] [rbp+1A0h]
  __int64 v111; // [rsp+2A8h] [rbp+1A8h]
  __int64 v112; // [rsp+2B0h] [rbp+1B0h]
  __int64 v113; // [rsp+2B8h] [rbp+1B8h]
  __int64 v114; // [rsp+2C0h] [rbp+1C0h]
  __int64 v115; // [rsp+2D8h] [rbp+1D8h]
  __int64 v116; // [rsp+2E0h] [rbp+1E0h]
  __int64 v117; // [rsp+2E8h] [rbp+1E8h]
  __int64 v118; // [rsp+2F0h] [rbp+1F0h]
  __int64 v119; // [rsp+2F8h] [rbp+1F8h]
  __int64 v120; // [rsp+300h] [rbp+200h]
  __int64 v121; // [rsp+308h] [rbp+208h]
  __int64 v122; // [rsp+310h] [rbp+210h]
  __int64 v123; // [rsp+318h] [rbp+218h]
  __int64 v124; // [rsp+320h] [rbp+220h]
  __int128 v125; // [rsp+330h] [rbp+230h] BYREF
  _OWORD v126[4]; // [rsp+340h] [rbp+240h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+380h] [rbp+280h] BYREF
  void *v128; // [rsp+390h] [rbp+290h]
  int v129; // [rsp+398h] [rbp+298h]
  int v130; // [rsp+39Ch] [rbp+29Ch]
  __int64 *v131; // [rsp+3A0h] [rbp+2A0h]
  __int64 v132; // [rsp+3A8h] [rbp+2A8h]
  __int64 *v133; // [rsp+3B0h] [rbp+2B0h]
  __int64 v134; // [rsp+3B8h] [rbp+2B8h]
  __int64 *v135; // [rsp+3C0h] [rbp+2C0h]
  __int64 v136; // [rsp+3C8h] [rbp+2C8h]
  char *v137; // [rsp+3D0h] [rbp+2D0h]
  __int64 v138; // [rsp+3D8h] [rbp+2D8h]
  __int64 *v139; // [rsp+3E0h] [rbp+2E0h]
  __int64 v140; // [rsp+3E8h] [rbp+2E8h]
  __int64 v141; // [rsp+3F0h] [rbp+2F0h]
  __int64 v142; // [rsp+3F8h] [rbp+2F8h]
  struct _EVENT_DATA_DESCRIPTOR v143; // [rsp+400h] [rbp+300h] BYREF
  void *v144; // [rsp+410h] [rbp+310h]
  int v145; // [rsp+418h] [rbp+318h]
  int v146; // [rsp+41Ch] [rbp+31Ch]
  int *v147; // [rsp+420h] [rbp+320h]
  __int64 v148; // [rsp+428h] [rbp+328h]
  bool *v149; // [rsp+430h] [rbp+330h]
  __int64 v150; // [rsp+438h] [rbp+338h]
  char *v151; // [rsp+440h] [rbp+340h]
  __int64 v152; // [rsp+448h] [rbp+348h]
  char *v153; // [rsp+450h] [rbp+350h]
  __int64 v154; // [rsp+458h] [rbp+358h]
  int *v155; // [rsp+460h] [rbp+360h]
  __int64 v156; // [rsp+468h] [rbp+368h]
  int *v157; // [rsp+470h] [rbp+370h]
  __int64 v158; // [rsp+478h] [rbp+378h]
  char *v159; // [rsp+480h] [rbp+380h]
  __int64 v160; // [rsp+488h] [rbp+388h]
  char *v161; // [rsp+490h] [rbp+390h]
  __int64 v162; // [rsp+498h] [rbp+398h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+4A0h] [rbp+3A0h] BYREF
  int *v164; // [rsp+4C0h] [rbp+3C0h]
  __int64 v165; // [rsp+4C8h] [rbp+3C8h]
  __int64 *v166; // [rsp+4D0h] [rbp+3D0h]
  __int64 v167; // [rsp+4D8h] [rbp+3D8h]
  EVENT_DATA_DESCRIPTOR v168; // [rsp+4E0h] [rbp+3E0h] BYREF
  __int64 *v169; // [rsp+500h] [rbp+400h]
  __int64 v170; // [rsp+508h] [rbp+408h]
  __int64 *v171; // [rsp+510h] [rbp+410h]
  __int64 v172; // [rsp+518h] [rbp+418h]

  v3 = *((_QWORD *)a1 + 180);
  v4 = *((_QWORD *)a1 + 23);
  Block[0] = Block;
  Block[1] = Block;
  v6 = *((_QWORD *)a1 + 3);
  v75 = 0LL;
  v77 = a3;
  v71 = a2;
  v7 = *(_QWORD *)(v6 + 152);
  v8 = *(_QWORD *)(*((_QWORD *)a1 + 179) + 64LL);
  memset_0(v96, 0, sizeof(v96));
  memset_0(v102, 0, 0xF0uLL);
  v9 = *(_QWORD *)(v8 + 32);
  v103 = -1LL;
  NtManagePartition(v9, 0LL, 0LL, v102, 240);
  v10 = RmpPageSize;
  v11 = RmpPageSize * v124;
  memset_0(&v97, 0, 0x50uLL);
  *(_QWORD *)&v101 = v122 + v121 + v120 + v119 + v118 + v117 + v116 + v115 + v101;
  *((_QWORD *)&v97 + 1) = v10 * v105 - v11;
  *((_QWORD *)&v99 + 1) = v10 * v106 - v11;
  *((_QWORD *)&v98 + 1) = v10 * v105 - v10 * v104;
  *(_QWORD *)&v98 = v10 * v104 - v11;
  *(_QWORD *)&v100 = v10 * (v107 + v108 + v114 + v113 + v112 + v111 + v109 + v110);
  *((_QWORD *)&v100 + 1) = *((_QWORD *)&v99 + 1) - v100;
  *(_QWORD *)&v97 = v10 * v123 - v11;
  RmpPolicyComputeUsageLimits(
    (struct _RM_USAGE_LIMIT_SETTINGS *)(v7 + 400),
    (struct _RM_REMEDIATION_ACTIONS *)(v7 + 456),
    (struct _RM_SYSTEM_MEMORY_METRICS *)&v97,
    v97,
    (struct _RM_RESOURCE_USAGE_LIMITS *)v96);
  v125 = v97;
  v126[1] = v99;
  v126[0] = v98;
  v126[3] = v101;
  v126[2] = v100;
  *(_WORD *)(v8 + 188) = 0;
  v54 = (*((_BYTE *)a1 + 1496) & 0x10) == 0;
  v69 = 0LL;
  if ( !v54
    || ((v13 = *((int *)a1 + 364), (unsigned int)v13 <= 0x28) && (v14 = 0x11000002000LL, _bittest64(&v14, v13))
      ? (v15 = 1)
      : (v15 = 0),
        v15) )
  {
    v15 = 1;
  }
  v16 = &TraceLoggingMetadata;
  v17 = 1;
  if ( !v15 || (*((_BYTE *)a1 + 1498) & 0x40) != 0 )
  {
    v69 = 0LL;
    ProcessHandle = 0LL;
    v18 = 0LL;
    v66 = 1;
    v76 = 0LL;
    Heap = (unsigned int *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8uLL);
    if ( Heap )
    {
      v20 = v3 + 552;
      while ( 1 )
      {
        v21 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, _QWORD, unsigned int *, unsigned int *))(*(_QWORD *)(*(_QWORD *)(v3 + 48) + 40LL) + 72LL))(
                v20,
                *(unsigned int *)(v3 + 620),
                v3 + 88,
                *(unsigned int *)(v3 + 624),
                *(_QWORD *)(v3 + 32),
                Heap,
                &v66);
        v22 = v21;
        if ( v21 >= 0 )
        {
          v18 = Heap;
          v76 = Heap;
          goto LABEL_11;
        }
        ProcessHeap = NtCurrentPeb()->ProcessHeap;
        if ( v21 != -2147483643 )
          break;
        RtlFreeHeap(ProcessHeap, 0, Heap);
        v49 = (unsigned int *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8LL * v66);
        v20 = v3 + 552;
        Heap = v49;
        if ( !v49 )
        {
          v22 = -1073741801;
          goto LABEL_11;
        }
      }
      RtlFreeHeap(ProcessHeap, 0, Heap);
LABEL_11:
      if ( v22 >= 0 )
      {
        if ( v66 )
        {
          v23 = v18;
          v24 = v66;
          do
          {
            if ( ProcessHandle )
            {
              NtClose(ProcessHandle);
              ProcessHandle = 0LL;
            }
            v25 = *v23;
            ClientId.UniqueProcess = (HANDLE)*v23;
            ClientId.UniqueThread = 0LL;
            ObjectAttributes.Length = 48;
            memset(&ObjectAttributes.RootDirectory, 0, 20);
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            if ( NtOpenProcess(&ProcessHandle, 0x1000u, &ObjectAttributes, &ClientId) >= 0
              && (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, _QWORD, void *))(*(_QWORD *)(*(_QWORD *)(v3 + 48) + 40LL) + 80LL))(
                   v3 + 552,
                   *(unsigned int *)(v3 + 620),
                   v3 + 88,
                   *(unsigned int *)(v3 + 624),
                   *(_QWORD *)(v3 + 32),
                   ProcessHandle) )
            {
              RmpActivityHostCommitDebtCallback((struct _RM_ACTIVITY_HOST *)v3, ProcessHandle, v25, &v69);
            }
            v23 += 2;
            --v24;
          }
          while ( v24 );
          v18 = v76;
          v17 = 1;
        }
        v22 = 0;
      }
      if ( v18 && v18 != (unsigned int *)&v94 )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v18);
    }
    else
    {
      v22 = -1073741801;
    }
    if ( ProcessHandle )
      NtClose(ProcessHandle);
    v70 = v22;
    if ( v22 < 0 )
    {
      if ( dword_18009B0B0 <= 4u )
        goto LABEL_33;
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_18009B0B0, 1uLL) )
      {
        v165 = 4LL;
        v164 = &v70;
        v92 = *(_QWORD *)(v3 + 32);
        v166 = &v92;
        v167 = 8LL;
        TlgWrite((TraceLoggingHProvider)&dword_18009B0B0, &unk_180088D81, 0LL, 0LL, 4u, &pData);
      }
    }
    v16 = &TraceLoggingMetadata;
  }
  if ( dword_18009B0B0 > 4u && (qword_18009B0C0 & 9) != 0 && (qword_18009B0C8 & 9) == qword_18009B0C8 )
  {
    v93 = *((_QWORD *)a1 + 234);
    v131 = &v93;
    v85 = *((_QWORD *)a1 + 196);
    v133 = &v85;
    v135 = &v69;
    v137 = (char *)v126 + 8;
    v86 = *((_QWORD *)a1 + 199);
    v139 = &v86;
    v141 = v4 + 248;
    v132 = 8LL;
    v134 = 8LL;
    v136 = 8LL;
    v138 = 8LL;
    v140 = 8LL;
    v142 = 8LL;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_18009B0B8;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180087494 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = 9LL;
    UserData.Size = *(unsigned __int16 *)off_18009B0B8;
    v128 = &unk_18008749F;
    UserData.Reserved = 2;
    v129 = 118;
    v130 = 1;
    EventWriteTransfer(qword_18009B0D0, &EventDescriptor, 0LL, 0LL, 8u, &UserData);
  }
LABEL_33:
  v26 = RmpResourceCheckDestroyPartitionForAcquire(*((struct _RM_RESOURCE_SET **)a1 + 179), (__int64)v16, v12);
  v27 = *((_QWORD *)a1 + 179);
  v28 = v26;
  v68 = v26;
  v29 = *(_QWORD *)(v27 + 64);
  memset_0(&v79, 0, 0x28uLL);
  v79 = a1;
  while ( 1 )
  {
    v30 = Block[0];
    if ( Block[0] == Block )
      break;
    v50 = (_QWORD *)*((_QWORD *)Block[0] + 1);
    v51 = *(_QWORD *)Block[0];
    *v50 = *(_QWORD *)Block[0];
    *(_QWORD *)(v51 + 8) = v50;
    v52 = v30[2];
    if ( v52 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v52 + 16LL))(v52);
    operator delete(v30);
  }
  v80 = Block;
  v75 = 0LL;
  v82 = v29 + 144;
  v81 = v29;
  v31 = ExecutionModel::ResourceSet::EvaluateResourceRequest(
          (__int64)a1,
          v69,
          v71,
          (__int64)v96,
          &v125,
          &v79,
          &v59,
          &v58);
  v65 = v31;
  if ( dword_18009B0B0 > 4u && (qword_18009B0C0 & 9) != 0 && (qword_18009B0C8 & 9) == qword_18009B0C8 )
  {
    v148 = 4LL;
    v147 = &v65;
    v60 = v59;
    v149 = &v60;
    v61 = v58;
    v151 = &v61;
    v153 = &v62;
    v150 = 1LL;
    v152 = 1LL;
    v62 = v28;
    v154 = 1LL;
    v32 = v80[2];
    v155 = &v72;
    v72 = (int)v32;
    v156 = 4LL;
    LODWORD(v32) = *(_DWORD *)(v82 + 40);
    v157 = &v73;
    v63 = v83;
    v159 = &v63;
    v64 = v84;
    v161 = &v64;
    v73 = (int)v32;
    v158 = 4LL;
    v160 = 1LL;
    v162 = 1LL;
    *(_DWORD *)&v91.Level = 4;
    v143.Ptr = (ULONGLONG)off_18009B0B8;
    *(_DWORD *)&v91.Id = ((unsigned int)&unk_1800872D2 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v91.Keyword = 9LL;
    v143.Size = *(unsigned __int16 *)off_18009B0B8;
    v144 = &unk_1800872DD;
    v143.Reserved = 2;
    v145 = 185;
    v146 = 1;
    EventWriteTransfer(qword_18009B0D0, &v91, 0LL, 0LL, 0xAu, &v143);
    v31 = v65;
  }
  if ( v31 >= 0 )
  {
    v60 = v59 || v58 || v28;
    v33 = (_QWORD *)(v4 + 160);
    for ( i = *(_QWORD **)(v4 + 160); i != v33 && *(_DWORD *)(i[2] + 1408LL) < *((_DWORD *)a1 + 352); i = (_QWORD *)*i )
      ;
    v35 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    v36 = v35;
    if ( v35 )
    {
      v35[2] = a1;
      (*(void (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)a1 + 8LL))(a1);
      v37 = (_QWORD *)i[1];
      v38 = v60;
      v36[1] = v37;
      *v36 = i;
      *v37 = v36;
      i[1] = v36;
      ++v33[2];
      v65 = 0;
      v39 = 0;
      if ( v38 )
        goto LABEL_102;
      *((_DWORD *)a1 + 350) = 2;
      v40 = *(_QWORD *)(v3 + 1056);
      v41 = 102;
      if ( v40 != v3 + 1056 )
      {
        v42 = v40 - 1416;
        if ( v42 )
        {
          do
          {
            if ( *(_DWORD *)(v42 + 1400) == 2 || (*(_BYTE *)(v42 + 1452) & 4) != 0 )
            {
              v44 = RmpPolicyDigestCompute(v42);
              v41 = RmpPolicyDigestMerge(v41, v44);
            }
            v45 = *(_QWORD *)(v42 + 1416);
            if ( v45 == *(_QWORD *)(v42 + 1440) + 24 * (*(int *)(v42 + 1448) + 44LL) )
              break;
            v42 = v45 - 1416;
          }
          while ( v45 != 1416 );
        }
      }
      *(_WORD *)(v3 + 1104) = v41;
      RmpActivityHostUpdateImportance((struct _RM_ACTIVITY_HOST *)v3, 1);
      QueryUnbiasedInterruptTime((PULONGLONG)(v3 + 1400));
      if ( ((*(_DWORD *)(*(_QWORD *)(v3 + 48) + 508LL) & 4) != 0
         || (*(_BYTE *)(v3 + 1104) & 4) != 0 && (*(_BYTE *)(v3 + 1106) & 4) != 0)
        && ((*(_BYTE *)(v3 + 812) & 1) == 0
         || (unsigned int)HampHostCanKillForResourcePressure(
                            (struct _RM_HAM_ACTIVITY_HOST *)(v3 + 64),
                            (*(_DWORD *)(*(_QWORD *)(v3 + 48) + 508LL) & 4) == 0))
        && (*(_BYTE *)(v3 + 1106) & 0x30) != 0 )
      {
        SetEvent(*(HANDLE *)(*(_QWORD *)(v3 + 56) + 88LL));
      }
      if ( (*(_BYTE *)(v3 + 812) & 1) != 0 )
      {
        v39 = 1;
      }
      else if ( v77 && RmpActivityHostCheckQueueWork((struct _RM_ACTIVITY_HOST *)v3) )
      {
        if ( dword_18009B0B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18009B0B0, 1uLL) )
        {
          v87 = *(_QWORD *)(v3 + 32);
          v169 = &v87;
          v88 = *((_QWORD *)a1 + 234);
          v171 = &v88;
          v170 = 8LL;
          v172 = 8LL;
          TlgWrite((TraceLoggingHProvider)&dword_18009B0B0, &unk_180087815, 0LL, 0LL, 4u, &v168);
        }
        *((_DWORD *)a1 + 363) |= 4u;
        v38 = 1;
      }
      *((_DWORD *)a1 + 350) = 1;
      if ( v38 )
      {
LABEL_102:
        RtlQueryUnbiasedInterruptTime(&v89);
        v53 = v58;
        v54 = v68 == 0;
        *((_DWORD *)a1 + 470) = v89 / 0x2710;
        if ( v59 || v53 )
          v17 = 0;
        ExecutionModel::ResourceSet::CheckUpdatePendStats(a1, v17, v54);
        if ( v59 || v53 )
          RmpPolicyRevokeResourceSetsForAcquire((struct _RM_INTERNAL_RESOURCE_REVOKE_CONTEXT *)&v79);
      }
      else
      {
        ExecutionModel::ResourceSet::CompleteAcquire(a1, v39);
      }
      if ( v77 )
        *v77 = v38;
      v31 = 0;
    }
    else
    {
      v31 = -2147024882;
    }
    v65 = v31;
  }
  while ( 1 )
  {
    v46 = Block[0];
    if ( Block[0] == Block )
      break;
    v55 = (_QWORD *)*((_QWORD *)Block[0] + 1);
    v56 = *(_QWORD *)Block[0];
    *v55 = *(_QWORD *)Block[0];
    *(_QWORD *)(v56 + 8) = v55;
    v57 = v46[2];
    if ( v57 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v57 + 16LL))(v57);
    operator delete(v46);
  }
  return (unsigned int)v31;
}
