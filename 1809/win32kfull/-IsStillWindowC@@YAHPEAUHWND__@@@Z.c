/*
 * XREFs of ?IsStillWindowC@@YAHPEAUHWND__@@@Z @ 0x1C0038368
 * Callers:
 *     ?BltValidInit@@YAHPEAUtagSMWP@@@Z @ 0x1C0038244 (-BltValidInit@@YAHPEAUtagSMWP@@@Z.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C003839C (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C00391F4 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C0041894 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C0043B34 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C003730C (HMValidateHandleNoSecure.c)
 */

_BOOL8 __fastcall IsStillWindowC(unsigned __int64 a1, __int64 a2)
{
  if ( a1 <= 1 || a1 > 0xFFFFFFFFFFFFFFFDuLL )
    return 1LL;
  LOBYTE(a2) = 1;
  return HMValidateHandleNoSecure(a1, a2) != 0;
}
