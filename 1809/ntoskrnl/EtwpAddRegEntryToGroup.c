/*
 * XREFs of EtwpAddRegEntryToGroup @ 0x1405C3750
 * Callers:
 *     EtwpSetProviderTraitsCommon @ 0x1405C5A10 (EtwpSetProviderTraitsCommon.c)
 * Callees:
 *     KeStackAttachProcess @ 0x140016610 (KeStackAttachProcess.c)
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     EtwWrite @ 0x1400CAE00 (EtwWrite.c)
 *     KeUnstackDetachProcess @ 0x1400F1110 (KeUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     EtwpAddGuidEntry @ 0x1405C1A0C (EtwpAddGuidEntry.c)
 *     EtwpGetSchematizedFilterSize @ 0x1405C4DE8 (EtwpGetSchematizedFilterSize.c)
 *     EtwpUnreferenceGuidEntry @ 0x1405C5098 (EtwpUnreferenceGuidEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x1405C5190 (EtwpFindGuidEntryByGuid.c)
 *     EtwpReferenceGuidEntry @ 0x1405C5288 (EtwpReferenceGuidEntry.c)
 *     EtwpApplyScopeFilters @ 0x1405C52D0 (EtwpApplyScopeFilters.c)
 *     EtwpReleaseLoggerContext @ 0x1405C6160 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1405C61A8 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpAccessCheck @ 0x1405C6280 (EtwpAccessCheck.c)
 *     EtwpComputeRegEntryEnableInfo @ 0x1405C639C (EtwpComputeRegEntryEnableInfo.c)
 *     EtwpAccessCheckFromState @ 0x1405C658C (EtwpAccessCheckFromState.c)
 *     EtwpIsGuidAllowed @ 0x1405C660C (EtwpIsGuidAllowed.c)
 *     EtwpProviderArrivalCallback @ 0x14070B344 (EtwpProviderArrivalCallback.c)
 *     EtwpCopySchematizedFilters @ 0x1408C3164 (EtwpCopySchematizedFilters.c)
 */

__int64 __fastcall EtwpAddRegEntryToGroup(__int64 a1, _DWORD *a2, __int64 a3, unsigned int a4, unsigned int *a5)
{
  __int64 v6; // rax
  char v9; // r13
  __int64 v10; // r12
  ULONG_PTR v11; // r15
  int v12; // edi
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v14; // rax
  int SchematizedFilterSize; // eax
  int v16; // r8d
  _QWORD *v17; // rcx
  __int64 v18; // rdx
  _QWORD *v19; // rax
  __int64 v20; // rax
  unsigned __int8 v21; // r14
  unsigned __int16 *v22; // r15
  __int64 v23; // rsi
  int v24; // r12d
  bool v25; // sf
  int v26; // r8d
  int v27; // r9d
  __int64 *v28; // r15
  char v29; // al
  __int64 v30; // r15
  char v31; // r13
  unsigned __int8 v32; // r14
  unsigned __int16 *v33; // r15
  __int64 v34; // rsi
  int v35; // r12d
  __int64 v36; // r15
  unsigned __int8 v37; // si
  __int64 v38; // r14
  __int64 v39; // rdi
  __int16 v40; // ax
  __int64 v41; // rdx
  unsigned __int8 v42; // si
  __int64 v43; // r14
  __int64 v44; // rdi
  __int16 v45; // ax
  __int64 v46; // rdx
  void (__fastcall *v47)(GUID *, __int64, _QWORD, __int64, __int64, PVOID *, _QWORD); // rsi
  PVOID PoolWithTag; // rdi
  int v49; // r14d
  __int64 v50; // rsi
  unsigned int *v51; // rdi
  int v52; // eax
  REGHANDLE v53; // rsi
  ULONGLONG v54; // rax
  __int64 v55; // rax
  char v57[8]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 *GuidEntryByGuid; // [rsp+48h] [rbp-B8h]
  SIZE_T NumberOfBytes; // [rsp+50h] [rbp-B0h]
  __int64 v60; // [rsp+58h] [rbp-A8h]
  PVOID *v61; // [rsp+60h] [rbp-A0h]
  unsigned int *v62; // [rsp+68h] [rbp-98h]
  __int64 v63; // [rsp+70h] [rbp-90h]
  _QWORD v64[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v65; // [rsp+90h] [rbp-70h]
  __int64 v66; // [rsp+98h] [rbp-68h]
  PVOID v67; // [rsp+A0h] [rbp-60h] BYREF
  int v68; // [rsp+A8h] [rbp-58h]
  unsigned int v69; // [rsp+ACh] [rbp-54h]
  struct _KAPC_STATE ApcState; // [rsp+B0h] [rbp-50h] BYREF
  struct _KAPC_STATE v71; // [rsp+E0h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+110h] [rbp+10h] BYREF
  __int64 v73; // [rsp+120h] [rbp+20h]
  __int64 v74; // [rsp+128h] [rbp+28h]

  v61 = 0LL;
  v6 = *(_QWORD *)(a1 + 32);
  v63 = a3;
  v62 = a5;
  v9 = 0;
  v10 = *(_QWORD *)(v6 + 392);
  v60 = v10;
  GuidEntryByGuid = (__int64 *)EtwpFindGuidEntryByGuid(v10, a2, 2LL);
  v11 = (ULONG_PTR)GuidEntryByGuid;
  if ( !GuidEntryByGuid )
  {
    GuidEntryByGuid = EtwpAddGuidEntry(v10, a2, 2);
    v11 = (ULONG_PTR)GuidEntryByGuid;
    if ( !GuidEntryByGuid )
      return (unsigned int)-1073741801;
  }
  *a5 = 120;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(v11 + 408, 0LL);
  *(_QWORD *)(v11 + 416) = KeGetCurrentThread();
  v14 = KeGetCurrentThread();
  --v14->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(*(_QWORD *)(a1 + 32) + 408LL, 0LL);
  *(_QWORD *)(*(_QWORD *)(a1 + 32) + 416LL) = KeGetCurrentThread();
  if ( !*(_QWORD *)(a1 + 40) )
  {
    v12 = EtwpAccessCheck(*(PSECURITY_DESCRIPTOR *)(v11 + 72), 0x1000u, 0LL);
    if ( v12 < 0 )
      goto LABEL_80;
    SchematizedFilterSize = EtwpGetSchematizedFilterSize(*(_QWORD *)(a1 + 32), *(unsigned __int8 *)(a1 + 100));
    LODWORD(NumberOfBytes) = SchematizedFilterSize;
    if ( SchematizedFilterSize )
      *a5 += SchematizedFilterSize + 16;
    if ( (*(_BYTE *)(a1 + 98) & 2) != 0 && *a5 > a4 )
    {
      v12 = -1073741789;
      goto LABEL_80;
    }
    EtwpReferenceGuidEntry(v11);
    v17 = (_QWORD *)(v11 + 56);
    *(_QWORD *)(a1 + 40) = v11;
    v18 = *(_QWORD *)(v11 + 56);
    v19 = (_QWORD *)(a1 + 16);
    if ( *(_QWORD *)(v18 + 8) != v11 + 56 )
      __fastfail(3u);
    *v19 = v18;
    *(_QWORD *)(a1 + 24) = v17;
    *(_QWORD *)(v18 + 8) = v19;
    *v17 = v19;
    if ( !*(_DWORD *)(v11 + 96) )
    {
      v20 = *(_QWORD *)(v11 + 400);
      if ( !v20 || !*(_DWORD *)(v20 + 96) )
      {
        *a5 = 0;
        v12 = 0;
        goto LABEL_80;
      }
    }
    v21 = 0;
    v22 = (unsigned __int16 *)(v11 + 134);
    do
    {
      if ( *(_DWORD *)(v22 - 3) )
      {
        v23 = EtwpAcquireLoggerContextByLoggerId(v10, *v22, 0LL);
        if ( (unsigned __int8)EtwpIsGuidAllowed(v23, *(_QWORD *)(a1 + 32) + 40LL) )
        {
          ExAcquirePushLockSharedEx(v23 + 704, 0LL);
          if ( *(_QWORD *)(v23 + 792) )
            v24 = EtwpAccessCheckFromState(*(_QWORD *)(a1 + 32) + 40LL);
          else
            v24 = -1073741790;
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v23 + 704), 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)(v23 + 704));
          KeAbPostRelease(v23 + 704);
          EtwpReleaseLoggerContext(v23, 0LL);
          v25 = v24 < 0;
          v10 = v60;
          if ( !v25 )
            v9 += 1 << v21;
        }
        else
        {
          EtwpReleaseLoggerContext(v23, 0LL);
        }
      }
      ++v21;
      v22 += 16;
    }
    while ( v21 < 8u );
    v57[0] = v9;
    LOBYTE(v16) = 2;
    EtwpApplyScopeFilters(a1, 0, v16, 0, (__int64)v57);
    v28 = GuidEntryByGuid;
    v29 = v9 & v57[0];
    *(_BYTE *)(a1 + 101) = v9 & v57[0];
    v30 = v28[50];
    if ( v30 )
    {
      v31 = 0;
      v32 = 0;
      v33 = (unsigned __int16 *)(v30 + 134);
      do
      {
        if ( *(_DWORD *)(v33 - 3) )
        {
          v34 = EtwpAcquireLoggerContextByLoggerId(EtwpHostSiloState, *v33, 0LL);
          if ( (unsigned __int8)EtwpIsGuidAllowed(v34, *(_QWORD *)(a1 + 32) + 40LL) )
          {
            ExAcquirePushLockSharedEx(v34 + 704, 0LL);
            if ( *(_QWORD *)(v34 + 792) )
              v35 = EtwpAccessCheckFromState(*(_QWORD *)(a1 + 32) + 40LL);
            else
              v35 = -1073741790;
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v34 + 704), 0LL, 17LL) != 17 )
              ExfReleasePushLockShared((signed __int64 *)(v34 + 704));
            KeAbPostRelease(v34 + 704);
            EtwpReleaseLoggerContext(v34, 0LL);
            if ( v35 >= 0 )
              v31 += 1 << v32;
          }
          else
          {
            EtwpReleaseLoggerContext(v34, 0LL);
          }
        }
        ++v32;
        v33 += 16;
      }
      while ( v32 < 8u );
      v57[0] = v31;
      LOBYTE(v27) = 1;
      LOBYTE(v26) = 2;
      EtwpApplyScopeFilters(a1, 0, v26, v27, (__int64)v57);
      *(_BYTE *)(a1 + 103) = v31 & v57[0];
      v29 = *(_BYTE *)(a1 + 101);
    }
    if ( v29 )
    {
      v36 = v60;
      v37 = 0;
      v38 = 0LL;
      do
      {
        if ( ((unsigned __int8)(1 << v37) & *(_BYTE *)(a1 + 101)) != 0 )
        {
          v39 = EtwpAcquireLoggerContextByLoggerId(v36, *(unsigned __int16 *)(v38 + *(_QWORD *)(a1 + 40) + 134), 0LL);
          v40 = *(_WORD *)(a1 + 98);
          if ( (v40 & 0x20) != 0 || (*(_DWORD *)(v39 + 832) & 0x2000000) != 0 )
          {
            if ( (v40 & 1) != 0 )
            {
              EtwpProviderArrivalCallback(v39, 0LL, a1);
            }
            else if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)(a1 + 80) + 760LL)) )
            {
              KeStackAttachProcess(*(PRKPROCESS *)(a1 + 80), &ApcState);
              LOBYTE(v41) = 1;
              EtwpProviderArrivalCallback(v39, v41, a1);
              KeUnstackDetachProcess(&ApcState);
              ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)(a1 + 80) + 760LL));
            }
          }
          EtwpReleaseLoggerContext(v39, 0LL);
        }
        ++v37;
        v38 += 32LL;
      }
      while ( v37 < 8u );
      if ( !*(_BYTE *)(a1 + 103) )
        goto LABEL_68;
    }
    else if ( !*(_BYTE *)(a1 + 103) )
    {
      *v62 = 0;
      v12 = 0;
LABEL_79:
      v11 = (ULONG_PTR)GuidEntryByGuid;
      goto LABEL_80;
    }
    v42 = 0;
    v43 = 0LL;
    do
    {
      if ( ((unsigned __int8)(1 << v42) & *(_BYTE *)(a1 + 103)) != 0 )
      {
        v44 = EtwpAcquireLoggerContextByLoggerId(
                EtwpHostSiloState,
                *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 400LL) + v43 + 134),
                0LL);
        v45 = *(_WORD *)(a1 + 98);
        if ( (v45 & 0x20) != 0 || (*(_DWORD *)(v44 + 832) & 0x2000000) != 0 )
        {
          if ( (v45 & 1) != 0 )
          {
            EtwpProviderArrivalCallback(v44, 0LL, a1);
          }
          else if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)(a1 + 80) + 760LL)) )
          {
            KeStackAttachProcess(*(PRKPROCESS *)(a1 + 80), &v71);
            LOBYTE(v46) = 1;
            EtwpProviderArrivalCallback(v44, v46, a1);
            KeUnstackDetachProcess(&v71);
            ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)(a1 + 80) + 760LL));
          }
        }
        EtwpReleaseLoggerContext(v44, 0LL);
      }
      ++v42;
      v43 += 32LL;
    }
    while ( v42 < 8u );
LABEL_68:
    if ( (*(_BYTE *)(a1 + 98) & 1) != 0 )
    {
      v47 = *(void (__fastcall **)(GUID *, __int64, _QWORD, __int64, __int64, PVOID *, _QWORD))(a1 + 88);
      if ( v47 )
      {
        v64[0] = 0LL;
        v64[1] = 0LL;
        PoolWithTag = 0LL;
        v65 = 0LL;
        v66 = 0LL;
        EtwpComputeRegEntryEnableInfo(a1, v64);
        v49 = NumberOfBytes;
        if ( (_DWORD)NumberOfBytes )
        {
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x46777445u);
          if ( PoolWithTag )
          {
            v61 = &v67;
            v67 = PoolWithTag;
            v68 = v49;
            v69 = 0x80000000;
            EtwpCopySchematizedFilters(PoolWithTag);
          }
        }
        v47(&NullGuid, 1LL, BYTE4(v64[0]), v65, v66, v61, *(_QWORD *)(a1 + 80));
        if ( PoolWithTag )
          ExFreePoolWithTag(PoolWithTag, 0);
      }
    }
    else
    {
      v50 = v63;
      EtwpComputeRegEntryEnableInfo(a1, v63 + 72);
      v51 = v62;
      *v62 = 120;
      v52 = EtwpGetSchematizedFilterSize(*(_QWORD *)(a1 + 32), *(unsigned __int8 *)(a1 + 100));
      if ( v52 )
      {
        *v51 = v52 + 136;
        *(_DWORD *)(v50 + 132) = 0x80000000;
        *(_DWORD *)(v50 + 128) = v52;
        *(_QWORD *)(v50 + 120) = 136LL;
        EtwpCopySchematizedFilters((void *)(v50 + 136));
        *(_DWORD *)(v50 + 116) = 1;
      }
      else
      {
        *(_DWORD *)(v50 + 116) = 0;
      }
    }
    v12 = 0;
    goto LABEL_79;
  }
  v12 = 0;
LABEL_80:
  *(_QWORD *)(*(_QWORD *)(a1 + 32) + 416LL) = 0LL;
  ExReleasePushLockEx(*(_QWORD *)(a1 + 32) + 408LL, 0LL);
  KeLeaveCriticalRegion();
  *(_QWORD *)(v11 + 416) = 0LL;
  ExReleasePushLockEx(v11 + 408, 0LL);
  KeLeaveCriticalRegion();
  EtwpUnreferenceGuidEntry((PVOID)v11);
  if ( v12 >= 0 )
  {
    v53 = EtwpEventTracingProvRegHandle;
    if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_GROUP_JOIN) )
    {
      v54 = *(_QWORD *)(a1 + 32) + 40LL;
      *(_QWORD *)&UserData.Size = 16LL;
      UserData.Ptr = v54;
      v55 = *(_QWORD *)(a1 + 40);
      v74 = 16LL;
      v73 = v55 + 40;
      EtwWrite(v53, &ETW_EVENT_GROUP_JOIN, 0LL, 2u, &UserData);
    }
  }
  return (unsigned int)v12;
}
