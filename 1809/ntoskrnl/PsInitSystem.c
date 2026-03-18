/*
 * XREFs of PsInitSystem @ 0x1409C4944
 * Callers:
 *     Phase1InitializationDiscard @ 0x1409B3E10 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401BBBA0 (KeBugCheckEx.c)
 *     PspInitPhase1 @ 0x1409AB320 (PspInitPhase1.c)
 *     PspInitPhase0 @ 0x1409B10C8 (PspInitPhase0.c)
 *     PspInitPhase2 @ 0x1409D5F0C (PspInitPhase2.c)
 *     PspInitPhase3 @ 0x1409DF584 (PspInitPhase3.c)
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
