/*
 * XREFs of FsRtlDeleteExtraCreateParameterLookasideList @ 0x140815030
 * Callers:
 *     <none>
 * Callees:
 *     ExDeletePagedLookasideList @ 0x140128120 (ExDeletePagedLookasideList.c)
 *     ExDeleteNPagedLookasideList @ 0x14016CF00 (ExDeleteNPagedLookasideList.c)
 */

void __stdcall FsRtlDeleteExtraCreateParameterLookasideList(PVOID Lookaside, FSRTL_ECP_LOOKASIDE_FLAGS Flags)
{
  if ( (Flags & 2) != 0 )
    ExDeleteNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)Lookaside);
  else
    ExDeletePagedLookasideList((PPAGED_LOOKASIDE_LIST)Lookaside);
}
