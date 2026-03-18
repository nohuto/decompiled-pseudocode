/*
 * XREFs of ?xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C010AA50
 * Callers:
 *     <none>
 * Callees:
 *     PostWinlogonMessage @ 0x1C00A1E00 (PostWinlogonMessage.c)
 *     ?SetAccessEnabledFlag@@YAXXZ @ 0x1C010A700 (-SetAccessEnabledFlag@@YAXXZ.c)
 *     ?xxxTurnOffStickyKeys@@YAXXZ @ 0x1C010BA00 (-xxxTurnOffStickyKeys@@YAXXZ.c)
 *     ApiSetEditionPostAccessibility @ 0x1C013F790 (ApiSetEditionPostAccessibility.c)
 *     ApiSetEditionPostRitSound @ 0x1C013FA14 (ApiSetEditionPostRitSound.c)
 */

void __fastcall xxxAccessTimeOutTimer(struct tagWND *a1)
{
  __int64 v1; // rbx
  __int64 v2; // r8

  if ( (dword_1C01A4E8C & 1) != 0
    || (dword_1C01A4E84 & 1) != 0
    || (dword_1C01A4E64 & 1) != 0
    || (dword_1C01A4E4C & 1) != 0
    || (dword_1C01A4E14 & 1) != 0
    || (dword_1C01A4E04 & 1) != 0
    || (gdwPUDFlags & 0x8000) != 0 )
  {
    v1 = *(_QWORD *)(*((_QWORD *)grpdeskRitInput + 5) + 24LL);
    dword_1C01A4E8C &= ~1u;
    xxxTurnOffStickyKeys();
    dword_1C01A4E64 &= ~1u;
    dword_1C01A4E4C &= ~1u;
    dword_1C01A4E14 &= ~1u;
    gdwPUDFlags &= ~0x8000u;
    dword_1C01A4E04 &= ~1u;
    PostWinlogonMessage(1026LL, 9u);
    if ( (dword_1C01A4E54 & 2) != 0 )
      ApiSetEditionPostRitSound(v1, 1LL, v2, 0LL);
    ApiSetEditionPostAccessibility(3LL);
    ApiSetEditionPostAccessibility(2LL);
    ApiSetEditionPostAccessibility(1LL);
  }
  SetAccessEnabledFlag();
}
