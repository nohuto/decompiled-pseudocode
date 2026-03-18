/*
 * XREFs of PopInterruptSteeringEnabled @ 0x14019492C
 * Callers:
 *     PpmCheckReInit @ 0x140776E5C (PpmCheckReInit.c)
 * Callees:
 *     <none>
 */

bool PopInterruptSteeringEnabled()
{
  bool result; // al

  result = 0;
  if ( !PpmIntSteerDisabled )
    return KiIntSteerEnabled != 0;
  return result;
}
