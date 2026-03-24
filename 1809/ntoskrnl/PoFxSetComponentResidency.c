/*
 * XREFs of PoFxSetComponentResidency @ 0x1402D7340
 * Callers:
 *     <none>
 * Callees:
 *     PopPepComponentSetResidency @ 0x1402DCAA8 (PopPepComponentSetResidency.c)
 *     PopDiagTraceFxComponentResidency @ 0x1402E0764 (PopDiagTraceFxComponentResidency.c)
 */

__int64 __fastcall PoFxSetComponentResidency(__int64 a1, unsigned int a2, __int64 a3)
{
  PopDiagTraceFxComponentResidency(*(_QWORD *)(a1 + 48));
  return PopPepComponentSetResidency(*(_QWORD *)(a1 + 56), a2, a3);
}
