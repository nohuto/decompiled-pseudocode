/*
 * XREFs of CmSiUnmapViewOfSection @ 0x14013618C
 * Callers:
 *     HvpViewMapCreateViewsForRegion @ 0x1405A624C (HvpViewMapCreateViewsForRegion.c)
 *     HvpViewMapCreateView @ 0x1405A6570 (HvpViewMapCreateView.c)
 *     HvpViewMapPromoteRangeToMapping @ 0x1406BB750 (HvpViewMapPromoteRangeToMapping.c)
 *     HvpViewMapDeleteViewTreeNode @ 0x1406C8DC8 (HvpViewMapDeleteViewTreeNode.c)
 *     HvpViewMapShrinkStorage @ 0x1407F8330 (HvpViewMapShrinkStorage.c)
 * Callees:
 *     ZwUnmapViewOfSection @ 0x1401B8830 (ZwUnmapViewOfSection.c)
 */

NTSTATUS __fastcall CmSiUnmapViewOfSection(__int64 a1, HANDLE *a2, void *a3)
{
  return ZwUnmapViewOfSection(*a2, a3);
}
