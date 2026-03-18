/*
 * XREFs of KiConfigureDynamicProcessor @ 0x14057B744
 * Callers:
 *     KiInitDynamicProcessorIpi @ 0x1402931D0 (KiInitDynamicProcessorIpi.c)
 * Callees:
 *     KiEnableXSave @ 0x14056F0BC (KiEnableXSave.c)
 */

__int64 KiConfigureDynamicProcessor()
{
  return KiEnableXSave();
}
