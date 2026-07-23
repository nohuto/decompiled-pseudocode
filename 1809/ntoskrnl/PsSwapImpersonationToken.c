/*
 * XREFs of PsSwapImpersonationToken @ 0x14069CF60
 * Callers:
 *     NtOpenThreadTokenEx @ 0x140649A40 (NtOpenThreadTokenEx.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14004E220 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 */

__int64 __fastcall PsSwapImpersonationToken(__int64 a1, void *a2, unsigned __int64 a3)
{
  void *v3; // r14
  struct _KTHREAD *CurrentThread; // r13
  int v8; // ebx
  __int64 v9; // rcx
  char v10; // bp
  void *v12; // rcx

  v3 = 0LL;
  if ( (*(_DWORD *)(a1 + 1744) & 8) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v8 = 0;
    ObfReferenceObject((PVOID)a3);
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(a1 + 1728, 0LL);
    if ( (*(_DWORD *)(a1 + 1744) & 8) != 0 )
    {
      v9 = *(_QWORD *)(a1 + 1640);
      if ( (void *)(v9 & 0xFFFFFFFFFFFFFFF8uLL) == a2 && (*(_DWORD *)(a1 + 1744) & 0x100) != 0 )
      {
        v3 = *(void **)(a1 + 1904);
        *(_QWORD *)(a1 + 1904) = 0LL;
        *(_QWORD *)(a1 + 1640) = a3 | v9 & 7;
        _InterlockedAnd((volatile signed __int32 *)(a1 + 1744), 0xFFFFFEFF);
      }
      else
      {
        v8 = -1073741823;
      }
    }
    else
    {
      v8 = -1073741700;
    }
    v10 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1728), 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v10 & 2) != 0 && (v10 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1728));
    KeAbPostRelease(a1 + 1728);
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
    if ( v8 < 0 )
    {
      v12 = (void *)a3;
    }
    else
    {
      ObfDereferenceObject(a2);
      if ( !v3 )
        return (unsigned int)v8;
      v12 = v3;
    }
    ObfDereferenceObject(v12);
    return (unsigned int)v8;
  }
  return 3221225596LL;
}
