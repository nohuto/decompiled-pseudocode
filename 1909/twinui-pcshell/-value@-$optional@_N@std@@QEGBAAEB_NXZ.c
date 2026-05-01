/*
 * XREFs of ?value@?$optional@_N@std@@QEGBAAEB_NXZ @ 0x1801D2FC0
 * Callers:
 *     ?ShouldSwitchToDesktop@DelayedTileActivationCallSite@@UEAAJXZ @ 0x1800ACE60 (-ShouldSwitchToDesktop@DelayedTileActivationCallSite@@UEAAJXZ.c)
 *     ?HandleOpenFromScreenSketch@CScreenClippingExperienceManager@@AEAAJPEAUHSTRING__@@@Z @ 0x1801CD0E8 (-HandleOpenFromScreenSketch@CScreenClippingExperienceManager@@AEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x18008A8BC (_CxxThrowException_0.c)
 */

__int64 __fastcall std::optional<bool>::value(__int64 a1)
{
  void **v2; // [rsp+20h] [rbp-28h] BYREF
  __int128 v3; // [rsp+28h] [rbp-20h]

  if ( !*(_BYTE *)(a1 + 1) )
  {
    v3 = 0uLL;
    v2 = &std::bad_optional_access::`vftable';
    throw (std::bad_optional_access *)&v2;
  }
  return a1;
}
