/*
 * XREFs of SepDuplicateToken @ 0x14064A640
 * Callers:
 *     SepGetAnonymousToken @ 0x1400DD58C (SepGetAnonymousToken.c)
 *     SepLinkLogonSessions @ 0x140176F18 (SepLinkLogonSessions.c)
 *     NtImpersonateAnonymousToken @ 0x1405BA710 (NtImpersonateAnonymousToken.c)
 *     NtQueryInformationToken @ 0x14062B780 (NtQueryInformationToken.c)
 *     NtOpenThreadTokenEx @ 0x140649A40 (NtOpenThreadTokenEx.c)
 *     SeCopyClientToken @ 0x14064B034 (SeCopyClientToken.c)
 *     NtDuplicateToken @ 0x14064B1D0 (NtDuplicateToken.c)
 *     SeSubProcessToken @ 0x14064FC0C (SeSubProcessToken.c)
 *     NtCreateLowBoxToken @ 0x140656130 (NtCreateLowBoxToken.c)
 *     SepSetLogonSessionToken @ 0x1406D1490 (SepSetLogonSessionToken.c)
 *     SeDuplicateTokenAndAddOriginClaim @ 0x1408A2C7C (SeDuplicateTokenAndAddOriginClaim.c)
 *     SeGetLinkedToken @ 0x1408A2D50 (SeGetLinkedToken.c)
 *     SeGetLogonSessionToken @ 0x1408A2E40 (SeGetLogonSessionToken.c)
 * Callees:
 *     RtlUIntAdd @ 0x140001568 (RtlUIntAdd.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140050860 (ExAcquireResourceSharedLite.c)
 *     MmGetSessionObjectById @ 0x14007F234 (MmGetSessionObjectById.c)
 *     RtlSidHashInitialize @ 0x1400CC4C0 (RtlSidHashInitialize.c)
 *     ExInitializeResourceLite @ 0x1400CC570 (ExInitializeResourceLite.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x1400CC690 (AuthzBasepDuplicateSecurityAttributes.c)
 *     SepReferenceLuidToIndexEntry @ 0x1400CCB80 (SepReferenceLuidToIndexEntry.c)
 *     RtlWalkFrameChain @ 0x1400CCC50 (RtlWalkFrameChain.c)
 *     DbgPrint @ 0x1401263A0 (DbgPrint.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     SepSetTokenCapabilities @ 0x1405BDEA4 (SepSetTokenCapabilities.c)
 *     SepReferenceLogonSession @ 0x1405BE6F4 (SepReferenceLogonSession.c)
 *     ObCreateObjectEx @ 0x1405E15E0 (ObCreateObjectEx.c)
 *     SepDuplicateSid @ 0x14064A160 (SepDuplicateSid.c)
 *     SepSetTokenPackage @ 0x14065CEA8 (SepSetTokenPackage.c)
 *     SepMakeTokenEffectiveOnly @ 0x1406A676C (SepMakeTokenEffectiveOnly.c)
 *     SepModifyTokenPolicyCounter @ 0x14089D16C (SepModifyTokenPolicyCounter.c)
 *     SepDuplicateTokenUserAndGroups @ 0x1408A338C (SepDuplicateTokenUserAndGroups.c)
 *     SepAddTokenLogonSession @ 0x1408A39A0 (SepAddTokenLogonSession.c)
 *     SepDuplicateTokenClaims @ 0x1408A538C (SepDuplicateTokenClaims.c)
 */

__int64 __fastcall SepDuplicateToken(
        __int64 a1,
        int a2,
        char a3,
        int a4,
        unsigned int a5,
        unsigned __int8 a6,
        char a7,
        _QWORD *a8)
{
  unsigned int v8; // r12d
  PVOID *v11; // rdi
  _DWORD *PoolWithTag; // rax
  _DWORD *v14; // rsi
  _QWORD *v15; // rax
  PVOID *v16; // rcx
  struct _ERESOURCE *v17; // r14
  int v18; // ebp
  _BYTE *v19; // rbp
  ULONG v20; // eax
  struct _KTHREAD *CurrentThread; // rax
  char *v22; // rdi
  unsigned int v23; // eax
  unsigned int v24; // r14d
  void *v25; // rcx
  __int128 v26; // xmm0
  _QWORD *v27; // r13
  bool v28; // zf
  __int64 v29; // rcx
  int v30; // esi
  __int64 v31; // rax
  _DWORD *v32; // rcx
  PSID_AND_ATTRIBUTES *v33; // r13
  unsigned __int64 v34; // r14
  _SID_AND_ATTRIBUTES *v35; // rcx
  int i; // eax
  __int64 v37; // rax
  char *v38; // rax
  ULONG j; // ecx
  __int64 v40; // rax
  unsigned int v41; // ecx
  size_t v42; // r12
  char *v43; // r14
  __int64 v44; // rax
  char *v45; // r14
  ULONG v46; // r9d
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // rdx
  unsigned __int8 *v51; // rcx
  void *v52; // r14
  PVOID *v53; // r12
  __int64 v54; // rdx
  _KPROCESS *Process; // rcx
  int v56; // edx
  __int64 v57; // [rsp+20h] [rbp-C8h]
  PVOID Object; // [rsp+50h] [rbp-98h] BYREF
  PSID_AND_ATTRIBUTES *v59; // [rsp+58h] [rbp-90h]
  void *v60; // [rsp+60h] [rbp-88h] BYREF
  ULONG *v61; // [rsp+68h] [rbp-80h]
  _QWORD *v62; // [rsp+70h] [rbp-78h]
  _QWORD *v63; // [rsp+78h] [rbp-70h]
  _QWORD *v64; // [rsp+80h] [rbp-68h]
  _QWORD *v65; // [rsp+88h] [rbp-60h]
  PVOID *v66; // [rsp+90h] [rbp-58h]
  PSID_AND_ATTRIBUTES *v67; // [rsp+98h] [rbp-50h]
  PSID_AND_ATTRIBUTES_HASH SidAttrHash; // [rsp+A0h] [rbp-48h]
  ULONG *v69; // [rsp+A8h] [rbp-40h]
  UINT puResult; // [rsp+108h] [rbp+20h] BYREF

  v8 = a5;
  v11 = 0LL;
  if ( a4 == 2 && a5 > 3 )
    return 3221225637LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x74416553u);
  v14 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  *PoolWithTag = 0;
  v15 = PoolWithTag + 2;
  v15[1] = v15;
  *v15 = v15;
  v14[6] = 0;
  *((_QWORD *)v14 + 5) = v14 + 8;
  *((_QWORD *)v14 + 4) = v14 + 8;
  if ( SeTokenLeakTracking )
  {
    v11 = (PVOID *)ExAllocatePoolWithTag(PagedPool, 0x120uLL, 0x74416553u);
    if ( !v11 )
    {
      v16 = (PVOID *)v14;
      goto LABEL_8;
    }
  }
  v17 = (struct _ERESOURCE *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x68uLL, 0x6C546553u);
  if ( !v17 )
  {
    ExFreePoolWithTag(v14, 0);
    if ( !SeTokenLeakTracking )
      return 3221225626LL;
    v16 = v11;
LABEL_8:
    ExFreePoolWithTag(v16, 0);
    return 3221225626LL;
  }
  v18 = RtlUIntAdd(0x490u, *(_DWORD *)(a1 + 132), &puResult);
  if ( v18 < 0
    || (v18 = ObCreateObjectEx(
                a6,
                SeTokenObjectType,
                a2,
                a6,
                v57,
                puResult,
                *(_DWORD *)(a1 + 136),
                puResult,
                &Object,
                0LL),
        v18 < 0) )
  {
    ExFreePoolWithTag(v14, 0);
    ExFreePoolWithTag(v17, 0);
    if ( SeTokenLeakTracking )
      ExFreePoolWithTag(v11, 0);
    return (unsigned int)v18;
  }
  v19 = Object;
  *((_QWORD *)Object + 2) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
  v19[204] = 0;
  *((_DWORD *)v19 + 48) = a4;
  *((_DWORD *)v19 + 49) = v8;
  *((_QWORD *)v19 + 6) = v17;
  ExInitializeResourceLite(v17);
  *((_QWORD *)v19 + 3) = *(_QWORD *)(a1 + 24);
  *(_OWORD *)v19 = *(_OWORD *)a1;
  *((_DWORD *)v19 + 35) = 0;
  *((_QWORD *)v19 + 4) = *(_QWORD *)(a1 + 32);
  *((_QWORD *)v19 + 5) = *(_QWORD *)(a1 + 40);
  *((_QWORD *)v19 + 28) = *(_QWORD *)(a1 + 224);
  *((_QWORD *)v19 + 140) = 0LL;
  *((_QWORD *)v19 + 141) = 0LL;
  *((_QWORD *)v19 + 137) = 0LL;
  *((_QWORD *)v19 + 143) = v11;
  *((_DWORD *)v19 + 30) = 0;
  *((_QWORD *)v19 + 145) = 0LL;
  if ( SeTokenLeakTracking )
  {
    v20 = RtlWalkFrameChain(v11 + 5, 0x1Eu, 0);
    if ( KeGetCurrentIrql() < 2u )
      RtlWalkFrameChain((PVOID *)(*((_QWORD *)v19 + 143) + 40LL + 8LL * v20), 30 - v20, 1u);
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
  v22 = (char *)Object;
  *((_QWORD *)Object + 7) = *(_QWORD *)(a1 + 56);
  *((_DWORD *)v22 + 34) = *(_DWORD *)(a1 + 136);
  *((_DWORD *)v22 + 36) = *(_DWORD *)(a1 + 144);
  *((_DWORD *)v22 + 32) = *(_DWORD *)(a1 + 128);
  *((_DWORD *)v22 + 33) = *(_DWORD *)(a1 + 132);
  v23 = *(_DWORD *)(a1 + 200) & 0xFFFFFBDF;
  v61 = (ULONG *)(v22 + 128);
  *((_DWORD *)v22 + 50) = v23;
  v24 = *(_DWORD *)(a1 + 120);
  if ( *((_DWORD *)v19 + 30) != v24 )
  {
    *((_DWORD *)v19 + 30) = v24;
    if ( !SeTokenDoesNotTrackSessionObject )
    {
      v25 = (void *)*((_QWORD *)v19 + 145);
      if ( v25 )
        ObfDereferenceObject(v25);
      *((_QWORD *)v19 + 145) = MmGetSessionObjectById(v24);
    }
  }
  *(_OWORD *)(v22 + 88) = *(_OWORD *)(a1 + 88);
  *(_OWORD *)(v22 + 104) = *(_OWORD *)(a1 + 104);
  *((_DWORD *)v22 + 52) = *(_DWORD *)(a1 + 208);
  *((_DWORD *)v22 + 53) = *(_DWORD *)(a1 + 212);
  v26 = *(_OWORD *)(a1 + 64);
  v59 = (PSID_AND_ATTRIBUTES *)(v22 + 776);
  *((_OWORD *)v22 + 4) = v26;
  *((_QWORD *)v22 + 10) = *(_QWORD *)(a1 + 80);
  *((_QWORD *)v22 + 97) = v14;
  *((_QWORD *)v22 + 135) = 0LL;
  v63 = v22 + 1080;
  *((_QWORD *)v22 + 136) = 0LL;
  v64 = v22 + 1088;
  *((_QWORD *)v22 + 144) = 0LL;
  v65 = v22 + 1152;
  *((_QWORD *)v22 + 99) = 0LL;
  v67 = (PSID_AND_ATTRIBUTES *)(v22 + 792);
  *((_QWORD *)v22 + 98) = 0LL;
  v69 = (ULONG *)(v22 + 800);
  *((_DWORD *)v22 + 200) = 0;
  SidAttrHash = (PSID_AND_ATTRIBUTES_HASH)(v22 + 808);
  memset(v22 + 808, 0, 0x110uLL);
  *((_QWORD *)v22 + 22) = 0LL;
  v62 = v22 + 176;
  *((_QWORD *)v22 + 138) = 0LL;
  *((_QWORD *)v22 + 139) = 0LL;
  v27 = v22 + 1136;
  *((_QWORD *)v22 + 142) = 0LL;
  v28 = v22[119] == 2;
  v66 = (PVOID *)(v22 + 1104);
  if ( v28 )
    SepModifyTokenPolicyCounter(v22 + 88, 1LL);
  if ( (*(_DWORD *)(a1 + 200) & 0x20) != 0 )
  {
    v30 = SepReferenceLogonSession(a1 + 24, (__int64)(v22 + 216));
    if ( v30 < 0 )
    {
      *((_DWORD *)v22 + 50) |= 0x20u;
      *((_QWORD *)v22 + 27) = 0LL;
LABEL_41:
      ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
      KeLeaveCriticalRegion();
LABEL_42:
      ObfDereferenceObject(v22);
      return (unsigned int)v30;
    }
  }
  else
  {
    v29 = *(_QWORD *)(a1 + 216);
    *((_QWORD *)v22 + 27) = v29;
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v29 + 24)) <= 1 )
      __fastfail(0xEu);
    v22 = (char *)Object;
    v30 = 0;
  }
  v31 = *(_QWORD *)(a1 + 1136);
  if ( v31 )
  {
    SepReferenceLuidToIndexEntry(*(_QWORD *)(a1 + 1136));
    v31 = *(_QWORD *)(a1 + 1136);
  }
  *v27 = v31;
  v32 = *(_DWORD **)(a1 + 776);
  if ( *v32 )
  {
    v30 = AuthzBasepDuplicateSecurityAttributes((__int64)v32, *v59, a7);
    if ( v30 < 0 )
      goto LABEL_41;
  }
  memmove(v22 + 1168, (const void *)(a1 + 1168), *(unsigned int *)(a1 + 132));
  v33 = (PSID_AND_ATTRIBUTES *)(v22 + 152);
  v34 = (unsigned __int64)&v22[-a1];
  if ( SepTokenSidSharingEnabled )
  {
    *v33 = (PSID_AND_ATTRIBUTES)(v34 + *(_QWORD *)(a1 + 152));
    v30 = SepDuplicateTokenUserAndGroups(a1, v22);
    if ( v30 < 0 )
    {
      *v33 = 0LL;
      goto LABEL_41;
    }
  }
  else
  {
    *((_DWORD *)v22 + 31) = *(_DWORD *)(a1 + 124);
    v35 = (_SID_AND_ATTRIBUTES *)(v34 + *(_QWORD *)(a1 + 152));
    *v33 = v35;
    for ( i = *((_DWORD *)v22 + 31); i; --i )
    {
      v35->Sid = (char *)v35->Sid + v34;
      ++v35;
    }
  }
  v37 = *(_QWORD *)(a1 + 160);
  v59 = (PSID_AND_ATTRIBUTES *)(v22 + 160);
  *((_QWORD *)v22 + 20) = v37;
  if ( v37 )
  {
    v38 = (char *)(v34 + v37);
    *((_QWORD *)v22 + 20) = v38;
    for ( j = *v61; j; --j )
    {
      *(_QWORD *)v38 += v34;
      v38 += 16;
    }
  }
  v40 = *(_QWORD *)(a1 + 184);
  v41 = 4 * *(unsigned __int8 *)(*(_QWORD *)(a1 + 168) + 1LL) + 8;
  if ( v40 )
    v41 += *(unsigned __int16 *)(v40 + 2);
  v42 = v41;
  v43 = (char *)ExAllocatePoolWithTag(PagedPool, v41, 0x64546553u);
  *v62 = v43;
  if ( !v43 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v22);
    return 3221225626LL;
  }
  memmove(v43, *(const void **)(a1 + 176), v42);
  v44 = *(_QWORD *)(a1 + 184);
  v45 = &v43[-*(_QWORD *)(a1 + 176)];
  *((_QWORD *)v22 + 23) = v44;
  if ( v44 )
    *((_QWORD *)v22 + 23) = &v45[v44];
  *((_QWORD *)v22 + 21) = &v45[*(_QWORD *)(a1 + 168)];
  v46 = *(_DWORD *)(a1 + 800);
  if ( v46 )
    v30 = SepSetTokenCapabilities((__int64)v22, *(void **)(a1 + 784), *(void **)(a1 + 792), v46);
  if ( v30 < 0 )
    goto LABEL_41;
  v47 = *(_QWORD *)(a1 + 784);
  if ( v47 )
    v30 = SepSetTokenPackage(v22, v47);
  if ( v30 < 0 )
    goto LABEL_41;
  v48 = *(_QWORD *)(a1 + 1080);
  if ( v48 )
  {
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v48 + 24)) <= 1 )
      __fastfail(0xEu);
    v22 = (char *)Object;
    *v63 = *(_QWORD *)(a1 + 1080);
  }
  v49 = *(_QWORD *)(a1 + 1088);
  if ( v49 )
  {
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v49 + 24)) <= 1 )
      __fastfail(0xEu);
    v22 = (char *)Object;
    *v64 = *(_QWORD *)(a1 + 1088);
  }
  v50 = *(_QWORD *)(a1 + 1152);
  if ( v50 )
  {
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v50 + 24)) <= 1 )
      __fastfail(0xEu);
    v22 = (char *)Object;
    *v65 = *(_QWORD *)(a1 + 1152);
  }
  if ( *(_QWORD *)(a1 + 1096) )
  {
    v30 = SepDuplicateTokenClaims(a1, v22);
    if ( v30 < 0 )
      goto LABEL_41;
  }
  v51 = *(unsigned __int8 **)(a1 + 1104);
  v52 = 0LL;
  v30 = 0;
  v60 = 0LL;
  if ( v51 )
  {
    v30 = SepDuplicateSid(v51, &v60);
    if ( v30 < 0 )
      goto LABEL_80;
    v52 = v60;
  }
  v53 = v66;
  if ( *v66 )
  {
    ExFreePoolWithTag(*v66, 0);
    *v53 = 0LL;
  }
  *v53 = v52;
LABEL_80:
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  KeLeaveCriticalRegion();
  if ( v30 < 0 )
    goto LABEL_42;
  if ( SeTokenLeakTracking )
  {
    **((_QWORD **)v19 + 143) = KeGetCurrentThread()[1].CycleTime;
    *(_QWORD *)(*((_QWORD *)v19 + 143) + 8LL) = *(_QWORD *)&KeGetCurrentThread()[1].CurrentRunTime;
    *(_DWORD *)(*((_QWORD *)v19 + 143) + 32LL) = 13;
    *(_DWORD *)(*((_QWORD *)v19 + 143) + 280LL) = 0;
    *(_DWORD *)(*((_QWORD *)v19 + 143) + 284LL) = 0;
    v54 = *((_QWORD *)v19 + 143);
    v22 = (char *)Object;
    Process = KeGetCurrentThread()->ApcState.Process;
    *(_QWORD *)(v54 + 16) = Process[1].ActiveProcessors.Bitmap[12];
    *(_DWORD *)(v54 + 24) = Process[1].ActiveProcessors.Bitmap[13];
    *(_WORD *)(v54 + 28) = WORD2(Process[1].ActiveProcessors.Bitmap[13]);
    *(_BYTE *)(v54 + 30) = BYTE6(Process[1].ActiveProcessors.Bitmap[13]);
    SepAddTokenLogonSession(v22);
  }
  if ( a3 )
    SepMakeTokenEffectiveOnly(v22);
  RtlSidHashInitialize(*v33, *((_DWORD *)v22 + 31), (PSID_AND_ATTRIBUTES_HASH)(v22 + 232));
  RtlSidHashInitialize(*v59, *v61, (PSID_AND_ATTRIBUTES_HASH)(v22 + 504));
  if ( *v67 )
    RtlSidHashInitialize(*v67, *v69, SidAttrHash);
  if ( SeTokenLeakTracking && SepTokenLeakMethodWatch == 13 )
  {
    if ( KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink == (struct _LIST_ENTRY *)SepTokenLeakProcessCid )
    {
      *(_DWORD *)(*((_QWORD *)v19 + 143) + 280LL) = _InterlockedIncrement(&SepTokenLeakMethodCount);
      v56 = *(_DWORD *)(*((_QWORD *)v19 + 143) + 280LL);
      if ( v56 >= SepTokenLeakBreakCount )
      {
        DbgPrint("\nToken number 0x%x = 0x%p\n", v56, Object);
        __debugbreak();
      }
    }
    v22 = (char *)Object;
  }
  *a8 = v22;
  return (unsigned int)v30;
}
