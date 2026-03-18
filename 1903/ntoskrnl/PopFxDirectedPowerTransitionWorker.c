/*
 * XREFs of PopFxDirectedPowerTransitionWorker @ 0x1402F3120
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     PopFxHandleDirectedPowerTransition @ 0x1402F343C (PopFxHandleDirectedPowerTransition.c)
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
