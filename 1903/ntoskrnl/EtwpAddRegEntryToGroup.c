/*
 * XREFs of EtwpAddRegEntryToGroup @ 0x1405C46E0
 * Callers:
 *     EtwpSetProviderTraitsCommon @ 0x1405C43F0 (EtwpSetProviderTraitsCommon.c)
 * Callees:
 *     KeStackAttachProcess @ 0x140013AD0 (KeStackAttachProcess.c)
 *     EtwWrite @ 0x140036280 (EtwWrite.c)
 *     KeUnstackDetachProcess @ 0x14003A6B0 (KeUnstackDetachProcess.c)
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x14003F240 (ExReleasePushLockEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExReleaseRundownProtection_0 @ 0x140043820 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1400438A0 (ExAcquireRundownProtection_0.c)
 *     EtwEventEnabled @ 0x140047610 (EtwEventEnabled.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     EtwpReleaseLoggerContext @ 0x1405C4F00 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1405C4F48 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpComputeRegEntryEnableInfo @ 0x1405C5338 (EtwpComputeRegEntryEnableInfo.c)
 *     EtwpAccessCheckFromState @ 0x1405C5520 (EtwpAccessCheckFromState.c)
 *     EtwpIsGuidAllowed @ 0x1405C55A0 (EtwpIsGuidAllowed.c)
 *     EtwpAccessCheck @ 0x1405D0AFC (EtwpAccessCheck.c)
 *     EtwpGetSchematizedFilterSize @ 0x1405D3DF8 (EtwpGetSchematizedFilterSize.c)
 *     EtwpUnreferenceGuidEntry @ 0x1405D408C (EtwpUnreferenceGuidEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x1405D4180 (EtwpFindGuidEntryByGuid.c)
 *     EtwpReferenceGuidEntry @ 0x1405D4274 (EtwpReferenceGuidEntry.c)
 *     EtwpApplyScopeFilters @ 0x1405D42C0 (EtwpApplyScopeFilters.c)
 *     EtwpAddGuidEntry @ 0x1406669DC (EtwpAddGuidEntry.c)
 *     EtwpProviderArrivalCallback @ 0x140734520 (EtwpProviderArrivalCallback.c)
 *     EtwpCopySchematizedFilters @ 0x1408FF09C (EtwpCopySchematizedFilters.c)
 */

__int64 __fastcall EtwpAddRegEntryToGroup(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int *a5)
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
  __int64 v28; // r15
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
  struct _KPROCESS *v41; // rcx
  __int64 v42; // rdx
  unsigned __int8 v43; // si
  __int64 v44; // r14
  __int64 v45; // rdi
  __int16 v46; // ax
  struct _KPROCESS *v47; // rcx
  __int64 v48; // rdx
  void (__fastcall *v49)(GUID *, __int64, _QWORD, __int64, __int64, PVOID *, _QWORD); // rsi
  PVOID PoolWithTag; // rdi
  unsigned int v51; // r14d
  __int64 v52; // rsi
  unsigned int *v53; // rdi
  int v54; // eax
  REGHANDLE v55; // rsi
  ULONGLONG v56; // rax
  __int64 v57; // rax
  char v59[8]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 GuidEntryByGuid; // [rsp+48h] [rbp-B8h]
  SIZE_T NumberOfBytes; // [rsp+50h] [rbp-B0h]
  __int64 v62; // [rsp+58h] [rbp-A8h]
  PVOID *v63; // [rsp+60h] [rbp-A0h]
  unsigned int *v64; // [rsp+68h] [rbp-98h]
  __int64 v65; // [rsp+70h] [rbp-90h]
  _QWORD v66[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v67; // [rsp+90h] [rbp-70h]
  __int64 v68; // [rsp+98h] [rbp-68h]
  PVOID v69; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v70; // [rsp+A8h] [rbp-58h]
  struct _KAPC_STATE ApcState; // [rsp+B0h] [rbp-50h] BYREF
  struct _KAPC_STATE v72; // [rsp+E0h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+110h] [rbp+10h] BYREF
  __int64 v74; // [rsp+120h] [rbp+20h]
  __int64 v75; // [rsp+128h] [rbp+28h]

  v63 = 0LL;
  v6 = *(_QWORD *)(a1 + 32);
  v65 = a3;
  v64 = a5;
  v9 = 0;
  v10 = *(_QWORD *)(v6 + 392);
  v62 = v10;
  GuidEntryByGuid = EtwpFindGuidEntryByGuid(v10, a2, 2LL);
  v11 = GuidEntryByGuid;
  if ( !GuidEntryByGuid )
  {
    GuidEntryByGuid = EtwpAddGuidEntry(v10, a2, 2LL);
    v11 = GuidEntryByGuid;
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
    v12 = EtwpAccessCheck(*(PSECURITY_DESCRIPTOR *)(v11 + 72), 0x1000u);
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
          v10 = v62;
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
    v59[0] = v9;
    LOBYTE(v16) = 2;
    EtwpApplyScopeFilters(a1, 0, v16, 0, (__int64)v59);
    v28 = GuidEntryByGuid;
    v29 = v9 & v59[0];
    *(_BYTE *)(a1 + 101) = v9 & v59[0];
    v30 = *(_QWORD *)(v28 + 400);
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
      v59[0] = v31;
      LOBYTE(v27) = 1;
      LOBYTE(v26) = 2;
      EtwpApplyScopeFilters(a1, 0, v26, v27, (__int64)v59);
      *(_BYTE *)(a1 + 103) = v31 & v59[0];
      v29 = *(_BYTE *)(a1 + 101);
    }
    if ( v29 )
    {
      v36 = v62;
      v37 = 0;
      v38 = 0LL;
      do
      {
        if ( ((unsigned __int8)(1 << v37) & *(_BYTE *)(a1 + 101)) != 0 )
        {
          v39 = EtwpAcquireLoggerContextByLoggerId(v36, *(unsigned __int16 *)(*(_QWORD *)(a1 + 40) + v38 + 134), 0LL);
          v40 = *(_WORD *)(a1 + 98);
          if ( (v40 & 0x20) != 0 || (*(_DWORD *)(v39 + 832) & 0x2000000) != 0 )
          {
            if ( (v40 & 1) != 0 )
            {
              EtwpProviderArrivalCallback(v39, 0LL, a1);
            }
            else if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)(a1 + 80) + 768LL)) )
            {
              v41 = *(struct _KPROCESS **)(a1 + 80);
              memset(&ApcState, 0, sizeof(ApcState));
              KeStackAttachProcess(v41, &ApcState);
              LOBYTE(v42) = 1;
              EtwpProviderArrivalCallback(v39, v42, a1);
              KeUnstackDetachProcess(&ApcState);
              ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)(a1 + 80) + 768LL));
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
      *v64 = 0;
      v12 = 0;
LABEL_79:
      v11 = GuidEntryByGuid;
      goto LABEL_80;
    }
    v43 = 0;
    v44 = 0LL;
    do
    {
      if ( ((unsigned __int8)(1 << v43) & *(_BYTE *)(a1 + 103)) != 0 )
      {
        v45 = EtwpAcquireLoggerContextByLoggerId(
                EtwpHostSiloState,
                *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 400LL) + v44 + 134),
                0LL);
        v46 = *(_WORD *)(a1 + 98);
        if ( (v46 & 0x20) != 0 || (*(_DWORD *)(v45 + 832) & 0x2000000) != 0 )
        {
          if ( (v46 & 1) != 0 )
          {
            EtwpProviderArrivalCallback(v45, 0LL, a1);
          }
          else if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)(a1 + 80) + 768LL)) )
          {
            v47 = *(struct _KPROCESS **)(a1 + 80);
            memset(&v72, 0, sizeof(v72));
            KeStackAttachProcess(v47, &v72);
            LOBYTE(v48) = 1;
            EtwpProviderArrivalCallback(v45, v48, a1);
            KeUnstackDetachProcess(&v72);
            ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)(a1 + 80) + 768LL));
          }
        }
        EtwpReleaseLoggerContext(v45, 0LL);
      }
      ++v43;
      v44 += 32LL;
    }
    while ( v43 < 8u );
LABEL_68:
    if ( (*(_BYTE *)(a1 + 98) & 1) != 0 )
    {
      v49 = *(void (__fastcall **)(GUID *, __int64, _QWORD, __int64, __int64, PVOID *, _QWORD))(a1 + 88);
      if ( v49 )
      {
        v69 = 0LL;
        v70 = 0LL;
        PoolWithTag = 0LL;
        v66[0] = 0LL;
        v66[1] = 0LL;
        v67 = 0LL;
        v68 = 0LL;
        EtwpComputeRegEntryEnableInfo(a1, v66);
        v51 = NumberOfBytes;
        if ( (_DWORD)NumberOfBytes )
        {
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x46777445u);
          if ( PoolWithTag )
          {
            v63 = &v69;
            v69 = PoolWithTag;
            v70 = v51 | 0x8000000000000000uLL;
            EtwpCopySchematizedFilters(PoolWithTag);
          }
        }
        v49(&NullGuid, 1LL, BYTE4(v66[0]), v67, v68, v63, *(_QWORD *)(a1 + 80));
        if ( PoolWithTag )
          ExFreePoolWithTag(PoolWithTag, 0);
      }
    }
    else
    {
      v52 = v65;
      EtwpComputeRegEntryEnableInfo(a1, v65 + 72);
      v53 = v64;
      *v64 = 120;
      v54 = EtwpGetSchematizedFilterSize(*(_QWORD *)(a1 + 32), *(unsigned __int8 *)(a1 + 100));
      if ( v54 )
      {
        *v53 = v54 + 136;
        *(_DWORD *)(v52 + 132) = 0x80000000;
        *(_DWORD *)(v52 + 128) = v54;
        *(_QWORD *)(v52 + 120) = 136LL;
        EtwpCopySchematizedFilters((void *)(v52 + 136));
        *(_DWORD *)(v52 + 116) = 1;
      }
      else
      {
        *(_DWORD *)(v52 + 116) = 0;
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
  EtwpUnreferenceGuidEntry(v11);
  if ( v12 >= 0 )
  {
    v55 = EtwpEventTracingProvRegHandle;
    if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_GROUP_JOIN) )
    {
      v56 = *(_QWORD *)(a1 + 32) + 40LL;
      *(_QWORD *)&UserData.Size = 16LL;
      UserData.Ptr = v56;
      v57 = *(_QWORD *)(a1 + 40);
      v75 = 16LL;
      v74 = v57 + 40;
      EtwWrite(v55, &ETW_EVENT_GROUP_JOIN, 0LL, 2u, &UserData);
    }
  }
  return (unsigned int)v12;
}
