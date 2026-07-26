/*
 * XREFs of ?ndisCmDereferenceCompartment@@YAXPEAX@Z @ 0x1C00ABC74
 * Callers:
 *     ?NdisSetJobObjectCompartmentId@@YAJPEAU_EJOB@@I@Z @ 0x1C011A27C (-NdisSetJobObjectCompartmentId@@YAJPEAU_EJOB@@I@Z.c)
 * Callees:
 *     ndisIfDereferenceCompartmentForUser @ 0x1C00204B8 (ndisIfDereferenceCompartmentForUser.c)
 */

void __fastcall ndisCmDereferenceCompartment(_DWORD *a1)
{
  ndisIfDereferenceCompartmentForUser(a1);
}
