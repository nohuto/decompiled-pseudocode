/*
 * XREFs of KeIntSteerIsSteeringEnabled @ 0x14013BBD0
 * Callers:
 *     ExpQueryInterruptSteeringInformation @ 0x14075F3A8 (ExpQueryInterruptSteeringInformation.c)
 * Callees:
 *     <none>
 */

char KeIntSteerIsSteeringEnabled()
{
  return KiIntSteerEnabled;
}
