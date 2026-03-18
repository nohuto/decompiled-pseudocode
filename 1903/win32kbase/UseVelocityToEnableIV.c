/*
 * XREFs of UseVelocityToEnableIV @ 0x1C0032928
 * Callers:
 *     IsMouseIVEnabled @ 0x1C00327F4 (IsMouseIVEnabled.c)
 *     IsPTPIVEnabled @ 0x1C00421F8 (IsPTPIVEnabled.c)
 *     IsKeyboardIVEnabled @ 0x1C018E15C (IsKeyboardIVEnabled.c)
 *     IsPenIVEnabled @ 0x1C018E1B8 (IsPenIVEnabled.c)
 *     IsTouchIVEnabled @ 0x1C018E22C (IsTouchIVEnabled.c)
 * Callees:
 *     RIMIsRunningOnDesktop @ 0x1C0032954 (RIMIsRunningOnDesktop.c)
 *     isRootPartition @ 0x1C00329F8 (isRootPartition.c)
 */

char UseVelocityToEnableIV()
{
  char v0; // bl

  v0 = 0;
  if ( (unsigned __int8)isRootPartition() || (unsigned int)RIMIsRunningOnDesktop() )
    return 1;
  return v0;
}
