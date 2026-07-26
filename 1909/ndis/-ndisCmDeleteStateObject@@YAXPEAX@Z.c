/*
 * XREFs of ?ndisCmDeleteStateObject@@YAXPEAX@Z @ 0x1C00122C0
 * Callers:
 *     <none>
 * Callees:
 *     ndisIfDereferenceCompartmentForUser @ 0x1C00204B8 (ndisIfDereferenceCompartmentForUser.c)
 */

void __fastcall ndisCmDeleteStateObject(_QWORD *a1)
{
  __int64 v1; // rcx

  v1 = a1[1];
  if ( v1 )
    ndisIfDereferenceCompartmentForUser(v1);
}
