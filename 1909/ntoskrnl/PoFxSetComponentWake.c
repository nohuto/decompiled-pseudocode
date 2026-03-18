/*
 * XREFs of PoFxSetComponentWake @ 0x1402F1C80
 * Callers:
 *     <none>
 * Callees:
 *     PopPepComponentSetWakeHint @ 0x1402F8E38 (PopPepComponentSetWakeHint.c)
 *     PopDiagTraceFxComponentWake @ 0x1402FD3DC (PopDiagTraceFxComponentWake.c)
 */

__int64 __fastcall PoFxSetComponentWake(__int64 a1, unsigned int a2, char a3)
{
  __int64 v6; // r8

  PopDiagTraceFxComponentWake(*(_QWORD *)(a1 + 48));
  LOBYTE(v6) = a3;
  return PopPepComponentSetWakeHint(*(_QWORD *)(a1 + 56), a2, v6);
}
