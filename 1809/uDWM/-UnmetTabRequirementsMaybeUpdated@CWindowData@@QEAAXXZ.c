/*
 * XREFs of ?UnmetTabRequirementsMaybeUpdated@CWindowData@@QEAAXXZ @ 0x18000F424
 * Callers:
 *     ?OwnerChange@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x18000F120 (-OwnerChange@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z.c)
 *     ?ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18001EC50 (-ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z @ 0x180020E38 (-SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z.c)
 *     ?OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x1800245E8 (-OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18004AD9C (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CA-AW4wil_de.c)
 *     ?ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18004D640 (-ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_.c)
 */

void __fastcall CWindowData::UnmetTabRequirementsMaybeUpdated(CWindowData *this)
{
  __int16 v1; // [rsp+44h] [rbp+Ch]
  int v2; // [rsp+48h] [rbp+10h] BYREF
  __int16 v3; // [rsp+4Ch] [rbp+14h]

  HIBYTE(v1) = BYTE5(this);
  if ( (`wil::Feature<__WilFeatureTraits_Feature_TabShell>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_TabShell>::GetCachedFeatureEnabledState();
  LOBYTE(v1) = 1;
  v2 = 0;
  v3 = v1;
  wil::details::ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_TabShell>::GetFeaturePropertyCache'::`2'::data,
    10727725LL,
    &v2,
    0LL,
    3);
}
