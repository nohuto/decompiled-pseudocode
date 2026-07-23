/*
 * XREFs of KiSaveThreadIptState @ 0x140294C20
 * Callers:
 *     SwapContext @ 0x1401C4420 (SwapContext.c)
 * Callees:
 *     KiSaveIptState @ 0x140294B18 (KiSaveIptState.c)
 */

void __fastcall KiSaveThreadIptState(__int64 a1)
{
  KiSaveIptState((unsigned __int64 *)(*(_QWORD *)(a1 + 96) + (unsigned int)KeXStateLength));
}
