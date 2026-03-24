/*
 * XREFs of PopFastS4Check @ 0x1406E1EE8
 * Callers:
 *     PopActionRetrieveInitialState @ 0x140159604 (PopActionRetrieveInitialState.c)
 *     PopTransitionSystemPowerStateEx @ 0x140566D74 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     <none>
 */

char PopFastS4Check()
{
  char result; // al

  if ( dword_140417720 != 4 )
    return 0;
  if ( byte_1404180DC )
    return 0;
  result = 1;
  if ( byte_1404177D9 != 1 || byte_1404177D0 != 1 || byte_1404177DE != 2 )
    return 0;
  return result;
}
