/*
 * XREFs of zzzStartFade @ 0x1C0152A68
 * Callers:
 *     xxxTooltipWndProc @ 0x1C00B84F0 (xxxTooltipWndProc.c)
 *     zzzStartSonar @ 0x1C01D479C (zzzStartSonar.c)
 *     ?xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@I_J@Z @ 0x1C020A770 (-xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITE.c)
 *     xxxMenuWindowProc @ 0x1C020F6B0 (xxxMenuWindowProc.c)
 * Callees:
 *     _SetSystemTimer @ 0x1C00DC7D4 (_SetSystemTimer.c)
 *     zzzShowFade @ 0x1C0152B40 (zzzShowFade.c)
 */

__int64 zzzStartFade()
{
  GreSetDCOwnerEx(gfade[1], 0LL, 0LL, 0LL);
  GreSetBitmapOwner(gfade[2], 0LL);
  zzzShowFade();
  HIDWORD(gfade[5]) = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
                    - (40 * LODWORD(gfade[5]) + 255) / 0xFFu;
  return SetSystemTimer(
           *((_QWORD *)&gTermIO + 1),
           65526LL,
           (LODWORD(gfade[6]) & 0x80u) != 0 ? 50 : 10,
           (__int64)xxxSystemTimerProc,
           1);
}
