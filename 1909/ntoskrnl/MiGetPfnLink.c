/*
 * XREFs of MiGetPfnLink @ 0x14013CD90
 * Callers:
 *     MiFreeReadListPages @ 0x140647C68 (MiFreeReadListPages.c)
 *     MiFreeReadListPageList @ 0x140647CF0 (MiFreeReadListPageList.c)
 *     MiCreatePagingFileMap @ 0x14064E964 (MiCreatePagingFileMap.c)
 *     MiMapNewSession @ 0x14074270C (MiMapNewSession.c)
 *     MiMakeShadowPageTableRange @ 0x14074ECFC (MiMakeShadowPageTableRange.c)
 *     MiReturnReservedEnclavePages @ 0x140894548 (MiReturnReservedEnclavePages.c)
 *     MiMapUserLargePages @ 0x140899CBC (MiMapUserLargePages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetPfnLink(__int64 a1)
{
  return *(_QWORD *)a1;
}
