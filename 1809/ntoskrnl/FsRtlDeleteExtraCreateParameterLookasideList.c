/*
 * XREFs of FsRtlDeleteExtraCreateParameterLookasideList @ 0x140813E50
 * Callers:
 *     <none>
 * Callees:
 *     ExDeletePagedLookasideList @ 0x140128030 (ExDeletePagedLookasideList.c)
 *     ExDeleteNPagedLookasideList @ 0x14016CDE0 (ExDeleteNPagedLookasideList.c)
 */

void __stdcall FsRtlDeleteExtraCreateParameterLookasideList(PVOID Lookaside, FSRTL_ECP_LOOKASIDE_FLAGS Flags)
{
  if ( (Flags & 2) != 0 )
    ExDeleteNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)Lookaside);
  else
    ExDeletePagedLookasideList((PPAGED_LOOKASIDE_LIST)Lookaside);
}
