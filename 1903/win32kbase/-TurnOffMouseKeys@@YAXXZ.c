/*
 * XREFs of ?TurnOffMouseKeys@@YAXXZ @ 0x1C015E880
 * Callers:
 *     ?xxxMKToggleMouseKeys@@YAHG@Z @ 0x1C015FA30 (-xxxMKToggleMouseKeys@@YAHG@Z.c)
 * Callees:
 *     ?MKHideMouseCursor@@YAXXZ @ 0x1C0075F50 (-MKHideMouseCursor@@YAXXZ.c)
 *     ApiSetEditionPostAccessibility @ 0x1C019D82C (ApiSetEditionPostAccessibility.c)
 *     ApiSetEditionPostRitSound @ 0x1C019DB5C (ApiSetEditionPostRitSound.c)
 */

void TurnOffMouseKeys(void)
{
  __int64 v0; // r8

  dword_1C02145F4 &= ~1u;
  gdwPUDFlags &= ~0x2000u;
  MKHideMouseCursor();
  if ( (dword_1C02145F4 & 0x10) != 0 )
    ApiSetEditionPostRitSound(*(_QWORD *)(*((_QWORD *)grpdeskRitInput + 5) + 24LL), 1LL, v0, 0LL);
  ApiSetEditionPostAccessibility(3LL);
}
