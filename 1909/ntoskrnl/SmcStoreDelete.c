/*
 * XREFs of SmcStoreDelete @ 0x1408EBC90
 * Callers:
 *     SmcProcessStoreCreateRequest @ 0x1408E8C5C (SmcProcessStoreCreateRequest.c)
 *     SmcProcessStoreDeleteRequest @ 0x1408E8DB8 (SmcProcessStoreDeleteRequest.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExReleaseRundownProtection_0 @ 0x140043C20 (ExReleaseRundownProtection_0.c)
 *     ExWaitForRundownProtectionRelease @ 0x140082C50 (ExWaitForRundownProtectionRelease.c)
 *     CmSiFreeMemory @ 0x14008CFE0 (CmSiFreeMemory.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     ExRundownCompleted @ 0x1400EA950 (ExRundownCompleted.c)
 *     SmStoreDelete @ 0x1408E837C (SmStoreDelete.c)
 *     SmcCacheReference @ 0x1408EB5F0 (SmcCacheReference.c)
 *     SmcStoreEntryFind @ 0x1408EBDF4 (SmcStoreEntryFind.c)
 */

__int64 __fastcall SmcStoreDelete(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  char v6; // r15
  struct _PRIVILEGE_SET *v8; // rbp
  struct _EX_RUNDOWN_REF v9; // rdi
  unsigned int v10; // edi
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v12; // rsi
  _DWORD *v13; // rax
  _DWORD *v14; // r14
  struct _KTHREAD *v15; // rax

  v6 = a2;
  v8 = 0LL;
  v9.Count = SmcCacheReference(a1, a2).Count;
  if ( v9.Count )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v12 = (volatile signed __int64 *)(v9.Count + 160);
    ExAcquirePushLockExclusiveEx(v9.Count + 160, 0LL);
    v13 = (_DWORD *)SmcStoreEntryFind(v9.Count, a3, a4);
    v14 = v13;
    if ( v13 )
    {
      v13[1] |= 4u;
      *v13 = -1;
      if ( (_InterlockedExchangeAdd64(v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v9.Count + 160));
      KeAbPostRelease(v9.Count + 160);
      KeLeaveCriticalRegion();
      ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)v14 + 2);
      ExRundownCompleted((PEX_RUNDOWN_REF)v14 + 2);
      SmStoreDelete(a4, a3);
      v15 = KeGetCurrentThread();
      --v15->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(v9.Count + 160, 0LL);
      v8 = (struct _PRIVILEGE_SET *)*((_QWORD *)v14 + 1);
      *((_QWORD *)v14 + 1) = 0LL;
      v14[1] &= ~4u;
      v10 = 0;
    }
    else
    {
      v10 = -1073741672;
    }
    if ( (_InterlockedExchangeAdd64(v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v12);
    KeAbPostRelease((ULONG_PTR)v12);
    KeLeaveCriticalRegion();
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(32LL * (v6 & 0xF) + a1 + 8));
    if ( v8 )
      CmSiFreeMemory(v8);
  }
  else
  {
    return (unsigned int)-1073741672;
  }
  return v10;
}
