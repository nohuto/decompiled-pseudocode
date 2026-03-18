/*
 * XREFs of EtwpUnreferenceGuidEntry @ 0x1405D458C
 * Callers:
 *     NtTraceEvent @ 0x1400C8CF0 (NtTraceEvent.c)
 *     EtwGetProviderIdFromHandle @ 0x140158D7C (EtwGetProviderIdFromHandle.c)
 *     EtwpAddRegEntryToGroup @ 0x1405C4BE0 (EtwpAddRegEntryToGroup.c)
 *     EtwpRegisterUMGuid @ 0x1405D3E90 (EtwpRegisterUMGuid.c)
 *     EtwpDeleteRegistrationObject @ 0x1405D4330 (EtwpDeleteRegistrationObject.c)
 *     EtwpEnableGuid @ 0x140691558 (EtwpEnableGuid.c)
 *     EtwpUpdateGuidEnableInfo @ 0x1406922E8 (EtwpUpdateGuidEnableInfo.c)
 *     EtwpGetNextGuidEntry @ 0x140693100 (EtwpGetNextGuidEntry.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x140693238 (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpAddGuidEntry @ 0x140693DF0 (EtwpAddGuidEntry.c)
 *     EtwpNotifyGuid @ 0x1406A9BCC (EtwpNotifyGuid.c)
 *     EtwpFreeGuidEntry @ 0x1406E19DC (EtwpFreeGuidEntry.c)
 *     EtwpGetTraceGuidInfo @ 0x1406EE26C (EtwpGetTraceGuidInfo.c)
 *     EtwpRegisterProvider @ 0x14071A39C (EtwpRegisterProvider.c)
 *     EtwUnregister @ 0x140749F60 (EtwUnregister.c)
 *     EtwpDisallowedGuidAddition @ 0x1408F1864 (EtwpDisallowedGuidAddition.c)
 *     EtwpDisallowedGuidRemoval @ 0x1408F1B18 (EtwpDisallowedGuidRemoval.c)
 *     EtwpGetTraceGroupInfo @ 0x1408F2344 (EtwpGetTraceGroupInfo.c)
 *     SendCaptureStateNotificationsWorker @ 0x1408FCE40 (SendCaptureStateNotificationsWorker.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     EtwpFreeGuidEntry @ 0x1406E19DC (EtwpFreeGuidEntry.c)
 */

__int64 __fastcall EtwpUnreferenceGuidEntry(__int64 *BugCheckParameter2)
{
  __int64 v2; // rsi
  struct _KTHREAD *CurrentThread; // rax
  int v5; // r10d
  int v6; // edx
  int v7; // r8d
  int v8; // r9d
  __int64 v9; // rbp
  volatile signed __int64 *v10; // rbp
  __int64 *v11; // rcx
  __int64 **v12; // rax

  v2 = _InterlockedDecrement64(BugCheckParameter2 + 4);
  if ( v2 )
  {
    if ( v2 < 0 )
      KeBugCheckEx(0x11Du, 9uLL, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v5 = *((_DWORD *)BugCheckParameter2 + 10);
    v6 = *((_DWORD *)BugCheckParameter2 + 13);
    v7 = *((_DWORD *)BugCheckParameter2 + 12);
    v8 = *((_DWORD *)BugCheckParameter2 + 11);
    v9 = BugCheckParameter2[49];
    --CurrentThread->KernelApcDisable;
    v10 = (volatile signed __int64 *)(56LL * (((unsigned __int8)v8 ^ (unsigned __int8)(v7 ^ v6 ^ v5)) & 0x3F) + v9 + 512);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v10, 0LL);
    v11 = (__int64 *)*BugCheckParameter2;
    if ( *(__int64 **)(*BugCheckParameter2 + 8) != BugCheckParameter2
      || (v12 = (__int64 **)BugCheckParameter2[1], *v12 != BugCheckParameter2) )
    {
      __fastfail(3u);
    }
    *v12 = v11;
    v11[1] = (__int64)v12;
    if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v10);
    KeAbPostRelease((ULONG_PTR)v10);
    KeLeaveCriticalRegion();
    EtwpFreeGuidEntry(BugCheckParameter2);
  }
  return v2;
}
