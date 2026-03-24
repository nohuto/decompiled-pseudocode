/*
 * XREFs of CmSiUnmapViewOfSection @ 0x14013608C
 * Callers:
 *     HvpViewMapCreateViewsForRegion @ 0x1405A524C (HvpViewMapCreateViewsForRegion.c)
 *     HvpViewMapCreateView @ 0x1405A5570 (HvpViewMapCreateView.c)
 *     HvpViewMapPromoteRangeToMapping @ 0x1406BA4B0 (HvpViewMapPromoteRangeToMapping.c)
 *     HvpViewMapDeleteViewTreeNode @ 0x1406C7B28 (HvpViewMapDeleteViewTreeNode.c)
 *     HvpViewMapShrinkStorage @ 0x1407F7130 (HvpViewMapShrinkStorage.c)
 * Callees:
 *     ZwUnmapViewOfSection @ 0x1401B86D0 (ZwUnmapViewOfSection.c)
 */

NTSTATUS __fastcall CmSiUnmapViewOfSection(__int64 a1, HANDLE *a2, void *a3)
{
  return ZwUnmapViewOfSection(*a2, a3);
}
