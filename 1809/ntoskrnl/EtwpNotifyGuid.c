/*
 * XREFs of EtwpNotifyGuid @ 0x140659A48
 * Callers:
 *     NtTraceControl @ 0x1405C3F40 (NtTraceControl.c)
 *     EtwpSendSessionNotification @ 0x140659F28 (EtwpSendSessionNotification.c)
 * Callees:
 *     PsGetCurrentThreadProcessId @ 0x14004D240 (PsGetCurrentThreadProcessId.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     PsGetProcessId @ 0x1400A5650 (PsGetProcessId.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     EtwpSendDataBlock @ 0x1405C139C (EtwpSendDataBlock.c)
 *     EtwpUnreferenceDataBlock @ 0x1405C1D74 (EtwpUnreferenceDataBlock.c)
 *     EtwpUnreferenceGuidEntry @ 0x1405C5098 (EtwpUnreferenceGuidEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x1405C5190 (EtwpFindGuidEntryByGuid.c)
 *     EtwpAccessCheck @ 0x1405C6280 (EtwpAccessCheck.c)
 *     EtwpFreeFilterInfo @ 0x140657B3C (EtwpFreeFilterInfo.c)
 *     EtwpCheckGuidAccess @ 0x140657EC4 (EtwpCheckGuidAccess.c)
 *     EtwpAllocDataBlock @ 0x140659E84 (EtwpAllocDataBlock.c)
 *     EtwpCreateUmReplyObject @ 0x1406A7578 (EtwpCreateUmReplyObject.c)
 *     EtwpApplyTransientFilters @ 0x1406DCDD8 (EtwpApplyTransientFilters.c)
 *     EtwpDemuxPrivateTraceHandle @ 0x1408C0FBC (EtwpDemuxPrivateTraceHandle.c)
 *     EtwpValidateTraceControlFilterDescriptors @ 0x1408C3ACC (EtwpValidateTraceControlFilterDescriptors.c)
 *     EtwpCheckCurrentUserProcessAccess @ 0x1408C4280 (EtwpCheckCurrentUserProcessAccess.c)
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
  _QWORD *GuidEntryByGuid; // rax
  ULONG_PTR v15; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v17; // r13
  __int64 v18; // r8
  int v19; // r14d
  __int64 v20; // rbx
  __int16 v21; // ax
  unsigned int ProcessId; // eax
  int v23; // eax
  __int64 v24; // rax
  bool v25; // zf
  int v26; // [rsp+20h] [rbp-79h]
  bool v27; // [rsp+24h] [rbp-75h]
  unsigned __int64 v28; // [rsp+40h] [rbp-59h]
  __int64 v29; // [rsp+50h] [rbp-49h] BYREF
  _QWORD v30[18]; // [rsp+60h] [rbp-39h] BYREF
  __int16 v31; // [rsp+108h] [rbp+6Fh] BYREF
  int v32; // [rsp+118h] [rbp+7Fh]

  v3 = 0;
  v29 = 0LL;
  v32 = 0;
  v27 = 0;
  v28 = 0LL;
  memset(v30, 0, 0x58uLL);
  v7 = *(unsigned int *)(a2 + 4);
  if ( (unsigned int)v7 > 0x10000 )
    return 3221225990LL;
  if ( *(_DWORD *)a2 != 11 )
  {
LABEL_11:
    *(_DWORD *)(a2 + 36) = PsGetCurrentThreadProcessId();
    if ( *(_DWORD *)a2 == 4 )
    {
      if ( *(_DWORD *)(a2 + 4) < 0xF8u )
      {
        UmReplyObject = -1073741789;
        goto LABEL_51;
      }
      v12 = 128;
      v27 = (int)EtwpCheckGuidAccess(&PrivateLoggerSecurityGuid.Data1, 0x80u, 0LL) < 0;
      *(GUID *)(a2 + 40) = PrivateLoggerNotificationGuid;
    }
    else
    {
      v12 = 4;
      v3 = 1;
    }
    v13 = *(_DWORD *)(a2 + 32);
    *(_DWORD *)(a2 + 20) = 0;
    v26 = v13;
    GuidEntryByGuid = EtwpFindGuidEntryByGuid(a1, (_DWORD *)(a2 + 40), v3);
    v15 = (ULONG_PTR)GuidEntryByGuid;
    if ( !GuidEntryByGuid )
    {
      UmReplyObject = -1073741163;
      goto LABEL_51;
    }
    if ( a3 )
    {
      if ( *(_DWORD *)a2 != 4 )
      {
        UmReplyObject = EtwpAccessCheck((PSECURITY_DESCRIPTOR)GuidEntryByGuid[9], v12, 0LL);
        if ( UmReplyObject < 0 )
        {
LABEL_50:
          EtwpUnreferenceGuidEntry((volatile signed __int64 *)v15);
          goto LABEL_51;
        }
      }
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v15 + 408, 0LL);
    v17 = (__int64 *)(v15 + 56);
    *(_QWORD *)(v15 + 416) = KeGetCurrentThread();
    if ( (__int64 *)*v17 == v17 )
    {
      UmReplyObject = -1073741162;
LABEL_49:
      *(_QWORD *)(v15 + 416) = 0LL;
      ExReleasePushLockEx(v15 + 408, 0LL);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      goto LABEL_50;
    }
    if ( *(_BYTE *)(a2 + 12) )
    {
      UmReplyObject = EtwpCreateUmReplyObject(v15, (__int64)&v29);
      if ( UmReplyObject < 0 )
        goto LABEL_49;
      *(_QWORD *)(a2 + 24) = 0LL;
    }
    v19 = EtwpAllocDataBlock(*(unsigned int *)(a2 + 4), (void *)a2);
    if ( v19 < 0 )
    {
LABEL_27:
      UmReplyObject = -1073741801;
      goto LABEL_49;
    }
    v20 = *v17;
    if ( (__int64 *)*v17 == v17 )
    {
LABEL_46:
      UmReplyObject = 0;
      v24 = v29;
      v25 = v32 == 0;
      *(_DWORD *)(a2 + 20) = v32;
      if ( v25 )
        UmReplyObject = v19;
      *(_QWORD *)(a2 + 24) = v24;
      goto LABEL_49;
    }
    while ( 1 )
    {
      v21 = *(_WORD *)(v20 + 98);
      if ( (v21 & 2) == 0
        || (v21 & 0x40) != 0
        || v28 && !(unsigned __int8)EtwpApplyTransientFilters(v20, v28, v30[10], v30) )
      {
        goto LABEL_45;
      }
      if ( v26 && (unsigned int)PsGetProcessId(*(PEPROCESS *)(v20 + 80)) != v26 )
        goto LABEL_45;
      if ( v27 )
      {
        v19 = EtwpCheckCurrentUserProcessAccess(*(_QWORD *)(v20 + 80));
        if ( v19 < 0 )
          goto LABEL_45;
      }
      if ( *(_DWORD *)a2 != 4 || *(_DWORD *)(a2 + 76) == 1 )
        goto LABEL_42;
      ProcessId = (unsigned int)PsGetProcessId(*(PEPROCESS *)(v20 + 80));
      v19 = EtwpDemuxPrivateTraceHandle(ProcessId, *(_WORD *)(a2 + 80) & 0x7FFF, &v31);
      if ( v19 >= 0 )
        break;
LABEL_45:
      v20 = *(_QWORD *)v20;
      if ( (__int64 *)v20 == v17 )
        goto LABEL_46;
    }
    v19 = EtwpAllocDataBlock(*(unsigned int *)(a2 + 4), (void *)a2);
    if ( v19 < 0 )
      goto LABEL_27;
    MEMORY[0x50] = v31;
LABEL_42:
    v23 = EtwpSendDataBlock(v20, 0LL, v18);
    if ( v23 < 0 )
      v19 = v23;
    else
      ++v32;
    goto LABEL_45;
  }
  if ( (unsigned int)v7 >= 0x78 )
  {
    v10 = (*(_DWORD *)(a2 + 72) + 7) & 0xFFFFFFF8;
    if ( v10 < v7 - 76 )
    {
      v11 = *(_DWORD *)(v10 + a2 + 72);
      if ( v11 )
      {
        v28 = v10 + a2 + 76;
        if ( (unsigned int)EtwpValidateTraceControlFilterDescriptors(v11, v28, (unsigned int)(v7 - (v10 + 76)), v30) )
        {
          UmReplyObject = -1073741811;
          goto LABEL_51;
        }
      }
      *(_DWORD *)a2 = 4;
      goto LABEL_11;
    }
  }
  UmReplyObject = -2147483643;
LABEL_51:
  EtwpFreeFilterInfo((__int64)v30);
  return (unsigned int)UmReplyObject;
}
