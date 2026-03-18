/*
 * XREFs of KiInitDynamicProcessorIpi @ 0x1402A9A10
 * Callers:
 *     <none>
 * Callees:
 *     KiConfigureDynamicProcessor @ 0x1405AB640 (KiConfigureDynamicProcessor.c)
 */

__int64 KiInitDynamicProcessorIpi()
{
  return KiConfigureDynamicProcessor();
}
