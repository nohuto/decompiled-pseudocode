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

NTSTATUS __cdecl NtUnsubscribeWnfStateChange(PCWNF_STATE_NAME StateName)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v2; // rdx
  NTSTATUS v4; // [rsp+24h] [rbp-14h]
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF
  PVOID P; // [rsp+50h] [rbp+18h] BYREF

  v5 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = ExpCaptureWnfStateName(StateName, &v5, KeGetCurrentThread()->PreviousMode);
  if ( v4 >= 0 )
  {
    v2 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[2];
    if ( v2 )
    {
      v4 = ExpWnfAcquireSubscriptionByName(v5, v2, &P);
      if ( v4 >= 0 )
      {
        ExpWnfDeleteSubscription(P);
        v4 = 0;
      }
    }
    else
    {
      v4 = -1073741772;
    }
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v4;
}
