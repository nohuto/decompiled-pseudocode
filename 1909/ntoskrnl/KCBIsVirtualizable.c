/*
 * XREFs of KCBIsVirtualizable @ 0x1400F4144
 * Callers:
 *     KCBNeedsVirtualImage @ 0x1400F4110 (KCBNeedsVirtualImage.c)
 * Callees:
 *     CmpIsKcbInsideVirtualizedHive @ 0x140600290 (CmpIsKcbInsideVirtualizedHive.c)
 */

bool __fastcall KCBIsVirtualizable(__int64 a1)
{
  return CmpVEEnabled && (*(_DWORD *)(a1 + 184) & 0x2000000) == 0 && (unsigned __int8)CmpIsKcbInsideVirtualizedHive();
}
