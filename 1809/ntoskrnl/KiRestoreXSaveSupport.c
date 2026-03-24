/*
 * XREFs of KiRestoreXSaveSupport @ 0x140569A0C
 * Callers:
 *     KeRestoreProcessorSpecificFeatures @ 0x140143744 (KeRestoreProcessorSpecificFeatures.c)
 * Callees:
 *     KiEnableXSave @ 0x14056F0BC (KiEnableXSave.c)
 */

__int64 KiRestoreXSaveSupport()
{
  return KiEnableXSave();
}
