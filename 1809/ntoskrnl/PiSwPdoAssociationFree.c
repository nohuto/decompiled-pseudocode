/*
 * XREFs of PiSwPdoAssociationFree @ 0x1406D8E84
 * Callers:
 *     PiSwDeviceFree @ 0x1406D8C28 (PiSwDeviceFree.c)
 *     PiSwRemovePdoAssociation @ 0x1406D8E14 (PiSwRemovePdoAssociation.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

void __fastcall PiSwPdoAssociationFree(PVOID *P)
{
  ObfDereferenceObject(P[4]);
  ObfDereferenceObject(P[5]);
  ExFreePoolWithTag(P, 0x57706E50u);
}
