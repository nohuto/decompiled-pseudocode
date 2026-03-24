/*
 * XREFs of MiDecrementVadsBeingDeleted @ 0x1402A3F00
 * Callers:
 *     MiFinishPlaceholderVadReplacement @ 0x14085C76C (MiFinishPlaceholderVadReplacement.c)
 * Callees:
 *     KeSetEvent @ 0x1400C2B00 (KeSetEvent.c)
 */

LONG __fastcall MiDecrementVadsBeingDeleted(__int64 a1)
{
  LONG result; // eax

  result = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 176), 0xFFFFFFFF);
  if ( result == 1 )
    return KeSetEvent(*(PRKEVENT *)(a1 + 200), 0, 0);
  return result;
}
