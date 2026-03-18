/*
 * XREFs of ?xxxFKAcceptanceDelayTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0131ED0
 * Callers:
 *     <none>
 * Callees:
 *     xxxProcessKeyEvent @ 0x1C0034E70 (xxxProcessKeyEvent.c)
 *     ?AccessProceduresStream@@YAHPEAUtagKE@@KH@Z @ 0x1C0131330 (-AccessProceduresStream@@YAHPEAUtagKE@@KH@Z.c)
 *     ApiSetEditionPostRitSound @ 0x1C0163114 (ApiSetEditionPostRitSound.c)
 *     ApiSetEditionSetAccessibilityTimer @ 0x1C016369C (ApiSetEditionSetAccessibilityTimer.c)
 */

void __fastcall xxxFKAcceptanceDelayTimer(struct tagWND *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rax

  if ( (dword_1C01CC99C & 0x40) != 0 )
    ApiSetEditionPostRitSound(*(_QWORD *)(*((_QWORD *)grpdeskRitInput + 5) + 24LL), 4LL, a3, 0LL);
  if ( (unsigned int)AccessProceduresStream((struct tagKE *)&gFKKeyEvent, gFKExtraInformation, gFKNextProcIndex) )
    xxxProcessKeyEvent((unsigned __int16 *)&gFKKeyEvent, gFKExtraInformation, 0, 0, 0LL);
  v4 = dword_1C01CC9A8;
  if ( dword_1C01CC9A8 )
  {
    if ( dword_1C01CC9A4 )
      v4 = dword_1C01CC9A4;
    v5 = ApiSetEditionSetAccessibilityTimer(a3, v4, xxxFKRepeatRateTimer);
    gtmridFKAcceptanceDelay = 0LL;
    gtmridFKResponse = v5;
  }
  else
  {
    gdwPUDFlags |= 0x800u;
  }
}
