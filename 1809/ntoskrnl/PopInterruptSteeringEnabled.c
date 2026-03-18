/*
 * XREFs of PopInterruptSteeringEnabled @ 0x140189E34
 * Callers:
 *     PpmCheckReInit @ 0x14074F134 (PpmCheckReInit.c)
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
