/*
 * XREFs of PopInterruptSteeringEnabled @ 0x140189E54
 * Callers:
 *     PpmCheckReInit @ 0x14074F114 (PpmCheckReInit.c)
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
