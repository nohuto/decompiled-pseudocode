/*
 * XREFs of KiSaveThreadIptState @ 0x140294A30
 * Callers:
 *     SwapContext @ 0x1401C42C0 (SwapContext.c)
 * Callees:
 *     KiSaveIptState @ 0x140294928 (KiSaveIptState.c)
 */

void __fastcall KiSaveThreadIptState(__int64 a1)
{
  KiSaveIptState((unsigned __int64 *)(*(_QWORD *)(a1 + 96) + (unsigned int)KeXStateLength));
}
