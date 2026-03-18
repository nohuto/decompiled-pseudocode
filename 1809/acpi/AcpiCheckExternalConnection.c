/*
 * XREFs of AcpiCheckExternalConnection @ 0x1C009A520
 * Callers:
 *     ACPIRootIrpQueryBusRelations @ 0x1C009A588 (ACPIRootIrpQueryBusRelations.c)
 *     AcpiExternalQueryTranslatedDescriptorForGsiv @ 0x1C00AB3F4 (AcpiExternalQueryTranslatedDescriptorForGsiv.c)
 *     AcpiExternalTranslateBiosToNtResources @ 0x1C00AB48C (AcpiExternalTranslateBiosToNtResources.c)
 * Callees:
 *     QueryExternalTranslatorInterface @ 0x1C009C220 (QueryExternalTranslatorInterface.c)
 */

__int64 AcpiCheckExternalConnection()
{
  PVOID v0; // rbx
  __int64 result; // rax

  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(&ExternalTranslatorInterfaceLock, 1u);
  v0 = ExternalTranslationInterface;
  ExReleaseResourceLite(&ExternalTranslatorInterfaceLock);
  KeLeaveCriticalRegion();
  result = 0LL;
  if ( !v0 )
    return QueryExternalTranslatorInterface();
  return result;
}
