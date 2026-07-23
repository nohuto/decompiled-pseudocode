/*
 * XREFs of EtwpNotifyGuid @ 0x1406B63E0
 * Callers:
 *     NtTraceControl @ 0x1406865C0 (NtTraceControl.c)
 *     EtwpSendSessionNotification @ 0x1406B6324 (EtwpSendSessionNotification.c)
 * Callees:
 *     PsGetProcessId @ 0x1400045E0 (PsGetProcessId.c)
 *     PsGetCurrentThreadProcessId @ 0x140036B70 (PsGetCurrentThreadProcessId.c)
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14003F240 (ExReleasePushLockEx.c)
 *     KeEnterCriticalRegion @ 0x140043920 (KeEnterCriticalRegion.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     EtwpAccessCheck @ 0x1405D0AFC (EtwpAccessCheck.c)
 *     EtwpUnreferenceGuidEntry @ 0x1405D408C (EtwpUnreferenceGuidEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x1405D4180 (EtwpFindGuidEntryByGuid.c)
 *     EtwpAllocDataBlock @ 0x140663284 (EtwpAllocDataBlock.c)
 *     EtwpFreeFilterInfo @ 0x140664BB4 (EtwpFreeFilterInfo.c)
 *     EtwpSendDataBlock @ 0x140666224 (EtwpSendDataBlock.c)
 *     EtwpUnreferenceDataBlock @ 0x140666F2C (EtwpUnreferenceDataBlock.c)
 *     EtwpCreateUmReplyObject @ 0x1406CD3F4 (EtwpCreateUmReplyObject.c)
 *     EtwpApplyTransientFilters @ 0x14071E62C (EtwpApplyTransientFilters.c)
 *     EtwpDemuxPrivateTraceHandle @ 0x1408FCB1C (EtwpDemuxPrivateTraceHandle.c)
 *     EtwpValidateTraceControlFilterDescriptors @ 0x1408FFA14 (EtwpValidateTraceControlFilterDescriptors.c)
 *     EtwpCheckCurrentUserGuidAccess @ 0x1409001D4 (EtwpCheckCurrentUserGuidAccess.c)
 *     EtwpCheckCurrentUserProcessAccess @ 0x1409001EC (EtwpCheckCurrentUserProcessAccess.c)
 */

__int64 __fastcall EtwpNotifyGuid(__int64 a1, __int64 a2, char a3)
{
  int v3; // esi
  __int64 v7; // r8
  int UmReplyObject; // ebx
  unsigned __int64 v10; // rcx
  unsigned int v11; // eax
  ACCESS_MASK v12; // ebx
  int v13; // eax
  __int64 *GuidEntryByGuid; // rax
  __int64 *v15; // r14
  __int64 *v16; // r13
  int v17; // r15d
  __int64 i; // rbx
  __int16 v19; // ax
  volatile signed __int32 *v20; // rsi
  unsigned int ProcessId; // eax
  int v22; // eax
  __int64 v23; // rax
  bool v24; // zf
  int v25; // [rsp+20h] [rbp-69h]
  bool v26; // [rsp+24h] [rbp-65h]
  volatile signed __int32 *v27; // [rsp+28h] [rbp-61h] BYREF
  volatile signed __int32 *v28; // [rsp+30h] [rbp-59h] BYREF
  PVOID Object; // [rsp+38h] [rbp-51h]
  unsigned __int64 v30; // [rsp+40h] [rbp-49h]
  __int64 v31; // [rsp+48h] [rbp-41h] BYREF
  _QWORD v32[18]; // [rsp+50h] [rbp-39h] BYREF
  __int16 v33; // [rsp+F8h] [rbp+6Fh] BYREF
  int v34; // [rsp+108h] [rbp+7Fh]

  v3 = 0;
  v31 = 0LL;
  Object = 0LL;
  v28 = 0LL;
  v27 = 0LL;
  v34 = 0;
  v26 = 0;
  v30 = 0LL;
  memset(v32, 0, 0x58uLL);
  v7 = *(unsigned int *)(a2 + 4);
  if ( (unsigned int)v7 > 0x10000 )
    return 3221225990LL;
  if ( *(_DWORD *)a2 == 11 )
  {
    if ( (unsigned int)v7 < 0x78 || (v10 = (*(_DWORD *)(a2 + 72) + 7) & 0xFFFFFFF8, v10 >= v7 - 76) )
    {
      UmReplyObject = -2147483643;
      goto LABEL_57;
    }
    v11 = *(_DWORD *)(v10 + a2 + 72);
    if ( v11 )
    {
      v30 = v10 + a2 + 76;
      if ( (unsigned int)EtwpValidateTraceControlFilterDescriptors(v11, v30, (unsigned int)(v7 - (v10 + 76)), v32) )
      {
        UmReplyObject = -1073741811;
        goto LABEL_57;
      }
    }
    *(_DWORD *)a2 = 4;
  }
  *(_DWORD *)(a2 + 36) = PsGetCurrentThreadProcessId();
  if ( *(_DWORD *)a2 == 4 )
  {
    v12 = 128;
    v26 = (int)EtwpCheckCurrentUserGuidAccess(&PrivateLoggerSecurityGuid, 128LL) < 0;
    *(GUID *)(a2 + 40) = PrivateLoggerNotificationGuid;
  }
  else
  {
    v12 = 4;
    v3 = 1;
  }
  v13 = *(_DWORD *)(a2 + 32);
  *(_DWORD *)(a2 + 20) = 0;
  v25 = v13;
  GuidEntryByGuid = EtwpFindGuidEntryByGuid(a1, (_DWORD *)(a2 + 40), v3);
  v15 = GuidEntryByGuid;
  if ( !GuidEntryByGuid )
  {
    UmReplyObject = -1073741163;
    goto LABEL_57;
  }
  if ( a3 )
  {
    if ( *(_DWORD *)a2 != 4 )
    {
      UmReplyObject = EtwpAccessCheck((PSECURITY_DESCRIPTOR)GuidEntryByGuid[9], v12, 0LL);
      if ( UmReplyObject < 0 )
        goto LABEL_56;
    }
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(v15 + 51), 0LL);
  v16 = v15 + 7;
  v15[52] = (__int64)KeGetCurrentThread();
  if ( (__int64 *)*v16 == v16 )
  {
    UmReplyObject = -1073741162;
    goto LABEL_50;
  }
  if ( *(_BYTE *)(a2 + 12) )
  {
    UmReplyObject = EtwpCreateUmReplyObject((ULONG_PTR)v15, (__int64)&v31);
    if ( UmReplyObject < 0 )
      goto LABEL_50;
    *(_QWORD *)(a2 + 24) = Object;
  }
  v17 = EtwpAllocDataBlock(*(unsigned int *)(a2 + 4), (void *)a2, &v28);
  if ( v17 < 0 )
  {
LABEL_25:
    UmReplyObject = -1073741801;
    goto LABEL_50;
  }
  for ( i = *v16; (__int64 *)i != v16; i = *(_QWORD *)i )
  {
    v19 = *(_WORD *)(i + 98);
    v20 = v28;
    if ( (v19 & 2) != 0
      && (v19 & 0x40) == 0
      && (!v30 || (unsigned __int8)EtwpApplyTransientFilters(i, v30, v32[10], v32))
      && (!v25 || (unsigned int)PsGetProcessId(*(PEPROCESS *)(i + 80)) == v25) )
    {
      if ( !v26 || (v17 = EtwpCheckCurrentUserProcessAccess(*(_QWORD *)(i + 80)), v17 >= 0) )
      {
        if ( *(_DWORD *)a2 == 4 && *(_DWORD *)(a2 + 76) != 1 )
        {
          ProcessId = (unsigned int)PsGetProcessId(*(PEPROCESS *)(i + 80));
          v17 = EtwpDemuxPrivateTraceHandle(ProcessId, *(_WORD *)(a2 + 80) & 0x7FFF, &v33);
          if ( v17 < 0 )
            continue;
          if ( v27 )
          {
            EtwpUnreferenceDataBlock(v27);
            v27 = 0LL;
          }
          v17 = EtwpAllocDataBlock(*(unsigned int *)(a2 + 4), (void *)a2, &v27);
          if ( v17 < 0 )
            goto LABEL_25;
          v20 = v27;
          *((_WORD *)v27 + 40) = v33;
        }
        v22 = EtwpSendDataBlock(i, (__int64)v20);
        if ( v22 < 0 )
          v17 = v22;
        else
          ++v34;
      }
    }
  }
  UmReplyObject = 0;
  v23 = v31;
  v24 = v34 == 0;
  *(_DWORD *)(a2 + 20) = v34;
  if ( v24 )
    UmReplyObject = v17;
  *(_QWORD *)(a2 + 24) = v23;
LABEL_50:
  v15[52] = 0LL;
  ExReleasePushLockEx((ULONG_PTR)(v15 + 51), 0LL);
  KeLeaveCriticalRegion();
  if ( v28 )
    EtwpUnreferenceDataBlock(v28);
  if ( v27 )
    EtwpUnreferenceDataBlock(v27);
  if ( Object )
    ObfDereferenceObject(Object);
LABEL_56:
  EtwpUnreferenceGuidEntry(v15);
LABEL_57:
  EtwpFreeFilterInfo((__int64)v32);
  return (unsigned int)UmReplyObject;
}
