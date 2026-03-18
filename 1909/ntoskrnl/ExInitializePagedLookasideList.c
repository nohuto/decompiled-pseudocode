/*
 * XREFs of ExInitializePagedLookasideList @ 0x140689000
 * Callers:
 *     FsRtlInitSystem @ 0x140A1A600 (FsRtlInitSystem.c)
 *     FsRtlInitializeFileLocks @ 0x140A1AA78 (FsRtlInitializeFileLocks.c)
 *     FsRtlInitializeTunnels @ 0x140A1AC0C (FsRtlInitializeTunnels.c)
 *     WmipInitializeAllocs @ 0x140A21C60 (WmipInitializeAllocs.c)
 *     RtlInitializeRangeListPackage @ 0x140A3DBF0 (RtlInitializeRangeListPackage.c)
 * Callees:
 *     ExInitializePagedLookasideListInternal @ 0x1400EAD20 (ExInitializePagedLookasideListInternal.c)
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
