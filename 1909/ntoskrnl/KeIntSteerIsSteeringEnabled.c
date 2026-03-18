/*
 * XREFs of KeIntSteerIsSteeringEnabled @ 0x14013DD14
 * Callers:
 *     ExpQueryInterruptSteeringInformation @ 0x140788F34 (ExpQueryInterruptSteeringInformation.c)
 * Callees:
 *     <none>
 */

char KeIntSteerIsSteeringEnabled()
{
  return KiIntSteerEnabled;
}
