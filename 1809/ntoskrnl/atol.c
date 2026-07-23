/*
 * XREFs of atol @ 0x1401950B0
 * Callers:
 *     HvlDebuggerSupportInitialize @ 0x140194054 (HvlDebuggerSupportInitialize.c)
 *     atoi @ 0x140195090 (atoi.c)
 *     KdInitSystem @ 0x140916140 (KdInitSystem.c)
 *     Phase1InitializationDiscard @ 0x1409B4E10 (Phase1InitializationDiscard.c)
 *     InitBootProcessor @ 0x1409B5EDC (InitBootProcessor.c)
 *     RamdiskStart @ 0x1409FAD4C (RamdiskStart.c)
 * Callees:
 *     strtolX @ 0x1401981AC (strtolX.c)
 */

int __cdecl atol(const char *Str)
{
  if ( Str )
    return strtolX(Str, 0LL, 10LL, 1LL);
  else
    return 0;
}
