/*
 * XREFs of PopDispatchFullWake @ 0x1406E24D0
 * Callers:
 *     <none>
 * Callees:
 *     PopEventCalloutDispatch @ 0x14017840C (PopEventCalloutDispatch.c)
 *     PopReleasePolicyLock @ 0x140565370 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140565690 (PopAcquirePolicyLock.c)
 *     PopNotifyConsoleUserPresent @ 0x1406DBBE4 (PopNotifyConsoleUserPresent.c)
 *     PopInitSIdle @ 0x14071C5DC (PopInitSIdle.c)
 */

struct _KTHREAD *__fastcall PopDispatchFullWake(__int64 a1, char a2)
{
  struct _KTHREAD *result; // rax

  if ( byte_140417701 != 3 )
  {
    PopNotifyConsoleUserPresent(0, a2, 9u);
    if ( (PopFullWake & 3) == 2 )
    {
      _InterlockedOr(&PopFullWake, 1u);
      PopEventCalloutDispatch(0, 0LL);
      PopAcquirePolicyLock();
      PopInitSIdle(4LL);
      PopReleasePolicyLock();
    }
  }
  result = KeGetCurrentThread();
  if ( result->WaitBlock[3].SpareLong )
    __fastfail(0x20u);
  return result;
}
