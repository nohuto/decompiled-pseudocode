/*
 * XREFs of RtlAreAnyAccessesGranted @ 0x1406D0000
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlAreAnyAccessesGranted(ACCESS_MASK GrantedAccess, ACCESS_MASK DesiredAccess)
{
  return (GrantedAccess & DesiredAccess) != 0;
}
