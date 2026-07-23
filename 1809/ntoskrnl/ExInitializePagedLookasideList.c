/*
 * XREFs of ExInitializePagedLookasideList @ 0x14067CE70
 * Callers:
 *     FsRtlInitSystem @ 0x1409D8714 (FsRtlInitSystem.c)
 *     FsRtlInitializeFileLocks @ 0x1409D8B60 (FsRtlInitializeFileLocks.c)
 *     FsRtlInitializeTunnels @ 0x1409D8CF4 (FsRtlInitializeTunnels.c)
 *     WmipInitializeAllocs @ 0x1409DF458 (WmipInitializeAllocs.c)
 *     RtlInitializeRangeListPackage @ 0x1409F92F8 (RtlInitializeRangeListPackage.c)
 * Callees:
 *     ExInitializePagedLookasideListInternal @ 0x1400F3990 (ExInitializePagedLookasideListInternal.c)
 */

void __stdcall ExInitializePagedLookasideList(
        PPAGED_LOOKASIDE_LIST Lookaside,
        PALLOCATE_FUNCTION Allocate,
        PFREE_FUNCTION Free,
        ULONG Flags,
        SIZE_T Size,
        ULONG Tag,
        USHORT Depth)
{
  ExInitializePagedLookasideListInternal((__int64)Lookaside, Allocate, Free, Flags, Size, Tag, Depth, 0);
}
