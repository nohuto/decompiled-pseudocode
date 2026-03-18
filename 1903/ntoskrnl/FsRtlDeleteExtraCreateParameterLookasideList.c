/*
 * XREFs of FsRtlDeleteExtraCreateParameterLookasideList @ 0x14084D880
 * Callers:
 *     <none>
 * Callees:
 *     ExDeletePagedLookasideList @ 0x14012A900 (ExDeletePagedLookasideList.c)
 *     ExDeleteNPagedLookasideList @ 0x140177500 (ExDeleteNPagedLookasideList.c)
 */

void __stdcall FsRtlDeleteExtraCreateParameterLookasideList(PVOID Lookaside, FSRTL_ECP_LOOKASIDE_FLAGS Flags)
{
  if ( (Flags & 2) != 0 )
    ExDeleteNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)Lookaside);
  else
    ExDeletePagedLookasideList((PPAGED_LOOKASIDE_LIST)Lookaside);
}
