/*
 * XREFs of atol @ 0x140194F70
 * Callers:
 *     HvlDebuggerSupportInitialize @ 0x140193F14 (HvlDebuggerSupportInitialize.c)
 *     atoi @ 0x140194F50 (atoi.c)
 *     KdInitSystem @ 0x140915140 (KdInitSystem.c)
 *     Phase1InitializationDiscard @ 0x1409B3E10 (Phase1InitializationDiscard.c)
 *     InitBootProcessor @ 0x1409B4EDC (InitBootProcessor.c)
 *     RamdiskStart @ 0x1409F9D4C (RamdiskStart.c)
 * Callees:
 *     strtolX @ 0x14019806C (strtolX.c)
 */

int __cdecl atol(const char *Str)
{
  if ( Str )
    return strtolX(Str, 0LL, 10LL, 1LL);
  else
    return 0;
}
