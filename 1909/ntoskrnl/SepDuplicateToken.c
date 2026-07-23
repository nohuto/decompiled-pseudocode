/*
 * XREFs of SepDuplicateToken @ 0x1405D90A0
 * Callers:
 *     SepGetAnonymousToken @ 0x140087E6C (SepGetAnonymousToken.c)
 *     SepLinkLogonSessions @ 0x140088534 (SepLinkLogonSessions.c)
 *     SeCopyClientToken @ 0x1405C4278 (SeCopyClientToken.c)
 *     NtOpenThreadTokenEx @ 0x1405D62D0 (NtOpenThreadTokenEx.c)
 *     NtDuplicateToken @ 0x1405D7FA0 (NtDuplicateToken.c)
 *     NtQueryInformationToken @ 0x1405ED700 (NtQueryInformationToken.c)
 *     SeSubProcessToken @ 0x14061AA40 (SeSubProcessToken.c)
 *     NtImpersonateAnonymousToken @ 0x14061C0D0 (NtImpersonateAnonymousToken.c)
 *     SepSetLogonSessionToken @ 0x140620EF0 (SepSetLogonSessionToken.c)
 *     NtCreateLowBoxToken @ 0x14069CB70 (NtCreateLowBoxToken.c)
 *     SeDuplicateTokenAndAddOriginClaim @ 0x1408DFBFC (SeDuplicateTokenAndAddOriginClaim.c)
 *     SeGetLinkedToken @ 0x1408DFCD0 (SeGetLinkedToken.c)
 *     SeGetLogonSessionToken @ 0x1408DFDF0 (SeGetLogonSessionToken.c)
 * Callees:
 *     MmGetSessionObjectById @ 0x140002348 (MmGetSessionObjectById.c)
 *     RtlUIntAdd @ 0x140003F38 (RtlUIntAdd.c)
 *     SepReferenceLuidToIndexEntry @ 0x14000A490 (SepReferenceLuidToIndexEntry.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x14000A4B0 (AuthzBasepDuplicateSecurityAttributes.c)
 *     RtlSidHashInitialize @ 0x14000AB40 (RtlSidHashInitialize.c)
 *     RtlWalkFrameChain @ 0x140017620 (RtlWalkFrameChain.c)
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003C470 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ExInitializeResourceLite @ 0x140047770 (ExInitializeResourceLite.c)
 *     DbgPrint @ 0x140126B50 (DbgPrint.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ObCreateObjectEx @ 0x1405D9B00 (ObCreateObjectEx.c)
 *     SepReferenceLogonSession @ 0x14061D230 (SepReferenceLogonSession.c)
 *     SepSetTokenCapabilities @ 0x14061DD14 (SepSetTokenCapabilities.c)
 *     SepSetTokenPackage @ 0x14065817C (SepSetTokenPackage.c)
 *     SepMakeTokenEffectiveOnly @ 0x1406C7AA8 (SepMakeTokenEffectiveOnly.c)
 *     SepModifyTokenPolicyCounter @ 0x1408DA264 (SepModifyTokenPolicyCounter.c)
 *     SepDuplicateTokenUserAndGroups @ 0x1408E0348 (SepDuplicateTokenUserAndGroups.c)
 *     SepAddTokenLogonSession @ 0x1408E0960 (SepAddTokenLogonSession.c)
 *     SepDuplicateTokenClaims @ 0x1408E214C (SepDuplicateTokenClaims.c)
 */

__int64 __fastcall SepDuplicateToken(
        __int64 a1,
        int a2,
        char a3,
        int a4,
        unsigned int a5,
        unsigned __int8 a6,
        char a7,
        char **a8)
{
  unsigned int v8; // r12d
  PVOID *v11; // rdi
  _DWORD *PoolWithTag; // rax
  _DWORD *v14; // rsi
  _QWORD *v15; // rax
  PVOID *v16; // rcx
  struct _ERESOURCE *v17; // r14
  int v18; // ebp
  ULONG v19; // eax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v21; // rdx
  char *v22; // rdi
  unsigned int v23; // r14d
  void *v24; // rcx
  __int64 v25; // rcx
  int v26; // esi
  __int64 v27; // rax
  _DWORD *v28; // rcx
  PSID_AND_ATTRIBUTES *v29; // r13
  unsigned __int64 v30; // r14
  _SID_AND_ATTRIBUTES *v31; // rcx
  int i; // eax
  __int64 v33; // rax
  char *v34; // rax
  ULONG j; // ecx
  __int64 v36; // rax
  unsigned int v37; // ecx
  size_t v38; // r12
  char *v39; // r14
  __int64 v40; // rax
  char *v41; // r14
  __int64 v42; // r9
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rdx
  unsigned __int8 *v47; // r14
  PVOID v48; // rsi
  unsigned int v49; // r12d
  PVOID v50; // rax
  unsigned int v51; // ecx
  __int64 v52; // rdx
  _KPROCESS *Process; // rcx
  int v54; // edx
  char *Object; // [rsp+50h] [rbp-98h]
  PSID_AND_ATTRIBUTES *v56; // [rsp+58h] [rbp-90h]
  ULONG *v57; // [rsp+60h] [rbp-88h]
  PVOID *v58; // [rsp+90h] [rbp-58h]
  PSID_AND_ATTRIBUTES *v59; // [rsp+98h] [rbp-50h]
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
  if ( *(_DWORD *)((char *)&NlsMbCodePageTag + 3) )
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
    if ( !*(_DWORD *)((char *)&NlsMbCodePageTag + 3) )
      return 3221225626LL;
    v16 = v11;
LABEL_8:
    ExFreePoolWithTag(v16, 0);
    return 3221225626LL;
  }
  v18 = RtlUIntAdd(0x490u, *(_DWORD *)(a1 + 132), &puResult);
  if ( v18 < 0 || (v18 = ObCreateObjectEx(a6, (_DWORD)SeTokenObjectType, a2, a6), v18 < 0) )
  {
    ExFreePoolWithTag(v14, 0);
    ExFreePoolWithTag(v17, 0);
    if ( *(_DWORD *)((char *)&NlsMbCodePageTag + 3) )
      ExFreePoolWithTag(v11, 0);
    return (unsigned int)v18;
  }
  *((_QWORD *)Object + 2) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
  Object[204] = 0;
  *((_DWORD *)Object + 48) = a4;
  *((_DWORD *)Object + 49) = v8;
  *((_QWORD *)Object + 6) = v17;
  ExInitializeResourceLite(v17);
  *((_QWORD *)Object + 3) = *(_QWORD *)(a1 + 24);
  *(_OWORD *)Object = *(_OWORD *)a1;
  *((_DWORD *)Object + 35) = 0;
  *((_QWORD *)Object + 4) = *(_QWORD *)(a1 + 32);
  *((_QWORD *)Object + 5) = *(_QWORD *)(a1 + 40);
  *((_QWORD *)Object + 28) = *(_QWORD *)(a1 + 224);
  *((_QWORD *)Object + 140) = 0LL;
  *((_QWORD *)Object + 141) = 0LL;
  *((_QWORD *)Object + 137) = 0LL;
  *((_QWORD *)Object + 143) = v11;
  *((_DWORD *)Object + 30) = 0;
  *((_QWORD *)Object + 145) = 0LL;
  if ( *(_DWORD *)((char *)&NlsMbCodePageTag + 3) )
  {
    v19 = RtlWalkFrameChain(v11 + 5, 0x1Eu, 0);
    if ( KeGetCurrentIrql() < 2u )
      RtlWalkFrameChain((PVOID *)(*((_QWORD *)Object + 143) + 40LL + 8LL * v19), 30 - v19, 1u);
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
  v22 = Object;
  *((_QWORD *)Object + 7) = *(_QWORD *)(a1 + 56);
  *((_DWORD *)Object + 34) = *(_DWORD *)(a1 + 136);
  *((_DWORD *)Object + 36) = *(_DWORD *)(a1 + 144);
  *((_DWORD *)Object + 32) = *(_DWORD *)(a1 + 128);
  *((_DWORD *)Object + 33) = *(_DWORD *)(a1 + 132);
  v57 = (ULONG *)(Object + 128);
  *((_DWORD *)Object + 50) = *(_DWORD *)(a1 + 200) & 0xFFFFFBDF;
  v23 = *(_DWORD *)(a1 + 120);
  if ( *((_DWORD *)Object + 30) != v23 )
  {
    *((_DWORD *)Object + 30) = v23;
    if ( !SeTokenDoesNotTrackSessionObject )
    {
      v24 = (void *)*((_QWORD *)Object + 145);
      if ( v24 )
        ObfDereferenceObject(v24);
      *((_QWORD *)Object + 145) = MmGetSessionObjectById(v23, v21);
    }
  }
  *((_DWORD *)Object + 30) = *(_DWORD *)(a1 + 120);
  *(_OWORD *)(Object + 88) = *(_OWORD *)(a1 + 88);
  *((_QWORD *)Object + 13) = *(_QWORD *)(a1 + 104);
  *((_DWORD *)Object + 28) = *(_DWORD *)(a1 + 112);
  *((_WORD *)Object + 58) = *(_WORD *)(a1 + 116);
  Object[118] = *(_BYTE *)(a1 + 118);
  *((_DWORD *)Object + 52) = *(_DWORD *)(a1 + 208);
  *((_DWORD *)Object + 53) = *(_DWORD *)(a1 + 212);
  *((_OWORD *)Object + 4) = *(_OWORD *)(a1 + 64);
  *((_QWORD *)Object + 10) = *(_QWORD *)(a1 + 80);
  *((_QWORD *)Object + 97) = v14;
  *((_QWORD *)Object + 135) = 0LL;
  *((_QWORD *)Object + 136) = 0LL;
  *((_QWORD *)Object + 144) = 0LL;
  *((_QWORD *)Object + 99) = 0LL;
  v59 = (PSID_AND_ATTRIBUTES *)(Object + 792);
  *((_QWORD *)Object + 98) = 0LL;
  *((_DWORD *)Object + 200) = 0;
  memset(Object + 808, 0, 0x110uLL);
  *((_QWORD *)Object + 22) = 0LL;
  *((_QWORD *)Object + 138) = 0LL;
  *((_QWORD *)Object + 139) = 0LL;
  *((_QWORD *)Object + 142) = 0LL;
  v58 = (PVOID *)(Object + 1104);
  if ( Object[118] == 2 )
    SepModifyTokenPolicyCounter(Object + 88, 1LL);
  if ( (*(_DWORD *)(a1 + 200) & 0x20) != 0 )
  {
    v26 = SepReferenceLogonSession(a1 + 24, Object + 216);
    if ( v26 < 0 )
    {
      *((_DWORD *)Object + 50) |= 0x20u;
      *((_QWORD *)Object + 27) = 0LL;
LABEL_41:
      ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
      KeLeaveCriticalRegion();
LABEL_42:
      ObfDereferenceObject(v22);
      return (unsigned int)v26;
    }
  }
  else
  {
    v25 = *(_QWORD *)(a1 + 216);
    *((_QWORD *)Object + 27) = v25;
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v25 + 24)) <= 1 )
      __fastfail(0xEu);
    v22 = Object;
    v26 = 0;
  }
  v27 = *(_QWORD *)(a1 + 1136);
  if ( v27 )
  {
    SepReferenceLuidToIndexEntry(*(_QWORD *)(a1 + 1136));
    v27 = *(_QWORD *)(a1 + 1136);
  }
  *((_QWORD *)Object + 142) = v27;
  v28 = *(_DWORD **)(a1 + 776);
  if ( *v28 )
  {
    v26 = AuthzBasepDuplicateSecurityAttributes((__int64)v28, *((_QWORD *)Object + 97), a7);
    if ( v26 < 0 )
      goto LABEL_41;
  }
  memmove(v22 + 1168, (const void *)(a1 + 1168), *(unsigned int *)(a1 + 132));
  v29 = (PSID_AND_ATTRIBUTES *)(v22 + 152);
  v30 = (unsigned __int64)&v22[-a1];
  if ( SepTokenSidSharingEnabled )
  {
    *v29 = (PSID_AND_ATTRIBUTES)(v30 + *(_QWORD *)(a1 + 152));
    v26 = SepDuplicateTokenUserAndGroups(a1, v22);
    if ( v26 < 0 )
    {
      *v29 = 0LL;
      goto LABEL_41;
    }
  }
  else
  {
    *((_DWORD *)v22 + 31) = *(_DWORD *)(a1 + 124);
    v31 = (_SID_AND_ATTRIBUTES *)(v30 + *(_QWORD *)(a1 + 152));
    *v29 = v31;
    for ( i = *((_DWORD *)v22 + 31); i; --i )
    {
      v31->Sid = (char *)v31->Sid + v30;
      ++v31;
    }
  }
  v33 = *(_QWORD *)(a1 + 160);
  v56 = (PSID_AND_ATTRIBUTES *)(v22 + 160);
  *((_QWORD *)v22 + 20) = v33;
  if ( v33 )
  {
    v34 = (char *)(v30 + v33);
    *((_QWORD *)v22 + 20) = v34;
    for ( j = *v57; j; --j )
    {
      *(_QWORD *)v34 += v30;
      v34 += 16;
    }
  }
  v36 = *(_QWORD *)(a1 + 184);
  v37 = 4 * *(unsigned __int8 *)(*(_QWORD *)(a1 + 168) + 1LL) + 8;
  if ( v36 )
    v37 += *(unsigned __int16 *)(v36 + 2);
  v38 = v37;
  v39 = (char *)ExAllocatePoolWithTag(PagedPool, v37, 0x64546553u);
  *((_QWORD *)Object + 22) = v39;
  if ( !v39 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v22);
    return 3221225626LL;
  }
  memmove(v39, *(const void **)(a1 + 176), v38);
  v40 = *(_QWORD *)(a1 + 184);
  v41 = &v39[-*(_QWORD *)(a1 + 176)];
  *((_QWORD *)v22 + 23) = v40;
  if ( v40 )
    *((_QWORD *)v22 + 23) = &v41[v40];
  *((_QWORD *)v22 + 21) = &v41[*(_QWORD *)(a1 + 168)];
  v42 = *(unsigned int *)(a1 + 800);
  if ( (_DWORD)v42 )
    v26 = SepSetTokenCapabilities(v22, *(_QWORD *)(a1 + 784), *(_QWORD *)(a1 + 792), v42);
  if ( v26 < 0 )
    goto LABEL_41;
  v43 = *(_QWORD *)(a1 + 784);
  if ( v43 )
    v26 = SepSetTokenPackage(v22, v43);
  if ( v26 < 0 )
    goto LABEL_41;
  v44 = *(_QWORD *)(a1 + 1080);
  if ( v44 )
  {
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v44 + 24)) <= 1 )
      __fastfail(0xEu);
    v22 = Object;
    *((_QWORD *)Object + 135) = *(_QWORD *)(a1 + 1080);
  }
  v45 = *(_QWORD *)(a1 + 1088);
  if ( v45 )
  {
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v45 + 24)) <= 1 )
      __fastfail(0xEu);
    v22 = Object;
    *((_QWORD *)Object + 136) = *(_QWORD *)(a1 + 1088);
  }
  v46 = *(_QWORD *)(a1 + 1152);
  if ( v46 )
  {
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v46 + 24)) <= 1 )
      __fastfail(0xEu);
    v22 = Object;
    *((_QWORD *)Object + 144) = *(_QWORD *)(a1 + 1152);
  }
  if ( *(_QWORD *)(a1 + 1096) )
  {
    v26 = SepDuplicateTokenClaims(a1, v22);
    if ( v26 < 0 )
      goto LABEL_41;
  }
  v47 = *(unsigned __int8 **)(a1 + 1104);
  v48 = 0LL;
  if ( v47 )
  {
    v49 = 4 * v47[1] + 8;
    v50 = ExAllocatePoolWithTag(PagedPool, v49, 0x69536553u);
    v48 = v50;
    if ( !v50 )
    {
      v26 = -1073741670;
      goto LABEL_81;
    }
    v51 = 4 * v47[1] + 8;
    if ( v51 <= v49 )
      memmove(v50, v47, v51);
  }
  if ( *v58 )
  {
    ExFreePoolWithTag(*v58, 0);
    *v58 = 0LL;
  }
  *v58 = v48;
  v26 = 0;
LABEL_81:
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  KeLeaveCriticalRegion();
  if ( v26 < 0 )
    goto LABEL_42;
  if ( *(_DWORD *)((char *)&NlsMbCodePageTag + 3) )
  {
    **((_QWORD **)Object + 143) = KeGetCurrentThread()[1].CycleTime;
    *(_QWORD *)(*((_QWORD *)Object + 143) + 8LL) = *(_QWORD *)&KeGetCurrentThread()[1].CurrentRunTime;
    *(_DWORD *)(*((_QWORD *)Object + 143) + 32LL) = 13;
    *(_DWORD *)(*((_QWORD *)Object + 143) + 280LL) = 0;
    *(_DWORD *)(*((_QWORD *)Object + 143) + 284LL) = 0;
    v52 = *((_QWORD *)Object + 143);
    v22 = Object;
    Process = KeGetCurrentThread()->ApcState.Process;
    *(_QWORD *)(v52 + 16) = Process[1].ActiveProcessors.Bitmap[11];
    *(_DWORD *)(v52 + 24) = Process[1].ActiveProcessors.Bitmap[12];
    *(_WORD *)(v52 + 28) = WORD2(Process[1].ActiveProcessors.Bitmap[12]);
    *(_BYTE *)(v52 + 30) = BYTE6(Process[1].ActiveProcessors.Bitmap[12]);
    SepAddTokenLogonSession();
  }
  if ( a3 )
    SepMakeTokenEffectiveOnly(v22);
  RtlSidHashInitialize(*v29, *((_DWORD *)v22 + 31), (PSID_AND_ATTRIBUTES_HASH)(v22 + 232));
  RtlSidHashInitialize(*v56, *v57, (PSID_AND_ATTRIBUTES_HASH)(v22 + 504));
  if ( *v59 )
    RtlSidHashInitialize(*v59, *((_DWORD *)Object + 200), (PSID_AND_ATTRIBUTES_HASH)(Object + 808));
  if ( *(_DWORD *)((char *)&NlsMbCodePageTag + 3) && SepTokenLeakMethodWatch == 13 )
  {
    if ( KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink == (struct _LIST_ENTRY *)SepTokenLeakProcessCid )
    {
      *(_DWORD *)(*((_QWORD *)Object + 143) + 280LL) = _InterlockedIncrement(&SepTokenLeakMethodCount);
      v54 = *(_DWORD *)(*((_QWORD *)Object + 143) + 280LL);
      if ( v54 >= SepTokenLeakBreakCount )
      {
        DbgPrint("\nToken number 0x%x = 0x%p\n", v54, Object);
        __debugbreak();
      }
    }
    v22 = Object;
  }
  *a8 = v22;
  return (unsigned int)v26;
}
