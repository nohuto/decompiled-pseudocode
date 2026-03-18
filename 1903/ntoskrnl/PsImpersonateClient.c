/*
 * XREFs of PsImpersonateClient @ 0x1405DE340
 * Callers:
 *     PsAssignImpersonationToken @ 0x1405DE260 (PsAssignImpersonationToken.c)
 *     SeImpersonateClientEx @ 0x1405E4830 (SeImpersonateClientEx.c)
 *     NtImpersonateAnonymousToken @ 0x14061A5C0 (NtImpersonateAnonymousToken.c)
 *     CmpOpenHiveFile @ 0x140636BDC (CmpOpenHiveFile.c)
 *     CmpCmdHiveOpen @ 0x14069010C (CmpCmdHiveOpen.c)
 *     EtwpCreateLogFile @ 0x1406B87D4 (EtwpCreateLogFile.c)
 *     PsRevertThreadToSelf @ 0x1408C7240 (PsRevertThreadToSelf.c)
 *     PsRevertToSelf @ 0x1408C7270 (PsRevertToSelf.c)
 * Callees:
 *     ObFastReferenceObject @ 0x14003AF90 (ObFastReferenceObject.c)
 *     ObFastDereferenceObject @ 0x14003B130 (ObFastDereferenceObject.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14003E330 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ObFastReferenceObjectLocked @ 0x14007F850 (ObFastReferenceObjectLocked.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     SeSetTokenTrustLink @ 0x140126FC4 (SeSetTokenTrustLink.c)
 *     SeQueryTokenTrustSid @ 0x140130E34 (SeQueryTokenTrustSid.c)
 *     SeCopyClientToken @ 0x1405C3DA8 (SeCopyClientToken.c)
 *     PspWriteTebImpersonationInfo @ 0x1405DE720 (PspWriteTebImpersonationInfo.c)
 *     SeTokenCanImpersonate @ 0x1405DE8C0 (SeTokenCanImpersonate.c)
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
      && ($6EAC78A6FCFADE0A5FA44F358736B38F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
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
      *($3B2F3BCC17ED4CEE0C65CF31B442AA49 *)((char *)&Thread[1].116 + 4) = ($3B2F3BCC17ED4CEE0C65CF31B442AA49)v23;
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
        && ($6EAC78A6FCFADE0A5FA44F358736B38F *)v22->ApcState.ApcListHead[0].Flink != &v22->152
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
