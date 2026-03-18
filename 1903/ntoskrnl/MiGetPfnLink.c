/*
 * XREFs of MiGetPfnLink @ 0x14013C7B0
 * Callers:
 *     MiFreeReadListPages @ 0x14066E208 (MiFreeReadListPages.c)
 *     MiFreeReadListPageList @ 0x14066E290 (MiFreeReadListPageList.c)
 *     MiCreatePagingFileMap @ 0x140688794 (MiCreatePagingFileMap.c)
 *     MiMapNewSession @ 0x14074080C (MiMapNewSession.c)
 *     MiMakeShadowPageTableRange @ 0x14074E26C (MiMakeShadowPageTableRange.c)
 *     MiReturnReservedEnclavePages @ 0x140894D28 (MiReturnReservedEnclavePages.c)
 *     MiMapUserLargePages @ 0x14089A49C (MiMapUserLargePages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetPfnLink(__int64 a1)
{
  return *(_QWORD *)a1;
}
