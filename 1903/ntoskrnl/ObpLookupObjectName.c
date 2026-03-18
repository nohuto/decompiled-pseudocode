/*
 * XREFs of ObpLookupObjectName @ 0x1405F5EE0
 * Callers:
 *     ObpInsertOrLocateNamedObject @ 0x1405C5D08 (ObpInsertOrLocateNamedObject.c)
 *     ObReferenceObjectByName @ 0x1405C6850 (ObReferenceObjectByName.c)
 *     ObOpenObjectByNameEx @ 0x1405F48D0 (ObOpenObjectByNameEx.c)
 *     ObReferenceObjectByNameEx @ 0x14069B140 (ObReferenceObjectByNameEx.c)
 * Callees:
 *     ObpUnlockDirectory @ 0x140003F00 (ObpUnlockDirectory.c)
 *     ObpLockDirectoryShared @ 0x140004084 (ObpLockDirectoryShared.c)
 *     PsGetCurrentServerSilo @ 0x1400064D0 (PsGetCurrentServerSilo.c)
 *     PsGetProcessServerSilo @ 0x140006520 (PsGetProcessServerSilo.c)
 *     ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator @ 0x14000A310 (ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator.c)
 *     SeSetLearningModeObjectInformation @ 0x14003B710 (SeSetLearningModeObjectInformation.c)
 *     SeClearLearningModeObjectInformation @ 0x14003B740 (SeClearLearningModeObjectInformation.c)
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14003E330 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleasePushLockEx @ 0x14003F240 (ExReleasePushLockEx.c)
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectByPointer @ 0x140086CA0 (ObReferenceObjectByPointer.c)
 *     PsGetServerSiloGlobals @ 0x14008D470 (PsGetServerSiloGlobals.c)
 *     NLS_UPCASE @ 0x140092980 (NLS_UPCASE.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 *     SeAccessCheckWithHint @ 0x1400C8720 (SeAccessCheckWithHint.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1400E6EE0 (PsGetCurrentServerSiloGlobals.c)
 *     PsGetCurrentProcessSessionId @ 0x1400EC3B0 (PsGetCurrentProcessSessionId.c)
 *     PsGetPermanentSiloContext @ 0x1400FF140 (PsGetPermanentSiloContext.c)
 *     ObpLockDirectoryExclusive @ 0x14011F12C (ObpLockDirectoryExclusive.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ObCheckCreateObjectAccess @ 0x1405C5B00 (ObCheckCreateObjectAccess.c)
 *     ObpReferenceDeviceMap @ 0x1405D0BD0 (ObpReferenceDeviceMap.c)
 *     ObfDereferenceDeviceMap @ 0x1405D11F0 (ObfDereferenceDeviceMap.c)
 *     SeCaptureSubjectContext @ 0x1405DDBB0 (SeCaptureSubjectContext.c)
 *     PsReferenceImpersonationTokenEx @ 0x1405DDCC0 (PsReferenceImpersonationTokenEx.c)
 *     SeReleaseSubjectContext @ 0x1405F3180 (SeReleaseSubjectContext.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405FA4A0 (ObpReferenceObjectByHandleWithTag.c)
 *     SeQueryInformationToken @ 0x1405FEE00 (SeQueryInformationToken.c)
 *     SeSinglePrivilegeCheck @ 0x140672D30 (SeSinglePrivilegeCheck.c)
 *     ObSetCurrentProcessDeviceMap @ 0x1406C42EC (ObSetCurrentProcessDeviceMap.c)
 *     SeGetTokenDeviceMap @ 0x1406C43F8 (SeGetTokenDeviceMap.c)
 *     ObpInsertDirectoryEntry @ 0x1406CB420 (ObpInsertDirectoryEntry.c)
 *     ObpIsUnsecureName @ 0x14089D698 (ObpIsUnsecureName.c)
 *     ObpCheckTraverseAccess @ 0x14089E3C0 (ObpCheckTraverseAccess.c)
 */

NTSTATUS __fastcall ObpLookupObjectName(
        ULONG_PTR a1,
        __m128i *a2,
        int a3,
        __int64 a4,
        unsigned __int8 a5,
        __int64 a6,
        __int64 a7,
        char *a8,
        __int64 a9,
        struct _ACCESS_STATE *a10,
        __int64 a11,
        int *a12,
        PVOID *a13)
{
  __int64 v13; // r12
  __int16 v14; // r13
  __m128i *v15; // r15
  bool v17; // zf
  __int64 v18; // rcx
  int v19; // r14d
  bool v20; // di
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext; // rbx
  char *v22; // r14
  __int64 v23; // rcx
  int v24; // edi
  char *v25; // rsi
  __int64 v26; // rdi
  struct _OBJECT_TYPE *v27; // rax
  __int64 (__usercall *ParseProcedure)@<rax>(PVOID@<rcx>, POBJECT_TYPE@<rdx>, int, __int64, __int64, int, int, __int64, __int64); // rbx
  char *v29; // r13
  signed int v30; // esi
  unsigned __int16 *v31; // rbx
  unsigned int v32; // r11d
  unsigned __int64 v33; // r10
  __int64 v34; // r9
  unsigned int v35; // r9d
  unsigned int v36; // edx
  int v37; // r9d
  char v38; // di
  unsigned __int16 v39; // ax
  char *v40; // r15
  ULONG_PTR v41; // r13
  struct _KTHREAD *v42; // rax
  __int64 *v43; // r9
  void *v44; // rcx
  _DWORD *v45; // rsi
  int v46; // eax
  char *v47; // r12
  void *CurrentServerSiloGlobals; // rax
  struct _KTHREAD *v49; // rcx
  ULONG_PTR v50; // rbx
  __int64 v51; // rax
  __int64 v52; // rcx
  struct _KTHREAD *v53; // rax
  __int64 v54; // rdi
  char v55; // r13
  char *v56; // r15
  struct _KTHREAD *v57; // rax
  __int64 *v58; // r10
  int v59; // r14d
  void *v60; // rcx
  NTSTATUS v61; // eax
  NTSTATUS v62; // edi
  NTSTATUS result; // eax
  __int64 v64; // rcx
  unsigned int v65; // edx
  char *v66; // r8
  _QWORD *v67; // r11
  char *v68; // rsi
  signed __int64 v69; // r11
  unsigned __int16 v70; // r10
  unsigned __int16 v71; // bx
  void *v72; // rcx
  void *v73; // rcx
  __int64 (__usercall *v74)@<rax>(PVOID@<rcx>, POBJECT_TYPE@<rdx>, int, __int64, __int64, int, int, __int64, __int64); // rax
  char *v75; // rdi
  __m128i v76; // xmm0
  void *v77; // rcx
  __int16 *v78; // rax
  __int16 v79; // cx
  PVOID v80; // rsi
  signed __int32 v81; // ebx
  signed __int32 v82; // eax
  void *v83; // rcx
  struct _KTHREAD *v84; // r14
  void *v85; // r13
  __int64 Process; // rsi
  __int64 ProcessServerSilo; // rbx
  volatile signed __int32 *v88; // rdi
  volatile signed __int32 **v89; // rax
  struct _KTHREAD *v90; // rcx
  volatile signed __int32 **v91; // rdi
  ULONG_PTR v92; // rbx
  __int64 v93; // rcx
  struct _KTHREAD *v94; // rax
  __m128i v95; // xmm0
  unsigned int v96; // edx
  __int64 v97; // rcx
  int v98; // eax
  __int64 v99; // rcx
  char *v100; // r11
  _QWORD *v101; // rsi
  char *v102; // rbx
  signed __int64 v103; // rsi
  unsigned __int16 v104; // di
  unsigned __int16 v105; // cx
  __int64 v106; // rdi
  void *v107; // rcx
  void *v108; // rcx
  struct _KTHREAD *CurrentThread; // rax
  void *v110; // rcx
  void *v111; // rcx
  void *v112; // rax
  ACCESS_MASK v113; // eax
  _DWORD *v114; // r14
  KPROCESSOR_MODE v115; // r15
  int v116; // edi
  unsigned int v117; // esi
  PVOID PoolWithTag; // rdi
  char *v119; // rbx
  void *v120; // rcx
  __int16 v121; // ax
  unsigned __int16 v122; // ax
  __int16 v123; // r9
  PVOID *v124; // rax
  PVOID *v125; // rdi
  NTSTATUS v126; // ebx
  int v127; // r10d
  int v128; // r9d
  PACCESS_TOKEN ClientToken; // rcx
  NTSTATUS v130; // eax
  char *v131; // rcx
  NTSTATUS v132; // ebx
  NTSTATUS v133; // ebx
  bool v134; // r15
  int v135; // ecx
  __int64 v136; // rdi
  __int64 v137; // rax
  __int128 v138; // rt0
  void *ServerSiloGlobals; // rax
  struct _KTHREAD *v140; // rcx
  ULONG_PTR v141; // rdi
  void *v142; // rcx
  __int64 Tag; // [rsp+20h] [rbp-E0h]
  char v145; // [rsp+61h] [rbp-9Fh]
  char v146; // [rsp+62h] [rbp-9Eh]
  char *v147; // [rsp+68h] [rbp-98h] BYREF
  __m128i v148; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v149; // [rsp+80h] [rbp-80h]
  int v150; // [rsp+84h] [rbp-7Ch]
  PVOID P; // [rsp+88h] [rbp-78h]
  PVOID Object; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v153; // [rsp+98h] [rbp-68h]
  NTSTATUS v154; // [rsp+9Ch] [rbp-64h] BYREF
  bool v155; // [rsp+A0h] [rbp-60h] BYREF
  char v156[3]; // [rsp+A1h] [rbp-5Fh] BYREF
  PVOID TokenInformation; // [rsp+A4h] [rbp-5Ch] BYREF
  int v158; // [rsp+ACh] [rbp-54h]
  void *Src[2]; // [rsp+B0h] [rbp-50h] BYREF
  PVOID v160; // [rsp+C0h] [rbp-40h]
  _WORD v161[2]; // [rsp+C8h] [rbp-38h] BYREF
  int v162; // [rsp+CCh] [rbp-34h]
  __int64 v163; // [rsp+D0h] [rbp-30h]
  int v164; // [rsp+D8h] [rbp-28h] BYREF
  int v165; // [rsp+DCh] [rbp-24h] BYREF
  PVOID v166; // [rsp+E0h] [rbp-20h]
  __int64 v167; // [rsp+E8h] [rbp-18h] BYREF
  char *v168; // [rsp+F0h] [rbp-10h] BYREF
  char *v169; // [rsp+F8h] [rbp-8h] BYREF
  _QWORD v170[2]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v171; // [rsp+110h] [rbp+10h]
  __m128i *v172; // [rsp+118h] [rbp+18h]
  ULONG_PTR v173; // [rsp+120h] [rbp+20h]
  __int64 v174; // [rsp+128h] [rbp+28h]
  __int64 v175; // [rsp+130h] [rbp+30h]
  int v176; // [rsp+138h] [rbp+38h] BYREF
  volatile signed __int32 *v177; // [rsp+140h] [rbp+40h] BYREF
  PVOID v178; // [rsp+148h] [rbp+48h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+150h] [rbp+50h] BYREF
  bool v180; // [rsp+1C0h] [rbp+C0h]
  int v182; // [rsp+1D0h] [rbp+D0h]

  v182 = a3;
  v13 = a11;
  v170[0] = 0LL;
  v170[1] = 0LL;
  v14 = a3;
  v171 = 0LL;
  v15 = a2;
  *(_WORD *)(a11 + 30) = 0;
  v172 = 0LL;
  v173 = 0LL;
  v174 = 0LL;
  v175 = 0LL;
  v148 = 0uLL;
  v180 = 0;
  v145 = 0;
  v161[1] = 0;
  v167 = 0LL;
  P = 0LL;
  v158 = 64;
  *(_QWORD *)a11 = 0LL;
  *(_QWORD *)(a11 + 8) = 0LL;
  *(_DWORD *)(a11 + 32) = -60876;
  if ( a12 )
    *a12 = 0;
  v17 = ObpCaseInsensitive == 0;
  v18 = a9;
  v154 = 0;
  v150 = 0;
  *a13 = 0LL;
  v161[0] = 16;
  v146 = 1;
  v147 = 0LL;
  v160 = 0LL;
  v162 = -1;
  v163 = a9;
  if ( !v17
    && (*(_BYTE *)(a4 + 66) & 1) != 0
    && (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 0x80000) == 0 )
  {
    v14 = a3 | 0x40;
    v182 = a3 | 0x40;
  }
  v19 = 1;
  if ( (v14 & 0x400) == 0 )
    v19 = a5;
  v153 = v19;
  if ( !a8 )
  {
    v145 = 1;
    v20 = 0;
    memset(&SubjectContext, 0, sizeof(SubjectContext));
    p_SubjectContext = 0LL;
    LODWORD(TokenInformation) = 0;
    v165 = 0;
    v164 = 0;
    if ( (_BYTE)v19 )
    {
      if ( a10 == (struct _ACCESS_STATE *)-32LL )
      {
        p_SubjectContext = &SubjectContext;
        SeCaptureSubjectContext(&SubjectContext);
      }
      else
      {
        p_SubjectContext = &a10->SubjectSecurityContext;
      }
      if ( (unsigned __int8)SeAccessCheckWithHint(
                              (__int64)SeMediumDaclSd,
                              8LL,
                              (__int64)p_SubjectContext,
                              0LL,
                              0x20000,
                              0,
                              0LL,
                              (__int64)&RtlpRestrictedMapping,
                              v19,
                              (__int64)&v165,
                              (__int64)&v164) == 1 )
      {
        if ( ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator() )
        {
          ClientToken = p_SubjectContext->ClientToken;
          if ( !p_SubjectContext->ClientToken )
            ClientToken = p_SubjectContext->PrimaryToken;
          if ( SeQueryInformationToken(ClientToken, TokenIsAppContainer, &TokenInformation) >= 0 )
            v20 = (_DWORD)TokenInformation == 0;
        }
        else
        {
          v20 = 1;
        }
      }
      v18 = a9;
    }
    else
    {
      v20 = 1;
    }
    if ( p_SubjectContext == &SubjectContext )
    {
      SeReleaseSubjectContext(p_SubjectContext);
      v18 = a9;
    }
    v180 = !v20;
  }
  if ( a1 )
  {
    result = ObpReferenceObjectByHandleWithTag(a1, 0x746C6644u, (__int64)&Object, 0LL, (__int64)&v167);
    v154 = result;
    if ( result < 0 )
      return result;
    if ( HIDWORD(v167) )
    {
      v162 &= HIDWORD(v167);
      if ( (v162 & a10->OriginalDesiredAccess) != a10->OriginalDesiredAccess )
      {
        ObfDereferenceObject(Object);
        return -1073741790;
      }
    }
    v75 = (char *)Object;
    if ( v15->m128i_i16[0] )
    {
      if ( *(_WORD *)v15->m128i_i64[1] == 92
        && (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)] != IoFileObjectType )
      {
        ObfDereferenceObject(Object);
        return -1073741765;
      }
    }
    else if ( (POBJECT_TYPE)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)] == ObpDirectoryObjectType )
    {
      v130 = ObReferenceObjectByPointer(Object, 0, (POBJECT_TYPE)a4, a5);
      v131 = v147;
      v132 = v130;
      if ( v130 >= 0 )
        v131 = v75;
      v147 = v131;
      ObfDereferenceObject(v75);
      *a13 = v147;
      return v132;
    }
    v76 = *v15;
    v147 = (char *)Object;
    v148 = v76;
    v171 = a4 + 16;
    v172 = v15;
    v173 = a1;
    SeSetLearningModeObjectInformation((__int64)v170);
    v22 = v147;
LABEL_35:
    while ( 2 )
    {
      v25 = v22 - 48;
      v26 = (unsigned __int8)((unsigned __int16)((_WORD)v22 - 48) >> 8);
      v27 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v26 ^ (unsigned __int8)*(v22 - 24)];
      ParseProcedure = (__int64 (__usercall *)@<rax>(PVOID@<rcx>, POBJECT_TYPE@<rdx>, int, __int64, __int64, int, int, __int64, __int64))v27->TypeInfo.ParseProcedure;
      if ( !ParseProcedure )
      {
        if ( v27 != ObpDirectoryObjectType )
          goto LABEL_288;
        v29 = v22;
        v166 = v22;
        if ( v148.m128i_i16[0] && *(_WORD *)v148.m128i_i64[1] == 92 )
        {
          v148.m128i_i64[1] += 2LL;
          v148.m128i_i16[0] -= 2;
          v148.m128i_i16[1] -= 2;
        }
        for ( *(__m128i *)Src = v148; v148.m128i_i16[0]; v148.m128i_i16[0] -= 2 )
        {
          if ( *(_WORD *)v148.m128i_i64[1] == 92 )
            break;
          v148.m128i_i64[1] += 2LL;
        }
        v148.m128i_i16[1] -= LOWORD(Src[0]) - v148.m128i_i16[0];
        LOWORD(Src[0]) -= v148.m128i_i16[0];
        if ( LOWORD(Src[0]) )
        {
          if ( !(_BYTE)v153 || (a10->Flags & 1) != 0 || (v146 = ObpCheckTraverseAccess(v22, a10, a10)) != 0 )
          {
            if ( v148.m128i_i16[0] )
              goto LABEL_47;
            if ( !a8 )
            {
              *(_DWORD *)(v13 + 32) = -1145368012;
              CurrentThread = KeGetCurrentThread();
              --CurrentThread->KernelApcDisable;
              ExAcquirePushLockSharedEx((ULONG_PTR)(v22 + 296), 0LL);
              *(_DWORD *)(v13 + 32) = -572714444;
              ObfReferenceObject(v22);
              *(_QWORD *)v13 = v22;
              *(_WORD *)(v13 + 30) = 1;
              goto LABEL_47;
            }
          }
          else
          {
            v135 = v150;
            if ( v150 >= 0 )
              v135 = -1073741772;
            v150 = v135;
            if ( v148.m128i_i16[0] || !a8 )
              goto LABEL_316;
          }
          ObpLockDirectoryExclusive(v13, v22);
LABEL_47:
          v30 = LOWORD(Src[0]);
          v31 = (unsigned __int16 *)Src[1];
          v32 = LOWORD(Src[0]) >> 1;
          v178 = v22;
          HIDWORD(TokenInformation) = v182 & 0x40;
          v149 = LOWORD(Src[0]);
          if ( v32 < 4 )
          {
            v35 = 0;
          }
          else
          {
            v33 = 0LL;
            do
            {
              v34 = *(_QWORD *)v31;
              if ( (*(_QWORD *)v31 & 0xFF80FF80FF80FF80uLL) != 0 )
              {
                v136 = 4LL;
                do
                {
                  v137 = (unsigned __int16)v34;
                  if ( (unsigned __int16)v34 >= 0x61u )
                  {
                    if ( (unsigned __int16)v34 <= 0x7Au )
                      v137 = (unsigned int)(unsigned __int16)v34 - 32;
                    else
                      v137 = NLS_UPCASE(v34);
                  }
                  *(_QWORD *)&v138 = v34;
                  *((_QWORD *)&v138 + 1) = v137;
                  v34 = v138 >> 16;
                  --v136;
                }
                while ( v136 );
              }
              else
              {
                v34 &= 0xFFDFFFDFFFDFFFDFuLL;
              }
              v31 += 4;
              v32 -= 4;
              v33 = v34 + (v33 >> 1) + 3 * v33;
            }
            while ( v32 >= 4 );
            v30 = v149;
            v29 = v22;
            v35 = v33 + HIDWORD(v33);
          }
          if ( !v32 )
          {
LABEL_59:
            v38 = *(_BYTE *)(v13 + 30);
            *(_DWORD *)(v13 + 24) = v35;
            v39 = v35 % 0x25;
            *(_WORD *)(v13 + 28) = v39;
            v40 = &v29[8 * v39];
            v41 = (ULONG_PTR)(v29 + 296);
            if ( !v38 )
            {
              *(_DWORD *)(v13 + 32) = -1145368012;
              v42 = KeGetCurrentThread();
              --v42->KernelApcDisable;
              ExAcquirePushLockSharedEx(v41, 0LL);
              *(_DWORD *)(v13 + 32) = -572714444;
              ObfReferenceObject(v22);
              *(_QWORD *)v13 = v22;
              *(_WORD *)(v13 + 30) = 1;
            }
            v43 = *(__int64 **)v40;
            if ( !*(_QWORD *)v40 )
            {
LABEL_64:
              if ( !v38 )
              {
                ExReleasePushLockEx(v41, 0LL);
                v44 = *(void **)v13;
                *(_DWORD *)(v13 + 32) = -286387660;
                ObfDereferenceObject(v44);
                *(_QWORD *)v13 = 0LL;
                *(_WORD *)(v13 + 30) = 0;
                KeLeaveCriticalRegion();
              }
              v22 = 0LL;
LABEL_67:
              if ( !v145 )
                goto LABEL_140;
              v45 = v178;
LABEL_69:
              v46 = v45[84];
              v47 = 0LL;
              if ( (v46 & 4) != 0 )
              {
                if ( (v46 & 0x10) != 0 && !v180 )
                  goto LABEL_213;
                v47 = (char *)*((_QWORD *)v45 + 39);
              }
              else
              {
                CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
                v49 = KeGetCurrentThread();
                --v49->SpecialApcDisable;
                v50 = (ULONG_PTR)CurrentServerSiloGlobals + 120;
                ExAcquirePushLockSharedEx((ULONG_PTR)CurrentServerSiloGlobals + 120, 0LL);
                v51 = *((_QWORD *)v45 + 38);
                if ( v51 )
                  v47 = *(char **)(v51 + 8);
                ExReleasePushLockEx(v50, 0LL);
                v53 = KeGetCurrentThread();
                v17 = v53->SpecialApcDisable++ == -1;
                if ( v17 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)v53->ApcState.ApcListHead[0].Flink != &v53->152 )
                  KiCheckForKernelApcDelivery(v52);
              }
              if ( !v47 )
                goto LABEL_213;
              v54 = a11;
              v55 = *(_BYTE *)(a11 + 30);
              if ( v55 )
              {
                ObfReferenceObject(v45);
                ObpUnlockDirectory((__int64)v45, a11);
                ObpLockDirectoryShared(a11, v47);
                ObfDereferenceObject(v45);
                v55 = *(_BYTE *)(a11 + 30);
              }
              v56 = &v47[8 * *(unsigned __int16 *)(a11 + 28)];
              if ( !v55 )
              {
                *(_DWORD *)(a11 + 32) = -1145368012;
                v57 = KeGetCurrentThread();
                --v57->KernelApcDisable;
                ExAcquirePushLockSharedEx((ULONG_PTR)(v47 + 296), 0LL);
                *(_DWORD *)(a11 + 32) = -572714444;
                ObfReferenceObject(v47);
                *(_QWORD *)a11 = v47;
                *(_WORD *)(a11 + 30) = 1;
              }
              v58 = *(__int64 **)v56;
              if ( !*(_QWORD *)v56 )
              {
LABEL_85:
                if ( !v55 )
                  ObpUnlockDirectory((__int64)v47, v54);
                v22 = 0LL;
                v45 = v47;
                goto LABEL_88;
              }
              v59 = *(_DWORD *)(a11 + 24);
              while ( 1 )
              {
                if ( *((_DWORD *)v58 + 4) == v59 )
                {
                  v96 = v149;
                  v97 = v58[1] - 48 - ObpInfoMaskToOffset[*(_BYTE *)(v58[1] - 48 + 26) & 3];
                  v98 = *(unsigned __int16 *)(v97 + 8);
                  v99 = v97 + 8;
                  if ( v149 == v98 )
                  {
                    v100 = (char *)Src[1];
                    v101 = *(_QWORD **)(v99 + 8);
                    v102 = (char *)Src[1] + (int)v149;
                    if ( v149 >= 8 )
                    {
                      do
                      {
                        if ( *(_QWORD *)v100 != *v101 )
                          break;
                        v96 -= 8;
                        if ( !v96 )
                          goto LABEL_208;
                        v100 += 8;
                        ++v101;
                      }
                      while ( v96 >= 8 );
                    }
                    if ( v100 >= v102 )
                    {
LABEL_208:
                      v22 = (char *)v58[1];
                      ObfReferenceObject(v22);
                      if ( v55 )
                      {
                        v106 = a11;
                      }
                      else
                      {
                        ExReleasePushLockEx((ULONG_PTR)(v47 + 296), 0LL);
                        v106 = a11;
                        v107 = *(void **)a11;
                        *(_DWORD *)(a11 + 32) = -286387660;
                        ObfDereferenceObject(v107);
                        *(_QWORD *)a11 = 0LL;
                        *(_WORD *)(a11 + 30) = 0;
                        KeLeaveCriticalRegion();
                        v56 = 0LL;
                      }
                      v108 = *(void **)(v106 + 8);
                      if ( v108 )
                        ObfDereferenceObject(v108);
                      *(_QWORD *)(v106 + 8) = v22;
                      *(_QWORD *)(v106 + 16) = v56;
LABEL_213:
                      v45 = v47;
                      if ( v22 )
                      {
LABEL_214:
                        v13 = a11;
                        goto LABEL_140;
                      }
LABEL_88:
                      if ( !v47 )
                        goto LABEL_214;
                      goto LABEL_69;
                    }
                    if ( HIDWORD(TokenInformation) )
                    {
                      v103 = (char *)v101 - v100;
                      while ( 1 )
                      {
                        v104 = *(_WORD *)v100;
                        v105 = *(_WORD *)&v100[v103];
                        if ( *(_WORD *)v100 != v105 )
                        {
                          NLS_UPCASE(v105);
                          v122 = NLS_UPCASE(v104);
                          if ( v122 != v123 )
                            break;
                        }
                        v100 += 2;
                        if ( v100 >= v102 )
                          goto LABEL_208;
                      }
                    }
                    else
                    {
                      while ( *(_WORD *)v100 == *(_WORD *)v101 )
                      {
                        v100 += 2;
                        v101 = (_QWORD *)((char *)v101 + 2);
                        if ( v100 >= v102 )
                          goto LABEL_208;
                      }
                    }
                  }
                }
                v56 = (char *)v58;
                v58 = (__int64 *)*v58;
                if ( !v58 )
                {
                  v54 = a11;
                  goto LABEL_85;
                }
              }
            }
            while ( 1 )
            {
              if ( *((_DWORD *)v43 + 4) == *(_DWORD *)(v13 + 24) )
              {
                v64 = v43[1] - 48 - ObpInfoMaskToOffset[*(_BYTE *)(v43[1] - 48 + 26) & 3];
                v65 = v30;
                if ( v30 == *(unsigned __int16 *)(v64 + 8) )
                {
                  v66 = (char *)Src[1];
                  v67 = *(_QWORD **)(v64 + 16);
                  v68 = (char *)Src[1] + v30;
                  if ( v149 >= 8 )
                  {
                    do
                    {
                      if ( *(_QWORD *)v66 != *v67 )
                        break;
                      v65 -= 8;
                      if ( !v65 )
                        goto LABEL_135;
                      v66 += 8;
                      ++v67;
                    }
                    while ( v65 >= 8 );
                  }
                  if ( v66 >= v68 )
                  {
LABEL_135:
                    v22 = (char *)v43[1];
                    ObfReferenceObject(v22);
                    if ( !v38 )
                    {
                      ExReleasePushLockEx(v41, 0LL);
                      v72 = *(void **)v13;
                      *(_DWORD *)(v13 + 32) = -286387660;
                      ObfDereferenceObject(v72);
                      *(_QWORD *)v13 = 0LL;
                      *(_WORD *)(v13 + 30) = 0;
                      KeLeaveCriticalRegion();
                      v40 = 0LL;
                    }
                    v73 = *(void **)(v13 + 8);
                    if ( v73 )
                      ObfDereferenceObject(v73);
                    *(_QWORD *)(v13 + 8) = v22;
                    *(_QWORD *)(v13 + 16) = v40;
                    if ( !v22 )
                      goto LABEL_67;
LABEL_140:
                    v147 = v22;
                    if ( v146 )
                    {
                      if ( !v22 )
                        goto LABEL_152;
                      if ( !v148.m128i_i16[0] )
                      {
                        v74 = *(__int64 (__usercall **)@<rax>(PVOID@<rcx>, POBJECT_TYPE@<rdx>, int, __int64, __int64, int, int, __int64, __int64))(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*(v22 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v22 - 48) >> 8)] + 144);
                        if ( !v74 || a8 && v74 != ObpParseSymbolicLinkEx )
                        {
                          v62 = ObReferenceObjectByPointer(v22, 0, (POBJECT_TYPE)a4, a5);
                          goto LABEL_111;
                        }
                      }
                      goto LABEL_35;
                    }
                    if ( !v22 )
                    {
LABEL_152:
                      if ( v148.m128i_i16[0] )
                      {
                        v62 = -1073741766;
                      }
                      else
                      {
                        if ( !a8 )
                          goto LABEL_154;
                        if ( (POBJECT_TYPE)a4 == ObpDirectoryObjectType )
                          v113 = 8;
                        else
                          v113 = 4;
                        v114 = v166;
                        v115 = v153;
                        LOBYTE(Tag) = 0;
                        if ( ObCheckCreateObjectAccess((__int64)v166, v113, a10, (__int64)Src, Tag, v153, &v154) )
                        {
                          v116 = v114[85];
                          if ( v116 != -1
                            && ((POBJECT_TYPE)a4 == MmSectionObjectType || (POBJECT_TYPE)a4 == ObpSymbolicLinkObjectType)
                            && v116 != (unsigned int)PsGetCurrentProcessSessionId()
                            && !SeSinglePrivilegeCheck(SeCreateGlobalPrivilege, v115)
                            && !(unsigned __int8)ObpIsUnsecureName((PCUNICODE_STRING)Src) )
                          {
                            goto LABEL_343;
                          }
                          v117 = LOWORD(Src[0]);
                          PoolWithTag = ExAllocatePoolWithTag(PagedPool, LOWORD(Src[0]), 0x6D4E624Fu);
                          if ( PoolWithTag )
                          {
                            if ( (unsigned __int8)ObpInsertDirectoryEntry(v114, a8) )
                            {
                              memmove(PoolWithTag, Src[1], v117);
                              v119 = &a8[-ObpInfoMaskToOffset[*(a8 - 22) & 3] - 48];
                              v120 = (void *)*((_QWORD *)v119 + 2);
                              if ( v120 )
                                ExFreePoolWithTag(v120, 0);
                              v121 = (__int16)Src[0];
                              *((_QWORD *)v119 + 2) = PoolWithTag;
                              v62 = 0;
                              *((_WORD *)v119 + 4) = v121;
                              *((_WORD *)v119 + 5) = v121;
                              v147 = a8;
                              goto LABEL_112;
                            }
                            ExFreePoolWithTag(PoolWithTag, 0);
                          }
                          v62 = -1073741670;
                        }
                        else
                        {
                          v62 = v154;
                          if ( v154 >= 0 )
                            v62 = -1073741772;
                        }
                      }
                      goto LABEL_155;
                    }
LABEL_316:
                    v62 = v150;
LABEL_111:
                    if ( v62 < 0 )
                      goto LABEL_155;
LABEL_112:
                    if ( P )
                      ObfDereferenceDeviceMap(P);
                    if ( Object )
                      ObfDereferenceObject(Object);
                    if ( v160 )
                      ObfDereferenceObject(v160);
                    SeClearLearningModeObjectInformation();
                    if ( v62 < 0 )
                    {
                      *a13 = 0LL;
                    }
                    else
                    {
                      if ( a12 )
                      {
                        if ( v162 != -1 )
                          *a12 = v162;
                      }
                      *a13 = v147;
                    }
                    return v62;
                  }
                  if ( HIDWORD(TokenInformation) )
                  {
                    v69 = (char *)v67 - v66;
                    while ( 1 )
                    {
                      v70 = *(_WORD *)v66;
                      v71 = *(_WORD *)&v66[v69];
                      if ( *(_WORD *)v66 != v71 )
                      {
                        if ( v70 >= 0x61u )
                        {
                          if ( v70 > 0x7Au )
                          {
                            if ( Nls844UnicodeUpcaseTable && v70 >= 0xC0u )
                              v70 += *(_WORD *)(Nls844UnicodeUpcaseTable
                                              + 2LL
                                              * ((v70 & 0xF)
                                               + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                                   + 2LL
                                                                                   * (((v70 >> 4) & 0xF)
                                                                                    + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable + 2 * ((unsigned __int64)v70 >> 8))))));
                          }
                          else
                          {
                            v70 -= 32;
                          }
                        }
                        if ( v71 >= 0x61u )
                        {
                          if ( v71 > 0x7Au )
                          {
                            if ( Nls844UnicodeUpcaseTable && v71 >= 0xC0u )
                              v71 += *(_WORD *)(Nls844UnicodeUpcaseTable
                                              + 2LL
                                              * ((v71 & 0xF)
                                               + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                                   + 2LL
                                                                                   * (((v71 >> 4) & 0xF)
                                                                                    + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable + 2 * ((unsigned __int64)v71 >> 8))))));
                          }
                          else
                          {
                            v71 -= 32;
                          }
                        }
                        if ( v70 != v71 )
                          break;
                      }
                      v66 += 2;
                      if ( v66 >= v68 )
                        goto LABEL_135;
                    }
                  }
                  else
                  {
                    while ( *(_WORD *)v66 == *(_WORD *)v67 )
                    {
                      v66 += 2;
                      v67 = (_QWORD *)((char *)v67 + 2);
                      if ( v66 >= v68 )
                        goto LABEL_135;
                    }
                  }
                  v30 = v149;
                }
              }
              v40 = (char *)v43;
              v43 = (__int64 *)*v43;
              if ( !v43 )
                goto LABEL_64;
            }
          }
          while ( 1 )
          {
            v36 = *v31;
            v37 = (v35 >> 1) + 3 * v35;
            --v32;
            ++v31;
            if ( v36 >= 0x61 )
            {
              if ( v36 > 0x7A )
              {
                v127 = NLS_UPCASE(v36);
                v35 = v127 + v128;
                goto LABEL_58;
              }
              v37 -= 32;
            }
            v35 = v36 + v37;
LABEL_58:
            if ( !v32 )
              goto LABEL_59;
          }
        }
LABEL_287:
        v62 = -1073741773;
        goto LABEL_155;
      }
      if ( ParseProcedure != ObpParseSymbolicLinkEx )
      {
        if ( a8 )
        {
LABEL_288:
          v62 = -1073741788;
          goto LABEL_155;
        }
        ObfReferenceObject(v22);
        if ( *(_BYTE *)(v13 + 30) )
        {
          ExReleasePushLockEx(*(_QWORD *)v13 + 296LL, 0LL);
          v110 = *(void **)v13;
          *(_DWORD *)(v13 + 32) = -286387660;
          ObfDereferenceObject(v110);
          *(_QWORD *)v13 = 0LL;
          *(_WORD *)(v13 + 30) = 0;
          KeLeaveCriticalRegion();
        }
        v60 = *(void **)(v13 + 8);
        if ( v60 )
        {
          ObfDereferenceObject(v60);
          *(_QWORD *)(v13 + 8) = 0LL;
        }
        v22 = v147;
      }
      v14 = v182;
      if ( (*(_BYTE *)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v26 ^ (unsigned __int8)v25[24]] + 67) & 1) != 0 )
        v61 = ((__int64 (__fastcall *)(char *, __int64, struct _ACCESS_STATE *, _QWORD, int, __m128i *, __m128i *, __int64, __int64, _WORD *, char **))ParseProcedure)(
                v22,
                a4,
                a10,
                v153,
                v182,
                a2,
                &v148,
                a6,
                a7,
                v161,
                &v147);
      else
        v61 = ((__int64 (__fastcall *)(char *, __int64, struct _ACCESS_STATE *, _QWORD, int, __m128i *, __m128i *, __int64, __int64, char **))ParseProcedure)(
                v22,
                a4,
                a10,
                v153,
                v182,
                a2,
                &v148,
                a6,
                a7,
                &v147);
      v62 = v61;
      v154 = v61;
      if ( ParseProcedure != ObpParseSymbolicLinkEx )
        ObfDereferenceObject(v25 + 48);
      if ( v62 < 0 )
      {
LABEL_155:
        if ( *(_BYTE *)(v13 + 30) )
        {
          ExReleasePushLockEx(*(_QWORD *)v13 + 296LL, 0LL);
          v111 = *(void **)v13;
          *(_DWORD *)(v13 + 32) = -286387660;
          ObfDereferenceObject(v111);
          *(_QWORD *)v13 = 0LL;
          *(_WORD *)(v13 + 30) = 0;
          KeLeaveCriticalRegion();
        }
        v77 = *(void **)(v13 + 8);
        if ( v77 )
        {
          ObfDereferenceObject(v77);
          *(_QWORD *)(v13 + 8) = 0LL;
        }
        goto LABEL_112;
      }
      if ( v62 != 260 && v62 != 872 )
        v160 = v147;
      if ( (v162 & a10->OriginalDesiredAccess) != a10->OriginalDesiredAccess )
      {
LABEL_343:
        v62 = -1073741790;
        goto LABEL_155;
      }
      if ( v62 != 260 && v62 != 280 && v62 != 872 )
      {
        v160 = 0LL;
        if ( !v147 )
          v62 = -1073741772;
        goto LABEL_111;
      }
      if ( (v182 & 0x1000) != 0 && v62 != 872 )
      {
        v62 = -1073740533;
        goto LABEL_155;
      }
      if ( !--v158 )
      {
LABEL_154:
        v62 = -1073741772;
        goto LABEL_155;
      }
      v15 = a2;
      if ( !a2->m128i_i16[0] )
        goto LABEL_287;
      ObfDereferenceObject(Object);
      v78 = (__int16 *)a2->m128i_i64[1];
      Object = 0LL;
      v79 = *v78;
      if ( v62 == 280 )
      {
        if ( v79 == 92 )
          goto LABEL_287;
        v22 = v147;
        Object = v147;
        v160 = 0LL;
      }
      else
      {
        if ( v79 != 92 )
          goto LABEL_287;
        if ( v62 == 872 )
        {
          v22 = (char *)ObpRootDirectoryObject;
        }
        else if ( (int)PsGetPermanentSiloContext(a9, PsObjectDirectorySiloContextSlot, (unsigned __int64 *)&v169) >= 0 )
        {
          v22 = v169;
        }
        else
        {
          v22 = (char *)ObpRootDirectoryObject;
          v169 = (char *)ObpRootDirectoryObject;
        }
        Object = v22;
        ObfReferenceObject(v22);
      }
      v80 = P;
      if ( !P )
      {
LABEL_174:
        if ( *(_BYTE *)(v13 + 30) )
          ObpUnlockDirectory(*(_QWORD *)v13, v13);
        v83 = *(void **)(v13 + 8);
        if ( v83 )
        {
          ObfDereferenceObject(v83);
          *(_QWORD *)(v13 + 8) = 0LL;
        }
LABEL_29:
        v23 = v15->m128i_i64[1];
        if ( (v23 & 7) != 0 )
          goto LABEL_33;
        v24 = v14 & 0x800;
        if ( v15->m128i_i16[0] < 8u || *(_QWORD *)v23 != ObpDosDevicesShortNamePrefix )
        {
          if ( v15->m128i_i16[0] == 6 && *(_DWORD *)v23 == *(_DWORD *)L"\\??" && *(_WORD *)(v23 + 4) == 63 )
          {
            v124 = (PVOID *)ObpReferenceDeviceMap((v14 & 0x800) != 0);
            P = v124;
            v125 = v124;
            if ( v124 )
            {
              if ( *v124 )
              {
                v126 = ObReferenceObjectByPointer(*v124, 0, (POBJECT_TYPE)a4, a5);
                if ( v126 >= 0 )
                {
                  if ( a12 && v162 != -1 )
                    *a12 = v162;
                  *a13 = *v125;
                }
                ObfDereferenceDeviceMap(v125);
                ObfDereferenceObject(v22);
                SeClearLearningModeObjectInformation();
                return v126;
              }
            }
          }
          goto LABEL_33;
        }
        v84 = KeGetCurrentThread();
        P = 0LL;
        v85 = 0LL;
        Process = (__int64)v84->Process;
        ProcessServerSilo = PsGetProcessServerSilo(Process);
        v134 = ProcessServerSilo != PsGetCurrentServerSilo();
        if ( (*(_DWORD *)(&v84[1].SwapListEntry + 1) & 8) == 0 || v24 )
        {
          if ( v134 )
            goto LABEL_189;
          v88 = 0LL;
        }
        else
        {
          if ( v134 )
            goto LABEL_189;
          v112 = PsReferenceImpersonationTokenEx((__int64)v84, 1, v156, &v155, &v176, 0LL);
          v85 = v112;
          if ( !v112 )
            goto LABEL_310;
          if ( *((_QWORD *)v112 + 3) == 999LL )
          {
            v134 = 1;
            goto LABEL_189;
          }
          if ( (int)SeGetTokenDeviceMap(v112, &v177) >= 0 )
          {
            v88 = v177;
            P = (PVOID)v177;
            if ( v177 )
            {
              _InterlockedIncrement(v177 + 6);
LABEL_196:
              if ( v85 )
                ObfDereferenceObject(v85);
              if ( v88 && *(_QWORD *)v88 )
              {
                v95 = *a2;
                v148.m128i_i64[0] = a2->m128i_i64[0];
                v148.m128i_i16[0] -= 8;
                v148.m128i_i64[1] = _mm_srli_si128(v95, 8).m128i_u64[0] + 8;
                v148.m128i_i16[1] -= 8;
                v22 = *(char **)v88;
                goto LABEL_34;
              }
              v22 = (char *)Object;
              v15 = a2;
LABEL_33:
              v148 = *v15;
LABEL_34:
              v147 = v22;
              continue;
            }
          }
          else
          {
LABEL_310:
            v88 = (volatile signed __int32 *)P;
          }
        }
        if ( !*(_QWORD *)(Process + 1072) && (int)ObSetCurrentProcessDeviceMap() < 0 )
          goto LABEL_196;
LABEL_189:
        v89 = (volatile signed __int32 **)PsGetCurrentServerSiloGlobals();
        v90 = KeGetCurrentThread();
        v91 = v89;
        --v90->SpecialApcDisable;
        v92 = (ULONG_PTR)(v89 + 15);
        ExAcquirePushLockSharedEx((ULONG_PTR)(v89 + 15), 0LL);
        if ( v134 )
          v88 = *v91;
        else
          v88 = *(volatile signed __int32 **)(Process + 1072);
        P = (PVOID)v88;
        if ( v88 )
          _InterlockedIncrement(v88 + 6);
        ExReleasePushLockEx(v92, 0LL);
        v94 = KeGetCurrentThread();
        v17 = v94->SpecialApcDisable++ == -1;
        if ( v17 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)v94->ApcState.ApcListHead[0].Flink != &v94->152 )
          KiCheckForKernelApcDelivery(v93);
        goto LABEL_196;
      }
      break;
    }
    v81 = *((_DWORD *)P + 6);
    if ( v81 == 1 )
    {
LABEL_333:
      ServerSiloGlobals = PsGetServerSiloGlobals(*((_QWORD *)v80 + 8));
      v140 = KeGetCurrentThread();
      --v140->SpecialApcDisable;
      v141 = (ULONG_PTR)ServerSiloGlobals + 120;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)ServerSiloGlobals + 120, 0LL);
      v81 = _InterlockedExchangeAdd((volatile signed __int32 *)v80 + 6, 0xFFFFFFFF);
      if ( v81 == 1 )
      {
        *(_QWORD *)(*(_QWORD *)v80 + 304LL) = 0LL;
        ExReleasePushLockEx(v141, 0LL);
        KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
        v142 = (void *)*((_QWORD *)v80 + 8);
        if ( v142 )
          ObfDereferenceObjectWithTag(v142, 0x6D44624Fu);
        ZwClose(*((HANDLE *)v80 + 2));
        ObfDereferenceObject(*(PVOID *)v80);
        ExFreePoolWithTag(v80, 0x6D44624Fu);
        goto LABEL_173;
      }
      ExReleasePushLockEx(v141, 0LL);
      KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    }
    else
    {
      while ( 1 )
      {
        v82 = _InterlockedCompareExchange((volatile signed __int32 *)v80 + 6, v81 - 1, v81);
        v17 = v81 == v82;
        v81 = v82;
        if ( v17 )
          break;
        if ( v82 == 1 )
          goto LABEL_333;
      }
    }
    if ( v81 <= 0 )
      __fastfail(0xEu);
LABEL_173:
    v22 = (char *)Object;
    P = 0LL;
    goto LABEL_174;
  }
  if ( !v15->m128i_i16[0] || *(_WORD *)v15->m128i_i64[1] != 92 )
    return -1073741765;
  if ( (int)PsGetPermanentSiloContext(v18, PsObjectDirectorySiloContextSlot, (unsigned __int64 *)&v168) >= 0 )
  {
    v22 = v168;
  }
  else
  {
    v22 = (char *)ObpRootDirectoryObject;
    v168 = (char *)ObpRootDirectoryObject;
  }
  Object = v22;
  if ( v22 )
    ObfReferenceObject(v22);
  if ( v15->m128i_i16[0] != 2 )
  {
    v172 = v15;
    v171 = a4 + 16;
    v173 = 0LL;
    SeSetLearningModeObjectInformation((__int64)v170);
    goto LABEL_29;
  }
  if ( v22 )
  {
    v133 = ObReferenceObjectByPointer(v22, 0, (POBJECT_TYPE)a4, a5);
    if ( v133 >= 0 )
      *a13 = v22;
    ObfDereferenceObject(v22);
    return v133;
  }
  else if ( a8 )
  {
    result = ObReferenceObjectByPointer(a8, 0, (POBJECT_TYPE)a4, a5);
    if ( result >= 0 )
      *a13 = a8;
  }
  else
  {
    return -1073741811;
  }
  return result;
}
