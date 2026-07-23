/*
 * XREFs of KiConfigureDynamicProcessor @ 0x14057C744
 * Callers:
 *     KiInitDynamicProcessorIpi @ 0x1402934C0 (KiInitDynamicProcessorIpi.c)
 * Callees:
 *     KiEnableXSave @ 0x1405700BC (KiEnableXSave.c)
 */

__int64 KiConfigureDynamicProcessor()
{
  return KiEnableXSave();
}
