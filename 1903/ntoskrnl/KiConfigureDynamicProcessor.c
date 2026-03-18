/*
 * XREFs of KiConfigureDynamicProcessor @ 0x1405AB660
 * Callers:
 *     KiInitDynamicProcessorIpi @ 0x1402A9CB0 (KiInitDynamicProcessorIpi.c)
 * Callees:
 *     KiEnableXSave @ 0x14059EAF0 (KiEnableXSave.c)
 */

__int64 KiConfigureDynamicProcessor()
{
  return KiEnableXSave();
}
