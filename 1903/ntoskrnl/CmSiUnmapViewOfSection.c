/*
 * XREFs of CmSiUnmapViewOfSection @ 0x1401379A0
 * Callers:
 *     HvpViewMapPromoteRangeToMapping @ 0x14065FC7C (HvpViewMapPromoteRangeToMapping.c)
 *     HvpViewMapCreateViewsForRegion @ 0x140660140 (HvpViewMapCreateViewsForRegion.c)
 *     HvpViewMapCreateView @ 0x140660618 (HvpViewMapCreateView.c)
 *     HvpViewMapDeleteViewTreeNode @ 0x1406E6FE8 (HvpViewMapDeleteViewTreeNode.c)
 *     HvpViewMapShrinkStorage @ 0x14082FD98 (HvpViewMapShrinkStorage.c)
 * Callees:
 *     ZwUnmapViewOfSection @ 0x1401C0610 (ZwUnmapViewOfSection.c)
 */

NTSTATUS __fastcall CmSiUnmapViewOfSection(__int64 a1, HANDLE *a2, void *a3)
{
  return ZwUnmapViewOfSection(*a2, a3);
}
