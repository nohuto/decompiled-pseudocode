/*
 * XREFs of CmFreezeRegistry @ 0x1407F6A24
 * Callers:
 *     NtFreezeRegistry @ 0x1407EA590 (NtFreezeRegistry.c)
 * Callees:
 *     KiSetTimerEx @ 0x14001D380 (KiSetTimerEx.c)
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     CmpDisableLazyFlush @ 0x14013BCE0 (CmpDisableLazyFlush.c)
 *     CmpGetNextActiveHive @ 0x1405B2474 (CmpGetNextActiveHive.c)
 *     CmpLockRegistryExclusive @ 0x1405B26C8 (CmpLockRegistryExclusive.c)
 *     CmpFlushHive @ 0x1405B3F54 (CmpFlushHive.c)
 *     CmpUnlockRegistry @ 0x140646170 (CmpUnlockRegistry.c)
 *     HvMarkBaseBlockDirty @ 0x1406CC1D4 (HvMarkBaseBlockDirty.c)
 *     CmThawRegistry @ 0x1407F6C74 (CmThawRegistry.c)
 */

__int64 __fastcall CmFreezeRegistry(int a1)
{
  struct _KTHREAD *CurrentThread; // rax
  int v2; // ebx
  struct _EX_RUNDOWN_REF *i; // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 *NextActiveHive; // rax
  __int64 v9; // rdi
  int v10; // eax
  struct _KTHREAD *v11; // rax
  struct _EX_RUNDOWN_REF *j; // rcx
  __int64 *v13; // rax
  struct _EX_RUNDOWN_REF *v14; // rdi

  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    CmpLockRegistryExclusive();
    if ( CmpFreezeThawState )
    {
      v2 = -1073741431;
      CmpUnlockRegistry();
    }
    else
    {
      for ( i = 0LL; ; i = (struct _EX_RUNDOWN_REF *)v9 )
      {
        NextActiveHive = CmpGetNextActiveHive(i);
        v9 = (__int64)NextActiveHive;
        if ( !NextActiveHive )
          break;
        if ( (NextActiveHive[20] & 3) == 0 )
        {
          *(_OWORD *)(NextActiveHive[8] + 4056) = *(_OWORD *)(NextActiveHive[8] + 112);
          *(_OWORD *)(NextActiveHive[8] + 4040) = *(_OWORD *)(NextActiveHive[8] + 148);
          *(_OWORD *)(NextActiveHive[8] + 4072) = *(_OWORD *)(NextActiveHive[8] + 128);
          v5 = NextActiveHive[8];
          *(_QWORD *)(v5 + 112) = 0LL;
          *(_QWORD *)(v5 + 120) = 0LL;
          v6 = *(_QWORD *)(v9 + 64);
          *(_QWORD *)(v6 + 148) = 0LL;
          *(_QWORD *)(v6 + 156) = 0LL;
          v7 = *(_QWORD *)(v9 + 64);
          *(_QWORD *)(v7 + 128) = 0LL;
          *(_QWORD *)(v7 + 136) = 0LL;
          *(_DWORD *)(*(_QWORD *)(v9 + 64) + 164LL) = 0;
          if ( (*(_DWORD *)(v9 + 4152) & 0x300) != 0x100 && !*(_DWORD *)(v9 + 104) )
          {
            ExAcquirePushLockExclusiveEx(v9 + 80, 0LL);
            HvMarkBaseBlockDirty(v9);
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)(v9 + 80));
            KeAbPostRelease(v9 + 80);
          }
        }
      }
      v10 = CmFreezeThawTimeoutInSeconds;
      CmpFreezeThawState = 1;
      if ( a1 )
        v10 = a1;
      KiSetTimerEx((__int64)&CmpFreezeThawTimer, -10000000LL * v10, 0, 0, (__int64)&CmpFreezeThawDpc);
      CmpDisableLazyFlush(2u);
      CmpUnlockRegistry();
      v11 = KeGetCurrentThread();
      --v11->KernelApcDisable;
      for ( j = 0LL; ; j = v14 )
      {
        v13 = CmpGetNextActiveHive(j);
        v14 = (struct _EX_RUNDOWN_REF *)v13;
        if ( !v13 )
          break;
        if ( (v13[20] & 3) == 0 )
        {
          v2 = CmpFlushHive((ULONG_PTR)v13, 0xDu);
          if ( v2 < 0 )
          {
            ExReleaseRundownProtection_0(v14 + 204);
            CmThawRegistry();
            v2 = -1073741491;
            break;
          }
        }
      }
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    }
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  else
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    return (unsigned int)-1073741431;
  }
  return (unsigned int)v2;
}
