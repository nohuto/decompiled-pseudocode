/*
 * XREFs of CmpIsKcbInsideVirtualizedHive @ 0x14063F4E0
 * Callers:
 *     KCBIsVirtualizable @ 0x140129540 (KCBIsVirtualizable.c)
 *     KCBNeedsVirtualImage_0 @ 0x14026C3BC (KCBNeedsVirtualImage_0.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x14063EDB0 (CmKeyBodyRemapToVirtualForEnum.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmpIsKcbInsideVirtualizedHive(__int64 a1)
{
  return (*(_DWORD *)(*(_QWORD *)(a1 + 24) + 4152LL) & 0x10) != 0;
}
