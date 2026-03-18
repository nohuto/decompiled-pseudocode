/*
 * XREFs of FsRtlDeleteExtraCreateParameterLookasideList @ 0x14084CF80
 * Callers:
 *     <none>
 * Callees:
 *     ExDeletePagedLookasideList @ 0x14012B320 (ExDeletePagedLookasideList.c)
 *     ExDeleteNPagedLookasideList @ 0x140177BF0 (ExDeleteNPagedLookasideList.c)
 */

void __stdcall FsRtlDeleteExtraCreateParameterLookasideList(PVOID Lookaside, FSRTL_ECP_LOOKASIDE_FLAGS Flags)
{
  if ( (Flags & 2) != 0 )
    ExDeleteNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)Lookaside);
  else
    ExDeletePagedLookasideList((PPAGED_LOOKASIDE_LIST)Lookaside);
}
