/*
 * XREFs of _dynamic_initializer_for__CCommonRegistryData::m_renderThreadWatchdogTimeoutMilliseconds__ @ 0x180001200
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_RenderThreadWatchdog@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800AA61C (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_RenderThreadWatchdog@@@wil@@CAX_NW4R.c)
 */

__int64 dynamic_initializer_for__CCommonRegistryData::m_renderThreadWatchdogTimeoutMilliseconds__()
{
  __int64 result; // rax

  result = wil::Feature<__WilFeatureTraits_Feature_RenderThreadWatchdog>::ReportUsageToService();
  CCommonRegistryData::m_renderThreadWatchdogTimeoutMilliseconds = 60000;
  return result;
}
