/*
 * XREFs of PsReferenceImpersonationTokenEx @ 0x1405DE460
 * Callers:
 *     SepReferenceTokenUsingPseudoHandle @ 0x14000C980 (SepReferenceTokenUsingPseudoHandle.c)
 *     ObpReferenceDeviceMap @ 0x1405D10D0 (ObpReferenceDeviceMap.c)
 *     SeCaptureSubjectContext @ 0x1405DE350 (SeCaptureSubjectContext.c)
 *     SeCreateClientSecurityEx @ 0x1405DE5B0 (SeCreateClientSecurityEx.c)
 *     SeCreateClientSecurity @ 0x1405E5240 (SeCreateClientSecurity.c)
 *     ObpLookupObjectName @ 0x1405F6F30 (ObpLookupObjectName.c)
 *     CmpCmdHiveOpen @ 0x14068367C (CmpCmdHiveOpen.c)
 *     PsReferenceImpersonationToken @ 0x1406CA0A0 (PsReferenceImpersonationToken.c)
 * Callees:
 *     ObfReferenceObject @ 0x14003E070 (ObfReferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x1400C6220 (ExfReleasePushLockShared.c)
 */

void *__fastcall PsReferenceImpersonationTokenEx(__int64 a1, char a2, _BYTE *a3, bool *a4, int *a5, _BYTE *a6)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v12; // r13
  void *v13; // rdi
  char v14; // al

  if ( (*(_DWORD *)(a1 + 1760) & 8) == 0 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  v12 = *(_QWORD *)(a1 + 544);
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx(a1 + 1744, 0LL);
  if ( (*(_DWORD *)(a1 + 1760) & 8) != 0 )
  {
    if ( (a2 & 1) != 0 && (v13 = *(void **)(a1 + 1920)) != 0LL )
    {
      v14 = 0;
    }
    else
    {
      v13 = (void *)(*(_QWORD *)(a1 + 1656) & 0xFFFFFFFFFFFFFFF8uLL);
      v14 = BYTE1(*(_DWORD *)(a1 + 1760)) & 1;
    }
    *a3 = v14;
    ObfReferenceObject(v13);
    *a5 = *(_DWORD *)(a1 + 1656) & 3;
    *a4 = (*(_BYTE *)(a1 + 1656) & 4) != 0;
    if ( a6 )
      *a6 = *(_BYTE *)(v12 + 1786);
  }
  else
  {
    v13 = 0LL;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1744), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 1744));
  KeAbPostRelease(a1 + 1744);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v13;
}
