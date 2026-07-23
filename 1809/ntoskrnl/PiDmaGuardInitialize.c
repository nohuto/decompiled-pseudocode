/*
 * XREFs of PiDmaGuardInitialize @ 0x140181E28
 * Callers:
 *     PnpBootPhaseComplete @ 0x14073B5C0 (PnpBootPhaseComplete.c)
 *     IopInitializePlugPlayServices @ 0x1409C8608 (IopInitializePlugPlayServices.c)
 * Callees:
 *     PipDmgInitPhaseTwo @ 0x14073C340 (PipDmgInitPhaseTwo.c)
 *     PipDmgInitPhaseOne @ 0x1409C950C (PipDmgInitPhaseOne.c)
 *     PipDmgInitPhaseZero @ 0x1409C9558 (PipDmgInitPhaseZero.c)
 */

__int64 __fastcall PiDmaGuardInitialize(int a1)
{
  if ( !a1 )
    return PipDmgInitPhaseZero();
  if ( a1 == 1 )
    return PipDmgInitPhaseOne();
  if ( a1 != 2 )
    __fastfail(5u);
  return PipDmgInitPhaseTwo();
}
