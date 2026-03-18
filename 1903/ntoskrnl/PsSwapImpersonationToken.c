/*
 * XREFs of PsSwapImpersonationToken @ 0x1405D6300
 * Callers:
 *     NtOpenThreadTokenEx @ 0x1405D5B10 (NtOpenThreadTokenEx.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14003E330 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall PsSwapImpersonationToken(__int64 a1, void *a2, unsigned __int64 a3)
{
  int v3; // edi
  void *v7; // r14
  struct _KTHREAD *CurrentThread; // r15
  __int64 v9; // rcx
  char v10; // al
  void *v12; // rcx

  v3 = 0;
  v7 = 0LL;
  if ( (*(_DWORD *)(a1 + 1760) & 8) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    ObfReferenceObject((PVOID)a3);
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(a1 + 1744, 0LL);
    if ( (*(_DWORD *)(a1 + 1760) & 8) != 0 )
    {
      v9 = *(_QWORD *)(a1 + 1656);
      if ( (void *)(v9 & 0xFFFFFFFFFFFFFFF8uLL) == a2 && (*(_DWORD *)(a1 + 1760) & 0x100) != 0 )
      {
        v7 = *(void **)(a1 + 1920);
        *(_QWORD *)(a1 + 1920) = 0LL;
        *(_QWORD *)(a1 + 1656) = a3 | v9 & 7;
        _InterlockedAnd((volatile signed __int32 *)(a1 + 1760), 0xFFFFFEFF);
      }
      else
      {
        v3 = -1073741823;
      }
    }
    else
    {
      v3 = -1073741700;
    }
    v10 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1744), 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v10 & 2) != 0 && (v10 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1744));
    KeAbPostRelease(a1 + 1744);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    if ( v3 < 0 )
    {
      v12 = (void *)a3;
    }
    else
    {
      ObfDereferenceObject(a2);
      if ( !v7 )
        return (unsigned int)v3;
      v12 = v7;
    }
    ObfDereferenceObject(v12);
    return (unsigned int)v3;
  }
  return 3221225596LL;
}
