/*
 * XREFs of IsAnyDelegationEnabled @ 0x1C0182250
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool IsAnyDelegationEnabled()
{
  return *(&InputDelegation::CInputDelegationInfo::gInstance + 1) != 0;
}
