/*
 * XREFs of CmpIsKcbInsideVirtualizedHive @ 0x140600290
 * Callers:
 *     KCBIsVirtualizable @ 0x1400F4144 (KCBIsVirtualizable.c)
 *     KCBNeedsVirtualImage_0 @ 0x14027FB64 (KCBNeedsVirtualImage_0.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1405FFBB0 (CmKeyBodyRemapToVirtualForEnum.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmpIsKcbInsideVirtualizedHive(__int64 a1)
{
  return (*(_DWORD *)(*(_QWORD *)(a1 + 32) + 4152LL) & 0x10) != 0;
}
