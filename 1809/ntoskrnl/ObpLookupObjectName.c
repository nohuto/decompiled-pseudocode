/*
 * XREFs of ObpLookupObjectName @ 0x1405E4BE0
 * Callers:
 *     ObpInsertOrLocateNamedObject @ 0x1405C95A8 (ObpInsertOrLocateNamedObject.c)
 *     ObReferenceObjectByName @ 0x1405C9DA0 (ObReferenceObjectByName.c)
 *     ObOpenObjectByNameEx @ 0x1405E3E30 (ObOpenObjectByNameEx.c)
 *     ObReferenceObjectByNameEx @ 0x14061245C (ObReferenceObjectByNameEx.c)
 * Callees:
 *     PsGetCurrentProcessSessionId @ 0x140002AA0 (PsGetCurrentProcessSessionId.c)
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     ObReferenceObjectByPointer @ 0x140013530 (ObReferenceObjectByPointer.c)
 *     PsGetProcessServerSilo @ 0x14004D260 (PsGetProcessServerSilo.c)
 *     PsGetCurrentServerSilo @ 0x14004D270 (PsGetCurrentServerSilo.c)
 *     ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator @ 0x14004D510 (ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator.c)
 *     SeSetLearningModeObjectInformation @ 0x14004E020 (SeSetLearningModeObjectInformation.c)
 *     SeClearLearningModeObjectInformation @ 0x14004E050 (SeClearLearningModeObjectInformation.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14004E220 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     SeAccessCheck @ 0x140051640 (SeAccessCheck.c)
 *     PsGetServerSiloGlobals @ 0x1400922CC (PsGetServerSiloGlobals.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140109DC0 (PsGetCurrentServerSiloGlobals.c)
 *     ObpUnlockDirectory @ 0x140109F98 (ObpUnlockDirectory.c)
 *     ObpLockDirectoryShared @ 0x140109FD8 (ObpLockDirectoryShared.c)
 *     ObpLockDirectoryExclusive @ 0x14010A050 (ObpLockDirectoryExclusive.c)
 *     PsGetPermanentSiloContext @ 0x14010A120 (PsGetPermanentSiloContext.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ObpUseSystemDeviceMap @ 0x140583400 (ObpUseSystemDeviceMap.c)
 *     ObCheckCreateObjectAccess @ 0x1405C93B0 (ObCheckCreateObjectAccess.c)
 *     RtlUpcaseUnicodeChar @ 0x1405D6C10 (RtlUpcaseUnicodeChar.c)
 *     SeReleaseSubjectContext @ 0x1405E2240 (SeReleaseSubjectContext.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405E9390 (ObpReferenceObjectByHandleWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x140613160 (SeSinglePrivilegeCheck.c)
 *     SeCaptureSubjectContext @ 0x140632AA0 (SeCaptureSubjectContext.c)
 *     PsReferenceImpersonationTokenEx @ 0x140632BC0 (PsReferenceImpersonationTokenEx.c)
 *     SeQueryInformationToken @ 0x14063D370 (SeQueryInformationToken.c)
 *     ObfDereferenceDeviceMap @ 0x140672B80 (ObfDereferenceDeviceMap.c)
 *     ObpReferenceDeviceMap @ 0x140672C70 (ObpReferenceDeviceMap.c)
 *     ObSetCurrentProcessDeviceMap @ 0x1406A3F44 (ObSetCurrentProcessDeviceMap.c)
 *     SeGetTokenDeviceMap @ 0x1406A405C (SeGetTokenDeviceMap.c)
 *     ObpInsertDirectoryEntry @ 0x1406A62CC (ObpInsertDirectoryEntry.c)
 *     ObpIsUnsecureName @ 0x140861E74 (ObpIsUnsecureName.c)
 *     ObpCheckTraverseAccess @ 0x140862B84 (ObpCheckTraverseAccess.c)
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
  __int16 v14; // bx
  __int64 v17; // r9
  int AccessMode; // r13d
  bool v19; // di
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext; // rbx
  PACCESS_TOKEN ClientToken; // rcx
  NTSTATUS result; // eax
  ACCESS_MASK OriginalDesiredAccess; // ecx
  PVOID v24; // rdi
  NTSTATUS v25; // eax
  PVOID v26; // rcx
  NTSTATUS v27; // ebx
  __m128i v28; // xmm0
  char *v29; // rdi
  int PermanentSiloContext; // eax
  NTSTATUS v31; // ebx
  struct _OBJECT_TYPE *v32; // r14
  __int64 v33; // r15
  PVOID v34; // r13
  __int64 v35; // rcx
  unsigned __int8 v36; // si
  struct _KTHREAD *CurrentThread; // r15
  void *v38; // r14
  __int64 Process; // r13
  __int64 ProcessServerSilo; // rbx
  bool v41; // zf
  bool v42; // di
  __int64 v43; // rax
  volatile signed __int32 *v44; // r13
  volatile signed __int32 **CurrentServerSiloGlobals; // rax
  struct _KTHREAD *v46; // rcx
  volatile signed __int32 **v47; // rbx
  __int64 v48; // rcx
  struct _KTHREAD *v49; // rax
  __m128i v50; // xmm0
  PVOID *v51; // rax
  PVOID *v52; // r13
  char *v53; // rsi
  __int64 v54; // r14
  struct _OBJECT_TYPE *v55; // rax
  __int64 (__fastcall *ParseProcedure)(char *, POBJECT_TYPE, struct _SECURITY_SUBJECT_CONTEXT *, KPROCESSOR_MODE, int, __int64, unsigned __int16 *, int, int, __int64, char **); // rbx
  char *v57; // rsi
  int v58; // ecx
  NTSTATUS v59; // edi
  void *v60; // r14
  struct _KTHREAD *v61; // rax
  _DWORD *v62; // r13
  unsigned __int16 *v63; // r15
  unsigned int v64; // r14d
  unsigned __int64 v65; // rsi
  __int64 v66; // rbx
  __int64 v67; // rdi
  __int64 v68; // rax
  __int128 v69; // rt0
  unsigned int v70; // ebx
  unsigned int v71; // edx
  int v72; // ebx
  PVOID v73; // rdi
  ULONG_PTR v74; // r15
  __int16 v75; // cx
  __int16 v76; // ax
  __int64 v77; // rbx
  unsigned __int16 v78; // ax
  char v79; // r12
  char *v80; // rsi
  struct _KTHREAD *v81; // rax
  __int64 *v82; // rdi
  unsigned int v83; // ecx
  __int64 v84; // rdx
  char *v85; // r8
  _QWORD *v86; // r11
  char *v87; // rbx
  signed __int64 v88; // r11
  unsigned __int64 v89; // r10
  unsigned __int64 v90; // r9
  void *v91; // rcx
  void *v92; // rcx
  int v93; // eax
  char *v94; // rsi
  void *v95; // rax
  struct _KTHREAD *v96; // rcx
  ULONG_PTR v97; // rbx
  __int64 v98; // rax
  __int64 v99; // rcx
  struct _KTHREAD *v100; // rax
  void *v101; // rcx
  char v102; // r12
  char *v103; // r14
  struct _KTHREAD *v104; // rax
  char *v105; // rdi
  int v106; // r15d
  unsigned int v107; // edx
  __int64 v108; // rcx
  char *v109; // rax
  _QWORD *v110; // r11
  char *v111; // rbx
  signed __int64 v112; // r11
  unsigned __int64 v113; // r10
  unsigned __int64 v114; // r9
  void *v115; // rcx
  void *v116; // rcx
  __int64 (__fastcall *v117)(char *, POBJECT_TYPE, struct _SECURITY_SUBJECT_CONTEXT *, KPROCESSOR_MODE, int, __int64, unsigned __int16 *, int, int, __int64, char **); // rax
  void *v118; // rcx
  void *v119; // rcx
  NTSTATUS v120; // eax
  PVOID v121; // rsi
  __int16 *v122; // rax
  __int16 v123; // cx
  int v124; // eax
  signed __int32 v125; // ebx
  signed __int32 v126; // eax
  void *ServerSiloGlobals; // rax
  struct _KTHREAD *v128; // rcx
  ULONG_PTR v129; // rdi
  void *v130; // rcx
  void *v131; // rcx
  NTSTATUS v132; // ebx
  _DWORD *v133; // r14
  ACCESS_MASK v134; // edx
  KPROCESSOR_MODE v135; // r13
  int v136; // edi
  void *v137; // rcx
  void *v138; // rcx
  unsigned int v139; // esi
  PVOID PoolWithTag; // rdi
  char *v141; // rbx
  void *v142; // rcx
  __int16 v143; // ax
  __int64 PreviouslyGrantedAccess; // [rsp+20h] [rbp-E0h]
  bool v145; // [rsp+60h] [rbp-A0h]
  char v146; // [rsp+61h] [rbp-9Fh]
  PVOID v147; // [rsp+68h] [rbp-98h]
  PVOID v148[2]; // [rsp+70h] [rbp-90h] BYREF
  __m128i v149; // [rsp+80h] [rbp-80h] BYREF
  int v150; // [rsp+90h] [rbp-70h]
  PVOID Object; // [rsp+98h] [rbp-68h] BYREF
  PVOID P; // [rsp+A0h] [rbp-60h]
  unsigned int v153; // [rsp+A8h] [rbp-58h]
  NTSTATUS v154; // [rsp+ACh] [rbp-54h] BYREF
  char v155; // [rsp+B0h] [rbp-50h] BYREF
  char v156; // [rsp+B1h] [rbp-4Fh] BYREF
  PVOID TokenInformation; // [rsp+B4h] [rbp-4Ch] BYREF
  int v158; // [rsp+BCh] [rbp-44h]
  int v159; // [rsp+C0h] [rbp-40h]
  void *Src[2]; // [rsp+D0h] [rbp-30h] BYREF
  __int16 v161[2]; // [rsp+E0h] [rbp-20h] BYREF
  int v162; // [rsp+E4h] [rbp-1Ch]
  __int64 v163; // [rsp+E8h] [rbp-18h]
  NTSTATUS AccessStatus; // [rsp+F0h] [rbp-10h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+F4h] [rbp-Ch] BYREF
  PVOID v166; // [rsp+F8h] [rbp-8h]
  char *v167; // [rsp+100h] [rbp+0h] BYREF
  char *v168; // [rsp+108h] [rbp+8h] BYREF
  char v169[8]; // [rsp+110h] [rbp+10h] BYREF
  __int64 v170; // [rsp+118h] [rbp+18h] BYREF
  volatile signed __int32 *v171; // [rsp+120h] [rbp+20h] BYREF
  PVOID v172; // [rsp+128h] [rbp+28h]
  _BYTE v173[16]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v174; // [rsp+140h] [rbp+40h]
  __m128i *v175; // [rsp+148h] [rbp+48h]
  ULONG_PTR v176; // [rsp+150h] [rbp+50h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+168h] [rbp+68h] BYREF
  char v178; // [rsp+1E0h] [rbp+E0h]
  __m128i *v179; // [rsp+1E8h] [rbp+E8h]
  int v180; // [rsp+1F0h] [rbp+F0h]

  v180 = a3;
  v179 = a2;
  v13 = a11;
  v14 = a3;
  v159 = 64;
  P = 0LL;
  *(_QWORD *)a11 = 0LL;
  *(_QWORD *)(a11 + 8) = 0LL;
  *(_WORD *)(a11 + 30) = 0;
  *(_DWORD *)(a11 + 32) = -60876;
  v145 = 0;
  v178 = 0;
  if ( a12 )
    *a12 = 0;
  v41 = ObpCaseInsensitive == 0;
  v17 = a9;
  v154 = 0;
  v150 = 0;
  *a13 = 0LL;
  v161[0] = 16;
  v146 = 1;
  v148[0] = 0LL;
  v147 = 0LL;
  v162 = -1;
  v163 = a9;
  if ( !v41
    && (*(_BYTE *)(a4 + 66) & 1) != 0
    && (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 0x80000) == 0 )
  {
    v14 = a3 | 0x40;
    v180 = a3 | 0x40;
  }
  AccessMode = 1;
  if ( (v14 & 0x400) == 0 )
    AccessMode = a5;
  v153 = AccessMode;
  if ( !a8 )
  {
    v19 = 0;
    v178 = 1;
    LODWORD(TokenInformation) = 0;
    GrantedAccess = 0;
    p_SubjectContext = 0LL;
    AccessStatus = 0;
    if ( (_BYTE)AccessMode )
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
      if ( SeAccessCheck(
             SeMediumDaclSd,
             p_SubjectContext,
             0,
             0x20000u,
             0,
             0LL,
             (PGENERIC_MAPPING)&RtlpRestrictedMapping,
             AccessMode,
             &GrantedAccess,
             &AccessStatus) == 1 )
      {
        if ( ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator() )
        {
          ClientToken = p_SubjectContext->ClientToken;
          if ( !p_SubjectContext->ClientToken )
            ClientToken = p_SubjectContext->PrimaryToken;
          if ( SeQueryInformationToken(ClientToken, TokenIsAppContainer, &TokenInformation) >= 0 )
            v19 = (_DWORD)TokenInformation == 0;
        }
        else
        {
          v19 = 1;
        }
      }
    }
    else
    {
      v19 = 1;
    }
    if ( p_SubjectContext == &SubjectContext )
      SeReleaseSubjectContext(p_SubjectContext);
    v14 = v180;
    a2 = v179;
    v145 = !v19;
    v17 = a9;
  }
  if ( !a1 )
  {
    if ( !a2->m128i_i16[0] || *(_WORD *)a2->m128i_i64[1] != 92 )
      return -1073741765;
    PermanentSiloContext = PsGetPermanentSiloContext(v17, PsObjectDirectorySiloContextSlot, (unsigned __int64 *)&v167);
    v29 = v167;
    if ( PermanentSiloContext < 0 )
      v29 = (char *)ObpRootDirectoryObject;
    v167 = v29;
    Object = v29;
    if ( v29 )
      ObfReferenceObject(v29);
    if ( v179->m128i_i16[0] == 2 )
    {
      if ( v29 )
      {
        v31 = ObReferenceObjectByPointer(v29, 0, (POBJECT_TYPE)a4, a5);
        if ( v31 >= 0 )
          *a13 = v29;
        ObfDereferenceObject(v29);
        return v31;
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
    v32 = (struct _OBJECT_TYPE *)a4;
    v33 = (__int64)v179;
    v34 = 0LL;
    v175 = v179;
    v176 = 0LL;
    v174 = a4 + 16;
    SeSetLearningModeObjectInformation((__int64)v173);
    while ( 1 )
    {
      v35 = *(_QWORD *)(v33 + 8);
      if ( (v35 & 7) != 0 )
        goto LABEL_93;
      v36 = (v14 & 0x800) != 0;
      if ( *(_WORD *)v33 < 8u || *(_QWORD *)v35 != ObpDosDevicesShortNamePrefix )
      {
        if ( *(_WORD *)v33 == 6 && *(_DWORD *)v35 == *(_DWORD *)L"\\??" && *(_WORD *)(v35 + 4) == 63 )
        {
          v51 = (PVOID *)ObpReferenceDeviceMap(v36);
          P = v51;
          v52 = v51;
          if ( v51 )
          {
            if ( *v51 )
            {
              v132 = ObReferenceObjectByPointer(*v51, 0, v32, a5);
              if ( v132 >= 0 )
              {
                if ( a12 && v162 != -1 )
                  *a12 = v162;
                *a13 = *v52;
              }
              ObfDereferenceDeviceMap(v52);
              ObfDereferenceObject(v29);
              SeClearLearningModeObjectInformation();
              return v132;
            }
          }
        }
        goto LABEL_93;
      }
      if ( v32 == (struct _OBJECT_TYPE *)IoFileObjectType )
        v36 |= ObpUseSystemDeviceMap(v33);
      CurrentThread = KeGetCurrentThread();
      v38 = v34;
      P = v34;
      Process = (__int64)CurrentThread->Process;
      ProcessServerSilo = PsGetProcessServerSilo(Process);
      v41 = ProcessServerSilo == PsGetCurrentServerSilo();
      v42 = !v41;
      if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) == 0 || v36 )
      {
        if ( !v41 )
          goto LABEL_73;
      }
      else
      {
        if ( !v41 )
          goto LABEL_73;
        v43 = PsReferenceImpersonationTokenEx(
                (_DWORD)CurrentThread,
                1,
                (unsigned int)&v156,
                (unsigned int)&v155,
                (__int64)v169,
                0LL);
        v38 = (void *)v43;
        if ( v43 )
        {
          if ( *(_QWORD *)(v43 + 24) == 999LL )
          {
            v42 = 1;
            goto LABEL_73;
          }
          if ( (int)SeGetTokenDeviceMap(v43, &v171) >= 0 )
          {
            P = (PVOID)v171;
            if ( v171 )
            {
              v44 = v171;
              _InterlockedIncrement(v171 + 6);
              goto LABEL_82;
            }
          }
        }
      }
      if ( !*(_QWORD *)(Process + 1072) && (int)ObSetCurrentProcessDeviceMap() < 0 )
      {
        v44 = (volatile signed __int32 *)P;
        goto LABEL_82;
      }
LABEL_73:
      CurrentServerSiloGlobals = (volatile signed __int32 **)PsGetCurrentServerSiloGlobals();
      v46 = KeGetCurrentThread();
      v47 = CurrentServerSiloGlobals;
      --v46->SpecialApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)(CurrentServerSiloGlobals + 15), 0LL);
      if ( v42 )
        v44 = *v47;
      else
        v44 = *(volatile signed __int32 **)(Process + 1072);
      P = (PVOID)v44;
      if ( v44 )
        _InterlockedIncrement(v44 + 6);
      ExReleasePushLockEx((ULONG_PTR)(v47 + 15), 0LL);
      v49 = KeGetCurrentThread();
      v41 = v49->SpecialApcDisable++ == -1;
      if ( v41 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v49->ApcState.ApcListHead[0].Flink != &v49->152 )
        KiCheckForKernelApcDelivery(v48);
LABEL_82:
      if ( v38 )
        ObfDereferenceObject(v38);
      if ( !v44 || !*(_QWORD *)v44 )
      {
        v29 = (char *)Object;
        v33 = (__int64)v179;
LABEL_93:
        v149 = *(__m128i *)v33;
        goto LABEL_94;
      }
      v50 = *v179;
      v149.m128i_i64[0] = v179->m128i_i64[0];
      v149.m128i_i16[0] -= 8;
      v149.m128i_i64[1] = _mm_srli_si128(v50, 8).m128i_u64[0] + 8;
      v149.m128i_i16[1] -= 8;
      v29 = *(char **)v44;
LABEL_94:
      v148[0] = v29;
LABEL_95:
      while ( 1 )
      {
        v53 = v29 - 48;
        v54 = (unsigned __int8)((unsigned __int16)((_WORD)v29 - 48) >> 8);
        v55 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v54 ^ (unsigned __int8)*(v29 - 24)];
        ParseProcedure = (__int64 (__fastcall *)(char *, POBJECT_TYPE, struct _SECURITY_SUBJECT_CONTEXT *, KPROCESSOR_MODE, int, __int64, unsigned __int16 *, int, int, __int64, char **))v55->TypeInfo.ParseProcedure;
        if ( ParseProcedure )
          break;
        if ( v55 != ObpDirectoryObjectType )
          goto LABEL_336;
        v57 = v29;
        v166 = v29;
        if ( v149.m128i_i16[0] && *(_WORD *)v149.m128i_i64[1] == 92 )
        {
          v149.m128i_i64[1] += 2LL;
          v149.m128i_i16[0] -= 2;
          v149.m128i_i16[1] -= 2;
        }
        for ( *(__m128i *)Src = v149; v149.m128i_i16[0]; v149.m128i_i16[0] -= 2 )
        {
          if ( *(_WORD *)v149.m128i_i64[1] == 92 )
            break;
          v149.m128i_i64[1] += 2LL;
        }
        v149.m128i_i16[1] -= LOWORD(Src[0]) - v149.m128i_i16[0];
        LOWORD(Src[0]) -= v149.m128i_i16[0];
        if ( !LOWORD(Src[0]) )
        {
LABEL_335:
          v59 = -1073741773;
          goto LABEL_311;
        }
        if ( (_BYTE)v153 )
        {
          if ( (a10->Flags & 1) == 0 )
          {
            v146 = ObpCheckTraverseAccess(v29, a10, a10);
            if ( !v146 )
            {
              v58 = v150;
              if ( v150 >= 0 )
                v58 = -1073741772;
              v150 = v58;
              if ( v149.m128i_i16[0] || !a8 )
              {
                v59 = v150;
                v60 = v147;
                goto LABEL_340;
              }
LABEL_114:
              ObpLockDirectoryExclusive(v13, v29);
              goto LABEL_116;
            }
          }
        }
        if ( !v149.m128i_i16[0] )
        {
          if ( !a8 )
          {
            *(_DWORD *)(v13 + 32) = -1145368012;
            v61 = KeGetCurrentThread();
            --v61->KernelApcDisable;
            ExAcquirePushLockSharedEx((ULONG_PTR)(v29 + 296), 0LL);
            *(_DWORD *)(v13 + 32) = -572714444;
            ObfReferenceObject(v29);
            *(_QWORD *)v13 = v29;
            *(_WORD *)(v13 + 30) = 1;
            goto LABEL_116;
          }
          goto LABEL_114;
        }
LABEL_116:
        v62 = v29;
        v63 = (unsigned __int16 *)Src[1];
        HIDWORD(TokenInformation) = LOWORD(Src[0]);
        v64 = LOWORD(Src[0]) >> 1;
        v172 = v29;
        v158 = v180 & 0x40;
        if ( v64 < 4 )
        {
          v70 = 0;
        }
        else
        {
          v65 = 0LL;
          do
          {
            v66 = *(_QWORD *)v63;
            if ( (*(_QWORD *)v63 & 0xFF80FF80FF80FF80uLL) != 0 )
            {
              v67 = 4LL;
              do
              {
                v68 = (unsigned __int16)v66;
                if ( (unsigned __int16)v66 >= 0x61u )
                {
                  if ( (unsigned __int16)v66 <= 0x7Au )
                    v68 = (unsigned int)(unsigned __int16)v66 - 32;
                  else
                    v68 = RtlUpcaseUnicodeChar(v66);
                }
                *(_QWORD *)&v69 = v66;
                *((_QWORD *)&v69 + 1) = v68;
                v66 = v69 >> 16;
                --v67;
              }
              while ( v67 );
            }
            else
            {
              v66 &= 0xFFDFFFDFFFDFFFDFuLL;
            }
            v63 += 4;
            v64 -= 4;
            v65 = v66 + (v65 >> 1) + 3 * v65;
          }
          while ( v64 >= 4 );
          v62 = v172;
          v13 = a11;
          v70 = v65 + HIDWORD(v65);
          v57 = (char *)v172;
        }
        if ( v64 )
        {
          while ( 1 )
          {
            v71 = *v63++;
            --v64;
            v72 = (v70 >> 1) + 3 * v70;
            if ( v71 < 0x61 )
              goto LABEL_134;
            if ( v71 <= 0x7A )
              break;
            v70 = RtlUpcaseUnicodeChar(v71) + v72;
LABEL_135:
            if ( !v64 )
              goto LABEL_136;
          }
          v72 -= 32;
LABEL_134:
          v70 = v71 + v72;
          goto LABEL_135;
        }
LABEL_136:
        v73 = v166;
        *(_DWORD *)(v13 + 24) = v70;
        v74 = (ULONG_PTR)v73 + 296;
        v75 = 37 * (v70 / 0x25);
        v76 = v70;
        v77 = a11;
        v78 = v76 - v75;
        *(_WORD *)(v13 + 28) = v78;
        v79 = *(_BYTE *)(a11 + 30);
        v80 = &v57[8 * v78];
        if ( !v79 )
        {
          *(_DWORD *)(a11 + 32) = -1145368012;
          v81 = KeGetCurrentThread();
          --v81->KernelApcDisable;
          ExAcquirePushLockSharedEx((ULONG_PTR)v73 + 296, 0LL);
          *(_DWORD *)(a11 + 32) = -572714444;
          ObfReferenceObject(v73);
          *(_QWORD *)a11 = v73;
          *(_WORD *)(a11 + 30) = 1;
        }
        v82 = *(__int64 **)v80;
        if ( !*(_QWORD *)v80 )
        {
LABEL_167:
          if ( !v79 )
          {
            ExReleasePushLockEx(v74, 0LL);
            v92 = *(void **)v77;
            *(_DWORD *)(v77 + 32) = -286387660;
            ObfDereferenceObject(v92);
            *(_QWORD *)v77 = 0LL;
            *(_WORD *)(v77 + 30) = 0;
            KeLeaveCriticalRegion();
          }
          v29 = 0LL;
          goto LABEL_170;
        }
        while ( 1 )
        {
          if ( *((_DWORD *)v82 + 4) != *(_DWORD *)(a11 + 24) )
            goto LABEL_165;
          v83 = HIDWORD(TokenInformation);
          v84 = v82[1] - 48 - ObpInfoMaskToOffset[*(_BYTE *)(v82[1] - 48 + 26) & 3];
          if ( HIDWORD(TokenInformation) != *(unsigned __int16 *)(v84 + 8) )
            goto LABEL_165;
          v85 = (char *)Src[1];
          v86 = *(_QWORD **)(v84 + 16);
          v87 = (char *)Src[1] + SHIDWORD(TokenInformation);
          if ( HIDWORD(TokenInformation) >= 8 )
          {
            do
            {
              if ( *(_QWORD *)v85 != *v86 )
                break;
              v83 -= 8;
              if ( !v83 )
                goto LABEL_159;
              v85 += 8;
              ++v86;
            }
            while ( v83 >= 8 );
          }
          if ( !v158 )
            break;
          if ( v85 >= v87 )
            goto LABEL_159;
          v88 = (char *)v86 - v85;
          while ( 1 )
          {
            v89 = *(unsigned __int16 *)v85;
            v90 = *(unsigned __int16 *)&v85[v88];
            if ( (_DWORD)v89 != (_DWORD)v90 )
            {
              if ( (unsigned int)v89 >= 0x61 )
              {
                if ( (unsigned int)v89 > 0x7A )
                  LODWORD(v89) = (unsigned __int16)(v89
                                                  + *(_WORD *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 6))[2 * (v89 & 0xF) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 6))[2 * ((unsigned __int8)v89 >> 4) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 6))[2 * (v89 >> 8)]]]);
                else
                  LODWORD(v89) = v89 - 32;
              }
              if ( (unsigned int)v90 >= 0x61 )
              {
                if ( (unsigned int)v90 > 0x7A )
                  LODWORD(v90) = (unsigned __int16)(v90
                                                  + *(_WORD *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 6))[2 * (v90 & 0xF) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 6))[2 * ((unsigned __int8)v90 >> 4) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 6))[2 * (v90 >> 8)]]]);
                else
                  LODWORD(v90) = v90 - 32;
              }
              if ( (_DWORD)v89 != (_DWORD)v90 )
                break;
            }
            v85 += 2;
            if ( v85 >= v87 )
              goto LABEL_159;
          }
LABEL_165:
          v80 = (char *)v82;
          v82 = (__int64 *)*v82;
          if ( !v82 )
          {
            v77 = a11;
            goto LABEL_167;
          }
        }
        if ( v85 < v87 )
        {
          while ( *(_WORD *)v85 == *(_WORD *)v86 )
          {
            v85 += 2;
            v86 = (_QWORD *)((char *)v86 + 2);
            if ( v85 >= v87 )
              goto LABEL_159;
          }
          goto LABEL_165;
        }
LABEL_159:
        v29 = (char *)v82[1];
        ObfReferenceObject(v29);
        if ( v79 )
        {
          v77 = a11;
        }
        else
        {
          ExReleasePushLockEx(v74, 0LL);
          v77 = a11;
          v91 = *(void **)a11;
          *(_DWORD *)(a11 + 32) = -286387660;
          ObfDereferenceObject(v91);
          *(_QWORD *)a11 = 0LL;
          *(_WORD *)(a11 + 30) = 0;
          KeLeaveCriticalRegion();
          v80 = 0LL;
        }
        v101 = *(void **)(v77 + 8);
        if ( v101 )
          ObfDereferenceObject(v101);
        *(_QWORD *)(v77 + 8) = v29;
        *(_QWORD *)(v77 + 16) = v80;
        if ( v29 )
          goto LABEL_230;
LABEL_170:
        if ( !v178 )
          goto LABEL_230;
        while ( 2 )
        {
          v93 = v62[84];
          v94 = 0LL;
          if ( (v93 & 4) != 0 )
          {
            if ( (v93 & 0x10) != 0 && !v145 )
              goto LABEL_228;
            v94 = (char *)*((_QWORD *)v62 + 39);
          }
          else
          {
            v95 = PsGetCurrentServerSiloGlobals();
            v96 = KeGetCurrentThread();
            --v96->SpecialApcDisable;
            v97 = (ULONG_PTR)v95 + 120;
            ExAcquirePushLockSharedEx((ULONG_PTR)v95 + 120, 0LL);
            v98 = *((_QWORD *)v62 + 38);
            if ( v98 )
              v94 = *(char **)(v98 + 8);
            ExReleasePushLockEx(v97, 0LL);
            v100 = KeGetCurrentThread();
            v41 = v100->SpecialApcDisable++ == -1;
            if ( v41 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v100->ApcState.ApcListHead[0].Flink != &v100->152 )
              KiCheckForKernelApcDelivery(v99);
            v77 = a11;
          }
          if ( !v94 )
            goto LABEL_228;
          v102 = *(_BYTE *)(v77 + 30);
          if ( v102 )
          {
            ObfReferenceObject(v62);
            ObpUnlockDirectory((__int64)v62, v77);
            ObpLockDirectoryShared(v77, (__int64)v94);
            ObfDereferenceObject(v62);
            v102 = *(_BYTE *)(v77 + 30);
          }
          v103 = &v94[8 * *(unsigned __int16 *)(v77 + 28)];
          if ( !v102 )
          {
            *(_DWORD *)(v77 + 32) = -1145368012;
            v104 = KeGetCurrentThread();
            --v104->KernelApcDisable;
            ExAcquirePushLockSharedEx((ULONG_PTR)(v94 + 296), 0LL);
            *(_DWORD *)(v77 + 32) = -572714444;
            ObfReferenceObject(v94);
            *(_QWORD *)v77 = v94;
            *(_WORD *)(v77 + 30) = 1;
          }
          v105 = *(char **)v103;
          if ( !*(_QWORD *)v103 )
          {
LABEL_221:
            if ( !v102 )
              ObpUnlockDirectory((__int64)v94, v77);
            v29 = 0LL;
            v62 = v94;
            goto LABEL_229;
          }
          v106 = *(_DWORD *)(v77 + 24);
          while ( 2 )
          {
            if ( *((_DWORD *)v105 + 4) != v106
              || (v107 = HIDWORD(TokenInformation),
                  v108 = *((_QWORD *)v105 + 1)
                       - 48LL
                       - ObpInfoMaskToOffset[*(_BYTE *)(*((_QWORD *)v105 + 1) - 48LL + 26) & 3],
                  HIDWORD(TokenInformation) != *(unsigned __int16 *)(v108 + 8)) )
            {
LABEL_219:
              v103 = v105;
              v105 = *(char **)v105;
              if ( !v105 )
              {
                v77 = a11;
                goto LABEL_221;
              }
              continue;
            }
            break;
          }
          v109 = (char *)Src[1];
          v110 = *(_QWORD **)(v108 + 16);
          v111 = (char *)Src[1] + SHIDWORD(TokenInformation);
          if ( HIDWORD(TokenInformation) >= 8 )
          {
            do
            {
              if ( *(_QWORD *)v109 != *v110 )
                break;
              v107 -= 8;
              if ( !v107 )
                goto LABEL_213;
              v109 += 8;
              ++v110;
            }
            while ( v107 >= 8 );
          }
          if ( v158 )
          {
            if ( v109 >= v111 )
              goto LABEL_213;
            v112 = (char *)v110 - v109;
            while ( 1 )
            {
              v113 = *(unsigned __int16 *)v109;
              v114 = *(unsigned __int16 *)&v109[v112];
              if ( (_DWORD)v113 != (_DWORD)v114 )
              {
                if ( (unsigned int)v113 >= 0x61 )
                {
                  if ( (unsigned int)v113 > 0x7A )
                    LODWORD(v113) = (unsigned __int16)(v113
                                                     + *(_WORD *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 6))[2 * (v113 & 0xF) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 6))[2 * ((unsigned __int8)v113 >> 4) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 6))[2 * (v113 >> 8)]]]);
                  else
                    LODWORD(v113) = v113 - 32;
                }
                if ( (unsigned int)v114 >= 0x61 )
                {
                  if ( (unsigned int)v114 > 0x7A )
                    LODWORD(v114) = (unsigned __int16)(v114
                                                     + *(_WORD *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 6))[2 * (v114 & 0xF) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 6))[2 * ((unsigned __int8)v114 >> 4) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 6))[2 * (v114 >> 8)]]]);
                  else
                    LODWORD(v114) = v114 - 32;
                }
                if ( (_DWORD)v113 != (_DWORD)v114 )
                  goto LABEL_219;
              }
              v109 += 2;
              if ( v109 >= v111 )
                goto LABEL_213;
            }
          }
          if ( v109 < v111 )
          {
            while ( *(_WORD *)v109 == *(_WORD *)v110 )
            {
              v109 += 2;
              v110 = (_QWORD *)((char *)v110 + 2);
              if ( v109 >= v111 )
                goto LABEL_213;
            }
            goto LABEL_219;
          }
LABEL_213:
          v29 = (char *)*((_QWORD *)v105 + 1);
          ObfReferenceObject(v29);
          if ( v102 )
          {
            v77 = a11;
          }
          else
          {
            ExReleasePushLockEx((ULONG_PTR)(v94 + 296), 0LL);
            v77 = a11;
            v115 = *(void **)a11;
            *(_DWORD *)(a11 + 32) = -286387660;
            ObfDereferenceObject(v115);
            *(_QWORD *)a11 = 0LL;
            *(_WORD *)(a11 + 30) = 0;
            KeLeaveCriticalRegion();
            v103 = 0LL;
          }
          v116 = *(void **)(v77 + 8);
          if ( v116 )
            ObfDereferenceObject(v116);
          *(_QWORD *)(v77 + 8) = v29;
          *(_QWORD *)(v77 + 16) = v103;
LABEL_228:
          v62 = v94;
          if ( !v29 )
          {
LABEL_229:
            if ( !v94 )
              break;
            continue;
          }
          break;
        }
LABEL_230:
        v148[0] = v29;
        if ( !v146 )
        {
          if ( !v29 )
          {
LABEL_294:
            if ( v149.m128i_i16[0] )
            {
              v13 = a11;
              v59 = -1073741766;
              goto LABEL_311;
            }
            if ( !a8 )
            {
              v13 = a11;
              v59 = -1073741772;
              goto LABEL_311;
            }
            v133 = v166;
            v134 = 4;
            v135 = v153;
            if ( (POBJECT_TYPE)a4 == ObpDirectoryObjectType )
              v134 = 8;
            LOBYTE(PreviouslyGrantedAccess) = 0;
            if ( !ObCheckCreateObjectAccess(
                    (__int64)v166,
                    v134,
                    a10,
                    (__int64)Src,
                    PreviouslyGrantedAccess,
                    v153,
                    &v154) )
            {
              v59 = v154;
              v13 = a11;
              v60 = v147;
              if ( v154 >= 0 )
                v59 = -1073741772;
LABEL_312:
              if ( *(_BYTE *)(v13 + 30) )
              {
                ExReleasePushLockEx(*(_QWORD *)v13 + 296LL, 0LL);
                v137 = *(void **)v13;
                *(_DWORD *)(v13 + 32) = -286387660;
                ObfDereferenceObject(v137);
                *(_QWORD *)v13 = 0LL;
                *(_WORD *)(v13 + 30) = 0;
                KeLeaveCriticalRegion();
              }
              v138 = *(void **)(v13 + 8);
              if ( v138 )
              {
                ObfDereferenceObject(v138);
                *(_QWORD *)(v13 + 8) = 0LL;
              }
LABEL_316:
              if ( P )
                ObfDereferenceDeviceMap(P);
              if ( Object )
                ObfDereferenceObject(Object);
              if ( v60 )
                ObfDereferenceObject(v60);
              SeClearLearningModeObjectInformation();
              if ( v59 < 0 )
              {
                *a13 = 0LL;
                return v59;
              }
              else
              {
                if ( a12 )
                {
                  if ( v162 != -1 )
                    *a12 = v162;
                }
                *a13 = v148[0];
                return v59;
              }
            }
            v136 = v133[85];
            if ( v136 == -1
              || (POBJECT_TYPE)a4 != MmSectionObjectType && (POBJECT_TYPE)a4 != ObpSymbolicLinkObjectType
              || v136 == (unsigned int)PsGetCurrentProcessSessionId()
              || SeSinglePrivilegeCheck(SeCreateGlobalPrivilege, v135)
              || (unsigned __int8)ObpIsUnsecureName((PCUNICODE_STRING)Src) )
            {
              v139 = LOWORD(Src[0]);
              v13 = a11;
              PoolWithTag = ExAllocatePoolWithTag(PagedPool, LOWORD(Src[0]), 0x6D4E624Fu);
              if ( PoolWithTag )
              {
                if ( (unsigned __int8)ObpInsertDirectoryEntry(v133, a8) )
                {
                  memmove(PoolWithTag, Src[1], v139);
                  v141 = &a8[-ObpInfoMaskToOffset[*(a8 - 22) & 3] - 48];
                  v142 = (void *)*((_QWORD *)v141 + 2);
                  if ( v142 )
                    ExFreePoolWithTag(v142, 0);
                  v143 = (__int16)Src[0];
                  v60 = v147;
                  *((_QWORD *)v141 + 2) = PoolWithTag;
                  v59 = 0;
                  *((_WORD *)v141 + 4) = v143;
                  *((_WORD *)v141 + 5) = v143;
                  v148[0] = a8;
                  goto LABEL_316;
                }
                ExFreePoolWithTag(PoolWithTag, 0);
              }
              v59 = -1073741670;
              goto LABEL_311;
            }
            v13 = a11;
LABEL_310:
            v59 = -1073741790;
            goto LABEL_311;
          }
          v59 = v150;
          v13 = a11;
          v60 = v147;
LABEL_340:
          if ( v59 < 0 )
            goto LABEL_312;
          goto LABEL_316;
        }
        if ( !v29 )
          goto LABEL_294;
        v13 = a11;
        if ( !v149.m128i_i16[0] )
        {
          v117 = *(__int64 (__fastcall **)(char *, POBJECT_TYPE, struct _SECURITY_SUBJECT_CONTEXT *, KPROCESSOR_MODE, int, __int64, unsigned __int16 *, int, int, __int64, char **))(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*(v29 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v29 - 48) >> 8)] + 144);
          if ( !v117 || v117 != ObpParseSymbolicLinkEx && a8 )
          {
            v13 = a11;
            v59 = ObReferenceObjectByPointer(v29, 0, (POBJECT_TYPE)a4, a5);
            v60 = v147;
            goto LABEL_340;
          }
        }
      }
      if ( ParseProcedure == ObpParseSymbolicLinkEx )
        goto LABEL_244;
      if ( a8 )
      {
LABEL_336:
        v59 = -1073741788;
LABEL_311:
        v60 = v147;
        goto LABEL_312;
      }
      ObfReferenceObject(v29);
      if ( *(_BYTE *)(v13 + 30) )
      {
        ExReleasePushLockEx(*(_QWORD *)v13 + 296LL, 0LL);
        v118 = *(void **)v13;
        *(_DWORD *)(v13 + 32) = -286387660;
        ObfDereferenceObject(v118);
        *(_QWORD *)v13 = 0LL;
        *(_WORD *)(v13 + 30) = 0;
        KeLeaveCriticalRegion();
      }
      v119 = *(void **)(v13 + 8);
      if ( v119 )
      {
        ObfDereferenceObject(v119);
        *(_QWORD *)(v13 + 8) = 0LL;
      }
      v29 = (char *)v148[0];
LABEL_244:
      v33 = (__int64)v179;
      if ( (*(_BYTE *)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v54 ^ (unsigned __int8)v53[24]] + 67) & 1) != 0 )
        v120 = ParseProcedure(
                 v29,
                 (POBJECT_TYPE)a4,
                 (struct _SECURITY_SUBJECT_CONTEXT *)a10,
                 v153,
                 v180,
                 (__int64)v179,
                 (unsigned __int16 *)&v149,
                 a6,
                 a7,
                 (__int64)v161,
                 (char **)v148);
      else
        v120 = ((__int64 (__fastcall *)(char *, __int64, struct _ACCESS_STATE *, _QWORD, int, __m128i *, __m128i *, __int64, __int64, PVOID *))ParseProcedure)(
                 v29,
                 a4,
                 a10,
                 v153,
                 v180,
                 v179,
                 &v149,
                 a6,
                 a7,
                 v148);
      v59 = v120;
      v154 = v120;
      if ( ParseProcedure != ObpParseSymbolicLinkEx )
        ObfDereferenceObject(v53 + 48);
      if ( v59 < 0 )
        goto LABEL_311;
      if ( v59 != 260 )
      {
        v121 = v147;
        if ( v59 != 872 )
          v121 = v148[0];
        v147 = v121;
      }
      if ( (v162 & a10->OriginalDesiredAccess) != a10->OriginalDesiredAccess )
        goto LABEL_310;
      if ( v59 != 260 && v59 != 872 && v59 != 280 )
      {
        if ( !v148[0] )
          v59 = -1073741772;
        v60 = 0LL;
        goto LABEL_340;
      }
      v14 = v180;
      if ( (v180 & 0x1000) != 0 && v59 != 872 )
      {
        v59 = -1073740533;
        goto LABEL_311;
      }
      if ( !--v159 )
      {
        v59 = -1073741772;
        goto LABEL_311;
      }
      if ( !v179->m128i_i16[0] )
        goto LABEL_335;
      ObfDereferenceObject(Object);
      v122 = (__int16 *)v179->m128i_i64[1];
      Object = 0LL;
      v123 = *v122;
      if ( v59 == 280 )
      {
        if ( v123 == 92 )
          goto LABEL_335;
        v29 = (char *)v148[0];
        Object = v148[0];
        v147 = 0LL;
      }
      else
      {
        if ( v123 != 92 )
          goto LABEL_335;
        if ( v59 == 872 )
        {
          v29 = (char *)ObpRootDirectoryObject;
        }
        else
        {
          v124 = PsGetPermanentSiloContext(a9, PsObjectDirectorySiloContextSlot, (unsigned __int64 *)&v168);
          v29 = v168;
          if ( v124 < 0 )
            v29 = (char *)ObpRootDirectoryObject;
          v168 = v29;
        }
        Object = v29;
        ObfReferenceObject(v29);
      }
      v34 = P;
      if ( P )
      {
        v125 = *((_DWORD *)P + 6);
        if ( v125 == 1 )
        {
LABEL_276:
          ServerSiloGlobals = PsGetServerSiloGlobals(*((_QWORD *)v34 + 8));
          v128 = KeGetCurrentThread();
          --v128->SpecialApcDisable;
          v129 = (ULONG_PTR)ServerSiloGlobals + 120;
          ExAcquirePushLockExclusiveEx((ULONG_PTR)ServerSiloGlobals + 120, 0LL);
          v125 = _InterlockedExchangeAdd((volatile signed __int32 *)v34 + 6, 0xFFFFFFFF);
          if ( v125 != 1 )
          {
            ExReleasePushLockEx(v129, 0LL);
            KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
            goto LABEL_281;
          }
          *(_QWORD *)(*(_QWORD *)v34 + 304LL) = 0LL;
          ExReleasePushLockEx(v129, 0LL);
          KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
          v130 = (void *)*((_QWORD *)v34 + 8);
          if ( v130 )
            ObfDereferenceObjectWithTag(v130, 0x6D44624Fu);
          ZwClose(*((HANDLE *)v34 + 2));
          ObfDereferenceObject(*(PVOID *)v34);
          ExFreePoolWithTag(v34, 0x6D44624Fu);
          v29 = (char *)Object;
          v34 = 0LL;
          v14 = v180;
          P = 0LL;
        }
        else
        {
          while ( 1 )
          {
            v126 = _InterlockedCompareExchange((volatile signed __int32 *)v34 + 6, v125 - 1, v125);
            v41 = v125 == v126;
            v125 = v126;
            if ( v41 )
              break;
            if ( v126 == 1 )
              goto LABEL_276;
          }
LABEL_281:
          if ( v125 <= 0 )
            __fastfail(0xEu);
          v29 = (char *)Object;
          v34 = 0LL;
          v14 = v180;
          P = 0LL;
        }
      }
      if ( *(_BYTE *)(v13 + 30) )
        ObpUnlockDirectory(*(_QWORD *)v13, v13);
      v131 = *(void **)(v13 + 8);
      v32 = (struct _OBJECT_TYPE *)a4;
      if ( v131 )
      {
        ObfDereferenceObject(v131);
        *(_QWORD *)(v13 + 8) = v34;
      }
    }
  }
  result = ObpReferenceObjectByHandleWithTag(a1, 0x746C6644u, (__int64)&Object, 0LL, (__int64)&v170);
  v154 = result;
  if ( result < 0 )
    return result;
  if ( HIDWORD(v170) )
  {
    OriginalDesiredAccess = a10->OriginalDesiredAccess;
    v162 &= HIDWORD(v170);
    if ( (v162 & OriginalDesiredAccess) != OriginalDesiredAccess )
    {
      ObfDereferenceObject(Object);
      return -1073741790;
    }
  }
  v24 = Object;
  if ( v179->m128i_i16[0] )
  {
    if ( *(_WORD *)v179->m128i_i64[1] == 92
      && (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)] != IoFileObjectType )
    {
      ObfDereferenceObject(Object);
      return -1073741765;
    }
LABEL_39:
    v28 = *v179;
    v148[0] = Object;
    v149 = v28;
    v174 = a4 + 16;
    v175 = v179;
    v176 = a1;
    SeSetLearningModeObjectInformation((__int64)v173);
    v29 = (char *)v148[0];
    goto LABEL_95;
  }
  if ( (POBJECT_TYPE)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)] != ObpDirectoryObjectType )
    goto LABEL_39;
  v25 = ObReferenceObjectByPointer(Object, 0, (POBJECT_TYPE)a4, a5);
  v26 = v148[0];
  v27 = v25;
  if ( v25 >= 0 )
    v26 = v24;
  v148[0] = v26;
  ObfDereferenceObject(v24);
  *a13 = v148[0];
  return v27;
}
