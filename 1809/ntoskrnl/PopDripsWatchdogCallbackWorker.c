/*
 * XREFs of PopDripsWatchdogCallbackWorker @ 0x14086F250
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     PopCalculateIdleInformation @ 0x1402DF198 (PopCalculateIdleInformation.c)
 *     PopDirectedDripsClearDisengageReason @ 0x140868D28 (PopDirectedDripsClearDisengageReason.c)
 *     PopDirectedDripsSetDisengageReason @ 0x140869918 (PopDirectedDripsSetDisengageReason.c)
 *     PopDripsWatchdogResetCallbackState @ 0x14086F974 (PopDripsWatchdogResetCallbackState.c)
 *     PopDripsWatchdogScheduleNextTimer @ 0x14086FA20 (PopDripsWatchdogScheduleNextTimer.c)
 *     PopDripsWatchdogSelectCallback @ 0x14086FA94 (PopDripsWatchdogSelectCallback.c)
 */

_QWORD *__fastcall PopDripsWatchdogCallbackWorker(PERESOURCE Resource)
{
  struct _KTHREAD *CurrentThread; // rax
  KSPIN_LOCK *p_SpinLock; // rdi
  KSPIN_LOCK v4; // rbp
  bool v5; // si
  int v6; // r14d
  unsigned int v7; // eax
  signed __int32 v8; // eax
  signed __int32 v9; // ett
  struct _KTHREAD *v10; // rax
  void (__fastcall *v12)(_BYTE *); // [rsp+30h] [rbp-C8h] BYREF
  _BYTE v13[24]; // [rsp+38h] [rbp-C0h] BYREF
  int v14; // [rsp+50h] [rbp-A8h]
  _BYTE v15[96]; // [rsp+60h] [rbp-98h] BYREF

  CurrentThread = KeGetCurrentThread();
  p_SpinLock = &Resource[2].SpinLock;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(Resource, 1u);
  if ( ((__int64)Resource[1].SystemResourcesList.Flink & 4) != 0 && (HIDWORD(Resource[2].Reserved2) & 2) != 0 )
  {
    ++LODWORD(Resource[6].SystemResourcesList.Blink);
    ++*(_DWORD *)p_SpinLock;
    ++*((_DWORD *)p_SpinLock + 2);
    v4 = MEMORY[0xFFFFF78000000008];
    PopCalculateIdleInformation((__int64)v13);
    v5 = 0;
    v6 = v14 - *((_DWORD *)p_SpinLock + 14);
    if ( v14 == *((_DWORD *)p_SpinLock + 14) )
      v5 = qword_14043D498 == 0;
    PopDripsWatchdogScheduleNextTimer(&Resource[1].SystemResourcesList.Blink);
    if ( v6 )
    {
      p_SpinLock[3] = v4;
      PopDripsWatchdogResetCallbackState(p_SpinLock, v4, v13);
    }
    v7 = *((_DWORD *)p_SpinLock + 1);
    if ( v7 )
    {
      if ( *(_DWORD *)p_SpinLock < v7 )
      {
        PopDirectedDripsClearDisengageReason(0);
      }
      else
      {
        PopDirectedDripsSetDisengageReason(0);
        *((_DWORD *)p_SpinLock + 1) = PopDripsWatchdogDebounceTickInterval + *(_DWORD *)p_SpinLock;
      }
    }
    if ( (HIDWORD(Resource[2].Reserved2) & 4) == 0 )
    {
      if ( v5 )
        PopDripsWatchdogSelectCallback((_DWORD)Resource, v4, (unsigned int)v13, (unsigned int)&v12, (__int64)v15);
      else
        v12 = 0LL;
      p_SpinLock[2] = v4;
      HIDWORD(Resource[2].Reserved2) |= 4u;
      ExReleaseResourceLite(Resource);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      if ( v5 )
      {
        v12(v15);
      }
      else
      {
        _m_prefetchw(&PopDirectedDripsState);
        v8 = PopDirectedDripsState;
        do
        {
          v9 = v8;
          v8 = _InterlockedCompareExchange(&PopDirectedDripsState, v8, v8);
        }
        while ( v9 != v8 );
        if ( (v8 & 1) != 0 && !PopDirectedDripsEnableV2 )
          _InterlockedExchange(&dword_14041A244, dword_14041A240);
      }
      v10 = KeGetCurrentThread();
      --v10->KernelApcDisable;
      ExAcquireResourceExclusiveLite(Resource, 1u);
      HIDWORD(Resource[2].Reserved2) &= ~4u;
    }
  }
  ExReleaseResourceLite(Resource);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
