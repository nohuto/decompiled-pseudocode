/*
 * XREFs of ?Feature_19H2_Enablement__private_areDependenciesEnabled@@YAHXZ @ 0x1C0164B40
 * Callers:
 *     <none>
 * Callees:
 *     Feature_19H2_Rollback__private_IsEnabledWithReporting @ 0x1C0164B60 (Feature_19H2_Rollback__private_IsEnabledWithReporting.c)
 */

_BOOL8 Feature_19H2_Enablement__private_areDependenciesEnabled(void)
{
  return (unsigned int)Feature_19H2_Rollback__private_IsEnabledWithReporting() != 0;
}
