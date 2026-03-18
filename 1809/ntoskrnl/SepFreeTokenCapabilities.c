/*
 * XREFs of SepFreeTokenCapabilities @ 0x140023058
 * Callers:
 *     SepSetTokenCapabilities @ 0x1405BCEA4 (SepSetTokenCapabilities.c)
 *     SepTokenDeleteMethod @ 0x1405DEE70 (SepTokenDeleteMethod.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     SepDeReferenceSharedSidEntries @ 0x1408A3DDC (SepDeReferenceSharedSidEntries.c)
 */

void __fastcall SepFreeTokenCapabilities(__int64 a1)
{
  if ( SepTokenCapabilitySidSharingEnabled )
    SepDeReferenceSharedSidEntries(*(_QWORD *)(a1 + 792), *(unsigned int *)(a1 + 800));
  ExFreePoolWithTag(*(PVOID *)(a1 + 792), 0);
}
