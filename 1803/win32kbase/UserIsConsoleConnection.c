/*
 * XREFs of UserIsConsoleConnection @ 0x1C00BCE20
 * Callers:
 *     DrvSetDisplayConfigValidateParams @ 0x1C0079FAC (DrvSetDisplayConfigValidateParams.c)
 * Callees:
 *     <none>
 */

_BOOL8 UserIsConsoleConnection()
{
  return gProtocolType == 0;
}
