/*
 * XREFs of ?Attach@?$ComPtr@VCCommonApplicationViewOcclusionPosition@@@WRL@Microsoft@@QEAAXPEAVCCommonApplicationViewOcclusionPosition@@@Z @ 0x180053CC0
 * Callers:
 *     ??$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIApplicationViewPosition@@W4ARRANGEMENT_BASED_VIEW_STATE@@AEAUtagRECT@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewPosition@@$$QEAW4ARRANGEMENT_BASED_VIEW_STATE@@AEAUtagRECT@@@Z @ 0x180053848 (--$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIApplicationViewPos_ea_180053848.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIApplicationViewPosition@@AEAUtagWINDOWPLACEMENT@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewPosition@@AEAUtagWINDOWPLACEMENT@@@Z @ 0x180225D18 (--$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIApplicationViewPosition@@AEAUta.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIApplicationViewPosition@@AEAUtagRECT@@AEAU3@H@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewPosition@@AEAUtagRECT@@1$$QEAH@Z @ 0x18039F4E0 (--$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIApplicationViewPos_ea_18039F4E0.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewOcclusionPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180066B20 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicati.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CCommonApplicationViewOcclusionPosition>::Attach(__int64 *a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 result; // rax

  v4 = *a1;
  if ( v4 )
    result = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewOcclusionPositionImpl,Microsoft::WRL::FtmBase>::Release(v4);
  *a1 = a2;
  return result;
}
