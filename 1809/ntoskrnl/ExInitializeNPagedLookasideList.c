/*
 * XREFs of ExInitializeNPagedLookasideList @ 0x14015F940
 * Callers:
 *     FsRtlInitExtraCreateParameterLookasideList @ 0x14075B920 (FsRtlInitExtraCreateParameterLookasideList.c)
 *     AlpcpInitSystem @ 0x14075D2AC (AlpcpInitSystem.c)
 *     KiFilterFiberContext @ 0x14098EB60 (KiFilterFiberContext.c)
 *     IoInitSystemPreDrivers @ 0x1409B1F54 (IoInitSystemPreDrivers.c)
 * Callees:
 *     ExInitializeNPagedLookasideListInternal @ 0x14015F980 (ExInitializeNPagedLookasideListInternal.c)
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
