/*
 * XREFs of EtwpNotifyGuid @ 0x1406A9BCC
 * Callers:
 *     NtTraceControl @ 0x14064C530 (NtTraceControl.c)
 *     EtwpSendSessionNotification @ 0x1406A9B10 (EtwpSendSessionNotification.c)
 * Callees:
 *     PsGetProcessId @ 0x140004670 (PsGetProcessId.c)
 *     PsGetCurrentThreadProcessId @ 0x140036F60 (PsGetCurrentThreadProcessId.c)
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14003EF80 (ExReleasePushLockEx.c)
 *     KeEnterCriticalRegion @ 0x140043D20 (KeEnterCriticalRegion.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     EtwpAccessCheck @ 0x1405D0FFC (EtwpAccessCheck.c)
 *     EtwpUnreferenceGuidEntry @ 0x1405D458C (EtwpUnreferenceGuidEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x1405D4680 (EtwpFindGuidEntryByGuid.c)
 *     EtwpFreeFilterInfo @ 0x140691FC8 (EtwpFreeFilterInfo.c)
 *     EtwpSendDataBlock @ 0x140693638 (EtwpSendDataBlock.c)
 *     EtwpUnreferenceDataBlock @ 0x14069434C (EtwpUnreferenceDataBlock.c)
 *     EtwpAllocDataBlock @ 0x1406AAAE4 (EtwpAllocDataBlock.c)
 *     EtwpCreateUmReplyObject @ 0x1406CC224 (EtwpCreateUmReplyObject.c)
 *     EtwpApplyTransientFilters @ 0x1407204BC (EtwpApplyTransientFilters.c)
 *     EtwpDemuxPrivateTraceHandle @ 0x1408FC4FC (EtwpDemuxPrivateTraceHandle.c)
 *     EtwpValidateTraceControlFilterDescriptors @ 0x1408FF368 (EtwpValidateTraceControlFilterDescriptors.c)
 *     EtwpCheckCurrentUserGuidAccess @ 0x1408FFB34 (EtwpCheckCurrentUserGuidAccess.c)
 *     EtwpCheckCurrentUserProcessAccess @ 0x1408FFB4C (EtwpCheckCurrentUserProcessAccess.c)
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
  unsigned int ProcessId; // eax
  int v21; // eax
  __int64 v22; // rax
  bool v23; // zf
  int v24; // [rsp+20h] [rbp-69h]
  bool v25; // [rsp+24h] [rbp-65h]
  unsigned __int64 v26; // [rsp+40h] [rbp-49h]
  __int64 v27; // [rsp+48h] [rbp-41h] BYREF
  _QWORD v28[18]; // [rsp+50h] [rbp-39h] BYREF
  __int16 v29; // [rsp+F8h] [rbp+6Fh] BYREF
  int v30; // [rsp+108h] [rbp+7Fh]

  v3 = 0;
  v27 = 0LL;
  v30 = 0;
  v25 = 0;
  v26 = 0LL;
  memset(v28, 0, 0x58uLL);
  v7 = *(unsigned int *)(a2 + 4);
  if ( (unsigned int)v7 > 0x10000 )
    return 3221225990LL;
  if ( *(_DWORD *)a2 == 11 )
  {
    if ( (unsigned int)v7 < 0x78 || (v10 = (*(_DWORD *)(a2 + 72) + 7) & 0xFFFFFFF8, v10 >= v7 - 76) )
    {
      UmReplyObject = -2147483643;
      goto LABEL_52;
    }
    v11 = *(_DWORD *)(v10 + a2 + 72);
    if ( v11 )
    {
      v26 = v10 + a2 + 76;
      if ( (unsigned int)EtwpValidateTraceControlFilterDescriptors(v11, v26, (unsigned int)(v7 - (v10 + 76)), v28) )
      {
        UmReplyObject = -1073741811;
        goto LABEL_52;
      }
    }
    *(_DWORD *)a2 = 4;
  }
  *(_DWORD *)(a2 + 36) = PsGetCurrentThreadProcessId();
  if ( *(_DWORD *)a2 == 4 )
  {
    if ( *(_DWORD *)(a2 + 4) < 0xF8u )
    {
      UmReplyObject = -1073741789;
      goto LABEL_52;
    }
    v12 = 128;
    v25 = (int)EtwpCheckCurrentUserGuidAccess(&PrivateLoggerSecurityGuid, 128LL) < 0;
    *(GUID *)(a2 + 40) = PrivateLoggerNotificationGuid;
  }
  else
  {
    v12 = 4;
    v3 = 1;
  }
  v13 = *(_DWORD *)(a2 + 32);
  *(_DWORD *)(a2 + 20) = 0;
  v24 = v13;
  GuidEntryByGuid = EtwpFindGuidEntryByGuid(a1, (_DWORD *)(a2 + 40), v3);
  v15 = GuidEntryByGuid;
  if ( !GuidEntryByGuid )
  {
    UmReplyObject = -1073741163;
    goto LABEL_52;
  }
  if ( a3 )
  {
    if ( *(_DWORD *)a2 != 4 )
    {
      UmReplyObject = EtwpAccessCheck((PSECURITY_DESCRIPTOR)GuidEntryByGuid[9], v12, 0LL);
      if ( UmReplyObject < 0 )
        goto LABEL_51;
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
    UmReplyObject = EtwpCreateUmReplyObject((ULONG_PTR)v15, (__int64)&v27);
    if ( UmReplyObject < 0 )
      goto LABEL_50;
    *(_QWORD *)(a2 + 24) = 0LL;
  }
  v17 = EtwpAllocDataBlock(*(unsigned int *)(a2 + 4), (void *)a2);
  if ( v17 < 0 )
  {
LABEL_27:
    UmReplyObject = -1073741801;
    goto LABEL_50;
  }
  for ( i = *v16; (__int64 *)i != v16; i = *(_QWORD *)i )
  {
    v19 = *(_WORD *)(i + 98);
    if ( (v19 & 2) != 0
      && (v19 & 0x40) == 0
      && (!v26 || (unsigned __int8)EtwpApplyTransientFilters(i, v26, v28[10], v28))
      && (!v24 || (unsigned int)PsGetProcessId(*(PEPROCESS *)(i + 80)) == v24) )
    {
      if ( !v25 || (v17 = EtwpCheckCurrentUserProcessAccess(*(_QWORD *)(i + 80)), v17 >= 0) )
      {
        if ( *(_DWORD *)a2 == 4 && *(_DWORD *)(a2 + 76) != 1 )
        {
          ProcessId = (unsigned int)PsGetProcessId(*(PEPROCESS *)(i + 80));
          v17 = EtwpDemuxPrivateTraceHandle(ProcessId, *(_WORD *)(a2 + 80) & 0x7FFF, &v29);
          if ( v17 < 0 )
            continue;
          v17 = EtwpAllocDataBlock(*(unsigned int *)(a2 + 4), (void *)a2);
          if ( v17 < 0 )
            goto LABEL_27;
          MEMORY[0x50] = v29;
        }
        v21 = EtwpSendDataBlock(i, 0LL);
        if ( v21 < 0 )
          v17 = v21;
        else
          ++v30;
      }
    }
  }
  UmReplyObject = 0;
  v22 = v27;
  v23 = v30 == 0;
  *(_DWORD *)(a2 + 20) = v30;
  if ( v23 )
    UmReplyObject = v17;
  *(_QWORD *)(a2 + 24) = v22;
LABEL_50:
  v15[52] = 0LL;
  ExReleasePushLockEx((ULONG_PTR)(v15 + 51), 0LL);
  KeLeaveCriticalRegion();
LABEL_51:
  EtwpUnreferenceGuidEntry(v15);
LABEL_52:
  EtwpFreeFilterInfo((__int64)v28);
  return (unsigned int)UmReplyObject;
}
