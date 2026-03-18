/*
 * XREFs of PsRestoreImpersonation @ 0x1405D61A0
 * Callers:
 *     NtOpenThreadTokenEx @ 0x1405D5B10 (NtOpenThreadTokenEx.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x1406984FC (CmpAddRemoveContainerToCLFSLog.c)
 *     CmpStartCLFSLog @ 0x140698B48 (CmpStartCLFSLog.c)
 * Callees:
 *     SeQueryTokenTrustLink @ 0x14000A27C (SeQueryTokenTrustLink.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14003E330 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     PspWriteTebImpersonationInfo @ 0x1405DE720 (PspWriteTebImpersonationInfo.c)
 */

void __stdcall PsRestoreImpersonation(PETHREAD Thread, PSE_IMPERSONATION_STATE ImpersonationState)
{
  struct _KTHREAD *CurrentThread; // r15
  void *v3; // rbp
  __int64 Token; // rdi
  void *v6; // r13
  PACCESS_TOKEN v7; // r12
  __int64 v9; // rcx
  unsigned __int64 v10; // rbx
  char v11; // bl
  char v12; // al

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  Token = (__int64)ImpersonationState->Token;
  v6 = 0LL;
  v7 = 0LL;
  if ( ImpersonationState->Token )
  {
    if ( SeQueryTokenTrustLink(Token) )
    {
      Token = SeQueryTokenTrustLink(v9);
      ObfReferenceObject((PVOID)Token);
      v7 = ImpersonationState->Token;
    }
    v10 = Token & 0xFFFFFFFFFFFFFFF8uLL | (ImpersonationState->EffectiveOnly != 0 ? 4 : 0) | (unsigned __int64)(ImpersonationState->Level & 3);
  }
  else
  {
    v10 = 0LL;
  }
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&Thread[1].WaitBlockList, 0LL);
  if ( (*(_DWORD *)(&Thread[1].SwapListEntry + 1) & 8) != 0 )
  {
    v6 = *(void **)&Thread[1].WaitBlockFill11[64];
    v3 = (void *)(*(_QWORD *)((char *)&Thread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  if ( ImpersonationState->Token )
  {
    *($3B2F3BCC17ED4CEE0C65CF31B442AA49 *)((char *)&Thread[1].116 + 4) = ($3B2F3BCC17ED4CEE0C65CF31B442AA49)v10;
    *(_QWORD *)&Thread[1].WaitBlockFill11[64] = v7;
    if ( ImpersonationState->CopyOnOpen )
      _InterlockedOr((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 0x100u);
    else
      _InterlockedAnd((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 0xFFFFFEFF);
    _InterlockedOr((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 8u);
  }
  else if ( _interlockedbittestandreset((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 3u) )
  {
    v11 = 1;
    goto LABEL_12;
  }
  v11 = 0;
LABEL_12:
  v12 = _InterlockedExchangeAdd64((volatile signed __int64 *)&Thread[1].WaitBlockList, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v12 & 2) != 0 && (v12 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&Thread[1].WaitBlockList);
  KeAbPostRelease((ULONG_PTR)&Thread[1].WaitBlockList);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( v3 )
  {
    ObfDereferenceObject(v3);
    if ( v6 )
      ObfDereferenceObject(v6);
    if ( v11 )
      PspWriteTebImpersonationInfo(Thread, CurrentThread);
  }
}
