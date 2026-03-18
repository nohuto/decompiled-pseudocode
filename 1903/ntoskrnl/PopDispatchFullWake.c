/*
 * XREFs of PopDispatchFullWake @ 0x140729C50
 * Callers:
 *     <none>
 * Callees:
 *     PopEventCalloutDispatch @ 0x140181C8C (PopEventCalloutDispatch.c)
 *     PopReleasePolicyLock @ 0x140595780 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1405958A8 (PopAcquirePolicyLock.c)
 *     PopNotifyConsoleUserPresent @ 0x14071E580 (PopNotifyConsoleUserPresent.c)
 *     PopInitSIdle @ 0x140745314 (PopInitSIdle.c)
 */

struct _KTHREAD *__fastcall PopDispatchFullWake(__int64 a1, char a2)
{
  struct _KTHREAD *result; // rax

  if ( byte_140443041 != 3 )
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
