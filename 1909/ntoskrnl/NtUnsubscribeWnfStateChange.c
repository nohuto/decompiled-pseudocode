/*
 * XREFs of NtUnsubscribeWnfStateChange @ 0x140652DD0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ExpWnfDeleteSubscription @ 0x140652374 (ExpWnfDeleteSubscription.c)
 *     ExpWnfAcquireSubscriptionByName @ 0x140652E84 (ExpWnfAcquireSubscriptionByName.c)
 *     ExpCaptureWnfStateName @ 0x140655C90 (ExpCaptureWnfStateName.c)
 */

NTSTATUS __cdecl NtUnsubscribeWnfStateChange(PCWNF_STATE_NAME StateName)
{
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // rbx
  unsigned __int64 v3; // rdx
  NTSTATUS v5; // [rsp+24h] [rbp-14h]
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF
  PVOID P; // [rsp+50h] [rbp+18h] BYREF

  v6 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = ExpCaptureWnfStateName(StateName, &v6, KeGetCurrentThread()->PreviousMode);
  if ( v5 >= 0 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    v3 = Process[2].ActiveProcessors.Bitmap[2];
    if ( v3 )
    {
      v5 = ExpWnfAcquireSubscriptionByName(v6, v3, &P);
      if ( v5 >= 0 )
      {
        ExpWnfDeleteSubscription((struct _EX_RUNDOWN_REF *)P, (__int64)Process);
        v5 = 0;
      }
    }
    else
    {
      v5 = -1073741772;
    }
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v5;
}
