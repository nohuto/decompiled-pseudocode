/*
 * XREFs of ?xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C015C6E0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetAccessEnabledFlag@@YAXXZ @ 0x1C00619B0 (-SetAccessEnabledFlag@@YAXXZ.c)
 *     PostWinlogonMessage @ 0x1C00679D0 (PostWinlogonMessage.c)
 *     ?xxxTurnOffStickyKeys@@YAXXZ @ 0x1C015DE50 (-xxxTurnOffStickyKeys@@YAXXZ.c)
 *     ApiSetEditionPostAccessibility @ 0x1C019B57C (ApiSetEditionPostAccessibility.c)
 *     ApiSetEditionPostRitSound @ 0x1C019B8AC (ApiSetEditionPostRitSound.c)
 */

void __fastcall xxxAccessTimeOutTimer(struct tagWND *a1)
{
  __int64 v1; // rbx
  __int64 v2; // r8

  if ( (dword_1C021161C & 1) != 0
    || (dword_1C0211614 & 1) != 0
    || (dword_1C02115F4 & 1) != 0
    || (dword_1C02115DC & 1) != 0
    || (dword_1C0214624 & 1) != 0
    || (dword_1C02115CC & 1) != 0
    || (gdwPUDFlags & 0x8000) != 0 )
  {
    v1 = *(_QWORD *)(*((_QWORD *)grpdeskRitInput + 5) + 24LL);
    dword_1C021161C &= ~1u;
    xxxTurnOffStickyKeys();
    dword_1C02115F4 &= ~1u;
    dword_1C02115DC &= ~1u;
    dword_1C0214624 &= ~1u;
    gdwPUDFlags &= ~0x8000u;
    dword_1C02115CC &= ~1u;
    PostWinlogonMessage(1026LL, 9u);
    if ( (dword_1C02115E4 & 2) != 0 )
      ApiSetEditionPostRitSound(v1, 1LL, v2, 0LL);
    ApiSetEditionPostAccessibility(3LL);
    ApiSetEditionPostAccessibility(2LL);
    ApiSetEditionPostAccessibility(1LL);
  }
  SetAccessEnabledFlag();
}
