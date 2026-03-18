/*
 * XREFs of Feature_19H2_Enablement__private_areDependenciesEnabled @ 0x1401BEC70
 * Callers:
 *     <none>
 * Callees:
 *     Feature_19H2_Rollback__private_IsEnabledWithReporting @ 0x1401BEC90 (Feature_19H2_Rollback__private_IsEnabledWithReporting.c)
 */

_BOOL8 Feature_19H2_Enablement__private_areDependenciesEnabled()
{
  return (unsigned int)Feature_19H2_Rollback__private_IsEnabledWithReporting() != 0;
}
