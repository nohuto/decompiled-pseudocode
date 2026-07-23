/*
 * XREFs of KiRestoreXSaveSupport @ 0x14056AA0C
 * Callers:
 *     KeRestoreProcessorSpecificFeatures @ 0x140143844 (KeRestoreProcessorSpecificFeatures.c)
 * Callees:
 *     KiEnableXSave @ 0x1405700BC (KiEnableXSave.c)
 */

__int64 KiRestoreXSaveSupport()
{
  return KiEnableXSave();
}
