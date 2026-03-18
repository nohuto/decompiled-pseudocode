/*
 * XREFs of ?TurnOffMouseKeys@@YAXXZ @ 0x1C015C680
 * Callers:
 *     ?xxxMKToggleMouseKeys@@YAHG@Z @ 0x1C015D830 (-xxxMKToggleMouseKeys@@YAHG@Z.c)
 * Callees:
 *     ?MKHideMouseCursor@@YAXXZ @ 0x1C0061A20 (-MKHideMouseCursor@@YAXXZ.c)
 *     ApiSetEditionPostAccessibility @ 0x1C019B57C (ApiSetEditionPostAccessibility.c)
 *     ApiSetEditionPostRitSound @ 0x1C019B8AC (ApiSetEditionPostRitSound.c)
 */

void TurnOffMouseKeys(void)
{
  __int64 v0; // r8

  dword_1C02115F4 &= ~1u;
  gdwPUDFlags &= ~0x2000u;
  MKHideMouseCursor();
  if ( (dword_1C02115F4 & 0x10) != 0 )
    ApiSetEditionPostRitSound(*(_QWORD *)(*((_QWORD *)grpdeskRitInput + 5) + 24LL), 1LL, v0, 0LL);
  ApiSetEditionPostAccessibility(3LL);
}
