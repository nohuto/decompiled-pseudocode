/*
 * XREFs of PspIsSiloInSilo @ 0x1406CB48C
 * Callers:
 *     PsIsProcessInSilo @ 0x1400CB0E8 (PsIsProcessInSilo.c)
 *     PsIsThreadInSilo @ 0x1400CC250 (PsIsThreadInSilo.c)
 * Callees:
 *     <none>
 */

char __fastcall PspIsSiloInSilo(__int64 a1, __int64 a2)
{
  if ( !a2 )
    return 1;
  while ( a1 )
  {
    if ( a1 == a2 )
      return 1;
    a1 = *(_QWORD *)(a1 + 1072);
  }
  return 0;
}
