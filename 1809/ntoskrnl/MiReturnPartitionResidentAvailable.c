/*
 * XREFs of MiReturnPartitionResidentAvailable @ 0x1402BFF40
 * Callers:
 *     MiRemoveVadCharges @ 0x1405EC820 (MiRemoveVadCharges.c)
 *     MmCleanProcessAddressSpace @ 0x1405F1BC8 (MmCleanProcessAddressSpace.c)
 *     MiInsertVadCharges @ 0x1405F1E60 (MiInsertVadCharges.c)
 *     MmDeleteProcessAddressSpace @ 0x140608AD0 (MmDeleteProcessAddressSpace.c)
 *     MiCreatePagingFileMap @ 0x14061EB18 (MiCreatePagingFileMap.c)
 *     MiFreeInitializationCode @ 0x1406C783C (MiFreeInitializationCode.c)
 *     MmCreateProcessAddressSpace @ 0x1406D18B8 (MmCreateProcessAddressSpace.c)
 *     MiDereferenceSessionFinal @ 0x1406E05D8 (MiDereferenceSessionFinal.c)
 *     MiMarkBootGuardPage @ 0x140729A8C (MiMarkBootGuardPage.c)
 *     MiDeleteAweInfoPages @ 0x14084FD58 (MiDeleteAweInfoPages.c)
 *     MiMapUserLargePages @ 0x14085D578 (MiMapUserLargePages.c)
 * Callees:
 *     <none>
 */

void __fastcall MiReturnPartitionResidentAvailable(__int64 a1, unsigned __int64 a2)
{
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 7360), a2);
}
