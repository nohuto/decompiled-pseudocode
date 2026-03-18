/*
 * XREFs of UseVelocityToEnableIV @ 0x1C0031BD8
 * Callers:
 *     IsMouseIVEnabled @ 0x1C0031AA4 (IsMouseIVEnabled.c)
 *     IsPTPIVEnabled @ 0x1C004A2BC (IsPTPIVEnabled.c)
 *     IsKeyboardIVEnabled @ 0x1C018BF6C (IsKeyboardIVEnabled.c)
 *     IsPenIVEnabled @ 0x1C018BFC8 (IsPenIVEnabled.c)
 *     IsTouchIVEnabled @ 0x1C018C03C (IsTouchIVEnabled.c)
 * Callees:
 *     RIMIsRunningOnDesktop @ 0x1C0031C04 (RIMIsRunningOnDesktop.c)
 *     isRootPartition @ 0x1C0031CA8 (isRootPartition.c)
 */

char UseVelocityToEnableIV()
{
  char v0; // bl

  v0 = 0;
  if ( (unsigned __int8)isRootPartition() || (unsigned int)RIMIsRunningOnDesktop() )
    return 1;
  return v0;
}
