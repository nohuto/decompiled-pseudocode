/*
 * XREFs of atol @ 0x14019FDE0
 * Callers:
 *     HvlDebuggerSupportInitialize @ 0x14019E488 (HvlDebuggerSupportInitialize.c)
 *     atoi @ 0x14019FDC0 (atoi.c)
 *     KdInitSystem @ 0x140953150 (KdInitSystem.c)
 *     Phase1InitializationDiscard @ 0x140A07524 (Phase1InitializationDiscard.c)
 *     InitBootProcessor @ 0x140A08698 (InitBootProcessor.c)
 *     RamdiskStart @ 0x140A3F710 (RamdiskStart.c)
 * Callees:
 *     strtolX @ 0x1401A2FDC (strtolX.c)
 */

int __cdecl atol(const char *Str)
{
  if ( Str )
    return strtolX(Str, 0LL, 10LL, 1LL);
  else
    return 0;
}
