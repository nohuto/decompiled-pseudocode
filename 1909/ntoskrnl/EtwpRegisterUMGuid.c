/*
 * XREFs of EtwpRegisterUMGuid @ 0x1405D3E90
 * Callers:
 *     NtTraceControl @ 0x14064C530 (NtTraceControl.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14003EF80 (ExReleasePushLockEx.c)
 *     KeEnterCriticalRegion @ 0x140043D20 (KeEnterCriticalRegion.c)
 *     EtwEventEnabled @ 0x1400476B0 (EtwEventEnabled.c)
 *     EtwpTrackProviderRegistration @ 0x1405C44D8 (EtwpTrackProviderRegistration.c)
 *     EtwpUpdateEnableMask @ 0x1405C4640 (EtwpUpdateEnableMask.c)
 *     EtwpComputeRegEntryEnableInfo @ 0x1405C5838 (EtwpComputeRegEntryEnableInfo.c)
 *     EtwpAccessCheck @ 0x1405D0FFC (EtwpAccessCheck.c)
 *     EtwpGetSchematizedFilterSize @ 0x1405D42F8 (EtwpGetSchematizedFilterSize.c)
 *     EtwpUnreferenceGuidEntry @ 0x1405D458C (EtwpUnreferenceGuidEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x1405D4680 (EtwpFindGuidEntryByGuid.c)
 *     EtwpApplyScopeFilters @ 0x1405D47C0 (EtwpApplyScopeFilters.c)
 *     EtwpAddUmRegEntry @ 0x1405D49B0 (EtwpAddUmRegEntry.c)
 *     EtwpAddGuidEntry @ 0x140693DF0 (EtwpAddGuidEntry.c)
 *     PsDereferencePrimaryToken @ 0x1406E5560 (PsDereferencePrimaryToken.c)
 *     EtwpEventWriteTemplateSessAndProv @ 0x1408F7494 (EtwpEventWriteTemplateSessAndProv.c)
 *     EtwpCopySchematizedFilters @ 0x1408FE9F0 (EtwpCopySchematizedFilters.c)
 */

__int64 __fastcall EtwpRegisterUMGuid(__int64 a1, __int64 a2, unsigned int a3, char a4, _DWORD *a5)
{
  int v6; // r14d
  bool v9; // zf
  __int64 GuidEntryByGuid; // rdi
  int v13; // ebp
  __int64 v14; // rdx
  _DWORD *v15; // r13
  int SchematizedFilterSize; // eax
  unsigned int v17; // ecx
  _BYTE *v18; // rbx
  __int64 v19; // rax
  char v20; // dl
  int v21; // r9d
  __int64 v22; // rcx
  char v23; // dl
  char v24; // al
  unsigned __int8 v25; // r14
  __int64 v26; // rax
  int v27; // edx
  int v28; // eax
  int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // r8
  _BYTE v32[4]; // [rsp+30h] [rbp-48h] BYREF
  int v33; // [rsp+34h] [rbp-44h]
  PACCESS_TOKEN PrimaryToken; // [rsp+38h] [rbp-40h] BYREF
  __int64 v35[7]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v36; // [rsp+88h] [rbp+10h] BYREF

  v6 = *(_DWORD *)(a2 + 16);
  v33 = *(_DWORD *)(a2 + 20);
  v9 = *(_QWORD *)a2 == *(_QWORD *)&SecurityProviderGuid.Data1;
  v35[0] = 0LL;
  PrimaryToken = 0LL;
  LOBYTE(v36) = 0;
  if ( v9 && *(_QWORD *)(a2 + 8) == *(_QWORD *)SecurityProviderGuid.Data4 )
    return 3221225506LL;
  GuidEntryByGuid = EtwpFindGuidEntryByGuid(a1, a2, (unsigned int)(v6 - 2) > 1);
  if ( GuidEntryByGuid || (GuidEntryByGuid = EtwpAddGuidEntry(a1, a2, (unsigned int)(v6 - 2) > 1)) != 0 )
  {
    v13 = EtwpAccessCheck(*(PSECURITY_DESCRIPTOR *)(GuidEntryByGuid + 72), 0x800u, 0LL);
    if ( v13 < 0 )
    {
LABEL_19:
      EtwpUnreferenceGuidEntry(GuidEntryByGuid);
      return (unsigned int)v13;
    }
    if ( *(_QWORD *)(GuidEntryByGuid + 400) )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(*(_QWORD *)(GuidEntryByGuid + 400) + 408LL, 0LL);
      *(_QWORD *)(*(_QWORD *)(GuidEntryByGuid + 400) + 416LL) = KeGetCurrentThread();
    }
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(GuidEntryByGuid + 408, 0LL);
    LOBYTE(v14) = -1;
    v15 = a5;
    *(_QWORD *)(GuidEntryByGuid + 416) = KeGetCurrentThread();
    *v15 = 160;
    SchematizedFilterSize = EtwpGetSchematizedFilterSize(GuidEntryByGuid, v14);
    v17 = 160;
    if ( SchematizedFilterSize )
    {
      v17 = SchematizedFilterSize + 176;
      *v15 = SchematizedFilterSize + 176;
    }
    if ( v17 <= a3 )
    {
      v13 = EtwpAddUmRegEntry(GuidEntryByGuid, (__int64)&PrimaryToken, (__int64)v35);
      if ( v13 >= 0 )
      {
        if ( a4 )
          _InterlockedOr16((volatile signed __int16 *)PrimaryToken + 49, 0x100u);
        v18 = PrimaryToken;
        *(_QWORD *)(a2 + 24) = v35[0];
        if ( *(_DWORD *)(GuidEntryByGuid + 96) )
          EtwpUpdateEnableMask(GuidEntryByGuid, (v18[98] & 8) != 0, 0, 1, v18 + 100);
        v20 = v18[98];
        v32[0] = v18[100];
        EtwpApplyScopeFilters((_DWORD)v18, (v20 & 8) != 0, 0, 0, (__int64)v32);
        v22 = *(_QWORD *)(GuidEntryByGuid + 400);
        if ( v22 )
        {
          if ( *(_DWORD *)(v22 + 96) )
            EtwpUpdateEnableMask(v22, (v18[98] & 8) != 0, 1, 1, v18 + 102);
          LOBYTE(v21) = 1;
          v23 = v18[98];
          LOBYTE(v36) = v18[102];
          EtwpApplyScopeFilters((_DWORD)v18, (v23 & 8) != 0, 0, v21, (__int64)&v36);
        }
        if ( (v18[98] & 8) != 0 )
        {
          v18[100] = v32[0];
          v24 = v36;
          v18[102] = v36;
        }
        else
        {
          v18[100] &= v32[0];
          v18[102] &= v36;
          v24 = v18[102];
        }
        v25 = v18[100];
        if ( v25 || v24 )
        {
          EtwpComputeRegEntryEnableInfo((__int64)v18, a2 + 112);
          v27 = *(_BYTE *)(GuidEntryByGuid + 91) & 1;
          BYTE3(v36) = 0;
          *(_DWORD *)(a2 + 152) = v27;
          LOWORD(v36) = *(_WORD *)(GuidEntryByGuid + 88);
          BYTE2(v36) = *(_BYTE *)(GuidEntryByGuid + 90);
          HIDWORD(v36) = *(_DWORD *)(GuidEntryByGuid + 80);
          v26 = v36;
        }
        else
        {
          v26 = 0LL;
          *(_QWORD *)(a2 + 112) = 0LL;
          *(_QWORD *)(a2 + 120) = 0LL;
          *(_QWORD *)(a2 + 128) = 0LL;
          *(_QWORD *)(a2 + 136) = 0LL;
          *(_DWORD *)(a2 + 152) = 0;
        }
        *(_QWORD *)(a2 + 144) = v26;
        *v15 = 160;
        v28 = EtwpGetSchematizedFilterSize(GuidEntryByGuid, v25);
        if ( v28 )
        {
          *v15 = v28 + 176;
          *(_DWORD *)(a2 + 168) = v28;
          *(_DWORD *)(a2 + 172) = 0x80000000;
          *(_QWORD *)(a2 + 160) = 136LL;
          EtwpCopySchematizedFilters((void *)(a2 + 176));
          v29 = 1;
        }
        else
        {
          v29 = 0;
        }
        *(_DWORD *)(a2 + 156) = v29;
        *(_DWORD *)(a2 + 44) = *v15;
        EtwpTrackProviderRegistration((__int64)v18);
        if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_PROVIDER_REGISTER) )
          EtwpEventWriteTemplateSessAndProv(v30, &ETW_EVENT_PROVIDER_REGISTER, v31, 1LL, 0LL, a2);
        goto LABEL_15;
      }
    }
    else
    {
      v13 = -1073741789;
    }
    v18 = PrimaryToken;
LABEL_15:
    *(_QWORD *)(GuidEntryByGuid + 416) = 0LL;
    ExReleasePushLockEx(GuidEntryByGuid + 408, 0LL);
    KeLeaveCriticalRegion();
    v19 = *(_QWORD *)(GuidEntryByGuid + 400);
    if ( v19 )
    {
      *(_QWORD *)(v19 + 416) = 0LL;
      ExReleasePushLockEx(*(_QWORD *)(GuidEntryByGuid + 400) + 408LL, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( v18 )
      PsDereferencePrimaryToken(v18);
    goto LABEL_19;
  }
  return (unsigned int)-1073741801;
}
