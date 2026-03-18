/*
 * XREFs of PopFxDirectedPowerTransitionWorker @ 0x1402F2E80
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     PopFxHandleDirectedPowerTransition @ 0x1402F319C (PopFxHandleDirectedPowerTransition.c)
 */

LONG __fastcall PopFxDirectedPowerTransitionWorker(ULONG_PTR BugCheckParameter3)
{
  LONG result; // eax

  do
    PopFxHandleDirectedPowerTransition(BugCheckParameter3);
  while ( _InterlockedExchangeAdd((volatile signed __int32 *)(BugCheckParameter3 + 944), 0xFFFFFFFF) != 1 );
  result = _InterlockedExchangeAdd((volatile signed __int32 *)(BugCheckParameter3 + 236), 0xFFFFFFFF);
  if ( result == 1 )
    return KeSetEvent((PRKEVENT)(BugCheckParameter3 + 240), 0, 0);
  return result;
}
