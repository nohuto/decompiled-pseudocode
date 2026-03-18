/*
 * XREFs of PopFastS4Check @ 0x14072A904
 * Callers:
 *     PopActionRetrieveInitialState @ 0x140169624 (PopActionRetrieveInitialState.c)
 *     PopTransitionSystemPowerStateEx @ 0x140596DBC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     <none>
 */

char PopFastS4Check()
{
  char result; // al

  if ( dword_140442FE0 != 4 )
    return 0;
  if ( byte_140443A3C )
    return 0;
  result = 1;
  if ( byte_140443099 != 1 || byte_140443090 != 1 || byte_14044309E != 2 )
    return 0;
  return result;
}
