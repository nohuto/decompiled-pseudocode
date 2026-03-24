/*
 * XREFs of MiGetPfnLink @ 0x1400E1060
 * Callers:
 *     MiCreatePagingFileMap @ 0x14061EB18 (MiCreatePagingFileMap.c)
 *     MiFreeReadListPages @ 0x140662960 (MiFreeReadListPages.c)
 *     MiMapNewSession @ 0x140715F38 (MiMapNewSession.c)
 *     MiMakeShadowPageTableRange @ 0x14072A304 (MiMakeShadowPageTableRange.c)
 *     MiReturnReservedEnclavePages @ 0x14085A6C0 (MiReturnReservedEnclavePages.c)
 *     MiMapUserLargePages @ 0x14085D558 (MiMapUserLargePages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetPfnLink(__int64 a1)
{
  return *(_QWORD *)a1;
}
