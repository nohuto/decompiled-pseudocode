/*
 * XREFs of PsSetThreadHardErrorsAreDisabled @ 0x14016D0A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PsSetThreadHardErrorsAreDisabled(__int64 a1, char a2)
{
  if ( a2 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1744), 0x10u);
  else
    _InterlockedAnd((volatile signed __int32 *)(a1 + 1744), 0xFFFFFFEF);
}
