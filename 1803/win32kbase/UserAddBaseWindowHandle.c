/*
 * XREFs of UserAddBaseWindowHandle @ 0x1C00BC290
 * Callers:
 *     NtMITMinuserWindowCreated @ 0x1C00B4700 (NtMITMinuserWindowCreated.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0023134 (W32GetThreadWin32Thread.c)
 *     HMAllocObject @ 0x1C0035000 (HMAllocObject.c)
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_q @ 0x1C00739CC (WPP_RECORDER_SF_q.c)
 *     HMFindEntry @ 0x1C00B1120 (HMFindEntry.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00BCB94 (WPP_RECORDER_SF_qq.c)
 */

__int64 __fastcall UserAddBaseWindowHandle(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 ThreadWin32Thread; // rdi
  __int64 v4; // rcx
  int v5; // edx
  __int64 v6; // rax
  _QWORD *v7; // rax
  int v8; // r9d
  _QWORD v10[4]; // [rsp+40h] [rbp-38h] BYREF

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0x10u,
      0xAu,
      (__int64)&WPP_5514d2cca87735d76e5bca4322c66bfd_Traceguids);
  v2 = 0;
  RIMLockExclusive((__int64)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( (*(_DWORD *)(ThreadWin32Thread + 1200) & 0x1000000) != 0 )
  {
    RIMLockExclusive((__int64)&WPP_MAIN_CB.Queue.Wcb.CurrentIrp);
    v10[0] = a1;
    v10[2] = 0LL;
    v10[1] = PsGetCurrentProcessWin32Process(v4);
    if ( HMFindEntry((__int64)v10, (unsigned int (__fastcall *)(__int64, char *))lookForMatchingMinuserHwnd) )
    {
      v2 = 1;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        goto LABEL_11;
      v8 = 12;
      LOBYTE(v5) = 5;
    }
    else
    {
      v6 = HMAllocObject(ThreadWin32Thread, 0LL, 0x17u, 0x80u);
      if ( v6 )
      {
        *(_DWORD *)(v6 + 124) &= ~2u;
        v2 = 1;
        *(_QWORD *)(v6 + 56) = a1;
        v7 = (_QWORD *)(v6 + 96);
        v7[1] = v7;
        *v7 = v7;
LABEL_11:
        WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc = 0LL;
        ExReleasePushLockExclusiveEx(&WPP_MAIN_CB.Queue.Wcb.CurrentIrp, 0LL);
        KeLeaveCriticalRegion();
        goto LABEL_14;
      }
      v8 = 11;
      LOBYTE(v5) = 2;
    }
    WPP_RECORDER_SF_qq(
      WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink,
      v5,
      16,
      v8,
      (__int64)&WPP_5514d2cca87735d76e5bca4322c66bfd_Traceguids,
      ThreadWin32Thread,
      a1);
    goto LABEL_11;
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_q(
      (__int64)WPP_MAIN_CB.Queue.ListEntry.Blink,
      5u,
      0x10u,
      0xDu,
      (__int64)&WPP_5514d2cca87735d76e5bca4322c66bfd_Traceguids,
      ThreadWin32Thread);
LABEL_14:
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0x10u,
      0xEu,
      (__int64)&WPP_5514d2cca87735d76e5bca4322c66bfd_Traceguids);
  WPP_MAIN_CB.Queue.Wcb.DeviceObject = 0LL;
  ExReleasePushLockExclusiveEx(&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters, 0LL);
  KeLeaveCriticalRegion();
  return v2;
}
