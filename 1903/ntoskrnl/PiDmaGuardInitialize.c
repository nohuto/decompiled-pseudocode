/*
 * XREFs of PiDmaGuardInitialize @ 0x140189734
 * Callers:
 *     PnpBootPhaseComplete @ 0x140754ED4 (PnpBootPhaseComplete.c)
 *     IopInitializePlugPlayServices @ 0x1409F8558 (IopInitializePlugPlayServices.c)
 * Callees:
 *     PipDmgInitPhaseTwo @ 0x140755BE4 (PipDmgInitPhaseTwo.c)
 *     PipDmgInitPhaseZero @ 0x1409F8454 (PipDmgInitPhaseZero.c)
 *     PipDmgInitPhaseOne @ 0x1409F84BC (PipDmgInitPhaseOne.c)
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
