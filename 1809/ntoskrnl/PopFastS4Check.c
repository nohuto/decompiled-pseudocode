/*
 * XREFs of PopFastS4Check @ 0x1406E1F08
 * Callers:
 *     PopActionRetrieveInitialState @ 0x1401595E4 (PopActionRetrieveInitialState.c)
 *     PopTransitionSystemPowerStateEx @ 0x140566D74 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     <none>
 */

char PopFastS4Check()
{
  char result; // al

  if ( dword_140417720 != 4 )
    return 0;
  if ( byte_14041811C )
    return 0;
  result = 1;
  if ( byte_1404177D9 != 1 || byte_1404177D0 != 1 || byte_1404177DE != 2 )
    return 0;
  return result;
}
