/*
 * XREFs of atol @ 0x14019F6C0
 * Callers:
 *     HvlDebuggerSupportInitialize @ 0x14019DD68 (HvlDebuggerSupportInitialize.c)
 *     atoi @ 0x14019F6A0 (atoi.c)
 *     KdInitSystem @ 0x140953150 (KdInitSystem.c)
 *     Phase1InitializationDiscard @ 0x140A07008 (Phase1InitializationDiscard.c)
 *     InitBootProcessor @ 0x140A0816C (InitBootProcessor.c)
 *     RamdiskStart @ 0x140A3F940 (RamdiskStart.c)
 * Callees:
 *     strtolX @ 0x1401A28BC (strtolX.c)
 */

int __cdecl atol(const char *Str)
{
  if ( Str )
    return strtolX(Str, 0LL, 10LL, 1LL);
  else
    return 0;
}
