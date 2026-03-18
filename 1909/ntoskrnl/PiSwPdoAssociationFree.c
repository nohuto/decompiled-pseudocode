/*
 * XREFs of PiSwPdoAssociationFree @ 0x140782F48
 * Callers:
 *     PiSwDeviceFree @ 0x140782D8C (PiSwDeviceFree.c)
 *     PiSwRemovePdoAssociation @ 0x140782ED8 (PiSwRemovePdoAssociation.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall PiSwPdoAssociationFree(PVOID *P)
{
  ObfDereferenceObject(P[4]);
  ObfDereferenceObject(P[5]);
  ExFreePoolWithTag(P, 0x57706E50u);
}
