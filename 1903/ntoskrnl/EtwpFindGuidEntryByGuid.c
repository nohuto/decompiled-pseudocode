/*
 * XREFs of EtwpFindGuidEntryByGuid @ 0x1405D4180
 * Callers:
 *     NtTraceEvent @ 0x14008C650 (NtTraceEvent.c)
 *     EtwpAddRegEntryToGroup @ 0x1405C46E0 (EtwpAddRegEntryToGroup.c)
 *     EtwpRegisterUMGuid @ 0x1405D3990 (EtwpRegisterUMGuid.c)
 *     EtwpEnableGuid @ 0x140664144 (EtwpEnableGuid.c)
 *     EtwpAddGuidEntry @ 0x1406669DC (EtwpAddGuidEntry.c)
 *     EtwpNotifyGuid @ 0x1406B63E0 (EtwpNotifyGuid.c)
 *     EtwpGetTraceGuidInfo @ 0x1406ECEDC (EtwpGetTraceGuidInfo.c)
 *     EtwpRegisterProvider @ 0x1407185AC (EtwpRegisterProvider.c)
 *     EtwpDisallowedGuidAddition @ 0x1408F1F54 (EtwpDisallowedGuidAddition.c)
 *     EtwpDisallowedGuidRemoval @ 0x1408F2208 (EtwpDisallowedGuidRemoval.c)
 *     EtwpGetTraceGroupInfo @ 0x1408F2A34 (EtwpGetTraceGroupInfo.c)
 *     SendCaptureStateNotificationsWorker @ 0x1408FD480 (SendCaptureStateNotificationsWorker.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 *     EtwpReferenceGuidEntry @ 0x1405D4274 (EtwpReferenceGuidEntry.c)
 */

_QWORD *__fastcall EtwpFindGuidEntryByGuid(__int64 a1, _DWORD *a2, int a3)
{
  _QWORD *v4; // rbp
  __int64 v5; // rcx
  struct _KTHREAD *CurrentThread; // rax
  _QWORD **v7; // rsi
  signed __int64 *v8; // r14
  _QWORD *v9; // rbx
  __int64 v10; // rax

  v4 = 0LL;
  v5 = 56LL * (((unsigned __int8)*a2 ^ (unsigned __int8)(a2[1] ^ a2[2] ^ a2[3])) & 0x3F) + a1 + 464;
  CurrentThread = KeGetCurrentThread();
  v7 = (_QWORD **)(v5 + 16LL * a3);
  --CurrentThread->KernelApcDisable;
  v8 = (signed __int64 *)(v5 + 48);
  ExAcquirePushLockSharedEx(v5 + 48, 0LL);
  v9 = *v7;
  if ( *v7 != v7 )
  {
    while ( 1 )
    {
      v10 = *(_QWORD *)a2 - v9[5];
      if ( *(_QWORD *)a2 == v9[5] )
        v10 = *((_QWORD *)a2 + 1) - v9[6];
      if ( !v10 && (unsigned __int8)EtwpReferenceGuidEntry((ULONG_PTR)v9) )
        break;
      v9 = (_QWORD *)*v9;
      if ( v9 == v7 )
        goto LABEL_9;
    }
    v4 = v9;
  }
LABEL_9:
  if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v8);
  KeAbPostRelease((ULONG_PTR)v8);
  KeLeaveCriticalRegion();
  return v4;
}
