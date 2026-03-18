/*
 * XREFs of PsInitSystem @ 0x1409FE980
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A07008 (Phase1InitializationDiscard.c)
 *     InitBootProcessor @ 0x140A0816C (InitBootProcessor.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     PspInitPhase3 @ 0x1409FE5BC (PspInitPhase3.c)
 *     PspInitPhase2 @ 0x1409FE628 (PspInitPhase2.c)
 *     PspInitPhase1 @ 0x1409FE9C4 (PspInitPhase1.c)
 *     PspInitPhase0 @ 0x140A0457C (PspInitPhase0.c)
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
