/*
 * XREFs of SeInitSystem @ 0x1409FEA60
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A07008 (Phase1InitializationDiscard.c)
 *     InitBootProcessor @ 0x140A0816C (InitBootProcessor.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     SepInitializationPhase1 @ 0x140758140 (SepInitializationPhase1.c)
 *     SepInitializationPhase0 @ 0x140A00F84 (SepInitializationPhase0.c)
 */

char SeInitSystem()
{
  if ( !(_DWORD)InitializationPhase )
    return SepInitializationPhase0();
  if ( (_DWORD)InitializationPhase != 1 )
    KeBugCheckEx(0x33u, 0LL, (unsigned int)InitializationPhase, 0LL, 0LL);
  return SepInitializationPhase1();
}
