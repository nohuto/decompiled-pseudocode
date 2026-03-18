/*
 * XREFs of KeIntSteerIsSteeringEnabled @ 0x14013BBB0
 * Callers:
 *     ExpQueryInterruptSteeringInformation @ 0x14075F3C8 (ExpQueryInterruptSteeringInformation.c)
 * Callees:
 *     <none>
 */

char KeIntSteerIsSteeringEnabled()
{
  return KiIntSteerEnabled;
}
