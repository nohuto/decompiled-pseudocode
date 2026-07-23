/*
 * XREFs of EtwpRegisterProvider @ 0x1406BF84C
 * Callers:
 *     EtwRegisterClassicProvider @ 0x1406BF790 (EtwRegisterClassicProvider.c)
 *     EtwRegister @ 0x1406BF7E0 (EtwRegister.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     KeEnterCriticalRegion @ 0x1400B9B40 (KeEnterCriticalRegion.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     EtwpAddGuidEntry @ 0x1405C1A0C (EtwpAddGuidEntry.c)
 *     EtwpTrackProviderRegistration @ 0x1405C2F34 (EtwpTrackProviderRegistration.c)
 *     EtwpUpdateEnableMask @ 0x1405C309C (EtwpUpdateEnableMask.c)
 *     EtwpGetSchematizedFilterSize @ 0x1405C4DE8 (EtwpGetSchematizedFilterSize.c)
 *     EtwpUnreferenceGuidEntry @ 0x1405C5098 (EtwpUnreferenceGuidEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x1405C5190 (EtwpFindGuidEntryByGuid.c)
 *     EtwpComputeRegEntryEnableInfo @ 0x1405C639C (EtwpComputeRegEntryEnableInfo.c)
 *     EtwpAddKmRegEntry @ 0x1406BFBD8 (EtwpAddKmRegEntry.c)
 *     EtwpEventWriteTemplateSessAndProv @ 0x1408BC250 (EtwpEventWriteTemplateSessAndProv.c)
 *     EtwpCopySchematizedFilters @ 0x1408C3164 (EtwpCopySchematizedFilters.c)
 */

__int64 __fastcall EtwpRegisterProvider(
        __int64 a1,
        _DWORD *a2,
        int a3,
        void (__fastcall *a4)(GUID *, __int64, __int64, __int64, __int64, __int64, __int64),
        __int64 a5,
        __int64 a6,
        _QWORD *a7)
{
  _QWORD *GuidEntryByGuid; // rbx
  int v12; // r13d
  ULONG_PTR v13; // rsi
  _BYTE *v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rdx
  unsigned __int8 v17; // dl
  PVOID PoolWithTag; // rsi
  unsigned int SchematizedFilterSize; // eax
  __int64 v20; // r8
  unsigned int v21; // r12d
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rax
  __int64 v25[2]; // [rsp+40h] [rbp-51h] BYREF
  __int64 v26; // [rsp+50h] [rbp-41h]
  int v27; // [rsp+58h] [rbp-39h] BYREF
  char v28; // [rsp+5Ch] [rbp-35h]
  __int64 v29; // [rsp+68h] [rbp-29h]
  __int64 v30; // [rsp+70h] [rbp-21h]
  PVOID v31; // [rsp+78h] [rbp-19h] BYREF
  unsigned int v32; // [rsp+80h] [rbp-11h]
  unsigned int v33; // [rsp+84h] [rbp-Dh]
  __int128 v34; // [rsp+88h] [rbp-9h] BYREF

  v25[0] = 0LL;
  v26 = a5;
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
    v13 = (ULONG_PTR)(GuidEntryByGuid + 51);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(GuidEntryByGuid + 51), 0LL);
    GuidEntryByGuid[52] = KeGetCurrentThread();
    v12 = EtwpAddKmRegEntry((ULONG_PTR)GuidEntryByGuid, (__int64)v25);
    if ( v12 >= 0 )
    {
      v14 = (_BYTE *)v25[0];
      *(_QWORD *)(v25[0] + 48) = a6;
      *a7 = v14;
      if ( *((_DWORD *)GuidEntryByGuid + 24) )
        EtwpUpdateEnableMask((__int64)GuidEntryByGuid, (v14[98] & 8) != 0, 0, 0, v14 + 100);
      v15 = GuidEntryByGuid[50];
      if ( v15 && *(_DWORD *)(v15 + 96) )
        EtwpUpdateEnableMask(v15, (v14[98] & 8) != 0, 1, 0, v14 + 102);
      EtwpComputeRegEntryEnableInfo((__int64)v14, (unsigned __int8 *)&v27);
      EtwpTrackProviderRegistration((__int64)v14);
      if ( a4 )
      {
        if ( (v14[98] & 8) != 0 )
        {
          if ( (*((_BYTE *)GuidEntryByGuid + 91) & 1) != 0 )
          {
            LOWORD(v25[0]) = *((_WORD *)GuidEntryByGuid + 44);
            LOBYTE(v16) = 1;
            WORD1(v25[0]) = *((unsigned __int8 *)GuidEntryByGuid + 90);
            HIDWORD(v25[0]) = *((_DWORD *)GuidEntryByGuid + 20);
            v25[1] = *((unsigned int *)GuidEntryByGuid + 21);
            v34 = *(_OWORD *)v25;
            ((void (__fastcall *)(_QWORD *, __int64, __int128 *, __int64))a4)(GuidEntryByGuid + 5, v16, &v34, v26);
          }
        }
        else if ( v27 )
        {
          v17 = v14[100];
          PoolWithTag = 0LL;
          v25[0] = 0LL;
          SchematizedFilterSize = EtwpGetSchematizedFilterSize((__int64)GuidEntryByGuid, v17);
          v21 = SchematizedFilterSize;
          if ( SchematizedFilterSize )
          {
            PoolWithTag = ExAllocatePoolWithTag(PagedPool, SchematizedFilterSize, 0x46777445u);
            if ( PoolWithTag )
            {
              v31 = PoolWithTag;
              v32 = v21;
              v33 = 0x80000000;
              v25[0] = (__int64)&v31;
              EtwpCopySchematizedFilters(PoolWithTag);
            }
          }
          LOBYTE(v20) = v28;
          a4(&NullGuid, 1LL, v20, v29, v30, v25[0], v26);
          if ( PoolWithTag )
            ExFreePoolWithTag(PoolWithTag, 0);
          v13 = (ULONG_PTR)(GuidEntryByGuid + 51);
        }
      }
      if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_PROVIDER_REGISTER) )
        EtwpEventWriteTemplateSessAndProv(v22, &ETW_EVENT_PROVIDER_REGISTER, v23, 1LL, 0LL, a2);
    }
    GuidEntryByGuid[52] = 0LL;
    ExReleasePushLockEx(v13, 0LL);
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
  return (unsigned int)v12;
}
