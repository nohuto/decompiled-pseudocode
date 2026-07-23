/*
 * XREFs of PopInterruptSteeringEnabled @ 0x140189F94
 * Callers:
 *     PpmCheckReInit @ 0x140750304 (PpmCheckReInit.c)
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
