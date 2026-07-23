/*
 * XREFs of PopFastS4Check @ 0x1406E3188
 * Callers:
 *     PopActionRetrieveInitialState @ 0x140159704 (PopActionRetrieveInitialState.c)
 *     PopTransitionSystemPowerStateEx @ 0x140567D74 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     <none>
 */

char PopFastS4Check()
{
  char result; // al

  if ( dword_1404187C0 != 4 )
    return 0;
  if ( byte_14041919C )
    return 0;
  result = 1;
  if ( byte_140418879 != 1 || byte_140418870 != 1 || byte_14041887E != 2 )
    return 0;
  return result;
}
