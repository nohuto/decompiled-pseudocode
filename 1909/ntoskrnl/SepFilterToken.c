/*
 * XREFs of SepFilterToken @ 0x14061E840
 * Callers:
 *     NtFilterToken @ 0x1406207D0 (NtFilterToken.c)
 *     SeFilterToken @ 0x140757FB0 (SeFilterToken.c)
 * Callees:
 *     RtlUIntAdd @ 0x140003F38 (RtlUIntAdd.c)
 *     PsGetCurrentProcess @ 0x1400065C0 (PsGetCurrentProcess.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x14000A4B0 (AuthzBasepDuplicateSecurityAttributes.c)
 *     RtlSidHashInitialize @ 0x14000AB40 (RtlSidHashInitialize.c)
 *     RtlWalkFrameChain @ 0x140017620 (RtlWalkFrameChain.c)
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003C470 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     KeEnterCriticalRegion @ 0x140043D20 (KeEnterCriticalRegion.c)
 *     ExInitializeResourceLite @ 0x140047770 (ExInitializeResourceLite.c)
 *     SepDuplicateLogonSessionReference @ 0x14008826C (SepDuplicateLogonSessionReference.c)
 *     DbgPrint @ 0x140126B50 (DbgPrint.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     SeIsSystemContext @ 0x14031DBFC (SeIsSystemContext.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     SepSetTokenTrust @ 0x1405D5C90 (SepSetTokenTrust.c)
 *     PsReferencePrimaryToken @ 0x1405D6170 (PsReferencePrimaryToken.c)
 *     RtlIsSandboxedToken @ 0x1405D82D0 (RtlIsSandboxedToken.c)
 *     SeCaptureSubjectContext @ 0x1405DE350 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1405F3AE0 (SeReleaseSubjectContext.c)
 *     SepRefDerefLuidToIndexEntryIfNecessary @ 0x14060C7D0 (SepRefDerefLuidToIndexEntryIfNecessary.c)
 *     SepSetTokenSessionById @ 0x14061B264 (SepSetTokenSessionById.c)
 *     SepNewTokenAsRestrictedAsProcessToken @ 0x14061BD7C (SepNewTokenAsRestrictedAsProcessToken.c)
 *     RtlCopySidAndAttributesArray @ 0x14061CB00 (RtlCopySidAndAttributesArray.c)
 *     SepSetTokenCapabilities @ 0x14061DD14 (SepSetTokenCapabilities.c)
 *     SepRemoveDisabledGroupsAndPrivileges @ 0x140620B88 (SepRemoveDisabledGroupsAndPrivileges.c)
 *     SepSidInSidAndAttributes @ 0x140620D98 (SepSidInSidAndAttributes.c)
 *     SepSetLogonSessionToken @ 0x140620EF0 (SepSetLogonSessionToken.c)
 *     SepSetTokenPackage @ 0x14065817C (SepSetTokenPackage.c)
 *     ObCreateObject @ 0x140681580 (ObCreateObject.c)
 *     RtlIsCapabilitySid @ 0x14069D16C (RtlIsCapabilitySid.c)
 *     RtlIsPackageSid @ 0x14069E928 (RtlIsPackageSid.c)
 *     SepModifyTokenPolicyCounter @ 0x1408DA264 (SepModifyTokenPolicyCounter.c)
 *     SepDuplicateTokenUserAndGroups @ 0x1408E0348 (SepDuplicateTokenUserAndGroups.c)
 *     SepAddTokenLogonSession @ 0x1408E0960 (SepAddTokenLogonSession.c)
 *     SepDuplicateTokenClaims @ 0x1408E214C (SepDuplicateTokenClaims.c)
 *     SepReferenceLowBoxNumberEntry @ 0x1408E26D4 (SepReferenceLowBoxNumberEntry.c)
 */

__int64 __fastcall SepFilterToken(
        __int64 a1,
        char a2,
        int a3,
        int a4,
        __int64 a5,
        int a6,
        __int64 a7,
        unsigned int a8,
        PSID *a9,
        UINT uAddend,
        char **a11)
{
  char v11; // bl
  PVOID v14; // r15
  unsigned int v15; // edi
  PSID *v16; // rbx
  char *PoolWithTag; // rax
  void *v18; // r14
  void *v19; // rcx
  struct _ERESOURCE *v21; // rdi
  int v22; // ebx
  __int64 v23; // r9
  int v24; // ecx
  struct _ERESOURCE *v25; // rcx
  _QWORD *v26; // rbx
  _QWORD *v27; // rdx
  char *v28; // rdi
  ULONG v29; // r12d
  __int128 v30; // xmm0
  ULONG v31; // eax
  __int64 v32; // rdx
  _DWORD *v33; // r15
  unsigned int v34; // eax
  _DWORD *v35; // rcx
  char *v36; // rbx
  _KPROCESS *CurrentProcess; // rax
  __int64 v38; // rdx
  struct _KPROCESS *v39; // rax
  PACCESS_TOKEN v40; // rbx
  _SID_AND_ATTRIBUTES *v41; // r14
  int v42; // eax
  unsigned int v43; // r15d
  _SID_AND_ATTRIBUTES *v44; // r15
  __int64 v45; // r8
  NTSTATUS v46; // eax
  unsigned int v47; // r12d
  _SID_AND_ATTRIBUTES *v48; // r14
  PSID *v49; // r13
  __int64 v50; // rdx
  NTSTATUS v51; // eax
  _DWORD *v52; // rdx
  __int64 v53; // rax
  unsigned int v54; // ecx
  size_t v55; // r14
  char *v56; // r12
  ULONG *v57; // r13
  char v58; // al
  _DWORD *v59; // rcx
  unsigned int v60; // r15d
  ULONG v61; // r9d
  __int64 v62; // rdx
  int v63; // r14d
  char v64; // bl
  PERESOURCE *PrimaryToken; // rbx
  char *v66; // rdx
  int v67; // edx
  int SidArea; // [rsp+28h] [rbp-E0h]
  int RemainingSidAreaSize; // [rsp+38h] [rbp-D0h]
  UINT puResult[2]; // [rsp+58h] [rbp-B0h] BYREF
  PVOID Object; // [rsp+60h] [rbp-A8h] BYREF
  UINT v72[2]; // [rsp+68h] [rbp-A0h] BYREF
  PSID RemainingSidArea; // [rsp+70h] [rbp-98h] BYREF
  __int64 v74; // [rsp+78h] [rbp-90h]
  _DWORD *v75; // [rsp+80h] [rbp-88h]
  char *v76; // [rsp+88h] [rbp-80h]
  _DWORD *v77; // [rsp+90h] [rbp-78h]
  _QWORD *v78; // [rsp+98h] [rbp-70h]
  _QWORD *v79; // [rsp+A0h] [rbp-68h]
  _QWORD *v80; // [rsp+A8h] [rbp-60h]
  _QWORD *v81; // [rsp+B0h] [rbp-58h]
  PSID_AND_ATTRIBUTES *v82; // [rsp+B8h] [rbp-50h]
  PSID_AND_ATTRIBUTES_HASH SidAttrHash; // [rsp+C0h] [rbp-48h]
  ULONG *v84; // [rsp+C8h] [rbp-40h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+D0h] [rbp-38h] BYREF
  _OWORD v86[3]; // [rsp+F0h] [rbp-18h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT v87; // [rsp+120h] [rbp+18h] BYREF

  v72[0] = 0;
  v11 = a3;
  memset(v86, 0, sizeof(v86));
  v14 = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  memset(&v87, 0, sizeof(v87));
  BYTE1(puResult[1]) = KeGetCurrentThread()->PreviousMode;
  LODWORD(v74) = v11 & 8;
  if ( (v11 & 8) != 0 && (*(_DWORD *)(a1 + 200) & 0x58) != 0 )
    return 3221225485LL;
  v15 = 0;
  if ( a8 )
  {
    v16 = a9;
    while ( !RtlIsPackageSid(*v16) && !RtlIsCapabilitySid(*v16) )
    {
      ++v15;
      v16 += 2;
      if ( v15 >= a8 )
        goto LABEL_8;
    }
    return 3221225485LL;
  }
LABEL_8:
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x74416553u);
  v18 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  *(_DWORD *)PoolWithTag = 0;
  *((_QWORD *)PoolWithTag + 2) = PoolWithTag + 8;
  *((_QWORD *)PoolWithTag + 1) = PoolWithTag + 8;
  *((_DWORD *)PoolWithTag + 6) = 0;
  *((_QWORD *)PoolWithTag + 5) = PoolWithTag + 32;
  *((_QWORD *)PoolWithTag + 4) = PoolWithTag + 32;
  if ( *(_DWORD *)((char *)&NlsMbCodePageTag + 3) )
  {
    v14 = ExAllocatePoolWithTag(PagedPool, 0x120uLL, 0x74416553u);
    if ( !v14 )
    {
      v19 = v18;
      goto LABEL_16;
    }
  }
  v21 = (struct _ERESOURCE *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x68uLL, 0x6C546553u);
  if ( !v21 )
  {
    ExFreePoolWithTag(v18, 0);
    if ( !*(_DWORD *)((char *)&NlsMbCodePageTag + 3) )
      return 3221225626LL;
    v19 = v14;
LABEL_16:
    ExFreePoolWithTag(v19, 0);
    return 3221225626LL;
  }
  v22 = RtlUIntAdd(*(_DWORD *)(a1 + 132), uAddend, puResult);
  if ( v22 < 0
    || (v22 = RtlUIntAdd(puResult[0], 4u, puResult), v22 < 0)
    || (v22 = RtlUIntAdd(0x490u, puResult[0], v72), v22 < 0) )
  {
    v25 = v21;
LABEL_101:
    ExFreePoolWithTag(v25, 0);
    ExFreePoolWithTag(v18, 0);
    if ( *(_DWORD *)((char *)&NlsMbCodePageTag + 3) )
      ExFreePoolWithTag(v14, 0);
    return (unsigned int)v22;
  }
  v24 = *(_DWORD *)(a1 + 136);
  RemainingSidAreaSize = v24;
  LOBYTE(v24) = a2;
  SidArea = v23;
  *((_QWORD *)&v86[0] + 1) = v23;
  DWORD2(v86[1]) = v23;
  *(_QWORD *)&v86[1] = v23;
  LOBYTE(v23) = a2;
  LODWORD(v86[0]) = 48;
  v86[2] = 0LL;
  v22 = ObCreateObject(
          v24,
          (_DWORD)SeTokenObjectType,
          0,
          v23,
          SidArea,
          v72[0],
          RemainingSidAreaSize,
          v72[0],
          (__int64)&Object);
  v25 = v21;
  if ( v22 < 0 )
    goto LABEL_101;
  v26 = Object;
  *((_QWORD *)Object + 6) = v21;
  ExInitializeResourceLite(v21);
  v27 = Object;
  v26[7] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
  v28 = (char *)Object;
  v29 = puResult[0];
  v27[2] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
  v28[204] = 0;
  *((_QWORD *)v28 + 3) = *(_QWORD *)(a1 + 24);
  v30 = *(_OWORD *)a1;
  v75 = v28 + 128;
  *(_OWORD *)v28 = v30;
  *((_DWORD *)v28 + 35) = 0;
  *((_DWORD *)v28 + 32) = 0;
  *((_DWORD *)v28 + 33) = v29;
  *((_QWORD *)v28 + 4) = *(_QWORD *)(a1 + 16);
  *((_DWORD *)v28 + 48) = *(_DWORD *)(a1 + 192);
  *((_DWORD *)v28 + 49) = *(_DWORD *)(a1 + 196);
  *((_QWORD *)v28 + 5) = *(_QWORD *)(a1 + 40);
  *((_QWORD *)v28 + 28) = *(_QWORD *)(a1 + 224);
  *((_QWORD *)v28 + 140) = 0LL;
  *((_QWORD *)v28 + 141) = 0LL;
  *((_QWORD *)v28 + 137) = 0LL;
  *((_QWORD *)v28 + 143) = v14;
  *((_DWORD *)v28 + 30) = 0;
  *((_QWORD *)v28 + 145) = 0LL;
  v76 = v28 + 1144;
  if ( *(_DWORD *)((char *)&NlsMbCodePageTag + 3) )
  {
    v31 = RtlWalkFrameChain((PVOID *)(*((_QWORD *)v28 + 143) + 40LL), 0x1Eu, 0);
    if ( KeGetCurrentIrql() < 2u )
      RtlWalkFrameChain((PVOID *)(*(_QWORD *)v76 + 40LL + 8LL * v31), 30 - v31, 1u);
  }
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
  *((_DWORD *)v28 + 34) = *(_DWORD *)(a1 + 136);
  *((_DWORD *)v28 + 36) = *(_DWORD *)(a1 + 144);
  SepSetTokenSessionById((__int64)v28, *(unsigned int *)(a1 + 120), 0, 0LL, 0LL);
  *((_DWORD *)v28 + 30) = *(_DWORD *)(a1 + 120);
  v33 = v28 + 200;
  v34 = *(_DWORD *)(a1 + 200) & 0xFFFFFBD7;
  v77 = v28 + 200;
  *((_DWORD *)v28 + 50) = v34;
  *(_OWORD *)(v28 + 88) = *(_OWORD *)(a1 + 88);
  *((_QWORD *)v28 + 13) = *(_QWORD *)(a1 + 104);
  *((_DWORD *)v28 + 28) = *(_DWORD *)(a1 + 112);
  *((_WORD *)v28 + 58) = *(_WORD *)(a1 + 116);
  v28[118] = *(_BYTE *)(a1 + 118);
  *((_DWORD *)v28 + 52) = *(_DWORD *)(a1 + 208);
  *((_DWORD *)v28 + 53) = *(_DWORD *)(a1 + 212);
  *((_OWORD *)v28 + 4) = *(_OWORD *)(a1 + 64);
  *((_QWORD *)v28 + 10) = *(_QWORD *)(a1 + 80);
  *((_QWORD *)v28 + 97) = v18;
  if ( v28[118] == 2 )
  {
    LOBYTE(v32) = 1;
    SepModifyTokenPolicyCounter(v28 + 88, v32);
  }
  *((_QWORD *)v28 + 135) = 0LL;
  v79 = v28 + 1080;
  *((_QWORD *)v28 + 136) = 0LL;
  v80 = v28 + 1088;
  *((_QWORD *)v28 + 144) = 0LL;
  v81 = v28 + 1152;
  *((_QWORD *)v28 + 99) = 0LL;
  v82 = (PSID_AND_ATTRIBUTES *)(v28 + 792);
  *((_QWORD *)v28 + 98) = 0LL;
  v84 = (ULONG *)(v28 + 800);
  *((_DWORD *)v28 + 200) = 0;
  SidAttrHash = (PSID_AND_ATTRIBUTES_HASH)(v28 + 808);
  memset(v28 + 808, 0, 0x110uLL);
  *((_QWORD *)v28 + 22) = 0LL;
  *((_QWORD *)v28 + 138) = 0LL;
  *((_QWORD *)v28 + 139) = 0LL;
  *((_QWORD *)v28 + 142) = 0LL;
  v78 = v28 + 176;
  v22 = SepDuplicateLogonSessionReference((__int64)v28, a1);
  if ( v22 < 0 )
    goto LABEL_28;
  SepRefDerefLuidToIndexEntryIfNecessary(a1, 0);
  *((_QWORD *)v28 + 142) = *(_QWORD *)(a1 + 1136);
  v35 = *(_DWORD **)(a1 + 776);
  if ( *v35 )
  {
    v22 = AuthzBasepDuplicateSecurityAttributes((__int64)v35, *((_QWORD *)v28 + 97), 0);
    if ( v22 < 0 )
      goto LABEL_28;
  }
  if ( *(_QWORD *)(a1 + 1096) )
  {
    v22 = SepDuplicateTokenClaims(a1, v28);
    if ( v22 < 0 )
      goto LABEL_28;
  }
  if ( *(_DWORD *)((char *)&NlsMbCodePageTag + 3) )
  {
    v36 = v76;
    **(_QWORD **)v76 = KeGetCurrentThread()[1].CycleTime;
    *(_QWORD *)(*(_QWORD *)v36 + 8LL) = *(_QWORD *)&KeGetCurrentThread()[1].CurrentRunTime;
    *(_DWORD *)(*(_QWORD *)v36 + 32LL) = 15;
    *(_DWORD *)(*(_QWORD *)v36 + 280LL) = 0;
    *(_DWORD *)(*(_QWORD *)v36 + 284LL) = 0;
    CurrentProcess = PsGetCurrentProcess();
    v38 = *(_QWORD *)v36;
    v28 = (char *)Object;
    *(_QWORD *)(v38 + 16) = CurrentProcess[1].ActiveProcessors.Bitmap[11];
    *(_DWORD *)(v38 + 24) = CurrentProcess[1].ActiveProcessors.Bitmap[12];
    *(_WORD *)(v38 + 28) = WORD2(CurrentProcess[1].ActiveProcessors.Bitmap[12]);
    *(_BYTE *)(v38 + 30) = BYTE6(CurrentProcess[1].ActiveProcessors.Bitmap[12]);
    SepAddTokenLogonSession();
    v29 = puResult[0];
  }
  if ( (a3 & 2) != 0 )
  {
    v39 = PsGetCurrentProcess();
    v40 = PsReferencePrimaryToken(v39);
    if ( (int)SeIsSystemContext(v40, &puResult[1]) >= 0 && LOBYTE(puResult[1]) )
      *v33 |= 0x40u;
    ObfDereferenceObject(v40);
  }
  v41 = (_SID_AND_ATTRIBUTES *)(v28 + 1168);
  v42 = ((_BYTE)v28 - 112) & 7;
  if ( (((_BYTE)v28 - 112) & 7) != 0 )
  {
    v41 = (_SID_AND_ATTRIBUTES *)((char *)v41 + (unsigned int)(8 - v42));
    v29 -= 8 - v42;
    puResult[0] = v29;
  }
  v43 = a8;
  if ( *(_DWORD *)(a1 + 128) > a8 )
    v43 = *(_DWORD *)(a1 + 128);
  v44 = &v41[*(_DWORD *)(a1 + 124) + v43];
  *((_QWORD *)v28 + 19) = v41;
  RemainingSidArea = v44;
  if ( SepTokenSidSharingEnabled )
  {
    v22 = SepDuplicateTokenUserAndGroups(a1, v28);
    if ( v22 < 0 )
    {
      *((_QWORD *)v28 + 19) = 0LL;
LABEL_28:
      ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
      KeLeaveCriticalRegion();
LABEL_29:
      ObfDereferenceObject(v28);
      return (unsigned int)v22;
    }
  }
  else
  {
    *((_DWORD *)v28 + 31) = *(_DWORD *)(a1 + 124);
    v46 = RtlCopySidAndAttributesArray(
            *(_DWORD *)(a1 + 124),
            *(PSID_AND_ATTRIBUTES *)(a1 + 152),
            v29,
            v41,
            v44,
            &RemainingSidArea,
            puResult);
    v44 = (_SID_AND_ATTRIBUTES *)RemainingSidArea;
    v22 = v46;
  }
  v47 = 0;
  v48 = (_SID_AND_ATTRIBUTES *)((char *)v41 + (unsigned int)(16 * *(_DWORD *)(a1 + 124)));
  *((_QWORD *)v28 + 20) = v48;
  if ( a8 )
  {
    v49 = a9;
    do
    {
      v50 = *(unsigned int *)(a1 + 128);
      if ( !(_DWORD)v50 || (unsigned __int8)SepSidInSidAndAttributes(*(_QWORD *)(a1 + 160), v50, v45, *v49) )
      {
        v51 = RtlCopySidAndAttributesArray(
                1u,
                (PSID_AND_ATTRIBUTES)&a9[2 * v47],
                puResult[0],
                v48,
                v44,
                &RemainingSidArea,
                puResult);
        v52 = v75;
        v22 = v51;
        ++v48;
        v44 = (_SID_AND_ATTRIBUTES *)RemainingSidArea;
        *(_DWORD *)(*((_QWORD *)v28 + 20) + 16LL * (unsigned int)*v75 + 8) = 7;
        ++*v52;
      }
      ++v47;
      v49 += 2;
    }
    while ( v47 < a8 );
  }
  v53 = *(_QWORD *)(a1 + 184);
  v54 = 4 * *(unsigned __int8 *)(*(_QWORD *)(a1 + 168) + 1LL) + 8;
  if ( v53 )
    v54 += *(unsigned __int16 *)(v53 + 2);
  v55 = v54;
  v56 = (char *)ExAllocatePoolWithTag(PagedPool, v54, 0x64546553u);
  *v78 = v56;
  if ( !v56 )
  {
    v22 = -1073741670;
    goto LABEL_28;
  }
  v57 = v75;
  if ( *(_DWORD *)(a1 + 128) && !*v75 )
  {
    v22 = -1073741811;
    goto LABEL_28;
  }
  v58 = 0;
  v59 = v77;
  if ( *v75 )
  {
    *v77 |= 0x810u;
    v58 = 1;
  }
  else
  {
    *((_QWORD *)v28 + 20) = 0LL;
  }
  if ( (_DWORD)v74 )
  {
    *v59 |= 0x18u;
    v58 = 1;
  }
  if ( v58 )
    SepSetLogonSessionToken(a1);
  memmove(v56, *(const void **)(a1 + 176), v55);
  if ( *(_QWORD *)(a1 + 184) )
    *((_QWORD *)v28 + 23) = &v56[*(_DWORD *)(a1 + 184) - *(_DWORD *)(a1 + 176)];
  else
    *((_QWORD *)v28 + 23) = 0LL;
  v60 = *(_DWORD *)(a1 + 168) - *(_DWORD *)(a1 + 176);
  v61 = *(_DWORD *)(a1 + 800);
  if ( v61 )
    v22 = SepSetTokenCapabilities((__int64)v28, *(void **)(a1 + 784), *(void **)(a1 + 792), v61);
  if ( v22 < 0 )
    goto LABEL_28;
  v62 = *(_QWORD *)(a1 + 784);
  if ( v62 )
    v22 = SepSetTokenPackage(v28, v62);
  if ( v22 < 0 )
    goto LABEL_28;
  if ( *(_QWORD *)(a1 + 1080) )
  {
    SepReferenceLowBoxNumberEntry();
    *v79 = *(_QWORD *)(a1 + 1080);
  }
  if ( *(_QWORD *)(a1 + 1088) )
  {
    SepReferenceLowBoxNumberEntry();
    *v80 = *(_QWORD *)(a1 + 1088);
  }
  if ( *(_QWORD *)(a1 + 1152) )
  {
    SepReferenceLowBoxNumberEntry();
    *v81 = *(_QWORD *)(a1 + 1152);
  }
  v63 = SepSetTokenTrust((__int64)v28, *(void **)(a1 + 1104));
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  KeLeaveCriticalRegion();
  if ( v63 < 0 )
  {
    v22 = v63;
    goto LABEL_29;
  }
  *((_QWORD *)v28 + 21) = &v56[v60];
  SepRemoveDisabledGroupsAndPrivileges((_DWORD)v28, a3, a4, a5, a6, a7);
  RtlSidHashInitialize(*((PSID_AND_ATTRIBUTES *)v28 + 19), *((_DWORD *)v28 + 31), (PSID_AND_ATTRIBUTES_HASH)(v28 + 232));
  RtlSidHashInitialize(*((PSID_AND_ATTRIBUTES *)v28 + 20), *v57, (PSID_AND_ATTRIBUTES_HASH)(v28 + 504));
  SeCaptureSubjectContext(&SubjectContext);
  v64 = BYTE1(puResult[1]);
  v87.PrimaryToken = SubjectContext.PrimaryToken;
  if ( RtlIsSandboxedToken(&SubjectContext, SBYTE1(puResult[1]))
    && RtlIsSandboxedToken(&v87, v64)
    && ((KeEnterCriticalRegion(),
         PrimaryToken = (PERESOURCE *)SubjectContext.PrimaryToken,
         ExAcquireResourceSharedLite(*((PERESOURCE *)SubjectContext.PrimaryToken + 6), 1u),
         v63 = SepNewTokenAsRestrictedAsProcessToken(v28, PrimaryToken, (_BYTE *)&puResult[1] + 2),
         ExReleaseResourceLite(PrimaryToken[6]),
         KeLeaveCriticalRegion(),
         v63 < 0)
     || !BYTE2(puResult[1])) )
  {
    ObfDereferenceObject(v28);
    SeReleaseSubjectContext(&SubjectContext);
  }
  else
  {
    SeReleaseSubjectContext(&SubjectContext);
    if ( *v82 )
      RtlSidHashInitialize(*v82, *v84, SidAttrHash);
    if ( *(_DWORD *)((char *)&NlsMbCodePageTag + 3)
      && SepTokenLeakMethodWatch == 15
      && PsGetCurrentProcess()[1].Header.WaitListHead.Flink == (struct _LIST_ENTRY *)SepTokenLeakProcessCid )
    {
      v66 = v76;
      v28 = (char *)Object;
      *(_DWORD *)(*(_QWORD *)v76 + 280LL) = _InterlockedIncrement(&SepTokenLeakMethodCount);
      v67 = *(_DWORD *)(*(_QWORD *)v66 + 280LL);
      if ( v67 >= SepTokenLeakBreakCount )
      {
        DbgPrint("\nToken number 0x%x = 0x%p\n", v67, v28);
        __debugbreak();
      }
    }
    *a11 = v28;
  }
  return (unsigned int)v63;
}
