/*
 * XREFs of PiDmaGuardInitialize @ 0x140189CE4
 * Callers:
 *     PnpBootPhaseComplete @ 0x140755964 (PnpBootPhaseComplete.c)
 *     IopInitializePlugPlayServices @ 0x1409F8468 (IopInitializePlugPlayServices.c)
 * Callees:
 *     PipDmgInitPhaseTwo @ 0x140756674 (PipDmgInitPhaseTwo.c)
 *     PipDmgInitPhaseZero @ 0x1409F8364 (PipDmgInitPhaseZero.c)
 *     PipDmgInitPhaseOne @ 0x1409F83CC (PipDmgInitPhaseOne.c)
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
