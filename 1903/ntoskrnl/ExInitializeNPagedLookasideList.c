/*
 * XREFs of ExInitializeNPagedLookasideList @ 0x140175360
 * Callers:
 *     FsRtlInitExtraCreateParameterLookasideList @ 0x140782A60 (FsRtlInitExtraCreateParameterLookasideList.c)
 *     AlpcpInitSystem @ 0x140783A7C (AlpcpInitSystem.c)
 *     KiFilterFiberContext @ 0x1409D0B70 (KiFilterFiberContext.c)
 *     ObInitSystem @ 0x140A04E20 (ObInitSystem.c)
 *     IoInitSystemPreDrivers @ 0x140A0544C (IoInitSystemPreDrivers.c)
 *     PoInitSystem @ 0x140A06340 (PoInitSystem.c)
 * Callees:
 *     ExInitializeNPagedLookasideListInternal @ 0x1401753A0 (ExInitializeNPagedLookasideListInternal.c)
 */

void __stdcall ExInitializeNPagedLookasideList(
        PNPAGED_LOOKASIDE_LIST Lookaside,
        PALLOCATE_FUNCTION Allocate,
        PFREE_FUNCTION Free,
        ULONG Flags,
        SIZE_T Size,
        ULONG Tag,
        USHORT Depth)
{
  ExInitializeNPagedLookasideListInternal((_DWORD)Lookaside, (_DWORD)Allocate, (_DWORD)Free, Flags, Size, Tag, Depth, 0);
}
