/*
 * XREFs of PoFxSetComponentLatency @ 0x1402F1E80
 * Callers:
 *     <none>
 * Callees:
 *     PopPepComponentSetLatency @ 0x1402F91B0 (PopPepComponentSetLatency.c)
 *     PopDiagTraceFxComponentLatency @ 0x1402FD754 (PopDiagTraceFxComponentLatency.c)
 */

__int64 __fastcall PoFxSetComponentLatency(__int64 a1, unsigned int a2, __int64 a3)
{
  PopDiagTraceFxComponentLatency(*(_QWORD *)(a1 + 48));
  return PopPepComponentSetLatency(*(_QWORD *)(a1 + 56), a2, a3);
}
