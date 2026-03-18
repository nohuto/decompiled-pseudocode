/*
 * XREFs of ?TurnOffMouseKeys@@YAXXZ @ 0x1C0131D70
 * Callers:
 *     ?xxxMKToggleMouseKeys@@YAHG@Z @ 0x1C01326F0 (-xxxMKToggleMouseKeys@@YAHG@Z.c)
 * Callees:
 *     ?MKHideMouseCursor@@YAXXZ @ 0x1C0048C10 (-MKHideMouseCursor@@YAXXZ.c)
 *     ApiSetEditionPostAccessibility @ 0x1C0162E6C (ApiSetEditionPostAccessibility.c)
 *     ApiSetEditionPostRitSound @ 0x1C0163114 (ApiSetEditionPostRitSound.c)
 */

void TurnOffMouseKeys(void)
{
  __int64 v0; // r8

  dword_1C01CC974 &= ~1u;
  gdwPUDFlags &= ~0x2000u;
  MKHideMouseCursor();
  if ( (dword_1C01CC974 & 0x10) != 0 )
    ApiSetEditionPostRitSound(*(_QWORD *)(*((_QWORD *)grpdeskRitInput + 5) + 24LL), 1LL, v0, 0LL);
  ApiSetEditionPostAccessibility(3LL);
}
