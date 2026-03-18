/*
 * XREFs of ShowAutorunCursor @ 0x1C01CC62C
 * Callers:
 *     ?DeviceCDROMNotify@@YAJPEAU_TARGET_DEVICE_CUSTOM_NOTIFICATION@@PEAU_CDROM_NOTIFY@@@Z @ 0x1C01E0600 (-DeviceCDROMNotify@@YAJPEAU_TARGET_DEVICE_CUSTOM_NOTIFICATION@@PEAU_CDROM_NOTIFY@@@Z.c)
 * Callees:
 *     SetRITTimer @ 0x1C011E2C0 (SetRITTimer.c)
 */

__int64 __fastcall ShowAutorunCursor(unsigned int a1)
{
  __int64 v2; // rcx

  EnterCrit(0LL, 1LL);
  gtmridAutorunCursor = SetRITTimer(gtmridAutorunCursor, a1, (__int64)HideAutorunCursor, 1);
  return UserSessionSwitchLeaveCrit(v2);
}
