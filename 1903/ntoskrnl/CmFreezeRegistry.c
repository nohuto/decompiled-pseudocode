/*
 * XREFs of CmFreezeRegistry @ 0x14082E618
 * Callers:
 *     NtFreezeRegistry @ 0x140824010 (NtFreezeRegistry.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection_0 @ 0x140043820 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1400438A0 (ExAcquireRundownProtection_0.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     KiSetTimerEx @ 0x1400B2A00 (KiSetTimerEx.c)
 *     CmpDisableLazyFlush @ 0x14013D7E4 (CmpDisableLazyFlush.c)
 *     CmpUnlockRegistry @ 0x1405F5E50 (CmpUnlockRegistry.c)
 *     CmpLockRegistryExclusive @ 0x140631CA8 (CmpLockRegistryExclusive.c)
 *     CmpFlushHive @ 0x1406344A4 (CmpFlushHive.c)
 *     CmpGetNextActiveHive @ 0x140661E60 (CmpGetNextActiveHive.c)
 *     HvMarkBaseBlockDirty @ 0x1406EAC04 (HvMarkBaseBlockDirty.c)
 *     CmThawRegistry @ 0x14082E868 (CmThawRegistry.c)
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
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    }
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  else
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return (unsigned int)-1073741431;
  }
  return (unsigned int)v2;
}
