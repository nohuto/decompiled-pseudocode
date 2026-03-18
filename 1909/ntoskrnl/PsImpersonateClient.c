/*
 * XREFs of PsImpersonateClient @ 0x1405DEAE0
 * Callers:
 *     PsAssignImpersonationToken @ 0x1405DEA00 (PsAssignImpersonationToken.c)
 *     SeImpersonateClientEx @ 0x1405E5000 (SeImpersonateClientEx.c)
 *     NtImpersonateAnonymousToken @ 0x14061C0D0 (NtImpersonateAnonymousToken.c)
 *     CmpOpenHiveFile @ 0x140639E3C (CmpOpenHiveFile.c)
 *     CmpCmdHiveOpen @ 0x14068367C (CmpCmdHiveOpen.c)
 *     EtwpCreateLogFile @ 0x1406ADF64 (EtwpCreateLogFile.c)
 *     PsRevertThreadToSelf @ 0x1408C6B20 (PsRevertThreadToSelf.c)
 *     PsRevertToSelf @ 0x1408C6B50 (PsRevertToSelf.c)
 * Callees:
 *     ObFastReferenceObject @ 0x14003ACD0 (ObFastReferenceObject.c)
 *     ObFastDereferenceObject @ 0x14003AE70 (ObFastDereferenceObject.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14003E070 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ObFastReferenceObjectLocked @ 0x14007FC50 (ObFastReferenceObjectLocked.c)
 *     ExfReleasePushLockShared @ 0x1400C6220 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x1400EF3A0 (KiCheckForKernelApcDelivery.c)
 *     SeSetTokenTrustLink @ 0x1401279E4 (SeSetTokenTrustLink.c)
 *     SeQueryTokenTrustSid @ 0x1401319C4 (SeQueryTokenTrustSid.c)
 *     SeCopyClientToken @ 0x1405C4278 (SeCopyClientToken.c)
 *     PspWriteTebImpersonationInfo @ 0x1405DEEC0 (PspWriteTebImpersonationInfo.c)
 *     SeTokenCanImpersonate @ 0x1405DF060 (SeTokenCanImpersonate.c)
 */

NTSTATUS __stdcall PsImpersonateClient(
        PETHREAD Thread,
        PACCESS_TOKEN Token,
        BOOLEAN CopyOnOpen,
        BOOLEAN EffectiveOnly,
        SECURITY_IMPERSONATION_LEVEL ImpersonationLevel)
{
  _KPROCESS *Process; // rbx
  char v6; // bp
  unsigned __int64 v9; // rsi
  void *v11; // rsi
  void *v12; // rbp
  struct _KTHREAD *CurrentThread; // rbx
  char v14; // al
  __int64 v15; // rcx
  bool v16; // zf
  struct _KTHREAD *v17; // rdx
  signed __int64 *v18; // r13
  void *v19; // r14
  __int64 v20; // r8
  char v21; // bp
  struct _KTHREAD *v22; // r14
  unsigned __int64 v23; // rbx
  char v24; // al
  __int64 v25; // rcx
  int v27; // ebx
  NTSTATUS v28; // ebx
  signed __int64 *p_Lock; // rbx
  __int64 v30; // [rsp+30h] [rbp-58h]
  _DWORD *v31; // [rsp+38h] [rbp-50h] BYREF
  char v32; // [rsp+98h] [rbp+10h]
  struct _KTHREAD *v33; // [rsp+98h] [rbp+10h]

  Process = Thread->Process;
  v6 = 0;
  v31 = 0LL;
  v30 = 0LL;
  v9 = (unsigned __int64)Token;
  if ( !Token )
  {
    v11 = 0LL;
    v12 = 0LL;
    if ( (*(_DWORD *)(&Thread[1].SwapListEntry + 1) & 8) == 0 )
      return 0;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&Thread[1].WaitBlockList, 0LL);
    if ( (*(_DWORD *)(&Thread[1].SwapListEntry + 1) & 8) != 0 )
    {
      v12 = *(void **)&Thread[1].WaitBlockFill11[64];
      v11 = (void *)(*(_QWORD *)((char *)&Thread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
      *(_QWORD *)&Thread[1].WaitBlockFill11[64] = 0LL;
      _InterlockedAnd((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 0xFFFFFFF7);
    }
    v14 = _InterlockedExchangeAdd64((volatile signed __int64 *)&Thread[1].WaitBlockList, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v14 & 2) != 0 && (v14 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&Thread[1].WaitBlockList);
    KeAbPostRelease((ULONG_PTR)&Thread[1].WaitBlockList);
    v16 = CurrentThread->KernelApcDisable++ == -1;
    if ( v16
      && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery(v15);
    }
    v17 = CurrentThread;
LABEL_20:
    PspWriteTebImpersonationInfo(Thread, v17);
    if ( v11 )
      ObfDereferenceObject(v11);
    if ( v12 )
      ObfDereferenceObject(v12);
    return 0;
  }
  v18 = (signed __int64 *)&Process[1].Affinity.Bitmap[5];
  v19 = (void *)ObFastReferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5]);
  if ( !v19 )
  {
    v33 = KeGetCurrentThread();
    --v33->KernelApcDisable;
    p_Lock = (signed __int64 *)&Process[1].Header.Lock;
    ExAcquirePushLockSharedEx((ULONG_PTR)p_Lock, 0LL);
    v19 = (void *)ObFastReferenceObjectLocked(v18);
    if ( _InterlockedCompareExchange64(p_Lock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(p_Lock);
    KeAbPostRelease((ULONG_PTR)p_Lock);
    KeLeaveCriticalRegionThread((__int64)v33);
    if ( !v19 )
    {
      v21 = ImpersonationLevel;
      goto LABEL_12;
    }
  }
  v32 = ImpersonationLevel;
  if ( (int)SeTokenCanImpersonate(v19, (PACCESS_TOKEN)v9) >= 0 )
  {
LABEL_11:
    ObFastDereferenceObject(v18, (unsigned __int64)v19);
    v16 = v6 == 0;
    v21 = v32;
    if ( !v16 )
    {
LABEL_13:
      v22 = KeGetCurrentThread();
      v23 = v9 & 0xFFFFFFFFFFFFFFF8uLL | v21 & 3 | (4LL * (EffectiveOnly & 1));
      --v22->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&Thread[1].WaitBlockList, 0LL);
      if ( (*(_DWORD *)(&Thread[1].SwapListEntry + 1) & 8) != 0 )
      {
        v12 = *(void **)&Thread[1].WaitBlockFill11[64];
        v11 = (void *)(*(_QWORD *)((char *)&Thread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
      }
      else
      {
        v11 = 0LL;
        v12 = 0LL;
        _InterlockedOr((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 8u);
      }
      *(_QWORD *)&Thread[1].WaitBlockFill11[64] = v30;
      *($0C1BE2699A312A75424054B216B8DB7A *)((char *)&Thread[1].116 + 4) = ($0C1BE2699A312A75424054B216B8DB7A)v23;
      if ( CopyOnOpen )
        _InterlockedOr((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 0x100u);
      else
        _InterlockedAnd((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 0xFFFFFEFF);
      v24 = _InterlockedExchangeAdd64((volatile signed __int64 *)&Thread[1].WaitBlockList, 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v24 & 2) != 0 && (v24 & 4) == 0 )
        ExfTryToWakePushLock((volatile signed __int64 *)&Thread[1].WaitBlockList);
      KeAbPostRelease((ULONG_PTR)&Thread[1].WaitBlockList);
      v16 = v22->KernelApcDisable++ == -1;
      if ( v16
        && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)v22->ApcState.ApcListHead[0].Flink != &v22->152
        && !v22->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery(v25);
      }
      v17 = v22;
      goto LABEL_20;
    }
LABEL_12:
    ObfReferenceObject((PVOID)v9);
    goto LABEL_13;
  }
  v27 = 1;
  v32 = 1;
  if ( *(_DWORD *)(v9 + 192) == 2 && *(int *)(v9 + 196) < 1 )
  {
    v27 = *(_DWORD *)(v9 + 196);
    v32 = v27;
  }
  v28 = SeCopyClientToken(v9, v27, v20, 0, 0LL, &v31);
  if ( v28 >= 0 )
  {
    v9 = (unsigned __int64)v31;
    v6 = 1;
    goto LABEL_11;
  }
  ObFastDereferenceObject(v18, (unsigned __int64)v19);
  return v28;
}
