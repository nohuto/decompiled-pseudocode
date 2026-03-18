/*
 * XREFs of PopFastS4Check @ 0x140729594
 * Callers:
 *     PopActionRetrieveInitialState @ 0x140169B84 (PopActionRetrieveInitialState.c)
 *     PopTransitionSystemPowerStateEx @ 0x140596DBC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     <none>
 */

char PopFastS4Check()
{
  char result; // al

  if ( dword_140443060 != 4 )
    return 0;
  if ( byte_140443ADC )
    return 0;
  result = 1;
  if ( byte_140443119 != 1 || byte_140443110 != 1 || byte_14044311E != 2 )
    return 0;
  return result;
}
