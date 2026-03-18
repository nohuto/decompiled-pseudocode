/*
 * XREFs of ?Feature_19H2_Enablement__private_areDependenciesEnabled@@YAHXZ @ 0x1C0163B70
 * Callers:
 *     <none>
 * Callees:
 *     Feature_19H2_Rollback__private_IsEnabledWithReporting @ 0x1C0163B90 (Feature_19H2_Rollback__private_IsEnabledWithReporting.c)
 */

_BOOL8 Feature_19H2_Enablement__private_areDependenciesEnabled(void)
{
  return (unsigned int)Feature_19H2_Rollback__private_IsEnabledWithReporting() != 0;
}
