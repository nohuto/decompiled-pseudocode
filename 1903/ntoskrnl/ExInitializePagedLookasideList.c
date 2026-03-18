/*
 * XREFs of ExInitializePagedLookasideList @ 0x140695A90
 * Callers:
 *     FsRtlInitSystem @ 0x140A1A388 (FsRtlInitSystem.c)
 *     FsRtlInitializeFileLocks @ 0x140A1A800 (FsRtlInitializeFileLocks.c)
 *     FsRtlInitializeTunnels @ 0x140A1A994 (FsRtlInitializeTunnels.c)
 *     WmipInitializeAllocs @ 0x140A21B80 (WmipInitializeAllocs.c)
 *     RtlInitializeRangeListPackage @ 0x140A3DE20 (RtlInitializeRangeListPackage.c)
 * Callees:
 *     ExInitializePagedLookasideListInternal @ 0x1400E5D80 (ExInitializePagedLookasideListInternal.c)
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
  ExInitializePagedLookasideListInternal(
    (__int64)Lookaside,
    Allocate,
    (void (__stdcall *)(PVOID, ULONG))Free,
    Flags,
    Size,
    Tag,
    Depth,
    0);
}
