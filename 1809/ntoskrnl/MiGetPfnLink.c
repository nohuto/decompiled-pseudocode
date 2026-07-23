/*
 * XREFs of MiGetPfnLink @ 0x1400E10E0
 * Callers:
 *     MiCreatePagingFileMap @ 0x14061FB18 (MiCreatePagingFileMap.c)
 *     MiFreeReadListPages @ 0x140663B20 (MiFreeReadListPages.c)
 *     MiMapNewSession @ 0x1407171D8 (MiMapNewSession.c)
 *     MiMakeShadowPageTableRange @ 0x14072B4F4 (MiMakeShadowPageTableRange.c)
 *     MiReturnReservedEnclavePages @ 0x14085B920 (MiReturnReservedEnclavePages.c)
 *     MiMapUserLargePages @ 0x14085E7B8 (MiMapUserLargePages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetPfnLink(__int64 a1)
{
  return *(_QWORD *)a1;
}
