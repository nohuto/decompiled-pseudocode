/*
 * XREFs of PoFxSetComponentWake @ 0x1402D7580
 * Callers:
 *     <none>
 * Callees:
 *     PopPepComponentSetWakeHint @ 0x1402DCD8C (PopPepComponentSetWakeHint.c)
 *     PopDiagTraceFxComponentWake @ 0x1402E0A40 (PopDiagTraceFxComponentWake.c)
 */

__int64 __fastcall PoFxSetComponentWake(__int64 a1, unsigned int a2, char a3)
{
  __int64 v6; // r8

  PopDiagTraceFxComponentWake(*(_QWORD *)(a1 + 48));
  LOBYTE(v6) = a3;
  return PopPepComponentSetWakeHint(*(_QWORD *)(a1 + 56), a2, v6);
}
