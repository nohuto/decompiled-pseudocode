/*
 * XREFs of KiSaveThreadIptState @ 0x1402AB310
 * Callers:
 *     SwapContext @ 0x1401CAB40 (SwapContext.c)
 * Callees:
 *     KiSaveIptState @ 0x1402AB208 (KiSaveIptState.c)
 */

void __fastcall KiSaveThreadIptState(__int64 a1)
{
  KiSaveIptState((unsigned __int64 *)(*(_QWORD *)(a1 + 96) + (unsigned int)KeXStateLength));
}
