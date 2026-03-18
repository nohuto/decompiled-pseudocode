/*
 * XREFs of PiDmaGuardInitialize @ 0x140181CC8
 * Callers:
 *     PnpBootPhaseComplete @ 0x14073A3F0 (PnpBootPhaseComplete.c)
 *     IopInitializePlugPlayServices @ 0x1409C7608 (IopInitializePlugPlayServices.c)
 * Callees:
 *     PipDmgInitPhaseTwo @ 0x14073B170 (PipDmgInitPhaseTwo.c)
 *     PipDmgInitPhaseOne @ 0x1409C850C (PipDmgInitPhaseOne.c)
 *     PipDmgInitPhaseZero @ 0x1409C8558 (PipDmgInitPhaseZero.c)
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
