/*
 * XREFs of KiRestoreXSaveSupport @ 0x14059A6CC
 * Callers:
 *     KeRestoreProcessorSpecificFeatures @ 0x14015FB58 (KeRestoreProcessorSpecificFeatures.c)
 * Callees:
 *     KiEnableXSave @ 0x14059EAD0 (KiEnableXSave.c)
 */

__int64 KiRestoreXSaveSupport()
{
  return KiEnableXSave();
}
