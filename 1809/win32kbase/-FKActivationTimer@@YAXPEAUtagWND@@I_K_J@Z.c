/*
 * XREFs of ?FKActivationTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01313F0
 * Callers:
 *     <none>
 * Callees:
 *     PostWinlogonMessage @ 0x1C0097ED0 (PostWinlogonMessage.c)
 *     ApiSetEditionKillAccessibilityTimer @ 0x1C01625BC (ApiSetEditionKillAccessibilityTimer.c)
 *     ApiSetEditionPostAccessibility @ 0x1C0162E6C (ApiSetEditionPostAccessibility.c)
 *     ApiSetEditionPostRitSound @ 0x1C0163114 (ApiSetEditionPostRitSound.c)
 *     ApiSetEditionSetAccessibilityTimer @ 0x1C016369C (ApiSetEditionSetAccessibilityTimer.c)
 */

void __fastcall FKActivationTimer(struct tagWND *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r10
  char v5; // al

  v4 = *(_QWORD *)(*((_QWORD *)grpdeskRitInput + 5) + 24LL);
  if ( gFilterKeysState == 1 )
    goto LABEL_20;
  if ( gFilterKeysState != 2 )
  {
    if ( gFilterKeysState != 3 )
    {
      if ( gFilterKeysState == 4 )
      {
        dword_1C01CC9A8 = 0;
        dword_1C01CC9AC = 0;
        Value = 2000;
        if ( (dword_1C01CC99C & 0x10) != 0 )
          ApiSetEditionPostRitSound(v4, 5LL, a3, 3LL);
      }
      return;
    }
    if ( (dword_1C01CC99C & 0x10) != 0 )
      ApiSetEditionPostRitSound(*(_QWORD *)(*((_QWORD *)grpdeskRitInput + 5) + 24LL), 5LL, a3, 2LL);
    dword_1C01CC9A8 = 0;
    Value = 0;
    dword_1C01CC9AC = 1000;
LABEL_20:
    ++gFilterKeysState;
    gtmridFKActivation = ApiSetEditionSetAccessibilityTimer(a3, 4000LL, FKActivationTimer);
    return;
  }
  v5 = dword_1C01CC99C;
  if ( (dword_1C01CC99C & 1) == 0 )
  {
    if ( (dword_1C01CC99C & 0x10) != 0 )
      ApiSetEditionPostRitSound(*(_QWORD *)(*((_QWORD *)grpdeskRitInput + 5) + 24LL), 0LL, a3, 0LL);
    PostWinlogonMessage(1026LL, 2u);
    goto LABEL_20;
  }
  dword_1C01CC99C &= ~1u;
  if ( (v5 & 0x10) != 0 )
    ApiSetEditionPostRitSound(v4, 1LL, a3, 0LL);
  ApiSetEditionPostAccessibility(2LL);
  if ( gtmridFKResponse )
  {
    ApiSetEditionKillAccessibilityTimer();
    gtmridFKResponse = 0LL;
  }
  if ( gtmridFKAcceptanceDelay )
  {
    ApiSetEditionKillAccessibilityTimer();
    gtmridFKAcceptanceDelay = 0LL;
  }
}
