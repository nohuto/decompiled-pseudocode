/*
 * XREFs of PopDispatchShutdownEvent @ 0x1408B36B0
 * Callers:
 *     <none>
 * Callees:
 *     PopEventCalloutDispatch @ 0x140181C8C (PopEventCalloutDispatch.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 */

struct _KTHREAD *PopDispatchShutdownEvent()
{
  unsigned __int32 v0; // eax
  struct _KTHREAD *result; // rax

  v0 = _InterlockedExchange(&PopShutdownEventCode, 0);
  if ( v0 )
    PopEventCalloutDispatch(1, v0);
  if ( PoPdcCallbacks )
    PoPdcCallbacks();
  result = KeGetCurrentThread();
  if ( result->WaitBlock[3].SpareLong )
    __fastfail(0x20u);
  return result;
}
