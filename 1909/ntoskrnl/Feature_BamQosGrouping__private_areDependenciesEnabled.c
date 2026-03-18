/*
 * XREFs of Feature_BamQosGrouping__private_areDependenciesEnabled @ 0x1401BED60
 * Callers:
 *     <none>
 * Callees:
 *     Feature_19H2_Enablement__private_IsEnabledWithReporting @ 0x1401BEC08 (Feature_19H2_Enablement__private_IsEnabledWithReporting.c)
 */

_BOOL8 Feature_BamQosGrouping__private_areDependenciesEnabled()
{
  return (unsigned int)Feature_19H2_Enablement__private_IsEnabledWithReporting() != 0;
}
