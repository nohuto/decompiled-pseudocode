/*
 * XREFs of CmpIsKcbInsideVirtualizedHive @ 0x1405FE860
 * Callers:
 *     KCBIsVirtualizable @ 0x1400FB464 (KCBIsVirtualizable.c)
 *     KCBNeedsVirtualImage_0 @ 0x14027FE04 (KCBNeedsVirtualImage_0.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1405FE180 (CmKeyBodyRemapToVirtualForEnum.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmpIsKcbInsideVirtualizedHive(__int64 a1)
{
  return (*(_DWORD *)(*(_QWORD *)(a1 + 32) + 4152LL) & 0x10) != 0;
}
