/*
 * XREFs of UserDeleteBaseWindowHandle @ 0x1C00BC470
 * Callers:
 *     NtMITMinuserWindowDestroyed @ 0x1C00B4870 (NtMITMinuserWindowDestroyed.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0023134 (W32GetThreadWin32Thread.c)
 *     HMDestroyUnlockedObject @ 0x1C0034DD0 (HMDestroyUnlockedObject.c)
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_q @ 0x1C00739CC (WPP_RECORDER_SF_q.c)
 *     HMFindEntry @ 0x1C00B1120 (HMFindEntry.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C00BCCB8 (WPP_RECORDER_SF_qqq.c)
 */

__int64 __fastcall UserDeleteBaseWindowHandle(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 ThreadWin32Thread; // rdi
  __int64 v4; // rcx
  char *v5; // rax
  int v6; // edx
  __int64 v8; // [rsp+40h] [rbp-28h] BYREF
  __int64 CurrentProcessWin32Process; // [rsp+48h] [rbp-20h]
  __int64 v10; // [rsp+50h] [rbp-18h]

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0x10u,
      0x16u,
      (__int64)&WPP_5514d2cca87735d76e5bca4322c66bfd_Traceguids);
  v2 = 0;
  RIMLockExclusive((__int64)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( (*(_DWORD *)(ThreadWin32Thread + 1200) & 0x1000000) != 0 )
  {
    RIMLockExclusive((__int64)&WPP_MAIN_CB.Queue.Wcb.CurrentIrp);
    v8 = a1;
    v10 = ThreadWin32Thread;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4);
    v5 = HMFindEntry((__int64)&v8, (unsigned int (__fastcall *)(__int64, char *))lookForMatchingMinuserHwnd);
    if ( v5 )
    {
      v2 = 1;
      if ( (v5[25] & 1) == 0 )
        HMDestroyUnlockedObject(v5);
    }
    else
    {
      LOBYTE(v6) = 2;
      WPP_RECORDER_SF_qqq(
        WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink,
        v6,
        16,
        23,
        (__int64)&WPP_5514d2cca87735d76e5bca4322c66bfd_Traceguids,
        CurrentProcessWin32Process,
        v10,
        a1);
    }
    WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc = 0LL;
    ExReleasePushLockExclusiveEx(&WPP_MAIN_CB.Queue.Wcb.CurrentIrp, 0LL);
    KeLeaveCriticalRegion();
  }
  else if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_q(
      (__int64)WPP_MAIN_CB.Queue.ListEntry.Blink,
      5u,
      0x10u,
      0x18u,
      (__int64)&WPP_5514d2cca87735d76e5bca4322c66bfd_Traceguids,
      ThreadWin32Thread);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0x10u,
      0x19u,
      (__int64)&WPP_5514d2cca87735d76e5bca4322c66bfd_Traceguids);
  WPP_MAIN_CB.Queue.Wcb.DeviceObject = 0LL;
  ExReleasePushLockExclusiveEx(&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters, 0LL);
  KeLeaveCriticalRegion();
  return v2;
}
