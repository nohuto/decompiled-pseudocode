/*
 * XREFs of ?xxxFKAcceptanceDelayTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C010AB50
 * Callers:
 *     <none>
 * Callees:
 *     ?AccessProceduresStream@@YAHPEAUtagKE@@KH@Z @ 0x1C0109D10 (-AccessProceduresStream@@YAHPEAUtagKE@@KH@Z.c)
 *     xxxProcessKeyEvent @ 0x1C0130400 (xxxProcessKeyEvent.c)
 *     ApiSetEditionPostRitSound @ 0x1C013FA14 (ApiSetEditionPostRitSound.c)
 *     ApiSetEditionSetAccessibilityTimer @ 0x1C013FF88 (ApiSetEditionSetAccessibilityTimer.c)
 */

void __fastcall xxxFKAcceptanceDelayTimer(struct tagWND *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rax

  if ( (dword_1C01A4E8C & 0x40) != 0 )
    ApiSetEditionPostRitSound(*(_QWORD *)(*((_QWORD *)grpdeskRitInput + 5) + 24LL), 4LL, a3, 0LL);
  if ( (unsigned int)AccessProceduresStream((struct tagKE *)&gFKKeyEvent, gFKExtraInformation, gFKNextProcIndex) )
    xxxProcessKeyEvent((unsigned int)&gFKKeyEvent, gFKExtraInformation, 0, 0, 0LL);
  v4 = dword_1C01A4E98;
  if ( dword_1C01A4E98 )
  {
    if ( dword_1C01A4E94 )
      v4 = dword_1C01A4E94;
    v5 = ApiSetEditionSetAccessibilityTimer(a3, v4, xxxFKRepeatRateTimer);
    gtmridFKAcceptanceDelay = 0LL;
    gtmridFKResponse = v5;
  }
  else
  {
    gdwPUDFlags |= 0x800u;
  }
}
