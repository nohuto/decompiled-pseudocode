/*
 * XREFs of IsAnyDelegationEnabled @ 0x1C012E6B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool IsAnyDelegationEnabled()
{
  return *(&InputDelegation::CInputDelegationInfo::gInstance + 1) != 0;
}
