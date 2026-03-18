/*
 * XREFs of CmSiUnmapViewOfSection @ 0x14013606C
 * Callers:
 *     HvpViewMapCreateViewsForRegion @ 0x1405A524C (HvpViewMapCreateViewsForRegion.c)
 *     HvpViewMapCreateView @ 0x1405A5570 (HvpViewMapCreateView.c)
 *     HvpViewMapPromoteRangeToMapping @ 0x1406BA4D0 (HvpViewMapPromoteRangeToMapping.c)
 *     HvpViewMapDeleteViewTreeNode @ 0x1406C7B48 (HvpViewMapDeleteViewTreeNode.c)
 *     HvpViewMapShrinkStorage @ 0x1407F7150 (HvpViewMapShrinkStorage.c)
 * Callees:
 *     ZwUnmapViewOfSection @ 0x1401B86B0 (ZwUnmapViewOfSection.c)
 */

NTSTATUS __fastcall CmSiUnmapViewOfSection(__int64 a1, HANDLE *a2, void *a3)
{
  return ZwUnmapViewOfSection(*a2, a3);
}
