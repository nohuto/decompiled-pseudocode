/*
 * XREFs of KeIntSteerIsSteeringEnabled @ 0x14013D7D4
 * Callers:
 *     ExpQueryInterruptSteeringInformation @ 0x140786BD4 (ExpQueryInterruptSteeringInformation.c)
 * Callees:
 *     <none>
 */

char KeIntSteerIsSteeringEnabled()
{
  return KiIntSteerEnabled;
}
