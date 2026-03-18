/*
 * XREFs of MiGetPfnLink @ 0x1400E1040
 * Callers:
 *     MiCreatePagingFileMap @ 0x14061EB18 (MiCreatePagingFileMap.c)
 *     MiFreeReadListPages @ 0x140662980 (MiFreeReadListPages.c)
 *     MiMapNewSession @ 0x140715F58 (MiMapNewSession.c)
 *     MiMakeShadowPageTableRange @ 0x14072A324 (MiMakeShadowPageTableRange.c)
 *     MiReturnReservedEnclavePages @ 0x14085A6E0 (MiReturnReservedEnclavePages.c)
 *     MiMapUserLargePages @ 0x14085D578 (MiMapUserLargePages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetPfnLink(__int64 a1)
{
  return *(_QWORD *)a1;
}
