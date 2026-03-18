/*
 * XREFs of UnlockVerifierSection @ 0x1C005AA54
 * Callers:
 *     FxLibraryCommonUnregisterClient @ 0x1C0043F8C (FxLibraryCommonUnregisterClient.c)
 *     FxDestroy @ 0x1C00590E4 (FxDestroy.c)
 * Callees:
 *     WPP_IFR_SF_dq @ 0x1C00307D4 (WPP_IFR_SF_dq.c)
 */

void __fastcall UnlockVerifierSection(_FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  int _a1; // ebx

  if ( ImageSectionHandle )
  {
    _a1 = _InterlockedDecrement(dword_1C00ABE88);
    MmUnlockPagableImageSection(ImageSectionHandle);
    WPP_IFR_SF_dq(FxDriverGlobals, 4u, 0x11u, 0xCu, WPP_globals_cpp_Traceguids, _a1, FxDriverGlobals);
  }
}
