/*
 * XREFs of EvaluateCurrentState @ 0x14000D68C
 * Callers:
 *     SmpProcessFileRenames @ 0x140009934 (SmpProcessFileRenames.c)
 *     SmpForceDeleteTargetFile @ 0x1400153E0 (SmpForceDeleteTargetFile.c)
 *     SmpOpenTargetFile @ 0x1400159DC (SmpOpenTargetFile.c)
 *     SmpRenameTargetFile @ 0x140015B24 (SmpRenameTargetFile.c)
 *     SmpShuffleMove @ 0x140015F90 (SmpShuffleMove.c)
 *     SmpTryOverwriteReadonlyFile @ 0x140016238 (SmpTryOverwriteReadonlyFile.c)
 * Callees:
 *     <none>
 */

char EvaluateCurrentState()
{
  if ( *(_DWORD *)g_Feature_3451495738_53817581_FeatureDescriptorDetails )
    return *(_DWORD *)g_Feature_3451495738_53817581_FeatureDescriptorDetails != 1;
  else
    return EvaluateCurrentStateFromRegistry(53817581LL, 2LL);
}
