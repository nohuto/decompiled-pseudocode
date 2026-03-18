/*
 * XREFs of KiConfigureDynamicProcessor @ 0x1405AB640
 * Callers:
 *     KiInitDynamicProcessorIpi @ 0x1402A9A10 (KiInitDynamicProcessorIpi.c)
 * Callees:
 *     KiEnableXSave @ 0x14059EAD0 (KiEnableXSave.c)
 */

__int64 KiConfigureDynamicProcessor()
{
  return KiEnableXSave();
}
