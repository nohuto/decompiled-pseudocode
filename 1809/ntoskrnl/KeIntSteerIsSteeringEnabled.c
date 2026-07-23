/*
 * XREFs of KeIntSteerIsSteeringEnabled @ 0x14013BCD0
 * Callers:
 *     ExpQueryInterruptSteeringInformation @ 0x140760598 (ExpQueryInterruptSteeringInformation.c)
 * Callees:
 *     <none>
 */

char KeIntSteerIsSteeringEnabled()
{
  return KiIntSteerEnabled;
}
