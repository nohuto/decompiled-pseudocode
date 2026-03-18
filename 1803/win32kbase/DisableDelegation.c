/*
 * XREFs of DisableDelegation @ 0x1C006C7F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 DisableDelegation()
{
  __int64 result; // rax

  result = 0LL;
  InputDelegation::CInputDelegationInfo::gInstance = 0uLL;
  return result;
}
