/*
 * XREFs of CmSiUnmapViewOfSection @ 0x140137FE8
 * Callers:
 *     HvpViewMapPromoteRangeToMapping @ 0x14068DC9C (HvpViewMapPromoteRangeToMapping.c)
 *     HvpViewMapCreateViewsForRegion @ 0x14068F09C (HvpViewMapCreateViewsForRegion.c)
 *     HvpViewMapCreateView @ 0x14068F520 (HvpViewMapCreateView.c)
 *     HvpViewMapDeleteViewTreeNode @ 0x1406E80E8 (HvpViewMapDeleteViewTreeNode.c)
 *     HvpViewMapShrinkStorage @ 0x14082FC08 (HvpViewMapShrinkStorage.c)
 * Callees:
 *     ZwUnmapViewOfSection @ 0x1401C1190 (ZwUnmapViewOfSection.c)
 */

NTSTATUS __fastcall CmSiUnmapViewOfSection(__int64 a1, HANDLE *a2, void *a3)
{
  return ZwUnmapViewOfSection(*a2, a3);
}
