/*
 * XREFs of PiSwPdoAssociationFree @ 0x140780BE0
 * Callers:
 *     PiSwDeviceFree @ 0x140780A24 (PiSwDeviceFree.c)
 *     PiSwRemovePdoAssociation @ 0x140780B70 (PiSwRemovePdoAssociation.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall PiSwPdoAssociationFree(PVOID *P)
{
  ObfDereferenceObject(P[4]);
  ObfDereferenceObject(P[5]);
  ExFreePoolWithTag(P, 0x57706E50u);
}
