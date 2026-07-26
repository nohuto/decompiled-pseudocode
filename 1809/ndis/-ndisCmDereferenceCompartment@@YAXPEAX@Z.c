/*
 * XREFs of ?ndisCmDereferenceCompartment@@YAXPEAX@Z @ 0x1C006BFAC
 * Callers:
 *     NdisSetJobObjectCompartmentId @ 0x1C00F8008 (NdisSetJobObjectCompartmentId.c)
 * Callees:
 *     ndisIfDereferenceCompartmentForUser @ 0x1C00140B4 (ndisIfDereferenceCompartmentForUser.c)
 */

void __fastcall ndisCmDereferenceCompartment(unsigned int *a1)
{
  ndisIfDereferenceCompartmentForUser(a1);
}
