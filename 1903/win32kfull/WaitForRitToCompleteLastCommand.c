/*
 * XREFs of WaitForRitToCompleteLastCommand @ 0x1C0111DF0
 * Callers:
 *     EditionActivateMitInput @ 0x1C0111CE0 (EditionActivateMitInput.c)
 *     EditionDeactivateMitInput @ 0x1C0160960 (EditionDeactivateMitInput.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WaitForRitToCompleteLastCommand(__int64 a1)
{
  UserSessionSwitchLeaveCrit(a1);
  while ( (unsigned int)ObWaitForSingleObject(ghDITRITEvent, 0LL, 0LL, 0LL, 0LL) == 257
       && !PsIsThreadTerminating(KeGetCurrentThread()) )
    ;
  return EnterCrit(0LL, 1LL);
}
