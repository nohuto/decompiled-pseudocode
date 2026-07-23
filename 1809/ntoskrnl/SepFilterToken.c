/*
 * XREFs of SepFilterToken @ 0x140658E8C
 * Callers:
 *     NtFilterToken @ 0x1406C7E00 (NtFilterToken.c)
 *     SeFilterToken @ 0x140758C60 (SeFilterToken.c)
 * Callees:
 *     RtlUIntAdd @ 0x140001568 (RtlUIntAdd.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140050860 (ExAcquireResourceSharedLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     RtlSidHashInitialize @ 0x1400CC4C0 (RtlSidHashInitialize.c)
 *     ExInitializeResourceLite @ 0x1400CC570 (ExInitializeResourceLite.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x1400CC690 (AuthzBasepDuplicateSecurityAttributes.c)
 *     RtlWalkFrameChain @ 0x1400CCC50 (RtlWalkFrameChain.c)
 *     DbgPrint @ 0x1401263A0 (DbgPrint.c)
 *     SepDuplicateLogonSessionReference @ 0x14013AA20 (SepDuplicateLogonSessionReference.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     SeIsSystemContext @ 0x14030014C (SeIsSystemContext.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     SepNewTokenAsRestrictedAsProcessToken @ 0x1405BCD54 (SepNewTokenAsRestrictedAsProcessToken.c)
 *     SepSetTokenCapabilities @ 0x1405BDEA4 (SepSetTokenCapabilities.c)
 *     PsReferencePrimaryToken @ 0x1405DE640 (PsReferencePrimaryToken.c)
 *     ObCreateObjectEx @ 0x1405E15E0 (ObCreateObjectEx.c)
 *     SeReleaseSubjectContext @ 0x1405E2240 (SeReleaseSubjectContext.c)
 *     RtlCopySidAndAttributesArray @ 0x14062DDC0 (RtlCopySidAndAttributesArray.c)
 *     SeCaptureSubjectContext @ 0x140632AA0 (SeCaptureSubjectContext.c)
 *     RtlIsSandboxedToken @ 0x14064B4F0 (RtlIsSandboxedToken.c)
 *     SepRefDerefLuidToIndexEntryIfNecessary @ 0x140650140 (SepRefDerefLuidToIndexEntryIfNecessary.c)
 *     SepSetTokenSessionById @ 0x140650F3C (SepSetTokenSessionById.c)
 *     RtlIsPackageSid @ 0x140655400 (RtlIsPackageSid.c)
 *     RtlIsCapabilitySid @ 0x1406566F8 (RtlIsCapabilitySid.c)
 *     SepRemoveDisabledGroupsAndPrivileges @ 0x14065C808 (SepRemoveDisabledGroupsAndPrivileges.c)
 *     SepSidInSidAndAttributes @ 0x14065CA1C (SepSidInSidAndAttributes.c)
 *     SepSetTokenPackage @ 0x14065CEA8 (SepSetTokenPackage.c)
 *     SepSetTokenTrust @ 0x1406A5908 (SepSetTokenTrust.c)
 *     SepSetLogonSessionToken @ 0x1406D1490 (SepSetLogonSessionToken.c)
 *     SepModifyTokenPolicyCounter @ 0x14089D16C (SepModifyTokenPolicyCounter.c)
 *     SepDuplicateTokenUserAndGroups @ 0x1408A338C (SepDuplicateTokenUserAndGroups.c)
 *     SepAddTokenLogonSession @ 0x1408A39A0 (SepAddTokenLogonSession.c)
 *     SepDuplicateTokenClaims @ 0x1408A538C (SepDuplicateTokenClaims.c)
 */

__int64 __fastcall SepFilterToken(
        __int64 a1,
        unsigned __int8 a2,
        int a3,
        int a4,
        __int64 a5,
        int a6,
        __int64 a7,
        unsigned int a8,
        PSID *a9,
        UINT uAddend,
        _QWORD *a11)
{
  char v11; // bl
  PVOID *v14; // r14
  unsigned int v15; // esi
  PSID *v16; // rbx
  PVOID *PoolWithTag; // rax
  PVOID *v18; // rsi
  PVOID *v19; // rcx
  struct _ERESOURCE *v21; // r15
  int v22; // ebx
  _QWORD *v23; // rbx
  _QWORD *v24; // rdx
  PVOID v25; // r15
  UINT v26; // eax
  ULONG v27; // eax
  struct _KTHREAD *CurrentThread; // rax
  char *v29; // rbx
  _DWORD *v30; // rcx
  __int64 v31; // rdx
  _DWORD *v32; // r14
  unsigned int v33; // eax
  int v34; // esi
  struct _KTHREAD *v35; // rcx
  _DWORD *v36; // rcx
  __int64 v37; // rdx
  _KPROCESS *Process; // rcx
  PACCESS_TOKEN v39; // rbx
  _SID_AND_ATTRIBUTES *v40; // r14
  int v41; // eax
  unsigned int v42; // eax
  int v43; // r12d
  unsigned int v44; // ecx
  _SID_AND_ATTRIBUTES *v45; // r12
  __int64 v46; // r8
  ULONG v47; // r8d
  NTSTATUS v48; // eax
  unsigned int v49; // r13d
  _SID_AND_ATTRIBUTES *v50; // r14
  PSID *v51; // rbx
  __int64 v52; // rdx
  __int64 v53; // rax
  unsigned int v54; // ecx
  size_t v55; // r14
  char *v56; // r12
  char v57; // al
  _DWORD *v58; // rcx
  PSID_AND_ATTRIBUTES *v59; // r13
  __int64 v60; // rax
  unsigned int v61; // r14d
  ULONG v62; // r9d
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rcx
  __int64 v66; // rdx
  char *v67; // rbx
  int v68; // ecx
  KPROCESSOR_MODE v69; // di
  struct _KTHREAD *v70; // rax
  PERESOURCE *PrimaryToken; // rbx
  int v72; // edx
  PSID SidArea; // [rsp+28h] [rbp-E0h]
  UINT puResult[2]; // [rsp+58h] [rbp-B0h] BYREF
  PVOID Object; // [rsp+60h] [rbp-A8h] BYREF
  UINT v76[2]; // [rsp+68h] [rbp-A0h] BYREF
  PSID RemainingSidArea; // [rsp+70h] [rbp-98h] BYREF
  __int64 v78; // [rsp+78h] [rbp-90h]
  PSID_AND_ATTRIBUTES *v79; // [rsp+80h] [rbp-88h]
  _DWORD *v80; // [rsp+88h] [rbp-80h]
  _QWORD *v81; // [rsp+90h] [rbp-78h]
  _QWORD *v82; // [rsp+98h] [rbp-70h]
  _QWORD *v83; // [rsp+A0h] [rbp-68h]
  _QWORD *v84; // [rsp+A8h] [rbp-60h]
  PSID_AND_ATTRIBUTES *v85; // [rsp+B0h] [rbp-58h]
  PSID_AND_ATTRIBUTES *v86; // [rsp+B8h] [rbp-50h]
  PSID_AND_ATTRIBUTES_HASH SidAttrHash; // [rsp+C0h] [rbp-48h]
  ULONG *v88; // [rsp+C8h] [rbp-40h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+D0h] [rbp-38h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT v90; // [rsp+F0h] [rbp-18h] BYREF

  v76[1] = 0;
  v11 = a3;
  v14 = 0LL;
  memset(&v90, 0, sizeof(v90));
  BYTE1(v76[0]) = KeGetCurrentThread()->PreviousMode;
  LODWORD(v78) = v11 & 8;
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
  PoolWithTag = (PVOID *)ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x74416553u);
  v18 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  *(_DWORD *)PoolWithTag = 0;
  PoolWithTag[2] = PoolWithTag + 1;
  PoolWithTag[1] = PoolWithTag + 1;
  *((_DWORD *)PoolWithTag + 6) = 0;
  PoolWithTag[5] = PoolWithTag + 4;
  PoolWithTag[4] = PoolWithTag + 4;
  if ( SeTokenLeakTracking )
  {
    v14 = (PVOID *)ExAllocatePoolWithTag(PagedPool, 0x120uLL, 0x74416553u);
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
    if ( !SeTokenLeakTracking )
      return 3221225626LL;
    v19 = v14;
LABEL_16:
    ExFreePoolWithTag(v19, 0);
    return 3221225626LL;
  }
  v22 = RtlUIntAdd(*(_DWORD *)(a1 + 132), uAddend, puResult);
  if ( v22 >= 0 )
  {
    v22 = RtlUIntAdd(puResult[0], 4u, puResult);
    if ( v22 >= 0 )
    {
      v22 = RtlUIntAdd(0x490u, puResult[0], &v76[1]);
      if ( v22 >= 0 )
      {
        v22 = ObCreateObjectEx(
                a2,
                SeTokenObjectType,
                0,
                a2,
                (__int64)SidArea,
                v76[1],
                *(_DWORD *)(a1 + 136),
                v76[1],
                &Object,
                0LL);
        if ( v22 >= 0 )
        {
          v23 = Object;
          *((_QWORD *)Object + 6) = v21;
          ExInitializeResourceLite(v21);
          v24 = Object;
          v23[7] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
          v25 = Object;
          v24[2] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
          *((_BYTE *)v25 + 204) = 0;
          *((_QWORD *)v25 + 3) = *(_QWORD *)(a1 + 24);
          v26 = puResult[0];
          *(_OWORD *)v25 = *(_OWORD *)a1;
          *((_DWORD *)v25 + 35) = 0;
          *((_DWORD *)v25 + 32) = 0;
          *((_DWORD *)v25 + 33) = v26;
          *((_QWORD *)v25 + 4) = *(_QWORD *)(a1 + 16);
          *((_DWORD *)v25 + 48) = *(_DWORD *)(a1 + 192);
          *((_DWORD *)v25 + 49) = *(_DWORD *)(a1 + 196);
          *((_QWORD *)v25 + 5) = *(_QWORD *)(a1 + 40);
          *((_QWORD *)v25 + 28) = *(_QWORD *)(a1 + 224);
          *((_QWORD *)v25 + 140) = 0LL;
          *((_QWORD *)v25 + 141) = 0LL;
          *((_QWORD *)v25 + 137) = 0LL;
          *((_QWORD *)v25 + 143) = v14;
          *((_DWORD *)v25 + 30) = 0;
          *((_QWORD *)v25 + 145) = 0LL;
          if ( SeTokenLeakTracking )
          {
            v27 = RtlWalkFrameChain(v14 + 5, 0x1Eu, 0);
            if ( KeGetCurrentIrql() < 2u )
              RtlWalkFrameChain((PVOID *)(*((_QWORD *)v25 + 143) + 40LL + 8LL * v27), 30 - v27, 1u);
          }
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
          v29 = (char *)Object;
          v30 = Object;
          *((_DWORD *)Object + 34) = *(_DWORD *)(a1 + 136);
          v30[36] = *(_DWORD *)(a1 + 144);
          SepSetTokenSessionById((__int64)v30, *(_DWORD *)(a1 + 120), 0, 0LL, 0LL);
          v32 = v29 + 200;
          v33 = *(_DWORD *)(a1 + 200) & 0xFFFFFBD7;
          v80 = v29 + 200;
          *((_DWORD *)v29 + 50) = v33;
          *(_OWORD *)(v29 + 88) = *(_OWORD *)(a1 + 88);
          *(_OWORD *)(v29 + 104) = *(_OWORD *)(a1 + 104);
          *((_DWORD *)v29 + 52) = *(_DWORD *)(a1 + 208);
          *((_DWORD *)v29 + 53) = *(_DWORD *)(a1 + 212);
          *((_OWORD *)v29 + 4) = *(_OWORD *)(a1 + 64);
          *((_QWORD *)v29 + 10) = *(_QWORD *)(a1 + 80);
          *((_QWORD *)v29 + 97) = v18;
          if ( v29[119] == 2 )
          {
            LOBYTE(v31) = 1;
            SepModifyTokenPolicyCounter(v29 + 88, v31);
          }
          *((_QWORD *)v29 + 135) = 0LL;
          v82 = v29 + 1080;
          *((_QWORD *)v29 + 136) = 0LL;
          v83 = v29 + 1088;
          *((_QWORD *)v29 + 144) = 0LL;
          v84 = v29 + 1152;
          *((_QWORD *)v29 + 99) = 0LL;
          v86 = (PSID_AND_ATTRIBUTES *)(v29 + 792);
          *((_QWORD *)v29 + 98) = 0LL;
          v88 = (ULONG *)(v29 + 800);
          *((_DWORD *)v29 + 200) = 0;
          SidAttrHash = (PSID_AND_ATTRIBUTES_HASH)(v29 + 808);
          memset(v29 + 808, 0, 0x110uLL);
          *((_QWORD *)v29 + 22) = 0LL;
          *((_QWORD *)v29 + 138) = 0LL;
          *((_QWORD *)v29 + 139) = 0LL;
          *((_QWORD *)v29 + 142) = 0LL;
          v81 = v29 + 176;
          v34 = SepDuplicateLogonSessionReference((__int64)v29, a1);
          if ( v34 < 0 )
            goto LABEL_28;
          SepRefDerefLuidToIndexEntryIfNecessary(a1, 0);
          *((_QWORD *)v29 + 142) = *(_QWORD *)(a1 + 1136);
          v36 = *(_DWORD **)(a1 + 776);
          if ( *v36 )
          {
            v34 = AuthzBasepDuplicateSecurityAttributes((__int64)v36, *((_QWORD **)v29 + 97), 0);
            if ( v34 < 0 )
              goto LABEL_28;
          }
          if ( *(_QWORD *)(a1 + 1096) )
          {
            v34 = SepDuplicateTokenClaims(a1, v29);
            if ( v34 < 0 )
              goto LABEL_28;
          }
          if ( SeTokenLeakTracking )
          {
            **((_QWORD **)v25 + 143) = KeGetCurrentThread()[1].CycleTime;
            *(_QWORD *)(*((_QWORD *)v25 + 143) + 8LL) = *(_QWORD *)&KeGetCurrentThread()[1].CurrentRunTime;
            *(_DWORD *)(*((_QWORD *)v25 + 143) + 32LL) = 15;
            *(_DWORD *)(*((_QWORD *)v25 + 143) + 280LL) = 0;
            *(_DWORD *)(*((_QWORD *)v25 + 143) + 284LL) = 0;
            v37 = *((_QWORD *)v25 + 143);
            v29 = (char *)Object;
            Process = KeGetCurrentThread()->ApcState.Process;
            *(_QWORD *)(v37 + 16) = Process[1].ActiveProcessors.Bitmap[12];
            *(_DWORD *)(v37 + 24) = Process[1].ActiveProcessors.Bitmap[13];
            *(_WORD *)(v37 + 28) = WORD2(Process[1].ActiveProcessors.Bitmap[13]);
            *(_BYTE *)(v37 + 30) = BYTE6(Process[1].ActiveProcessors.Bitmap[13]);
            SepAddTokenLogonSession(v29);
          }
          if ( (a3 & 2) != 0 )
          {
            v39 = PsReferencePrimaryToken(KeGetCurrentThread()->ApcState.Process);
            if ( (int)SeIsSystemContext(v39, v76) >= 0 && LOBYTE(v76[0]) )
              *v32 |= 0x40u;
            ObfDereferenceObject(v39);
            v29 = (char *)Object;
          }
          v40 = (_SID_AND_ATTRIBUTES *)(v29 + 1168);
          v41 = ((_BYTE)v29 - 112) & 7;
          if ( (((_BYTE)v29 - 112) & 7) != 0 )
          {
            v40 = (_SID_AND_ATTRIBUTES *)((char *)v40 + (unsigned int)(8 - v41));
            puResult[0] -= 8 - v41;
          }
          v42 = *(_DWORD *)(a1 + 128);
          v43 = *(_DWORD *)(a1 + 124);
          v44 = a8;
          *((_QWORD *)v29 + 19) = v40;
          if ( v42 > a8 )
            v44 = v42;
          v85 = (PSID_AND_ATTRIBUTES *)(v29 + 152);
          v45 = &v40[v44 + v43];
          RemainingSidArea = v45;
          if ( SepTokenSidSharingEnabled )
          {
            v34 = SepDuplicateTokenUserAndGroups(a1, v29);
            if ( v34 < 0 )
            {
              *((_QWORD *)v29 + 19) = 0LL;
              goto LABEL_28;
            }
          }
          else
          {
            v47 = puResult[0];
            *((_DWORD *)v29 + 31) = *(_DWORD *)(a1 + 124);
            v48 = RtlCopySidAndAttributesArray(
                    *(_DWORD *)(a1 + 124),
                    *(PSID_AND_ATTRIBUTES *)(a1 + 152),
                    v47,
                    v40,
                    v45,
                    &RemainingSidArea,
                    puResult);
            v45 = (_SID_AND_ATTRIBUTES *)RemainingSidArea;
            v34 = v48;
          }
          v49 = 0;
          v50 = (_SID_AND_ATTRIBUTES *)((char *)v40 + (unsigned int)(16 * *(_DWORD *)(a1 + 124)));
          v79 = (PSID_AND_ATTRIBUTES *)(v29 + 160);
          *((_QWORD *)v29 + 20) = v50;
          if ( a8 )
          {
            v51 = a9;
            do
            {
              v52 = *(unsigned int *)(a1 + 128);
              if ( !(_DWORD)v52 || (unsigned __int8)SepSidInSidAndAttributes(*(_QWORD *)(a1 + 160), v52, v46, *v51) )
              {
                v34 = RtlCopySidAndAttributesArray(
                        1u,
                        (PSID_AND_ATTRIBUTES)&a9[2 * v49],
                        puResult[0],
                        v50,
                        v45,
                        &RemainingSidArea,
                        puResult);
                v45 = (_SID_AND_ATTRIBUTES *)RemainingSidArea;
                ++v50;
                (*v79)[(*((_DWORD *)v25 + 32))++].Attributes = 7;
              }
              ++v49;
              v51 += 2;
            }
            while ( v49 < a8 );
            v29 = (char *)Object;
          }
          v53 = *(_QWORD *)(a1 + 184);
          v54 = 4 * *(unsigned __int8 *)(*(_QWORD *)(a1 + 168) + 1LL) + 8;
          if ( v53 )
            v54 += *(unsigned __int16 *)(v53 + 2);
          v55 = v54;
          v56 = (char *)ExAllocatePoolWithTag(PagedPool, v54, 0x64546553u);
          *v81 = v56;
          if ( v56 )
          {
            if ( !*(_DWORD *)(a1 + 128) || *((_DWORD *)v25 + 32) )
            {
              v57 = 0;
              v58 = v80;
              v59 = v79;
              if ( *((_DWORD *)v25 + 32) )
              {
                *v80 |= 0x810u;
                v57 = 1;
              }
              else
              {
                *v79 = 0LL;
              }
              if ( (_DWORD)v78 )
              {
                *v58 |= 0x18u;
                v57 = 1;
              }
              if ( v57 )
                SepSetLogonSessionToken(a1, 0LL);
              memmove(v56, *(const void **)(a1 + 176), v55);
              v60 = *(_QWORD *)(a1 + 184);
              if ( v60 )
                *((_QWORD *)v29 + 23) = &v56[(unsigned int)(v60 - *(_DWORD *)(a1 + 176))];
              else
                *((_QWORD *)v29 + 23) = 0LL;
              v61 = *(_DWORD *)(a1 + 168) - *(_DWORD *)(a1 + 176);
              v62 = *(_DWORD *)(a1 + 800);
              if ( v62 )
                v34 = SepSetTokenCapabilities((__int64)v29, *(void **)(a1 + 784), *(void **)(a1 + 792), v62);
              if ( v34 >= 0 )
              {
                v63 = *(_QWORD *)(a1 + 784);
                if ( v63 )
                  v34 = SepSetTokenPackage(v29, v63);
                if ( v34 >= 0 )
                {
                  v64 = *(_QWORD *)(a1 + 1080);
                  if ( v64 )
                  {
                    if ( _InterlockedIncrement64((volatile signed __int64 *)(v64 + 24)) <= 1 )
                      __fastfail(0xEu);
                    v29 = (char *)Object;
                    *v82 = *(_QWORD *)(a1 + 1080);
                  }
                  v65 = *(_QWORD *)(a1 + 1088);
                  if ( v65 )
                  {
                    if ( _InterlockedIncrement64((volatile signed __int64 *)(v65 + 24)) <= 1 )
                      __fastfail(0xEu);
                    v29 = (char *)Object;
                    *v83 = *(_QWORD *)(a1 + 1088);
                  }
                  v66 = *(_QWORD *)(a1 + 1152);
                  if ( v66 )
                  {
                    if ( _InterlockedIncrement64((volatile signed __int64 *)(v66 + 24)) <= 1 )
                      __fastfail(0xEu);
                    v29 = (char *)Object;
                    *v84 = *(_QWORD *)(a1 + 1152);
                  }
                  v34 = SepSetTokenTrust(v29, *(_QWORD *)(a1 + 1104));
                  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
                  v35 = KeGetCurrentThread();
                  if ( v34 >= 0 )
                  {
                    KiLeaveCriticalRegionUnsafe((__int64)v35);
                    v67 = (char *)Object;
                    v68 = (int)Object;
                    *((_QWORD *)Object + 21) = &v56[v61];
                    SepRemoveDisabledGroupsAndPrivileges(v68, a3, a4, a5, a6, a7);
                    RtlSidHashInitialize(*v85, *((_DWORD *)v67 + 31), (PSID_AND_ATTRIBUTES_HASH)(v67 + 232));
                    RtlSidHashInitialize(*v59, *((_DWORD *)v25 + 32), (PSID_AND_ATTRIBUTES_HASH)(v67 + 504));
                    SeCaptureSubjectContext(&SubjectContext);
                    v69 = BYTE1(v76[0]);
                    v90.PrimaryToken = SubjectContext.PrimaryToken;
                    if ( RtlIsSandboxedToken(&SubjectContext, SBYTE1(v76[0])) && RtlIsSandboxedToken(&v90, v69) )
                    {
                      v70 = KeGetCurrentThread();
                      --v70->KernelApcDisable;
                      PrimaryToken = (PERESOURCE *)SubjectContext.PrimaryToken;
                      ExAcquireResourceSharedLite(*((PERESOURCE *)SubjectContext.PrimaryToken + 6), 1u);
                      v34 = SepNewTokenAsRestrictedAsProcessToken(Object, PrimaryToken, (_BYTE *)v76 + 2);
                      ExReleaseResourceLite(PrimaryToken[6]);
                      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
                      if ( v34 < 0 || !BYTE2(v76[0]) )
                      {
                        ObfDereferenceObject(Object);
                        SeReleaseSubjectContext(&SubjectContext);
                        return (unsigned int)v34;
                      }
                      v67 = (char *)Object;
                    }
                    SeReleaseSubjectContext(&SubjectContext);
                    if ( *v86 )
                      RtlSidHashInitialize(*v86, *v88, SidAttrHash);
                    if ( SeTokenLeakTracking && SepTokenLeakMethodWatch == 15 )
                    {
                      if ( KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink == (struct _LIST_ENTRY *)SepTokenLeakProcessCid )
                      {
                        *(_DWORD *)(*((_QWORD *)v25 + 143) + 280LL) = _InterlockedIncrement(&SepTokenLeakMethodCount);
                        v72 = *(_DWORD *)(*((_QWORD *)v25 + 143) + 280LL);
                        if ( v72 >= SepTokenLeakBreakCount )
                        {
                          DbgPrint("\nToken number 0x%x = 0x%p\n", v72, Object);
                          __debugbreak();
                        }
                      }
                      v67 = (char *)Object;
                    }
                    *a11 = v67;
                    return (unsigned int)v34;
                  }
LABEL_29:
                  KiLeaveCriticalRegionUnsafe((__int64)v35);
                  ObfDereferenceObject(Object);
                  return (unsigned int)v34;
                }
              }
            }
            else
            {
              v34 = -1073741811;
            }
          }
          else
          {
            v34 = -1073741670;
          }
LABEL_28:
          ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
          v35 = KeGetCurrentThread();
          goto LABEL_29;
        }
      }
    }
  }
  ExFreePoolWithTag(v21, 0);
  ExFreePoolWithTag(v18, 0);
  if ( SeTokenLeakTracking )
    ExFreePoolWithTag(v14, 0);
  return (unsigned int)v22;
}
