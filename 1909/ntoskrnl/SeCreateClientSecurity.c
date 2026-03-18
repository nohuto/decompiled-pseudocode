/*
 * XREFs of SeCreateClientSecurity @ 0x1405E5240
 * Callers:
 *     AlpcpImpersonateMessage @ 0x1405E4D40 (AlpcpImpersonateMessage.c)
 *     AlpcpCreateClientPort @ 0x14065CA48 (AlpcpCreateClientPort.c)
 *     AlpcpCreateSecurityContext @ 0x14065F1A0 (AlpcpCreateSecurityContext.c)
 *     EtwpStartLogger @ 0x1406A8918 (EtwpStartLogger.c)
 *     NtImpersonateThread @ 0x1406D5A60 (NtImpersonateThread.c)
 *     EtwpUpdateTrace @ 0x140781CD0 (EtwpUpdateTrace.c)
 * Callees:
 *     SepReconcileTrustSidWithProcessProtection @ 0x14000CB30 (SepReconcileTrustSidWithProcessProtection.c)
 *     ObFastReferenceObject @ 0x14003ACD0 (ObFastReferenceObject.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ObFastReferenceObjectLocked @ 0x14007FC50 (ObFastReferenceObjectLocked.c)
 *     ExfReleasePushLockShared @ 0x1400C6220 (ExfReleasePushLockShared.c)
 *     PsReferenceImpersonationTokenEx @ 0x1405DE460 (PsReferenceImpersonationTokenEx.c)
 *     SepCreateClientSecurityEx @ 0x1405DE7A0 (SepCreateClientSecurityEx.c)
 */

NTSTATUS __stdcall SeCreateClientSecurity(
        PETHREAD ClientThread,
        PSECURITY_QUALITY_OF_SERVICE ClientSecurityQos,
        BOOLEAN RemoteSession,
        PSECURITY_CLIENT_CONTEXT ClientContext)
{
  struct _KTHREAD *CurrentThread; // rbp
  _KPROCESS *Process; // rdi
  ULONG_PTR v9; // rbx
  int v10; // ebp
  char v11; // r14
  NTSTATUS result; // eax
  NTSTATUS v13; // edi
  char v14; // [rsp+60h] [rbp-38h] BYREF
  char v15; // [rsp+61h] [rbp-37h] BYREF
  _BYTE v16[2]; // [rsp+62h] [rbp-36h] BYREF
  unsigned int v17; // [rsp+64h] [rbp-34h] BYREF
  __int64 v18; // [rsp+68h] [rbp-30h] BYREF
  char v19; // [rsp+A0h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v19 = 0;
  v14 = 0;
  v18 = 0LL;
  if ( ClientThread == CurrentThread )
    Process = CurrentThread->ApcState.Process;
  else
    Process = ClientThread->Process;
  v9 = (ULONG_PTR)PsReferenceImpersonationTokenEx((__int64)ClientThread, 0, v16, (bool *)&v15, (int *)&v17, &v19);
  if ( v9 )
  {
    v11 = v15;
    v10 = 2;
  }
  else
  {
    v9 = ObFastReferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5]);
    if ( !v9 )
    {
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)&Process[1], 0LL);
      v9 = ObFastReferenceObjectLocked(&Process[1].Affinity.Bitmap[5]);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&Process[1].Header.Lock, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&Process[1].Header.Lock);
      KeAbPostRelease((ULONG_PTR)&Process[1]);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
    }
    v10 = 1;
    v19 = BYTE2(Process[2].ActiveProcessors.Bitmap[4]);
    v11 = 0;
  }
  SepReconcileTrustSidWithProcessProtection(*(_QWORD *)(v9 + 1104), (__int64)&v19, &v14, &v18);
  result = SepCreateClientSecurityEx(
             (_DWORD *)v9,
             (__int64)ClientSecurityQos,
             RemoteSession,
             v10,
             v11,
             v17,
             0,
             0LL,
             v14,
             v18,
             (__int64)ClientContext);
  v13 = result;
  if ( result < 0 || !ClientSecurityQos->ContextTrackingMode )
  {
    ObfDereferenceObject((PVOID)v9);
    return v13;
  }
  return result;
}
