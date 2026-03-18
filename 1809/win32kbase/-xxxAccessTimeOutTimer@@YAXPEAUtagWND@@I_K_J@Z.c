/*
 * XREFs of ?xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0131DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetAccessEnabledFlag@@YAXXZ @ 0x1C0048BA0 (-SetAccessEnabledFlag@@YAXXZ.c)
 *     PostWinlogonMessage @ 0x1C0097ED0 (PostWinlogonMessage.c)
 *     ?xxxTurnOffStickyKeys@@YAXXZ @ 0x1C0132CF0 (-xxxTurnOffStickyKeys@@YAXXZ.c)
 *     ApiSetEditionPostAccessibility @ 0x1C0162E6C (ApiSetEditionPostAccessibility.c)
 *     ApiSetEditionPostRitSound @ 0x1C0163114 (ApiSetEditionPostRitSound.c)
 */

void __fastcall xxxAccessTimeOutTimer(struct tagWND *a1)
{
  __int64 v1; // rbx
  __int64 v2; // r8

  if ( (dword_1C01CC99C & 1) != 0
    || (dword_1C01CC994 & 1) != 0
    || (dword_1C01CC974 & 1) != 0
    || (dword_1C01CC95C & 1) != 0
    || (dword_1C01CFF44 & 1) != 0
    || (dword_1C01CC94C & 1) != 0
    || (gdwPUDFlags & 0x8000) != 0 )
  {
    v1 = *(_QWORD *)(*((_QWORD *)grpdeskRitInput + 5) + 24LL);
    dword_1C01CC99C &= ~1u;
    xxxTurnOffStickyKeys();
    dword_1C01CC974 &= ~1u;
    dword_1C01CC95C &= ~1u;
    dword_1C01CFF44 &= ~1u;
    gdwPUDFlags &= ~0x8000u;
    dword_1C01CC94C &= ~1u;
    PostWinlogonMessage(1026LL, 9u);
    if ( (dword_1C01CC964 & 2) != 0 )
      ApiSetEditionPostRitSound(v1, 1LL, v2, 0LL);
    ApiSetEditionPostAccessibility(3LL);
    ApiSetEditionPostAccessibility(2LL);
    ApiSetEditionPostAccessibility(1LL);
  }
  SetAccessEnabledFlag();
}
