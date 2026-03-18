/*
 * XREFs of PopDripsWatchdogCallbackWorker @ 0x1408AA2F0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C090 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     PopDirectedDripsClearDisengageReason @ 0x1401599F0 (PopDirectedDripsClearDisengageReason.c)
 *     PopDirectedDripsSetDisengageReason @ 0x140159A4C (PopDirectedDripsSetDisengageReason.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     PopCalculateIdleInformation @ 0x1402FBA58 (PopCalculateIdleInformation.c)
 *     PopDripsWatchdogResetCallbackState @ 0x1408AAAFC (PopDripsWatchdogResetCallbackState.c)
 *     PopDripsWatchdogScheduleNextTimer @ 0x1408AAB30 (PopDripsWatchdogScheduleNextTimer.c)
 *     PopDripsWatchdogSelectCallback @ 0x1408AAB9C (PopDripsWatchdogSelectCallback.c)
 */

_QWORD *__fastcall PopDripsWatchdogCallbackWorker(PERESOURCE Resource)
{
  struct _KTHREAD *CurrentThread; // rax
  KSPIN_LOCK *p_SpinLock; // rsi
  struct _OWNER_ENTRY *v4; // r14
  bool v5; // bp
  int v6; // r15d
  unsigned int SpinLock_high; // eax
  struct _KTHREAD *v8; // rax
  void (__fastcall *v10)(_BYTE *); // [rsp+30h] [rbp-C8h] BYREF
  _DWORD v11[10]; // [rsp+38h] [rbp-C0h] BYREF
  _BYTE v12[96]; // [rsp+60h] [rbp-98h] BYREF

  memset(v12, 0, sizeof(v12));
  memset(v11, 0, 0x20uLL);
  CurrentThread = KeGetCurrentThread();
  p_SpinLock = &Resource[2].SpinLock;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(Resource, 1u);
  if ( ((__int64)Resource[1].SystemResourcesList.Flink & 4) != 0 && (HIDWORD(Resource[2].Reserved2) & 2) != 0 )
  {
    ++LODWORD(Resource[6].SystemResourcesList.Blink);
    ++*(_DWORD *)p_SpinLock;
    ++LODWORD(Resource[3].SystemResourcesList.Flink);
    v4 = (struct _OWNER_ENTRY *)MEMORY[0xFFFFF78000000008];
    PopCalculateIdleInformation((__int64)v11);
    v5 = 1;
    v6 = v11[6] - LODWORD(Resource[3].OwnerEntry.OwnerThread);
    if ( v11[6] == LODWORD(Resource[3].OwnerEntry.OwnerThread) && !qword_140467BD8 )
    {
      if ( (HIDWORD(Resource[1].SystemResourcesList.Flink) & 1) == 0 )
        v5 = (byte_140467C50 & 1) == 0;
    }
    else
    {
      v5 = 0;
    }
    PopDripsWatchdogScheduleNextTimer(&Resource[1].SystemResourcesList.Blink);
    if ( v6 )
    {
      Resource[3].OwnerTable = v4;
      PopDripsWatchdogResetCallbackState(&Resource[2].SpinLock, v4, v11);
    }
    SpinLock_high = HIDWORD(Resource[2].SpinLock);
    if ( SpinLock_high )
    {
      if ( *(_DWORD *)p_SpinLock < SpinLock_high )
      {
        PopDirectedDripsClearDisengageReason(0);
      }
      else
      {
        PopDirectedDripsSetDisengageReason(0);
        HIDWORD(Resource[2].SpinLock) = PopDripsWatchdogDebounceTickInterval + *(_DWORD *)p_SpinLock;
      }
    }
    if ( (HIDWORD(Resource[2].Reserved2) & 4) == 0 )
    {
      if ( v5 )
        PopDripsWatchdogSelectCallback(
          (_DWORD)Resource,
          (_DWORD)v4,
          (unsigned int)v11,
          (unsigned int)&v10,
          (__int64)v12);
      else
        v10 = 0LL;
      Resource[3].SystemResourcesList.Blink = (struct _LIST_ENTRY *)v4;
      HIDWORD(Resource[2].Reserved2) |= 4u;
      ExReleaseResourceLite(Resource);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      if ( v5 )
        v10(v12);
      v8 = KeGetCurrentThread();
      --v8->KernelApcDisable;
      ExAcquireResourceExclusiveLite(Resource, 1u);
      HIDWORD(Resource[2].Reserved2) &= ~4u;
    }
  }
  ExReleaseResourceLite(Resource);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
