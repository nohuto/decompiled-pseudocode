/*
 * XREFs of ?_IsDisplayContextHolographic@HolographicPositioner@@AEAA_NXZ @ 0x180059094
 * Callers:
 *     ?OnApplicationViewChanged@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180058E90 (-OnApplicationViewChanged@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_C.c)
 *     ?_OnUnmanagedWin32ViewAdded@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIWin32ApplicationView@@@Z @ 0x180059018 (-_OnUnmanagedWin32ViewAdded@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIWin32Applicat.c)
 *     ?_OnManagedWin32AppFocusGained@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIWin32ApplicationView@@@Z @ 0x180205258 (-_OnManagedWin32AppFocusGained@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIWin32Appli.c)
 * Callees:
 *     ??$_QueryAndCompareWNFContext@W4UserDisplayContext@Holographic@Shell@Internal@Windows@@@@YA_NAEBU_WNF_STATE_NAME@@$$QEBW4UserDisplayContext@Holographic@Shell@Internal@Windows@@@Z @ 0x1801FDAA8 (--$_QueryAndCompareWNFContext@W4UserDisplayContext@Holographic@Shell@Internal@Windows@@@@YA_NAEB.c)
 */

bool __fastcall HolographicPositioner::_IsDisplayContextHolographic(HolographicPositioner *this)
{
  int v2; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 110) )
    return 0;
  v2 = 1;
  return _QueryAndCompareWNFContext<enum Windows::Internal::Shell::Holographic::UserDisplayContext>(this, &v2);
}
