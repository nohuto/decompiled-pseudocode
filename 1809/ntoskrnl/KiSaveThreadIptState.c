/*
 * XREFs of KiSaveThreadIptState @ 0x140294930
 * Callers:
 *     SwapContext @ 0x1401C42A0 (SwapContext.c)
 * Callees:
 *     KiSaveIptState @ 0x140294828 (KiSaveIptState.c)
 */

void __fastcall KiSaveThreadIptState(__int64 a1)
{
  KiSaveIptState((unsigned __int64 *)(*(_QWORD *)(a1 + 96) + (unsigned int)KeXStateLength));
}
