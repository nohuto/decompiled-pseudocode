/*
 * XREFs of ?IsAnyOOBE@@YA_NXZ @ 0x18032F860
 * Callers:
 *     ?SubscribeTouchKeyboardWnfNotifications@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x180338248 (-SubscribeTouchKeyboardWnfNotifications@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?UpdateSettingsLauncherAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x18033A440 (-UpdateSettingsLauncherAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ?IsUserOOBE@@YA_NXZ @ 0x1801E0240 (-IsUserOOBE@@YA_NXZ.c)
 *     ?IsHolographicOOBE@@YA_NXZ @ 0x18032F9E4 (-IsHolographicOOBE@@YA_NXZ.c)
 *     ?IsMobileOOBE@@YA_NXZ @ 0x18032FB84 (-IsMobileOOBE@@YA_NXZ.c)
 */

char IsAnyOOBE(void)
{
  char v0; // bl
  int v2; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  v2 = 0;
  if ( IsUserOOBE() || v2 || (unsigned int)OOBEComplete(&v2) && !v2 || IsMobileOOBE() || IsHolographicOOBE() )
    return 1;
  return v0;
}
