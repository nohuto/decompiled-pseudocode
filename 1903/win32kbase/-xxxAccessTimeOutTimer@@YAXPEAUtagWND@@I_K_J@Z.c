/*
 * XREFs of ?xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C015E8E0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetAccessEnabledFlag@@YAXXZ @ 0x1C0075EE0 (-SetAccessEnabledFlag@@YAXXZ.c)
 *     PostWinlogonMessage @ 0x1C00AC010 (PostWinlogonMessage.c)
 *     ?xxxTurnOffStickyKeys@@YAXXZ @ 0x1C0160050 (-xxxTurnOffStickyKeys@@YAXXZ.c)
 *     ApiSetEditionPostAccessibility @ 0x1C019D82C (ApiSetEditionPostAccessibility.c)
 *     ApiSetEditionPostRitSound @ 0x1C019DB5C (ApiSetEditionPostRitSound.c)
 */

void __fastcall xxxAccessTimeOutTimer(struct tagWND *a1)
{
  __int64 v1; // rbx
  __int64 v2; // r8

  if ( (dword_1C021461C & 1) != 0
    || (dword_1C0214614 & 1) != 0
    || (dword_1C02145F4 & 1) != 0
    || (dword_1C02145DC & 1) != 0
    || (dword_1C0217624 & 1) != 0
    || (dword_1C02145CC & 1) != 0
    || (gdwPUDFlags & 0x8000) != 0 )
  {
    v1 = *(_QWORD *)(*((_QWORD *)grpdeskRitInput + 5) + 24LL);
    dword_1C021461C &= ~1u;
    xxxTurnOffStickyKeys();
    dword_1C02145F4 &= ~1u;
    dword_1C02145DC &= ~1u;
    dword_1C0217624 &= ~1u;
    gdwPUDFlags &= ~0x8000u;
    dword_1C02145CC &= ~1u;
    PostWinlogonMessage(1026LL, 9u);
    if ( (dword_1C02145E4 & 2) != 0 )
      ApiSetEditionPostRitSound(v1, 1LL, v2, 0LL);
    ApiSetEditionPostAccessibility(3LL);
    ApiSetEditionPostAccessibility(2LL);
    ApiSetEditionPostAccessibility(1LL);
  }
  SetAccessEnabledFlag();
}
