/*
 * XREFs of ExInitializeNPagedLookasideList @ 0x14015FA60
 * Callers:
 *     FsRtlInitExtraCreateParameterLookasideList @ 0x14075CAF0 (FsRtlInitExtraCreateParameterLookasideList.c)
 *     AlpcpInitSystem @ 0x14075E47C (AlpcpInitSystem.c)
 *     KiFilterFiberContext @ 0x14098FB60 (KiFilterFiberContext.c)
 *     IoInitSystemPreDrivers @ 0x1409B2F54 (IoInitSystemPreDrivers.c)
 * Callees:
 *     ExInitializeNPagedLookasideListInternal @ 0x14015FAA0 (ExInitializeNPagedLookasideListInternal.c)
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
