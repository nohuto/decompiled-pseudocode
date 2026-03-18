/*
 * XREFs of atol @ 0x140194F50
 * Callers:
 *     HvlDebuggerSupportInitialize @ 0x140193EF4 (HvlDebuggerSupportInitialize.c)
 *     atoi @ 0x140194F30 (atoi.c)
 *     KdInitSystem @ 0x140915140 (KdInitSystem.c)
 *     Phase1InitializationDiscard @ 0x1409B3E10 (Phase1InitializationDiscard.c)
 *     InitBootProcessor @ 0x1409B4EDC (InitBootProcessor.c)
 *     RamdiskStart @ 0x1409F9D3C (RamdiskStart.c)
 * Callees:
 *     strtolX @ 0x14019804C (strtolX.c)
 */

int __cdecl atol(const char *Str)
{
  if ( Str )
    return strtolX(Str, 0LL, 10LL, 1LL);
  else
    return 0;
}
