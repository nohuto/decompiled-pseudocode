/*
 * XREFs of PsReferenceEffectiveToken @ 0x1405DF3D0
 * Callers:
 *     SepReferenceTokenUsingPseudoHandle @ 0x14000C980 (SepReferenceTokenUsingPseudoHandle.c)
 *     RtlpQueryLowBoxId @ 0x14001D4D8 (RtlpQueryLowBoxId.c)
 *     SeCaptureAtomTableCallout @ 0x140123D1C (SeCaptureAtomTableCallout.c)
 *     SeLogAccessFailure @ 0x14012777C (SeLogAccessFailure.c)
 *     RtlpAllowsLowBoxAccess @ 0x140133D1C (RtlpAllowsLowBoxAccess.c)
 *     SepVerifyDesktopAppPolicyOverrideCaller @ 0x14031CA94 (SepVerifyDesktopAppPolicyOverrideCaller.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1406173EC (PspAllocateAndQueryNotificationChannel.c)
 *     SeSubProcessToken @ 0x14061AA40 (SeSubProcessToken.c)
 *     MiIsUserQueryVmCallerTrusted @ 0x14061BC88 (MiIsUserQueryVmCallerTrusted.c)
 *     ExpWnfQueryCurrentUserSID @ 0x140656C40 (ExpWnfQueryCurrentUserSID.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x140658230 (EtwpGetSidExtendedHeaderItem.c)
 * Callees:
 *     ObFastReferenceObject @ 0x14003ACD0 (ObFastReferenceObject.c)
 *     ObfReferenceObject @ 0x14003E070 (ObfReferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ObFastReferenceObjectLocked @ 0x14007FC50 (ObFastReferenceObjectLocked.c)
 *     ExfReleasePushLockShared @ 0x1400C6220 (ExfReleasePushLockShared.c)
 */

void *__fastcall PsReferenceEffectiveToken(__int64 a1, _DWORD *a2, bool *a3, int *a4, _BYTE *a5)
{
  struct _KTHREAD *CurrentThread; // rbx
  _KPROCESS *Process; // rbp
  void *v11; // r13
  ULONG_PTR v12; // rdi
  signed __int64 *BugCheckParameter2; // [rsp+20h] [rbp-38h]
  struct _KTHREAD *v15; // [rsp+28h] [rbp-30h]
  __int64 v16; // [rsp+60h] [rbp+8h]

  CurrentThread = KeGetCurrentThread();
  if ( (struct _KTHREAD *)a1 == CurrentThread )
    Process = CurrentThread->ApcState.Process;
  else
    Process = *(_KPROCESS **)(a1 + 544);
  v11 = 0LL;
  if ( (*(_DWORD *)(a1 + 1760) & 8) == 0 )
    goto LABEL_4;
  v16 = *(_QWORD *)(a1 + 544);
  v15 = KeGetCurrentThread();
  --v15->KernelApcDisable;
  BugCheckParameter2 = (signed __int64 *)(a1 + 1744);
  ExAcquirePushLockSharedEx(a1 + 1744, 0LL);
  if ( (*(_DWORD *)(a1 + 1760) & 8) != 0 )
  {
    v11 = (void *)(*(_QWORD *)(a1 + 1656) & 0xFFFFFFFFFFFFFFF8uLL);
    ObfReferenceObject(v11);
    *a4 = *(_DWORD *)(a1 + 1656) & 3;
    *a3 = (*(_BYTE *)(a1 + 1656) & 4) != 0;
    if ( a5 )
      *a5 = *(_BYTE *)(v16 + 1786);
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
      *a5 = BYTE2(Process[2].ActiveProcessors.Bitmap[4]);
    return (void *)v12;
  }
}
