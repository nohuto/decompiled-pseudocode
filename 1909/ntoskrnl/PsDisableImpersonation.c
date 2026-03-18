/*
 * XREFs of PsDisableImpersonation @ 0x1405D6830
 * Callers:
 *     NtOpenThreadTokenEx @ 0x1405D62D0 (NtOpenThreadTokenEx.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x14068BA6C (CmpAddRemoveContainerToCLFSLog.c)
 *     CmpStartCLFSLog @ 0x1406BC550 (CmpStartCLFSLog.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 */

BOOLEAN __stdcall PsDisableImpersonation(PETHREAD Thread, PSE_IMPERSONATION_STATE ImpersonationState)
{
  char v2; // r14
  struct _KTHREAD *CurrentThread; // rbp
  void *v6; // rax
  char v7; // al
  BOOLEAN result; // al
  void *v9; // rcx

  v2 = 0;
  if ( (*(_DWORD *)(&Thread[1].SwapListEntry + 1) & 8) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&Thread[1].WaitBlockList, 0LL);
    if ( _interlockedbittestandreset((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 3u) )
    {
      v2 = 1;
      ImpersonationState->Level = *((_DWORD *)&Thread[1].0 + 1) & 3;
      ImpersonationState->EffectiveOnly = (*(_BYTE *)(&Thread[1].MiscFlags + 1) & 4) != 0;
      ImpersonationState->CopyOnOpen = BYTE1(*((_DWORD *)&Thread[1].SwapListEntry + 2)) & 1;
      v6 = *(void **)&Thread[1].WaitBlockFill11[64];
      if ( v6 )
      {
        ImpersonationState->Token = v6;
        v9 = (void *)(*(_QWORD *)((char *)&Thread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
        *(_QWORD *)&Thread[1].WaitBlockFill11[64] = 0LL;
        ObfDereferenceObject(v9);
      }
      else
      {
        ImpersonationState->Token = (PACCESS_TOKEN)(*(_QWORD *)((char *)&Thread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
      }
    }
    v7 = _InterlockedExchangeAdd64((volatile signed __int64 *)&Thread[1].WaitBlockList, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v7 & 2) != 0 && (v7 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&Thread[1].WaitBlockList);
    KeAbPostRelease((ULONG_PTR)&Thread[1].WaitBlockList);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    if ( v2 )
      return 1;
  }
  ImpersonationState->Level = SecurityAnonymous;
  result = 0;
  *(_WORD *)&ImpersonationState->CopyOnOpen = 0;
  ImpersonationState->Token = 0LL;
  return result;
}
