/*
 * XREFs of EtwpUnreferenceGuidEntry @ 0x1405C4098
 * Callers:
 *     NtTraceEvent @ 0x1400CB4B0 (NtTraceEvent.c)
 *     EtwGetProviderIdFromHandle @ 0x14017376C (EtwGetProviderIdFromHandle.c)
 *     EtwpFreeGuidEntry @ 0x1405C0920 (EtwpFreeGuidEntry.c)
 *     EtwpAddGuidEntry @ 0x1405C0A0C (EtwpAddGuidEntry.c)
 *     EtwpGetNextGuidEntry @ 0x1405C2614 (EtwpGetNextGuidEntry.c)
 *     EtwpAddRegEntryToGroup @ 0x1405C2750 (EtwpAddRegEntryToGroup.c)
 *     EtwpRegisterUMGuid @ 0x1405C3970 (EtwpRegisterUMGuid.c)
 *     EtwpDeleteRegistrationObject @ 0x1405C3E20 (EtwpDeleteRegistrationObject.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x1405C4D5C (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpEnableGuid @ 0x140655F38 (EtwpEnableGuid.c)
 *     EtwpUpdateGuidEnableInfo @ 0x140656D54 (EtwpUpdateGuidEnableInfo.c)
 *     EtwpNotifyGuid @ 0x140658888 (EtwpNotifyGuid.c)
 *     EtwpRegisterProvider @ 0x1406BE5AC (EtwpRegisterProvider.c)
 *     EtwUnregister @ 0x140707370 (EtwUnregister.c)
 *     EtwpDisallowedGuidAddition @ 0x1408B50A4 (EtwpDisallowedGuidAddition.c)
 *     EtwpDisallowedGuidRemoval @ 0x1408B5358 (EtwpDisallowedGuidRemoval.c)
 *     EtwpGetTraceGroupInfo @ 0x1408B5B64 (EtwpGetTraceGroupInfo.c)
 *     EtwpGetTraceGuidInfo @ 0x1408B5E78 (EtwpGetTraceGuidInfo.c)
 *     SendCaptureStateNotificationsWorker @ 0x1408C0620 (SendCaptureStateNotificationsWorker.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400915C0 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1401BBBC0 (KeBugCheckEx.c)
 *     EtwpFreeGuidEntry @ 0x1405C0920 (EtwpFreeGuidEntry.c)
 */

__int64 __fastcall EtwpUnreferenceGuidEntry(volatile signed __int64 *P)
{
  __int64 v2; // rsi
  struct _KTHREAD *CurrentThread; // rax
  int v5; // r10d
  int v6; // edx
  int v7; // r8d
  int v8; // r9d
  __int64 v9; // rbp
  volatile signed __int64 *v10; // rbp
  volatile signed __int64 v11; // rcx
  PVOID *v12; // rax

  v2 = _InterlockedDecrement64(P + 4);
  if ( v2 )
  {
    if ( v2 < 0 )
      KeBugCheckEx(0x11Du, 9uLL, (ULONG_PTR)P, 0LL, 0LL);
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v5 = *((_DWORD *)P + 10);
    v6 = *((_DWORD *)P + 13);
    v7 = *((_DWORD *)P + 12);
    v8 = *((_DWORD *)P + 11);
    v9 = *((_QWORD *)P + 49);
    --CurrentThread->KernelApcDisable;
    v10 = (volatile signed __int64 *)(56LL * (((unsigned __int8)v8 ^ (unsigned __int8)(v7 ^ v6 ^ v5)) & 0x3F) + v9 + 512);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v10, 0LL);
    v11 = *P;
    if ( *(volatile signed __int64 **)(*P + 8) != P || (v12 = (PVOID *)*((_QWORD *)P + 1), *v12 != P) )
      __fastfail(3u);
    *v12 = (PVOID)v11;
    *(_QWORD *)(v11 + 8) = v12;
    if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v10);
    KeAbPostRelease((ULONG_PTR)v10);
    KeLeaveCriticalRegion();
    EtwpFreeGuidEntry((char *)P);
  }
  return v2;
}
