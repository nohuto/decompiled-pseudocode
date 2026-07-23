/*
 * XREFs of EtwpRegisterUMGuid @ 0x1405C4970
 * Callers:
 *     NtTraceControl @ 0x1405C3F40 (NtTraceControl.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     SeAccessCheck @ 0x140051640 (SeAccessCheck.c)
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     KeEnterCriticalRegion @ 0x1400B9B40 (KeEnterCriticalRegion.c)
 *     EtwpAddGuidEntry @ 0x1405C1A0C (EtwpAddGuidEntry.c)
 *     EtwpTrackProviderRegistration @ 0x1405C2F34 (EtwpTrackProviderRegistration.c)
 *     EtwpUpdateEnableMask @ 0x1405C309C (EtwpUpdateEnableMask.c)
 *     EtwpGetSchematizedFilterSize @ 0x1405C4DE8 (EtwpGetSchematizedFilterSize.c)
 *     EtwpUnreferenceGuidEntry @ 0x1405C5098 (EtwpUnreferenceGuidEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x1405C5190 (EtwpFindGuidEntryByGuid.c)
 *     EtwpApplyScopeFilters @ 0x1405C52D0 (EtwpApplyScopeFilters.c)
 *     EtwpAddUmRegEntry @ 0x1405C54C0 (EtwpAddUmRegEntry.c)
 *     EtwpComputeRegEntryEnableInfo @ 0x1405C639C (EtwpComputeRegEntryEnableInfo.c)
 *     SeReleaseSubjectContext @ 0x1405E2240 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140632AA0 (SeCaptureSubjectContext.c)
 *     EtwpEventWriteTemplateSessAndProv @ 0x1408BC250 (EtwpEventWriteTemplateSessAndProv.c)
 *     EtwpCopySchematizedFilters @ 0x1408C3164 (EtwpCopySchematizedFilters.c)
 */

__int64 __fastcall EtwpRegisterUMGuid(__int64 a1, __int64 a2, unsigned int a3, char a4, _DWORD *a5)
{
  int v6; // r15d
  bool v9; // zf
  __int64 *GuidEntryByGuid; // rdi
  int v13; // r14d
  void *v14; // rbx
  __int64 v15; // rdx
  _DWORD *v16; // rbx
  int SchematizedFilterSize; // eax
  unsigned int v18; // ecx
  _BYTE *v19; // rbx
  __int64 v20; // rax
  char v21; // dl
  int v22; // r9d
  __int64 v23; // rcx
  char v24; // dl
  char v25; // al
  unsigned __int8 v26; // r15
  __int64 v27; // rax
  int v28; // eax
  _DWORD *v29; // r12
  int v30; // eax
  int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // r8
  _BYTE v34[4]; // [rsp+50h] [rbp-11h] BYREF
  NTSTATUS AccessStatus[2]; // [rsp+54h] [rbp-Dh] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+5Ch] [rbp-5h] BYREF
  PVOID Object; // [rsp+60h] [rbp-1h] BYREF
  __int64 v38; // [rsp+68h] [rbp+7h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+70h] [rbp+Fh] BYREF
  __int64 v40; // [rsp+C8h] [rbp+67h] BYREF

  v6 = *(_DWORD *)(a2 + 16);
  AccessStatus[1] = *(_DWORD *)(a2 + 20);
  v9 = *(_QWORD *)a2 == *(_QWORD *)&SecurityProviderGuid.Data1;
  v38 = 0LL;
  Object = 0LL;
  LOBYTE(v40) = 0;
  if ( v9 && *(_QWORD *)(a2 + 8) == *(_QWORD *)SecurityProviderGuid.Data4 )
    return 3221225506LL;
  GuidEntryByGuid = (__int64 *)EtwpFindGuidEntryByGuid(a1, a2, (unsigned int)(v6 - 2) > 1);
  if ( GuidEntryByGuid || (GuidEntryByGuid = EtwpAddGuidEntry(a1, (_DWORD *)a2, (unsigned int)(v6 - 2) > 1)) != 0LL )
  {
    v14 = (void *)GuidEntryByGuid[9];
    SeCaptureSubjectContext(&SubjectContext);
    SeAccessCheck(
      v14,
      &SubjectContext,
      0,
      0x800u,
      0,
      0LL,
      (PGENERIC_MAPPING)&EtwpGenericMapping,
      1,
      &GrantedAccess,
      AccessStatus);
    SeReleaseSubjectContext(&SubjectContext);
    v13 = AccessStatus[0];
    if ( AccessStatus[0] < 0 )
    {
LABEL_19:
      EtwpUnreferenceGuidEntry(GuidEntryByGuid);
      return (unsigned int)v13;
    }
    if ( GuidEntryByGuid[50] )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(GuidEntryByGuid[50] + 408, 0LL);
      *(_QWORD *)(GuidEntryByGuid[50] + 416) = KeGetCurrentThread();
    }
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(GuidEntryByGuid + 51), 0LL);
    LOBYTE(v15) = -1;
    v16 = a5;
    GuidEntryByGuid[52] = (__int64)KeGetCurrentThread();
    *v16 = 160;
    SchematizedFilterSize = EtwpGetSchematizedFilterSize(GuidEntryByGuid, v15);
    v18 = 160;
    if ( SchematizedFilterSize )
    {
      v18 = SchematizedFilterSize + 176;
      *v16 = SchematizedFilterSize + 176;
    }
    if ( v18 <= a3 )
    {
      v13 = EtwpAddUmRegEntry((ULONG_PTR)GuidEntryByGuid, (__int64)&Object, (__int64)&v38);
      if ( v13 >= 0 )
      {
        if ( a4 )
          _InterlockedOr16((volatile signed __int16 *)Object + 49, 0x100u);
        v19 = Object;
        *(_QWORD *)(a2 + 24) = v38;
        if ( *((_DWORD *)GuidEntryByGuid + 24) )
          EtwpUpdateEnableMask((__int64)GuidEntryByGuid, (v19[98] & 8) != 0, 0, 1, v19 + 100);
        v21 = v19[98];
        v34[0] = v19[100];
        EtwpApplyScopeFilters((_DWORD)v19, (v21 & 8) != 0, 0, 0, (__int64)v34);
        v23 = GuidEntryByGuid[50];
        if ( v23 )
        {
          if ( *(_DWORD *)(v23 + 96) )
            EtwpUpdateEnableMask(v23, (v19[98] & 8) != 0, 1, 1, v19 + 102);
          LOBYTE(v22) = 1;
          v24 = v19[98];
          LOBYTE(v40) = v19[102];
          EtwpApplyScopeFilters((_DWORD)v19, (v24 & 8) != 0, 0, v22, (__int64)&v40);
        }
        if ( (v19[98] & 8) != 0 )
        {
          v19[100] = v34[0];
          v25 = v40;
          v19[102] = v40;
        }
        else
        {
          v19[100] &= v34[0];
          v19[102] &= v40;
          v25 = v19[102];
        }
        v26 = v19[100];
        if ( v26 || v25 )
        {
          EtwpComputeRegEntryEnableInfo(v19, a2 + 112);
          v28 = *((_BYTE *)GuidEntryByGuid + 91) & 1;
          BYTE3(v40) = 0;
          *(_DWORD *)(a2 + 152) = v28;
          LOWORD(v40) = *((_WORD *)GuidEntryByGuid + 44);
          BYTE2(v40) = *((_BYTE *)GuidEntryByGuid + 90);
          HIDWORD(v40) = *((_DWORD *)GuidEntryByGuid + 20);
          v27 = v40;
        }
        else
        {
          v27 = 0LL;
          *(_QWORD *)(a2 + 112) = 0LL;
          *(_QWORD *)(a2 + 120) = 0LL;
          *(_QWORD *)(a2 + 128) = 0LL;
          *(_QWORD *)(a2 + 136) = 0LL;
          *(_DWORD *)(a2 + 152) = 0;
        }
        v29 = a5;
        *(_QWORD *)(a2 + 144) = v27;
        *v29 = 160;
        v30 = EtwpGetSchematizedFilterSize(GuidEntryByGuid, v26);
        if ( v30 )
        {
          *v29 = v30 + 176;
          *(_DWORD *)(a2 + 168) = v30;
          *(_DWORD *)(a2 + 172) = 0x80000000;
          *(_QWORD *)(a2 + 160) = 136LL;
          EtwpCopySchematizedFilters((void *)(a2 + 176));
          v31 = 1;
        }
        else
        {
          v31 = 0;
        }
        *(_DWORD *)(a2 + 156) = v31;
        *(_DWORD *)(a2 + 44) = *v29;
        EtwpTrackProviderRegistration((__int64)v19);
        if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_PROVIDER_REGISTER) )
          EtwpEventWriteTemplateSessAndProv(v32, &ETW_EVENT_PROVIDER_REGISTER, v33, 1LL, 0LL, a2);
        goto LABEL_15;
      }
    }
    else
    {
      v13 = -1073741789;
    }
    v19 = Object;
LABEL_15:
    GuidEntryByGuid[52] = 0LL;
    ExReleasePushLockEx((ULONG_PTR)(GuidEntryByGuid + 51), 0LL);
    KeLeaveCriticalRegion();
    v20 = GuidEntryByGuid[50];
    if ( v20 )
    {
      *(_QWORD *)(v20 + 416) = 0LL;
      ExReleasePushLockEx(GuidEntryByGuid[50] + 408, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( v19 )
      ObfDereferenceObject(v19);
    goto LABEL_19;
  }
  return (unsigned int)-1073741801;
}
