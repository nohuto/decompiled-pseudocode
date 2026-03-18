/*
 * XREFs of IsAnyDelegationEnabled @ 0x1C0184440
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool IsAnyDelegationEnabled()
{
  return *(&InputDelegation::CInputDelegationInfo::gInstance + 1) != 0;
}
