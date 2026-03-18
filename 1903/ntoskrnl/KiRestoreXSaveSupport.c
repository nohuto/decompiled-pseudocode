/*
 * XREFs of KiRestoreXSaveSupport @ 0x14059A6EC
 * Callers:
 *     KeRestoreProcessorSpecificFeatures @ 0x14015F4B8 (KeRestoreProcessorSpecificFeatures.c)
 * Callees:
 *     KiEnableXSave @ 0x14059EAF0 (KiEnableXSave.c)
 */

__int64 KiRestoreXSaveSupport()
{
  return KiEnableXSave();
}
