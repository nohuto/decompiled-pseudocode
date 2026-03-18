/*
 * XREFs of MiDecrementVadsBeingDeleted @ 0x1402BB020
 * Callers:
 *     MiFinishPlaceholderVadReplacement @ 0x140898B00 (MiFinishPlaceholderVadReplacement.c)
 * Callees:
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 */

LONG __fastcall MiDecrementVadsBeingDeleted(__int64 a1)
{
  LONG result; // eax

  result = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 232), 0xFFFFFFFF);
  if ( result == 1 )
    return KeSetEvent(*(PRKEVENT *)(a1 + 264), 0, 0);
  return result;
}
