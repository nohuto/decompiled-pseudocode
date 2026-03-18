/*
 * XREFs of PsInitSystem @ 0x1409FEE9C
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A07524 (Phase1InitializationDiscard.c)
 *     InitBootProcessor @ 0x140A08698 (InitBootProcessor.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     PspInitPhase3 @ 0x1409FEAD8 (PspInitPhase3.c)
 *     PspInitPhase2 @ 0x1409FEB44 (PspInitPhase2.c)
 *     PspInitPhase1 @ 0x1409FEEE0 (PspInitPhase1.c)
 *     PspInitPhase0 @ 0x140A04A98 (PspInitPhase0.c)
 */

char __fastcall PsInitSystem(int a1, void *a2)
{
  int v2; // ecx
  int v3; // ecx

  if ( !a1 )
    return PspInitPhase0(a2);
  v2 = a1 - 1;
  if ( !v2 )
    return PspInitPhase1();
  v3 = v2 - 1;
  if ( !v3 )
    return PspInitPhase2();
  if ( v3 != 1 )
    KeBugCheckEx(0x33u, 1uLL, (unsigned int)InitializationPhase, 0LL, 0LL);
  return PspInitPhase3();
}
