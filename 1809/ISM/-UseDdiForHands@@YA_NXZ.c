/*
 * XREFs of ?UseDdiForHands@@YA_NXZ @ 0x180058594
 * Callers:
 *     ??0SpectrumListener@@QEAA@PEAVMPCRawInputProvider@@KK@Z @ 0x180058664 (--0SpectrumListener@@QEAA@PEAVMPCRawInputProvider@@KK@Z.c)
 *     ?Initialize@SpatialRimDeviceCollection@@IEAAJPEAPEAX@Z @ 0x1800620A8 (-Initialize@SpatialRimDeviceCollection@@IEAAJPEAPEAX@Z.c)
 *     ?ShouldAttachDevice@MPCProcessor@@UEAA_NPEAUDeviceInfo@@@Z @ 0x1800F64C0 (-ShouldAttachDevice@MPCProcessor@@UEAA_NPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18002F774 (-ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_UseDdiForHandsOnDesktop@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180059440 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_UseDdiForHandsOnDesktop@@@wi.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_UseDdiForHandsOnDevice@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800595A8 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_UseDdiForHandsOnDevice@@@wil.c)
 */

char UseDdiForHands(void)
{
  char v0; // bl
  __int16 v2; // [rsp+44h] [rbp+14h]
  int v3; // [rsp+48h] [rbp+18h] BYREF
  __int16 v4; // [rsp+4Ch] [rbp+1Ch]

  v0 = 1;
  if ( ((1LL << gdwDeviceFamily) & 0x224A) != 0 )
  {
    if ( (`wil::Feature<__WilFeatureTraits_Feature_UseDdiForHandsOnDesktop>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
      wil::Feature<__WilFeatureTraits_Feature_UseDdiForHandsOnDesktop>::GetCachedFeatureEnabledState();
    LOBYTE(v2) = 3;
    v3 = 0;
    v4 = v2;
    wil::details::ReportUsageToService(
      &`wil::Feature<__WilFeatureTraits_Feature_UseDdiForHandsOnDesktop>::GetFeaturePropertyCache'::`2'::data,
      0x10EADBBu,
      (const struct FEATURE_LOGGED_TRAITS *)&v3,
      1,
      3);
  }
  else
  {
    if ( (`wil::Feature<__WilFeatureTraits_Feature_UseDdiForHandsOnDevice>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
      wil::Feature<__WilFeatureTraits_Feature_UseDdiForHandsOnDevice>::GetCachedFeatureEnabledState();
    LOBYTE(v2) = 0;
    v3 = 0;
    v4 = v2;
    wil::details::ReportUsageToService(
      &`wil::Feature<__WilFeatureTraits_Feature_UseDdiForHandsOnDevice>::GetFeaturePropertyCache'::`2'::data,
      0xA346C5u,
      (const struct FEATURE_LOGGED_TRAITS *)&v3,
      0,
      3);
    return 0;
  }
  return v0;
}
