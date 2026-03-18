/*
 * XREFs of ?xxxFKRepeatRateTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C015C8A0
 * Callers:
 *     <none>
 * Callees:
 *     ?AccessProceduresStream@@YAHPEAUtagKE@@KH@Z @ 0x1C015BC40 (-AccessProceduresStream@@YAHPEAUtagKE@@KH@Z.c)
 *     xxxProcessKeyEvent @ 0x1C01843C0 (xxxProcessKeyEvent.c)
 *     ApiSetEditionPostRitSound @ 0x1C019B8AC (ApiSetEditionPostRitSound.c)
 *     ApiSetEditionSetAccessibilityTimer @ 0x1C019C068 (ApiSetEditionSetAccessibilityTimer.c)
 */

void __fastcall xxxFKRepeatRateTimer(struct tagWND *a1, __int64 a2, __int64 a3)
{
  if ( (dword_1C021161C & 0x40) != 0 )
    ApiSetEditionPostRitSound(*(_QWORD *)(*((_QWORD *)grpdeskRitInput + 5) + 24LL), 4LL, a3, 0LL);
  gtmridFKResponse = ApiSetEditionSetAccessibilityTimer(a3, dword_1C0211628, xxxFKRepeatRateTimer);
  if ( (unsigned int)AccessProceduresStream((struct tagKE *)&gFKKeyEvent, gFKExtraInformation, gFKNextProcIndex) )
    xxxProcessKeyEvent((unsigned int)&gFKKeyEvent, gFKExtraInformation, 0, 0, 0LL, 0LL);
}
