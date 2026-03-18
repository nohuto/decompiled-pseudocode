/*
 * XREFs of CmpIsKcbInsideVirtualizedHive @ 0x14063F500
 * Callers:
 *     KCBIsVirtualizable @ 0x140129520 (KCBIsVirtualizable.c)
 *     KCBNeedsVirtualImage_0 @ 0x14026C2BC (KCBNeedsVirtualImage_0.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x14063EDD0 (CmKeyBodyRemapToVirtualForEnum.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmpIsKcbInsideVirtualizedHive(__int64 a1)
{
  return (*(_DWORD *)(*(_QWORD *)(a1 + 24) + 4152LL) & 0x10) != 0;
}
