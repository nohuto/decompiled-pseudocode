/*
 * XREFs of PsReferenceEffectiveToken @ 0x1406492D0
 * Callers:
 *     SepReferenceTokenUsingPseudoHandle @ 0x1400A8DF0 (SepReferenceTokenUsingPseudoHandle.c)
 *     RtlpQueryLowBoxId @ 0x1400CCD10 (RtlpQueryLowBoxId.c)
 *     SeLogAccessFailure @ 0x140118EE0 (SeLogAccessFailure.c)
 *     SeCaptureAtomTableCallout @ 0x140125558 (SeCaptureAtomTableCallout.c)
 *     RtlpAllowsLowBoxAccess @ 0x1401330A0 (RtlpAllowsLowBoxAccess.c)
 *     SepVerifyDesktopAppPolicyOverrideCaller @ 0x1402FED10 (SepVerifyDesktopAppPolicyOverrideCaller.c)
 *     ExpWnfQueryCurrentUserSID @ 0x1406101D0 (ExpWnfQueryCurrentUserSID.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x140649050 (EtwpGetSidExtendedHeaderItem.c)
 *     SeCreateClientSecurity @ 0x1406491F0 (SeCreateClientSecurity.c)
 *     SeSubProcessToken @ 0x14064EA6C (SeSubProcessToken.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1406ACB24 (PspAllocateAndQueryNotificationChannel.c)
 * Callees:
 *     ObFastReferenceObject @ 0x14004D840 (ObFastReferenceObject.c)
 *     ObfReferenceObject @ 0x14004E220 (ObfReferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x140051600 (KeLeaveCriticalRegionThread.c)
 *     ObFastReferenceObjectLocked @ 0x14007DFF4 (ObFastReferenceObjectLocked.c)
 *     ExfReleasePushLockShared @ 0x1400914B0 (ExfReleasePushLockShared.c)
 */

void *__fastcall PsReferenceEffectiveToken(__int64 a1, _DWORD *a2, bool *a3, int *a4, _BYTE *a5)
{
  struct _KTHREAD *CurrentThread; // rbp
  _KPROCESS *Process; // r13
  void *v11; // r12
  ULONG_PTR v12; // rbx
  signed __int64 *BugCheckParameter2; // [rsp+20h] [rbp-38h]
  struct _KTHREAD *v15; // [rsp+28h] [rbp-30h]
  __int64 v16; // [rsp+60h] [rbp+8h]

  CurrentThread = KeGetCurrentThread();
  if ( (struct _KTHREAD *)a1 == CurrentThread )
    Process = CurrentThread->ApcState.Process;
  else
    Process = *(_KPROCESS **)(a1 + 544);
  v11 = 0LL;
  if ( (*(_DWORD *)(a1 + 1744) & 8) == 0 )
    goto LABEL_4;
  v16 = *(_QWORD *)(a1 + 544);
  v15 = KeGetCurrentThread();
  --v15->KernelApcDisable;
  BugCheckParameter2 = (signed __int64 *)(a1 + 1728);
  ExAcquirePushLockSharedEx(a1 + 1728, 0LL);
  if ( (*(_DWORD *)(a1 + 1744) & 8) != 0 )
  {
    v11 = (void *)(*(_QWORD *)(a1 + 1640) & 0xFFFFFFFFFFFFFFF8uLL);
    ObfReferenceObject(v11);
    *a4 = *(_DWORD *)(a1 + 1640) & 3;
    *a3 = (*(_BYTE *)(a1 + 1640) & 4) != 0;
    if ( a5 )
      *a5 = *(_BYTE *)(v16 + 1738);
  }
  if ( _InterlockedCompareExchange64(BugCheckParameter2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(BugCheckParameter2);
  KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
  KeLeaveCriticalRegionThread((__int64)v15);
  if ( v11 )
  {
    *a2 = 2;
    return v11;
  }
  else
  {
LABEL_4:
    v12 = ObFastReferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5]);
    if ( !v12 )
    {
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)&Process[1], 0LL);
      v12 = ObFastReferenceObjectLocked(&Process[1].Affinity.Bitmap[5]);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&Process[1].Header.Lock, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&Process[1].Header.Lock);
      KeAbPostRelease((ULONG_PTR)&Process[1]);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
    }
    *a2 = 1;
    *a3 = 0;
    if ( a5 )
      *a5 = BYTE2(Process[2].ActiveProcessors.Bitmap[0]);
    return (void *)v12;
  }
}
