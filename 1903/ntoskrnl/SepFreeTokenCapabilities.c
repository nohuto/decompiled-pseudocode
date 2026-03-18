/*
 * XREFs of SepFreeTokenCapabilities @ 0x140087E1C
 * Callers:
 *     SepTokenDeleteMethod @ 0x14060AB50 (SepTokenDeleteMethod.c)
 *     SepSetTokenCapabilities @ 0x14061C204 (SepSetTokenCapabilities.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     SepDeReferenceSharedSidEntries @ 0x1408E24DC (SepDeReferenceSharedSidEntries.c)
 */

void __fastcall SepFreeTokenCapabilities(__int64 a1)
{
  if ( SepTokenCapabilitySidSharingEnabled )
    SepDeReferenceSharedSidEntries(*(_QWORD *)(a1 + 792), *(unsigned int *)(a1 + 800));
  ExFreePoolWithTag(*(PVOID *)(a1 + 792), 0);
}
