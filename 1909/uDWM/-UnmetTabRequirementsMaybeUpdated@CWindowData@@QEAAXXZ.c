/*
 * XREFs of ?UnmetTabRequirementsMaybeUpdated@CWindowData@@QEAAXXZ @ 0x180014A34
 * Callers:
 *     ?OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180010AC8 (-OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180012070 (-ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z @ 0x1800145D8 (-SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CWindowData::UnmetTabRequirementsMaybeUpdated(CWindowData *this, __int64 a2, __int64 a3)
{
  wil::Feature<__WilFeatureTraits_Feature_TabShell>::ReportUsageToService((__int64)this, 3u, a3);
}
