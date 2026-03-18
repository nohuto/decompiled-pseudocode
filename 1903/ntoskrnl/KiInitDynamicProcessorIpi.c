/*
 * XREFs of KiInitDynamicProcessorIpi @ 0x1402A9CB0
 * Callers:
 *     <none>
 * Callees:
 *     KiConfigureDynamicProcessor @ 0x1405AB660 (KiConfigureDynamicProcessor.c)
 */

__int64 KiInitDynamicProcessorIpi()
{
  return KiConfigureDynamicProcessor();
}
