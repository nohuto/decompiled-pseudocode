/*
 * XREFs of KiSaveThreadIptState @ 0x1402AB070
 * Callers:
 *     SwapContext @ 0x1401CB6C0 (SwapContext.c)
 * Callees:
 *     KiSaveIptState @ 0x1402AAF68 (KiSaveIptState.c)
 */

void __fastcall KiSaveThreadIptState(__int64 a1)
{
  KiSaveIptState((unsigned __int64 *)(*(_QWORD *)(a1 + 96) + (unsigned int)KeXStateLength));
}
