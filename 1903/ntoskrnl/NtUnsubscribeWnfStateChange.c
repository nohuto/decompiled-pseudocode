/*
 * XREFs of NtUnsubscribeWnfStateChange @ 0x14063F280
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ExpWnfAcquireSubscriptionByName @ 0x14063F334 (ExpWnfAcquireSubscriptionByName.c)
 *     ExpCaptureWnfStateName @ 0x140642140 (ExpCaptureWnfStateName.c)
 *     ExpWnfDeleteSubscription @ 0x140671544 (ExpWnfDeleteSubscription.c)
 */

__int64 __fastcall NtUnsubscribeWnfStateChange(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v4; // rdx
  int v6; // [rsp+24h] [rbp-14h]
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF
  PVOID P; // [rsp+50h] [rbp+18h] BYREF

  v7 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  LOBYTE(a3) = KeGetCurrentThread()->PreviousMode;
  v6 = ExpCaptureWnfStateName(a1, &v7, a3);
  if ( v6 >= 0 )
  {
    v4 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[2];
    if ( v4 )
    {
      v6 = ExpWnfAcquireSubscriptionByName(v7, v4, &P);
      if ( v6 >= 0 )
      {
        ExpWnfDeleteSubscription(P);
        v6 = 0;
      }
    }
    else
    {
      v6 = -1073741772;
    }
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v6;
}
