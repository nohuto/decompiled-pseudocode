/*
 * XREFs of ?AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z @ 0x180022DB0
 * Callers:
 *     ?AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEAXPEAUIResourceSetCallback@2@2PEBGPEAT_RM_SID@@KK_KPEAU_RM_ACTIVATOR@@PEA_N6PEAPEAVResourceSet@2@@Z @ 0x18001FDB0 (-AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITIO.c)
 * Callees:
 *     ?HampHostCanKillForResourcePressure@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001AED8 (-HampHostCanKillForResourcePressure@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpResourceCheckDestroyPartitionForAcquire@@YAKPEAU_RM_RESOURCE_SET@@@Z @ 0x180020340 (-RmpResourceCheckDestroyPartitionForAcquire@@YAKPEAU_RM_RESOURCE_SET@@@Z.c)
 *     ?EvaluateResourceRequest@ResourceSet@ExecutionModel@@QEAAJ_KW4Enum@PendType@2@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@PEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@PEA_N5@Z @ 0x1800203A0 (-EvaluateResourceRequest@ResourceSet@ExecutionModel@@QEAAJ_KW4Enum@PendType@2@PEAU_RM_RESOURCE_U.c)
 *     ?CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x1800207E0 (-CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z.c)
 *     ?RmpPolicyComputeUsageLimits@@YAXPEAU_RM_USAGE_LIMIT_SETTINGS@@PEAU_RM_REMEDIATION_ACTIONS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@_KPEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x180022380 (-RmpPolicyComputeUsageLimits@@YAXPEAU_RM_USAGE_LIMIT_SETTINGS@@PEAU_RM_REMEDIATION_ACTIONS@@PEAU.c)
 *     ?RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180022810 (-RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpPolicyDigestCompute@@YA?AT_RM_POLICY_DIGEST@@PEAVResourceSet@ExecutionModel@@@Z @ 0x180022CD0 (-RmpPolicyDigestCompute@@YA-AT_RM_POLICY_DIGEST@@PEAVResourceSet@ExecutionModel@@@Z.c)
 *     ?RmpPolicyDigestMerge@@YA?AT_RM_POLICY_DIGEST@@T1@0@Z @ 0x1800269A0 (-RmpPolicyDigestMerge@@YA-AT_RM_POLICY_DIGEST@@T1@0@Z.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     ?RmpActivityHostCommitDebtCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x180038F28 (-RmpActivityHostCommitDebtCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z.c)
 *     ?RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18003AE7C (-RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180048E98 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180048EB0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1800492AA (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800492D0 (_guard_dispatch_icall_nop.c)
 *     ?RmpPolicyRevokeResourceSetsForAcquire@@YAXPEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@@Z @ 0x18006EAD4 (-RmpPolicyRevokeResourceSetsForAcquire@@YAXPEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@@Z.c)
 *     ?CheckUpdatePendStats@ResourceSet@ExecutionModel@@AEAAXKK@Z @ 0x18006EC5C (-CheckUpdatePendStats@ResourceSet@ExecutionModel@@AEAAXKK@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::AcquireInternalResources(
        ExecutionModel::ResourceSet *a1,
        int a2,
        bool *a3)
{
  struct _RM_ACTIVITY_HOST *v3; // r12
  __int64 v4; // r14
  int v5; // r15d
  ExecutionModel::ResourceSet *v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rcx
  bool v12; // zf
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  char v15; // al
  __int64 v16; // rdx
  const struct _TraceLoggingMetadata_t *v17; // r8
  _DWORD *v18; // r15
  PVOID ProcessHeap; // rcx
  _DWORD *Heap; // rdi
  char *v21; // r10
  int v22; // eax
  int v23; // ebx
  unsigned int v24; // edi
  PVOID v25; // rax
  void **v26; // r14
  PVOID v27; // rax
  unsigned int *v28; // r12
  char *v29; // rbx
  char *v30; // r13
  struct _RM_ACTIVITY_HOST *v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rdi
  struct _RM_ACTIVITY_HOST *v34; // rbx
  unsigned int *v35; // rsi
  __int64 v36; // r12
  void **v37; // r15
  HANDLE *v38; // r15
  int v39; // eax
  __int64 v40; // rcx
  __int64 v41; // rbx
  _QWORD *v42; // rdi
  int v43; // ebx
  char v44; // dl
  char v45; // r8
  unsigned int v46; // r15d
  int v47; // edi
  void *v48; // rcx
  bool v49; // r13
  _QWORD *v50; // rbx
  _QWORD *v51; // rdi
  _QWORD *v52; // rax
  _QWORD *v53; // r14
  _QWORD *v54; // rax
  int v55; // edi
  struct _RM_ACTIVITY_HOST *v56; // r11
  unsigned __int16 v57; // bx
  __int64 v58; // r11
  unsigned __int16 v60; // ax
  __int64 v61; // r8
  _QWORD *v62; // rdi
  PVOID v64; // rcx
  _DWORD *v65; // rax
  BOOLEAN v66; // al
  _QWORD *v67; // rcx
  __int64 v68; // rax
  __int64 v69; // rcx
  _QWORD *v70; // rcx
  __int64 v71; // rax
  __int64 v72; // rcx
  char v73; // [rsp+40h] [rbp-C0h]
  char v74; // [rsp+41h] [rbp-BFh]
  int v76; // [rsp+44h] [rbp-BCh]
  char v77; // [rsp+48h] [rbp-B8h] BYREF
  char v78; // [rsp+49h] [rbp-B7h] BYREF
  char v79; // [rsp+4Ah] [rbp-B6h] BYREF
  char v80; // [rsp+4Bh] [rbp-B5h] BYREF
  char v81; // [rsp+4Ch] [rbp-B4h] BYREF
  char v82; // [rsp+4Dh] [rbp-B3h] BYREF
  char v83; // [rsp+4Eh] [rbp-B2h] BYREF
  int v84; // [rsp+50h] [rbp-B0h] BYREF
  int v85; // [rsp+54h] [rbp-ACh] BYREF
  PVOID v86; // [rsp+58h] [rbp-A8h]
  PVOID v87; // [rsp+60h] [rbp-A0h]
  __int64 v88; // [rsp+68h] [rbp-98h]
  unsigned int v89; // [rsp+70h] [rbp-90h] BYREF
  char *v90; // [rsp+78h] [rbp-88h]
  struct _RM_ACTIVITY_HOST *v91; // [rsp+80h] [rbp-80h]
  void *ProcessHandle; // [rsp+88h] [rbp-78h] BYREF
  int v93; // [rsp+90h] [rbp-70h] BYREF
  int v94; // [rsp+94h] [rbp-6Ch] BYREF
  __int64 v95; // [rsp+98h] [rbp-68h] BYREF
  void *Block[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v97; // [rsp+B0h] [rbp-50h]
  PVOID P; // [rsp+B8h] [rbp-48h]
  ExecutionModel::ResourceSet *v99; // [rsp+C0h] [rbp-40h]
  __int64 v100; // [rsp+C8h] [rbp-38h]
  bool *v101; // [rsp+D0h] [rbp-30h]
  char *v102; // [rsp+D8h] [rbp-28h]
  __int64 v103; // [rsp+E0h] [rbp-20h]
  ExecutionModel::ResourceSet *v104; // [rsp+E8h] [rbp-18h] BYREF
  void **v105; // [rsp+F0h] [rbp-10h]
  __int64 v106; // [rsp+F8h] [rbp-8h]
  __int64 v107; // [rsp+100h] [rbp+0h]
  __int64 v108; // [rsp+108h] [rbp+8h]
  __int64 v109; // [rsp+110h] [rbp+10h] BYREF
  __int64 v110; // [rsp+118h] [rbp+18h] BYREF
  __int64 v111; // [rsp+120h] [rbp+20h] BYREF
  __int64 v112; // [rsp+128h] [rbp+28h] BYREF
  __int64 v113; // [rsp+130h] [rbp+30h] BYREF
  unsigned __int64 v114; // [rsp+138h] [rbp+38h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+140h] [rbp+40h] BYREF
  EVENT_DESCRIPTOR v116; // [rsp+150h] [rbp+50h] BYREF
  __int64 v117; // [rsp+168h] [rbp+68h] BYREF
  struct _CLIENT_ID ClientId; // [rsp+170h] [rbp+70h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+180h] [rbp+80h] BYREF
  _BYTE v120[128]; // [rsp+1B0h] [rbp+B0h] BYREF
  __int128 v121; // [rsp+230h] [rbp+130h] BYREF
  __int128 v122; // [rsp+240h] [rbp+140h]
  __int128 v123; // [rsp+250h] [rbp+150h]
  __int128 v124; // [rsp+260h] [rbp+160h]
  __int128 v125; // [rsp+270h] [rbp+170h]
  _BYTE v126[4]; // [rsp+280h] [rbp+180h] BYREF
  __int64 v127; // [rsp+284h] [rbp+184h]
  __int64 v128; // [rsp+298h] [rbp+198h]
  __int64 v129; // [rsp+2A0h] [rbp+1A0h]
  __int64 v130; // [rsp+2B0h] [rbp+1B0h]
  __int64 v131; // [rsp+2C0h] [rbp+1C0h]
  __int64 v132; // [rsp+2C8h] [rbp+1C8h]
  __int64 v133; // [rsp+2D8h] [rbp+1D8h]
  __int64 v134; // [rsp+2E0h] [rbp+1E0h]
  __int64 v135; // [rsp+2E8h] [rbp+1E8h]
  __int64 v136; // [rsp+2F0h] [rbp+1F0h]
  __int64 v137; // [rsp+2F8h] [rbp+1F8h]
  __int64 v138; // [rsp+300h] [rbp+200h]
  __int64 v139; // [rsp+318h] [rbp+218h]
  __int64 v140; // [rsp+320h] [rbp+220h]
  __int64 v141; // [rsp+328h] [rbp+228h]
  __int64 v142; // [rsp+330h] [rbp+230h]
  __int64 v143; // [rsp+338h] [rbp+238h]
  __int64 v144; // [rsp+340h] [rbp+240h]
  __int64 v145; // [rsp+348h] [rbp+248h]
  __int64 v146; // [rsp+350h] [rbp+250h]
  __int64 v147; // [rsp+358h] [rbp+258h]
  __int64 v148; // [rsp+360h] [rbp+260h]
  __int128 v149; // [rsp+370h] [rbp+270h] BYREF
  _OWORD v150[4]; // [rsp+380h] [rbp+280h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+3C0h] [rbp+2C0h] BYREF
  void *v152; // [rsp+3D0h] [rbp+2D0h]
  int v153; // [rsp+3D8h] [rbp+2D8h]
  int v154; // [rsp+3DCh] [rbp+2DCh]
  __int64 *v155; // [rsp+3E0h] [rbp+2E0h]
  __int64 v156; // [rsp+3E8h] [rbp+2E8h]
  __int64 *v157; // [rsp+3F0h] [rbp+2F0h]
  __int64 v158; // [rsp+3F8h] [rbp+2F8h]
  __int64 *v159; // [rsp+400h] [rbp+300h]
  __int64 v160; // [rsp+408h] [rbp+308h]
  char *v161; // [rsp+410h] [rbp+310h]
  __int64 v162; // [rsp+418h] [rbp+318h]
  __int64 *v163; // [rsp+420h] [rbp+320h]
  __int64 v164; // [rsp+428h] [rbp+328h]
  __int64 v165; // [rsp+430h] [rbp+330h]
  __int64 v166; // [rsp+438h] [rbp+338h]
  struct _EVENT_DATA_DESCRIPTOR v167; // [rsp+440h] [rbp+340h] BYREF
  void *v168; // [rsp+450h] [rbp+350h]
  int v169; // [rsp+458h] [rbp+358h]
  int v170; // [rsp+45Ch] [rbp+35Ch]
  int *v171; // [rsp+460h] [rbp+360h]
  __int64 v172; // [rsp+468h] [rbp+368h]
  char *v173; // [rsp+470h] [rbp+370h]
  __int64 v174; // [rsp+478h] [rbp+378h]
  char *v175; // [rsp+480h] [rbp+380h]
  __int64 v176; // [rsp+488h] [rbp+388h]
  char *v177; // [rsp+490h] [rbp+390h]
  __int64 v178; // [rsp+498h] [rbp+398h]
  int *v179; // [rsp+4A0h] [rbp+3A0h]
  __int64 v180; // [rsp+4A8h] [rbp+3A8h]
  int *v181; // [rsp+4B0h] [rbp+3B0h]
  __int64 v182; // [rsp+4B8h] [rbp+3B8h]
  char *v183; // [rsp+4C0h] [rbp+3C0h]
  __int64 v184; // [rsp+4C8h] [rbp+3C8h]
  char *v185; // [rsp+4D0h] [rbp+3D0h]
  __int64 v186; // [rsp+4D8h] [rbp+3D8h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+4E0h] [rbp+3E0h] BYREF
  int *v188; // [rsp+500h] [rbp+400h]
  __int64 v189; // [rsp+508h] [rbp+408h]
  __int64 *v190; // [rsp+510h] [rbp+410h]
  __int64 v191; // [rsp+518h] [rbp+418h]
  EVENT_DATA_DESCRIPTOR v192; // [rsp+520h] [rbp+420h] BYREF
  __int64 *v193; // [rsp+540h] [rbp+440h]
  __int64 v194; // [rsp+548h] [rbp+448h]
  __int64 *v195; // [rsp+550h] [rbp+450h]
  __int64 v196; // [rsp+558h] [rbp+458h]

  v3 = (struct _RM_ACTIVITY_HOST *)*((_QWORD *)a1 + 165);
  v4 = *((_QWORD *)a1 + 8);
  v5 = a2;
  Block[0] = Block;
  v6 = a1;
  v101 = a3;
  Block[1] = Block;
  v7 = *((_QWORD *)a1 + 3);
  v97 = 0LL;
  v99 = a1;
  v8 = *(_QWORD *)(v7 + 128);
  v9 = *((_QWORD *)a1 + 164);
  v91 = v3;
  v100 = v4;
  v10 = *(_QWORD *)(v9 + 64);
  memset_0(v120, 0, sizeof(v120));
  memset_0(v126, 0, 0xF0uLL);
  v11 = *(_QWORD *)(v10 + 32);
  v127 = -1LL;
  NtManagePartition(v11, 0LL, 0LL, v126, 240);
  *(_QWORD *)&v123 = 0LL;
  *((_QWORD *)&v121 + 1) = RmpPageSize * v129 - RmpPageSize * v148;
  *(_QWORD *)&v122 = RmpPageSize * v128 - RmpPageSize * v148;
  *((_QWORD *)&v122 + 1) = *((_QWORD *)&v121 + 1) - v122;
  *((_QWORD *)&v123 + 1) = RmpPageSize * v130 - RmpPageSize * v148;
  *(_QWORD *)&v121 = RmpPageSize * v147 - RmpPageSize * v148;
  v125 = (unsigned __int64)(v146 + v145 + v144 + v143 + v142 + v141 + v140 + v139);
  *(_QWORD *)&v124 = RmpPageSize * (v131 + v132 + v138 + v137 + v136 + v135 + v133 + v134);
  *((_QWORD *)&v124 + 1) = *((_QWORD *)&v123 + 1) - v124;
  RmpPolicyComputeUsageLimits(
    (struct _RM_USAGE_LIMIT_SETTINGS *)(v8 + 400),
    (struct _RM_REMEDIATION_ACTIONS *)(v8 + 456),
    (struct _RM_SYSTEM_MEMORY_METRICS *)&v121,
    v121,
    (struct _RM_RESOURCE_USAGE_LIMITS *)v120);
  v149 = v121;
  v150[1] = v123;
  v150[0] = v122;
  v150[3] = v125;
  v150[2] = v124;
  *(_WORD *)(v10 + 188) = 0;
  v12 = (*((_BYTE *)v6 + 1376) & 0x10) == 0;
  v95 = 0LL;
  if ( !v12
    || ((v13 = *((int *)v6 + 334), (unsigned int)v13 <= 0x28) && (v14 = 0x11000002000LL, _bittest64(&v14, v13))
      ? (v15 = 1)
      : (v15 = 0),
        v15) )
  {
    v15 = 1;
  }
  v16 = 1LL;
  v17 = &TraceLoggingMetadata;
  if ( v15 && (*((_BYTE *)v6 + 1378) & 0x40) == 0 )
    goto LABEL_42;
  v89 = 1;
  v86 = 0LL;
  v18 = 0LL;
  v87 = 0LL;
  v88 = 0LL;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  P = 0LL;
  Heap = RtlAllocateHeap(ProcessHeap, 0, 8uLL);
  if ( !Heap )
  {
    v23 = -1073741801;
    goto LABEL_24;
  }
  v16 = (__int64)v3 + 88;
  v21 = (char *)v3 + 552;
  v90 = (char *)v3 + 88;
  v102 = (char *)v3 + 552;
  while ( 1 )
  {
    v22 = (*(__int64 (__fastcall **)(char *, _QWORD, __int64, _QWORD, _QWORD, _DWORD *, unsigned int *))(*(_QWORD *)(*((_QWORD *)v3 + 6) + 40LL) + 72LL))(
            v21,
            *((unsigned int *)v3 + 155),
            v16,
            *((unsigned int *)v3 + 156),
            *((_QWORD *)v3 + 4),
            Heap,
            &v89);
    v23 = v22;
    if ( v22 >= 0 )
    {
      v18 = Heap;
      P = Heap;
      v24 = v89;
      goto LABEL_11;
    }
    v64 = NtCurrentPeb()->ProcessHeap;
    if ( v22 != -2147483643 )
      break;
    RtlFreeHeap(v64, 0, Heap);
    v65 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8LL * v89);
    v16 = (__int64)v90;
    Heap = v65;
    v21 = v102;
    if ( !v65 )
    {
      v24 = v85;
      v23 = -1073741801;
      goto LABEL_11;
    }
  }
  RtlFreeHeap(v64, 0, Heap);
  v24 = v85;
LABEL_11:
  if ( v23 < 0 )
  {
    v26 = (void **)v86;
    goto LABEL_101;
  }
  if ( v24 )
  {
    v25 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8 * v24);
    v86 = v25;
    v26 = (void **)v25;
    if ( v25 )
    {
      memset_0(v25, 0, 8 * v24);
      v27 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 4 * v24);
      v87 = v27;
      v28 = (unsigned int *)v27;
      if ( v27 )
      {
        memset_0(v27, 0, 4 * v24);
        ProcessHandle = 0LL;
        v26 = (void **)v86;
        v29 = v90;
        v30 = v102;
        v31 = v91;
        v32 = v24;
        v33 = (unsigned int)v88;
        v103 = v32;
        do
        {
          LODWORD(v90) = *v18;
          ClientId.UniqueProcess = (HANDLE)(unsigned int)v90;
          ClientId.UniqueThread = 0LL;
          memset(&ObjectAttributes.RootDirectory, 0, 20);
          ObjectAttributes.Length = 48;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          if ( NtOpenProcess(&ProcessHandle, 0x1000u, &ObjectAttributes, &ClientId) >= 0 )
          {
            if ( (*(unsigned __int8 (__fastcall **)(char *, _QWORD, char *, _QWORD, _QWORD, void *))(*(_QWORD *)(*((_QWORD *)v31 + 6) + 40LL) + 80LL))(
                   v30,
                   *((unsigned int *)v31 + 155),
                   v29,
                   *((unsigned int *)v31 + 156),
                   *((_QWORD *)v31 + 4),
                   ProcessHandle) )
            {
              v26[v33] = ProcessHandle;
              v28[v33] = (unsigned int)v90;
              v33 = (unsigned int)(v33 + 1);
            }
            else
            {
              NtClose(ProcessHandle);
            }
          }
          v18 += 2;
          --v103;
        }
        while ( v103 );
        v6 = v99;
        v18 = P;
        LODWORD(v88) = v33;
        goto LABEL_21;
      }
      v26 = (void **)v86;
      v23 = -1073741801;
LABEL_102:
      v33 = (unsigned int)v88;
      goto LABEL_22;
    }
    v23 = -1073741801;
LABEL_101:
    v28 = (unsigned int *)v87;
    goto LABEL_102;
  }
  v28 = (unsigned int *)v87;
  ProcessHandle = 0LL;
  v26 = (void **)v86;
  v33 = (unsigned int)v88;
LABEL_21:
  v23 = 0;
LABEL_22:
  if ( !v18 )
    goto LABEL_25;
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v18);
LABEL_24:
  v26 = (void **)v86;
  v28 = (unsigned int *)v87;
  v33 = (unsigned int)v88;
LABEL_25:
  if ( v23 >= 0 )
  {
    if ( (_DWORD)v33 )
    {
      v34 = v91;
      v35 = v28;
      v36 = (unsigned int)v33;
      v37 = v26;
      do
      {
        RmpActivityHostCommitDebtCallback(v34, *v37++, *v35++, &v95);
        --v36;
      }
      while ( v36 );
      v6 = v99;
      v28 = (unsigned int *)v87;
    }
    v23 = 0;
  }
  if ( (_DWORD)v33 )
  {
    v38 = v26;
    do
    {
      NtClose(*v38++);
      --v33;
    }
    while ( v33 );
  }
  if ( v26 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v86);
    v28 = (unsigned int *)v87;
  }
  if ( v28 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v87);
  v85 = v23;
  if ( v23 < 0 )
  {
    if ( hProvider <= 4u )
    {
      v3 = v91;
      v4 = v100;
      v5 = a2;
      goto LABEL_46;
    }
    v66 = TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL);
    v3 = v91;
    if ( !v66 )
      goto LABEL_41;
    v189 = 4LL;
    v188 = &v85;
    v117 = *((_QWORD *)v91 + 4);
    v190 = &v117;
    v191 = 8LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180096B03, 0LL, 0LL, 4u, &pData);
  }
  else
  {
    v3 = v91;
    v85 = 0;
  }
  v16 = 1LL;
LABEL_41:
  v4 = v100;
  v17 = &TraceLoggingMetadata;
  v5 = a2;
LABEL_42:
  if ( hProvider > 4u && (byte_1800AB290 & 9) != 0 && (qword_1800AB298 & 9) == qword_1800AB298 )
  {
    v109 = *((_QWORD *)v6 + 219);
    v155 = &v109;
    v110 = *((_QWORD *)v6 + 181);
    v157 = &v110;
    v159 = &v95;
    v161 = (char *)v150 + 8;
    v111 = *((_QWORD *)v6 + 184);
    v163 = &v111;
    v165 = v4 + 128;
    v156 = 8LL;
    v158 = 8LL;
    v160 = 8LL;
    v162 = 8LL;
    v164 = 8LL;
    v166 = 8LL;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_1800AB288;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 9LL;
    UserData.Size = *(unsigned __int16 *)off_1800AB288;
    v152 = &unk_180095238;
    v154 = v16;
    UserData.Reserved = 2;
    v153 = 118;
    LODWORD(v90) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800AB2A0, &EventDescriptor, 0LL, 0LL, 8u, &UserData);
  }
LABEL_46:
  v39 = RmpResourceCheckDestroyPartitionForAcquire(*((struct _RM_RESOURCE_SET **)v6 + 164), v16, (unsigned int)v17);
  v40 = *((_QWORD *)v6 + 164);
  v76 = v39;
  v108 = 0LL;
  v104 = v6;
  v41 = *(_QWORD *)(v40 + 64);
  while ( 1 )
  {
    v42 = Block[0];
    if ( Block[0] == Block )
      break;
    v67 = (_QWORD *)*((_QWORD *)Block[0] + 1);
    v68 = *(_QWORD *)Block[0];
    *v67 = *(_QWORD *)Block[0];
    *(_QWORD *)(v68 + 8) = v67;
    v69 = v42[2];
    if ( v69 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v69 + 16LL))(v69);
    operator delete(v42);
  }
  v105 = Block;
  v97 = 0LL;
  v107 = v41 + 144;
  v106 = v41;
  v43 = ExecutionModel::ResourceSet::EvaluateResourceRequest(
          (__int64)v6,
          v95,
          v5,
          (__int64)v120,
          &v149,
          &v104,
          &v78,
          &v77);
  v44 = v77;
  v45 = v78;
  v73 = v77;
  v74 = v78;
  v84 = v43;
  if ( hProvider > 4u && (byte_1800AB290 & 9) != 0 )
  {
    v46 = 1;
    v47 = v76;
    if ( (qword_1800AB298 & 9) == qword_1800AB298 )
    {
      v172 = 4LL;
      v171 = &v84;
      v173 = &v79;
      v175 = &v80;
      v177 = &v81;
      v79 = v78;
      v174 = 1LL;
      v80 = v77;
      v176 = 1LL;
      v81 = v76;
      v178 = 1LL;
      v48 = v105[2];
      v179 = &v93;
      v93 = (int)v48;
      v180 = 4LL;
      LODWORD(v48) = *(_DWORD *)(v107 + 40);
      v181 = &v94;
      v82 = v108;
      v183 = &v82;
      v83 = BYTE4(v108);
      v185 = &v83;
      v94 = (int)v48;
      v182 = 4LL;
      v184 = 1LL;
      v186 = 1LL;
      *(_DWORD *)&v116.Level = 4;
      v167.Ptr = (ULONGLONG)off_1800AB288;
      *(_DWORD *)&v116.Id = 184549376;
      v116.Keyword = 9LL;
      v167.Size = *(unsigned __int16 *)off_1800AB288;
      v168 = &unk_180095076;
      v167.Reserved = 2;
      v169 = 185;
      v170 = 1;
      LODWORD(v90) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(qword_1800AB2A0, &v116, 0LL, 0LL, 0xAu, &v167);
      v44 = v73;
      v45 = v74;
      v43 = v84;
    }
  }
  else
  {
    v47 = v76;
    v46 = 1;
  }
  if ( v43 >= 0 )
  {
    v49 = v45 || v44 || v47;
    v50 = *(_QWORD **)(v4 + 40);
    v51 = (_QWORD *)(v4 + 40);
    while ( v50 != v51 && *(_DWORD *)(v50[2] + 1288LL) < *((_DWORD *)v6 + 322) )
      v50 = (_QWORD *)*v50;
    v52 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    v53 = v52;
    if ( v52 )
    {
      v52[2] = v6;
      (*(void (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)v6 + 8LL))(v6);
      v54 = (_QWORD *)v50[1];
      v53[1] = v54;
      *v53 = v50;
      *v54 = v53;
      v50[1] = v53;
      ++v51[2];
      v55 = 0;
      v84 = 0;
      if ( v49 )
        goto LABEL_123;
      *((_DWORD *)v6 + 320) = 2;
      v56 = (struct _RM_ACTIVITY_HOST *)*((_QWORD *)v3 + 139);
      v57 = 102;
      if ( v56 != (struct _RM_ACTIVITY_HOST *)((char *)v3 + 1112) )
      {
        v58 = (__int64)v56 - 1296;
        if ( v58 )
        {
          do
          {
            if ( *(_DWORD *)(v58 + 1280) == 2 || (*(_BYTE *)(v58 + 1332) & 4) != 0 )
            {
              v60 = RmpPolicyDigestCompute(v58);
              v57 = RmpPolicyDigestMerge(v57, v60);
            }
            v61 = *(_QWORD *)(v58 + 1296);
            if ( v61 == *(_QWORD *)(v58 + 1320) + 8 * (3LL * *(int *)(v58 + 1328) + 139) )
              break;
            v58 = v61 - 1296;
          }
          while ( v61 != 1296 );
        }
      }
      *((_WORD *)v3 + 580) = v57;
      RmpActivityHostUpdateImportance(v3, 1);
      QueryUnbiasedInterruptTime((PULONGLONG)v3 + 182);
      if ( ((*(_DWORD *)(*((_QWORD *)v3 + 6) + 508LL) & 4) != 0
         || (*((_BYTE *)v3 + 1160) & 4) != 0 && (*((_BYTE *)v3 + 1162) & 4) != 0)
        && ((*((_BYTE *)v3 + 836) & 1) == 0
         || (unsigned int)HampHostCanKillForResourcePressure(
                            (struct _RM_ACTIVITY_HOST *)((char *)v3 + 64),
                            (*(_DWORD *)(*((_QWORD *)v3 + 6) + 508LL) & 4) == 0))
        && (*((_BYTE *)v3 + 1162) & 0x30) != 0 )
      {
        SetEvent(*(HANDLE *)(*((_QWORD *)v3 + 7) + 88LL));
      }
      if ( (*((_BYTE *)v3 + 836) & 1) != 0 )
      {
        v55 = 1;
      }
      else if ( v101 && RmpActivityHostCheckQueueWork(v3) )
      {
        if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
        {
          v112 = *((_QWORD *)v3 + 4);
          v193 = &v112;
          v113 = *((_QWORD *)v6 + 219);
          v195 = &v113;
          v194 = 8LL;
          v196 = 8LL;
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18009551E, 0LL, 0LL, 4u, &v192);
        }
        *((_DWORD *)v6 + 333) |= 4u;
        v49 = 1;
      }
      *((_DWORD *)v6 + 320) = 1;
      if ( v49 )
      {
LABEL_123:
        RtlQueryUnbiasedInterruptTime(&v114);
        *((_DWORD *)v6 + 440) = v114 / 0x2710;
        if ( v74 || v73 )
          v46 = 0;
        ExecutionModel::ResourceSet::CheckUpdatePendStats(v6, v46, v76 == 0);
        if ( v74 || v73 )
          RmpPolicyRevokeResourceSetsForAcquire((struct _RM_INTERNAL_RESOURCE_REVOKE_CONTEXT *)&v104);
      }
      else
      {
        ExecutionModel::ResourceSet::CompleteAcquire(v6, v55);
      }
      if ( v101 )
        *v101 = v49;
      v43 = 0;
    }
    else
    {
      v43 = -2147024882;
    }
    v84 = v43;
  }
  while ( 1 )
  {
    v62 = Block[0];
    if ( Block[0] == Block )
      break;
    v70 = (_QWORD *)*((_QWORD *)Block[0] + 1);
    v71 = *(_QWORD *)Block[0];
    *v70 = *(_QWORD *)Block[0];
    *(_QWORD *)(v71 + 8) = v70;
    v72 = v62[2];
    if ( v72 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v72 + 16LL))(v72);
    operator delete(v62);
  }
  return (unsigned int)v43;
}
