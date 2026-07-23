/*
 * XREFs of EtwpRegisterProvider @ 0x14071A39C
 * Callers:
 *     EtwRegisterClassicProvider @ 0x14071A2E0 (EtwRegisterClassicProvider.c)
 *     EtwRegister @ 0x14071A330 (EtwRegister.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14003EF80 (ExReleasePushLockEx.c)
 *     KeEnterCriticalRegion @ 0x140043D20 (KeEnterCriticalRegion.c)
 *     EtwEventEnabled @ 0x1400476B0 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     EtwpTrackProviderRegistration @ 0x1405C44D8 (EtwpTrackProviderRegistration.c)
 *     EtwpUpdateEnableMask @ 0x1405C4640 (EtwpUpdateEnableMask.c)
 *     EtwpComputeRegEntryEnableInfo @ 0x1405C5838 (EtwpComputeRegEntryEnableInfo.c)
 *     EtwpGetSchematizedFilterSize @ 0x1405D42F8 (EtwpGetSchematizedFilterSize.c)
 *     EtwpUnreferenceGuidEntry @ 0x1405D458C (EtwpUnreferenceGuidEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x1405D4680 (EtwpFindGuidEntryByGuid.c)
 *     EtwpAddGuidEntry @ 0x140693DF0 (EtwpAddGuidEntry.c)
 *     EtwpAddKmRegEntry @ 0x14071A748 (EtwpAddKmRegEntry.c)
 *     EtwpEventWriteTemplateSessAndProv @ 0x1408F7494 (EtwpEventWriteTemplateSessAndProv.c)
 *     EtwpCopySchematizedFilters @ 0x1408FE9F0 (EtwpCopySchematizedFilters.c)
 */

__int64 __fastcall EtwpRegisterProvider(
        __int64 a1,
        _DWORD *a2,
        int a3,
        void (__fastcall *a4)(_QWORD *, __int64, __int128 *, __int64),
        __int64 a5,
        __int64 a6,
        _QWORD *a7)
{
  _QWORD *GuidEntryByGuid; // rbx
  int v13; // r13d
  ULONG_PTR v14; // rsi
  _BYTE *v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rdx
  PVOID PoolWithTag; // rsi
  unsigned int SchematizedFilterSize; // eax
  __int64 v20; // r8
  unsigned int v21; // r12d
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rax
  __int64 v25; // [rsp+40h] [rbp-61h] BYREF
  __int128 v26; // [rsp+48h] [rbp-59h]
  __int64 v27; // [rsp+58h] [rbp-49h]
  _QWORD v28[4]; // [rsp+60h] [rbp-41h] BYREF
  PVOID v29; // [rsp+80h] [rbp-21h] BYREF
  unsigned __int64 v30; // [rsp+88h] [rbp-19h]
  __int128 v31; // [rsp+90h] [rbp-11h] BYREF

  v25 = 0LL;
  v27 = a5;
  memset(v28, 0, sizeof(v28));
  *a7 = 0LL;
  if ( *(_OWORD *)a2 == *(_OWORD *)&SecurityProviderGuid )
    return 3221225506LL;
  if ( !a4 && a5 || a3 != 3 && (a3 != 2 || !a4) )
    return 3221225485LL;
  GuidEntryByGuid = EtwpFindGuidEntryByGuid(a1, a2, 0);
  if ( GuidEntryByGuid || (GuidEntryByGuid = EtwpAddGuidEntry(a1, a2, 0)) != 0LL )
  {
    if ( GuidEntryByGuid[50] )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(GuidEntryByGuid[50] + 408LL, 0LL);
      *(_QWORD *)(GuidEntryByGuid[50] + 416LL) = KeGetCurrentThread();
    }
    KeEnterCriticalRegion();
    v14 = (ULONG_PTR)(GuidEntryByGuid + 51);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(GuidEntryByGuid + 51), 0LL);
    GuidEntryByGuid[52] = KeGetCurrentThread();
    v13 = EtwpAddKmRegEntry((ULONG_PTR)GuidEntryByGuid, (__int64)&v25);
    if ( v13 >= 0 )
    {
      v15 = (_BYTE *)v25;
      *(_QWORD *)(v25 + 48) = a6;
      *a7 = v15;
      if ( *((_DWORD *)GuidEntryByGuid + 24) )
        EtwpUpdateEnableMask((__int64)GuidEntryByGuid, (v15[98] & 8) != 0, 0, 0, v15 + 100);
      v16 = GuidEntryByGuid[50];
      if ( v16 && *(_DWORD *)(v16 + 96) )
        EtwpUpdateEnableMask(v16, (v15[98] & 8) != 0, 1, 0, v15 + 102);
      EtwpComputeRegEntryEnableInfo((__int64)v15, (__int64)v28);
      EtwpTrackProviderRegistration((__int64)v15);
      if ( a4 )
      {
        if ( (v15[98] & 8) != 0 )
        {
          if ( (*((_BYTE *)GuidEntryByGuid + 91) & 1) != 0 )
          {
            LOWORD(v26) = *((_WORD *)GuidEntryByGuid + 44);
            LOBYTE(v17) = 1;
            WORD1(v26) = *((unsigned __int8 *)GuidEntryByGuid + 90);
            *(_QWORD *)((char *)&v26 + 4) = GuidEntryByGuid[10];
            HIDWORD(v26) = 0;
            v31 = v26;
            a4(GuidEntryByGuid + 5, v17, &v31, v27);
          }
        }
        else if ( LODWORD(v28[0]) )
        {
          v25 = 0LL;
          v29 = 0LL;
          v30 = 0LL;
          PoolWithTag = 0LL;
          SchematizedFilterSize = EtwpGetSchematizedFilterSize((__int64)GuidEntryByGuid, v15[100]);
          v21 = SchematizedFilterSize;
          if ( SchematizedFilterSize )
          {
            PoolWithTag = ExAllocatePoolWithTag(PagedPool, SchematizedFilterSize, 0x46777445u);
            if ( PoolWithTag )
            {
              v29 = PoolWithTag;
              v30 = v21 | 0x8000000000000000uLL;
              v25 = (__int64)&v29;
              EtwpCopySchematizedFilters(PoolWithTag);
            }
          }
          LOBYTE(v20) = BYTE4(v28[0]);
          ((void (__fastcall *)(GUID *, __int64, __int64, _QWORD, _QWORD, __int64, __int64))a4)(
            &NullGuid,
            1LL,
            v20,
            v28[2],
            v28[3],
            v25,
            v27);
          if ( PoolWithTag )
            ExFreePoolWithTag(PoolWithTag, 0);
          v14 = (ULONG_PTR)(GuidEntryByGuid + 51);
        }
      }
      if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_PROVIDER_REGISTER) )
        EtwpEventWriteTemplateSessAndProv(v22, &ETW_EVENT_PROVIDER_REGISTER, v23, 1LL, 0LL, a2);
    }
    GuidEntryByGuid[52] = 0LL;
    ExReleasePushLockEx(v14, 0LL);
    KeLeaveCriticalRegion();
    v24 = GuidEntryByGuid[50];
    if ( v24 )
    {
      *(_QWORD *)(v24 + 416) = 0LL;
      ExReleasePushLockEx(GuidEntryByGuid[50] + 408LL, 0LL);
      KeLeaveCriticalRegion();
    }
    EtwpUnreferenceGuidEntry(GuidEntryByGuid);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v13;
}
