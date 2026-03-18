/*
 * XREFs of AcpiCheckExternalConnection @ 0x1C009672C
 * Callers:
 *     ACPIRootIrpQueryBusRelations @ 0x1C0096794 (ACPIRootIrpQueryBusRelations.c)
 *     AcpiExternalQueryTranslatedDescriptorForGsiv @ 0x1C00AEAB4 (AcpiExternalQueryTranslatedDescriptorForGsiv.c)
 *     AcpiExternalTranslateBiosToNtResources @ 0x1C00AEB4C (AcpiExternalTranslateBiosToNtResources.c)
 * Callees:
 *     QueryExternalTranslatorInterface @ 0x1C00A0E5C (QueryExternalTranslatorInterface.c)
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
