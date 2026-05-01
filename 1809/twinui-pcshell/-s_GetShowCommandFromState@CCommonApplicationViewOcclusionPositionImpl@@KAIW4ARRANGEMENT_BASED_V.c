/*
 * XREFs of ?s_GetShowCommandFromState@CCommonApplicationViewOcclusionPositionImpl@@KAIW4ARRANGEMENT_BASED_VIEW_STATE@@@Z @ 0x180056ED0
 * Callers:
 *     ?RuntimeClassInitialize@CCommonApplicationViewOcclusionPosition@@QEAAJW4ARRANGEMENT_BASED_VIEW_STATE@@AEBUtagRECT@@@Z @ 0x180056E18 (-RuntimeClassInitialize@CCommonApplicationViewOcclusionPosition@@QEAAJW4ARRANGEMENT_BASED_VIEW_S.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIApplicationViewPosition@@AEAUtagRECT@@AEAU3@H@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewPosition@@AEAUtagRECT@@1$$QEAH@Z @ 0x18033A4D4 (--$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIApplicationViewPos_ea_18033A4D4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCommonApplicationViewOcclusionPositionImpl::s_GetShowCommandFromState(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx

  v1 = a1 - 1;
  if ( !v1 )
    return 6LL;
  v2 = v1 - 1;
  if ( !v2 )
    return 4LL;
  v3 = v2 - 1;
  if ( !v3 )
    return 3LL;
  if ( v3 == 1 )
    return 4LL;
  else
    return 0LL;
}
