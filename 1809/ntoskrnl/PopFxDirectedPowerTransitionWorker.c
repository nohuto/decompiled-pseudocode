/*
 * XREFs of PopFxDirectedPowerTransitionWorker @ 0x1402D81B0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     PopFxHandleDirectedPowerTransition @ 0x1402D838C (PopFxHandleDirectedPowerTransition.c)
 */

LONG __fastcall PopFxDirectedPowerTransitionWorker(ULONG_PTR BugCheckParameter3)
{
  LONG result; // eax

  do
    PopFxHandleDirectedPowerTransition(BugCheckParameter3);
  while ( _InterlockedExchangeAdd((volatile signed __int32 *)(BugCheckParameter3 + 936), 0xFFFFFFFF) != 1 );
  result = _InterlockedExchangeAdd((volatile signed __int32 *)(BugCheckParameter3 + 228), 0xFFFFFFFF);
  if ( result == 1 )
    return KeSetEvent((PRKEVENT)(BugCheckParameter3 + 232), 0, 0);
  return result;
}
